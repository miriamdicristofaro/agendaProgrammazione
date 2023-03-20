//
// Created by miriam on 07/02/22.
//
#include <algorithm>
#include <iostream>
#include <iterator>
#include <memory>
#include "Board.h"

Board::Board() {
    load();
}
Board::~Board() {
    outfile.close();
    for(auto o : observers){
        delete o;
    }
}

void Board::load(){
    std::ifstream infile;  //Input stream class to operate on files (read data from file)
    infile.open("board.dat", std::ios::in | std::ios::binary);
    if(!infile.is_open()){ //if the file is not present, it is created
        addActivity(std::shared_ptr<Activity> ( new Activity("Important Activity", "Important Activities") ) );
    }else{
        int size;
        infile.read( reinterpret_cast<char *> (&size), sizeof(int)); //Read the number of Activities
        std::string name, desc;
        int subactNumber, strSize;
        for(int i = 0; i < size; i++){

            //read Activity's name and desc
            //name reading
            infile.read( reinterpret_cast<char *>( &strSize), sizeof(int)); // read string size
            char * buf = new char[strSize+1];
            infile.read( buf, strSize);
            buf[strSize] = '\0';
            name.assign(buf);
            delete[] buf;

            //desc reading
            infile.read( reinterpret_cast<char *>( &strSize), sizeof(int)); // read string size
            buf = new char[strSize+1];
            infile.read( buf, strSize);
            buf[strSize] = '\0';
            desc.assign(buf);
            delete[] buf;

            std::shared_ptr<Activity> toAdd = std::make_shared<Activity> ( Activity(name, desc)); //the pointer to Activity is created
            infile.read( reinterpret_cast<char *> (&subactNumber), sizeof(int)); //the number of subactivities is read
            for(int j =0; j < subactNumber; j++){ //all the subactivities are read
                toAdd->addSubActivity( SubActivity::load(infile) );
            }
            activitylist.push_back(toAdd);
        }

    }
    infile.close();
}

void Board::save(){
    outfile.open("board.dat", std::ios::binary | std::ios::out);     //to write on file
    if(outfile.is_open()){
        unsigned long int size = activitylist.size() ;
        outfile.write( reinterpret_cast<char*>( &( size) ), sizeof(int) ); //saves the number of activityList
        //write the lists
        for(auto it : activitylist){

            // writes activity's name and description
            unsigned long int strSize = it->getName().size();
            outfile.write( reinterpret_cast<char*>( &( strSize) ), sizeof(int) );
            outfile.write( it->getName().c_str(), strSize );
            strSize = it->getDescription().size();
            outfile.write( reinterpret_cast<char*>( &( strSize) ), sizeof(int) );
            outfile.write( it->getDescription().c_str(),strSize);


            int subSize = it->getSubActivities().size();
            outfile.write( reinterpret_cast<char*>( &( subSize) ), sizeof(int) ); //saves the numb. of subactivities
            for(auto subIt : it->getSubActivities()){
                subIt.second.save(outfile); //save all subactivities of the Activity
            }
        }
        outfile.close();
        this->notify();
    }else{
        std::cerr<<"Unable to write on file" << std::endl;
    }
}
void Board::addActivity(std::shared_ptr<Activity> a){
    if(std::find(activitylist.begin(), activitylist.end(), a) == activitylist.end() ){
        activitylist.push_back(a);
    }
    save();
}

void Board::removeActivity(std::string aName){
    int pos = 0;
    for(auto it : activitylist){
        pos ++;
        if (it->getName() == aName){
            break;
        }
    }
    activitylist.erase(activitylist.begin() + pos);
    this->notify();
}

std::vector< std::shared_ptr<Activity> > User::getActivities(){
    return activitylist;
}


void Board::attach(Observer * o){
    observers.push_back( o );
}
void Board::detach(Observer * o){
    observers.remove( o );
}
void Board::notify() const {
    for(auto o : observers) {
        o->update();
    }
}
//
// Created by miriam on 07/12/22.
//

#include "SubActivity.h"

SubActivity::SubActivity(Date startD, Date endD, Time startT, Time endT, std::string note) noexcept: startDate(startD), endDate(endD), startTime(startT), endTime(endT), notes(note){
    if(endD < startD){
        throw std::runtime_error("Error: end date is less than start date");
    }
    if(endT < startT && startD == endD){
        throw std::runtime_error("Error: end time is less than start time");
    }
}

bool SubActivity::operator == (const SubActivity& right) const{
    return this->startDate == right.startDate &&
           this->endDate == right.endDate &&
           this->startTime == right.startTime &&
           this->endTime == right.endTime &&
           this->notes == right.notes;
}

void SubActivity::save(std::ofstream& outfile){
    outfile.write( reinterpret_cast<char*>( &( startDate) ), sizeof(Date) );
    outfile.write( reinterpret_cast<char*>( &( endDate) ), sizeof(Date) );
    outfile.write( reinterpret_cast<char*>( &( startTime) ), sizeof(Time) );
    outfile.write( reinterpret_cast<char*>( &( endTime) ), sizeof(Time) );

    int size = notes.size();
    outfile.write ( reinterpret_cast<char*> ( &(size) ), sizeof(int)  );
    outfile.write( notes.c_str() , notes.size() );
    outfile.flush();
}


SubActivity SubActivity::load(std::ifstream& infile){
    Date startD(1, 1, 2001), endD (1 , 1, 2001);
    Time startT(12, 12, 12), endT(12, 12, 12);
    std::string note;
    int size;

    infile.read( reinterpret_cast<char *>( &startD), sizeof(Date));
    infile.read( reinterpret_cast<char *>( &endD), sizeof(Date));
    infile.read( reinterpret_cast<char *>( &startT), sizeof(Time));
    infile.read( reinterpret_cast<char *>( &endT), sizeof(Time));

    infile.read( reinterpret_cast<char *>( &size), sizeof(int)); // read string size
    char * buf = new char[size+1];
    infile.read( buf, size);
    buf[size] = '\0';
    note.assign(buf);
    delete[] buf;

    return SubActivity(startD, endD, startT, endT, note);
}

const std::string& SubActivity::getNotes() const {
    return notes;
}

const Date& SubActivity::getStartDate() const {
    return startDate;
}

const Time& SubActivity::getStartTime() const {
    return startTime;
}
const Date& SubActivity::getEndDate() const {
    return endDate;
}

const Time& SubActivity::getEndTime() const {
    return endTime;
}
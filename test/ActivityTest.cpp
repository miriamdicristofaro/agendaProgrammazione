//
// Created by miriam on 08/04/23.
//
#include <string>
#include <memory>

#include "gtest/gtest.h"

#include "../src/Activity.h"
#include "../src/SubActivity.h"
#include "../src/Date.h"
#include "../src/Time.h"

class ActivityTest: public ::testing::Test {

protected:

    Activity* a;
    Activity* anotherA;

    virtual void SetUp() {
        a = new Activity("Test", "ActivityTest");
        anotherA = new Activity("A", "Another a");


        SubActivity s(Date(12, 06, 23), Date(14, 06, 23), Time(static_cast<unsigned>(10), static_cast<unsigned>(00), static_cast<unsigned>(00)), Time(static_cast<unsigned>(12),static_cast<unsigned>(00), static_cast<unsigned>(00)), std::string("This is a note"));
        a->addSubActivity(s);
    }

    virtual void TearDown(){
        delete a;
        delete anotherA;
    }


};


TEST_F(ActivityTest, Constructor) {
ASSERT_STREQ("Test", a->getName().c_str());
ASSERT_STREQ("ActivityTest", a->getDescription().c_str());
}

TEST_F(ActivityTest, GetSubActivities) {
ASSERT_EQ(1, a->getAllSubActivities().size());


SubActivity s(Date(14, 10, 23), Date(14, 10, 23), Time(static_cast<unsigned>(14), static_cast<unsigned>(00), static_cast<unsigned>(00)), Time(static_cast<unsigned>(15),static_cast<unsigned>(00), static_cast<unsigned>(00)),std::string("This is a note, again"));
a->addSubActivity(s);

ASSERT_EQ(2, a->getAllSubActivities().size());


}

TEST_F(ActivityTest, RemoveSubActivity){
SubActivity s(Date(14, 10, 23), Date(14, 10, 23), Time(static_cast<unsigned>(14), static_cast<unsigned>(00), static_cast<unsigned>(00)), Time(static_cast<unsigned>(15),static_cast<unsigned>(00), static_cast<unsigned>(00)), std::string("This is a note, again"));
a->removeSubActivity(s);
ASSERT_EQ(1, a->getAllSubActivities().size());


//Here we test the remove if the repeated flag is different.
a->addSubActivity(s);
SubActivity s2(Date(14, 10, 23), Date(14, 10, 23), Time(static_cast<unsigned>(14), static_cast<unsigned>(00), static_cast<unsigned>(00)), Time(static_cast<unsigned>(15),static_cast<unsigned>(00), static_cast<unsigned>(00)), std::string("This is a note, again"));
a->removeSubActivity(s2);
ASSERT_EQ(1, a->getAllSubActivities().size());
//Here, we test that the remaining commitment has the proper values
SubActivity s1 = a->getAllSubActivities().find(Date(12, 06, 23))->second;
ASSERT_STREQ("This is a note",s1.getNotes().c_str());
}


TEST_F(ActivityTest, EqualityOperator) {
ASSERT_TRUE(*a == *a);

ASSERT_FALSE(*a == *anotherA);
}


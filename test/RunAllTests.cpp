//
// Created by miriam on 08/04/23.
//
#include "gtest/gtest.h"

/*#include "../src/Date.h"
#include "../src/Time.h"

TEST(Time, Constructor) {
   Time t(15, 42, 00);
    ASSERT_EQ(15, t.getHours());
    ASSERT_EQ(42, t.getMinutes());
    ASSERT_EQ(00, t.getSeconds());
}


TEST(Date, Constructor) {
    Date d(15, 07, 2023);
    ASSERT_EQ(15, d.getDay());
    ASSERT_EQ(06, d.getMonth());
    ASSERT_EQ(2023, d.getYear());
}


TEST(Date, minorityOperator) {
    Date d1(15, 06, 2023) ;
    Date d2(16, 07, 2023) ;
    ASSERT_TRUE(d1 < d2);
    Date d3(14, 01, 2016) ;
    ASSERT_FALSE(d1< d3);
}
*/
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

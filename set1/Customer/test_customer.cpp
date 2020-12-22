#include "customer.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer, Empty_Constructor) {
    Customer C2;
    EXPECT_EQ(0.0, C2.getBalance());
}
TEST(Customer, credit) {
    Customer C1("123","Hari","7835281904",78.96);
    EXPECT_EQ(78.96, C1.getBalance());
    C1.credit(123.45);
    EXPECT_EQ(202.41, C1.getBalance());
}

TEST(Customer, Parameterized_Constructor) {
    Customer C3("999","Ram","7129873450",109.8);
    EXPECT_EQ(109.8, C3.getBalance());
}
}
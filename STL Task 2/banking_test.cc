#include "account.h"
#include "banking.h"
#include <gtest/gtest.h>
namespace {

class BankingTest : public ::testing::Test {

protected:
  void SetUp() { 
    accounts.addAccount(1001, "Scott",45.23,"9845012345");
    accounts.addAccount(1002, "sfabsf",33.23,"45765853");
    accounts.addAccount(1003, "hmfgh",67.55,"9845012345");
    accounts.addAccount(1004, "dngbx",46.43,"657689476");
  }
 
};

TEST_F(BankingTest, AddAccountTest) {
  accounts.addAccount(1005, "John", "9845012350", 100);
  EXPECT_NE(NULL, accounts.findCustomerById(1005));
  EXPECT_EQ(1005, accounts.getCustomerId());
}
TEST_F(BankingTest, RemoveAccountTest) {
  accounts.removeAccount(1005);
  EXPECT_EQ(NULL, accounts.findCustomerById(1005));
  EXPECT_EQ(NULL, accounts.getCustomerId());
}


TEST_F(BankingTest, FindByNameTest) {
  Account *ptr = accounts.findCustomerByName("dngbx");
  EXPECT_STREQ("dngbx", ptr->getName().c_str());
  EXPECT_EQ(1004, ptr->getCustomerId());
}



} // namespace*/

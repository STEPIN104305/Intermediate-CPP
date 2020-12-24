#include<iostream>
#include "account.h"
Account::Account() :
        customerId(0), customerName(""), balance(0), phoneno("") {

}
Account::Account(int id, std::string name, double bal,std::string no):
        customerId(id), customerName(name), balance(bal),phoneno(no) {

}
Account::Account(const Account& ref) :
        customerId(ref.customerId), customerName(ref.customerName),  
                                              balance(ref.balance),phoneno(ref.phoneno) {

}

int Account::getCustomerId() {
    return customerId;
}
std::string Account::getCustomerName() {
    return customerName;
}
double Account::getBalance() const {
    return balance;
}
std::string Account::getphoneno() {
    return phoneno;
}
void Account::display() {
    std::cout << customerId << "," << customerName << "," 
                                         << balance << "\n"<<pho;
}

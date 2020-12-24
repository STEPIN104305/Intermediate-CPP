#include<string>
#include <iostream>
class Account {
  int customerId; // ideally to be of string type
  std::string customerName;
  double balance;
  std::string phoneno;
  
public:
  Account();
  Account(int, std::string, double,std::string);
  Account(const Account &);
  void credit(double);
  void debit(double);
  int getCustomerId();
  std::string getCustomerName();
  double getBalance() const;
 std::string getphoneno();
 friend std::ostream& operator<<(std::ostream& rout, const Account& acc);
void display();

};
Account::Account() :
        customerId(0), customerName(""), balance(0),phoneno("") {

}
Account::Account(int id, std::string name, double bal,std::string phno) :
        customerId(id), customerName(name), balance(bal),phoneno(phno) {

}
Account::Account(const Account& ref) :
        customerId(ref.customerId), customerName(ref.customerName),  
                                              balance(ref.balance),phoneno(ref.phoneno) {

}
void Account::credit(double amount) {
    balance += amount;
}
void Account::debit(double amount) {
    //min balance check
    balance -= amount;
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
std::ostream& operator<<(std::ostream& rout, const Account& acc) {
    rout<<"\nCustomer Id: "<<acc.customerId<<"\nCustomer Name: "<<acc.customerName<<"\nCustomer Phoneno.: "<<acc.phoneno<<"\nBalance: "<<acc.balance;
    return rout;


}
void Account::display() {
    std::cout<<"\nCustomer Id: "<<customerId<<"\nCustomer Name: "<<customerName<<"\nCustomer Phoneno.: "<<phoneno<<"\nBalance: "<<balance;
}
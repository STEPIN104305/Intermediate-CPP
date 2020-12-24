#include <iostream>
#include "banking.h"

int main()
{
Banking b1;
b1.addAccount(1,"afa",76.30,"3235253");
b1.addAccount(2,"dfbj",46.41,"325232");
b1.addAccount(3,"qdgg",123.10,"67856456");
b1.addAccount(4,"ahbbb",52.64,"236576754");
b1.addAccount(5,"jujcc",20.34,"745343546");


b1.displayAll();

std::cout<<"\nBy range:\n";
std::cout<<b1.countAccountsByBalanceRange(50.0,60.0)<<"\n";

std::cout<<"\nAverage: "<<b1.findAverageBalance()<<"\n";

std::cout<<"\nFind: "<<b1.findAccountById(3)<<"\n";

b1.removeAccount(4);

b1.displayAll();

std::cout<<"\n"<<b1.findAccountWithMaxBalance();

std::cout<<"\nFind: "<<b1.findAccountByName("jujcc")<<"\n";
return 0;
}


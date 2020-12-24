#ifndef __BANKING_
#define __BANKING_

#include "account.h"
#include <vector>
#include <list>
#include <iterator>


class Banking {
   std::list<Account> accounts;
   public:
   void addAccount(int id,std::string name,double bal,std::string phoneno) {
   accounts.push_back(Account(id,name,bal,phoneno));
   }
   void displayAll() {
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter)
       iter->display();

   }
   double findAverageBalance()
   {   double avg=0;
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter)
        avg=avg+iter->getBalance();
    return avg/accounts.size();
   }
   int countAccountsByBalanceRange(double min,double max) {
       int count=0;
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter) {
           if((iter->getBalance()>=min) && (iter->getBalance()<=max))
           ++count;
       }
       return count;
   }
   void removeAccount(int id) {
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter)
       {
           if(iter->getCustomerId()==id)
            break;
       }
    if(iter!=accounts.end())
    accounts.erase(iter);
   } //by id
   Account* findAccountById(int id) {
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter)
       {
           if(iter->getCustomerId()==id)
           return &(*iter);
       }
       return nullptr;
   }
   Account* findAccountByName(std::string name) {
       std::list<Account>::iterator iter;
       for(iter=accounts.begin();iter!=accounts.end();++iter)
       {
           if(iter->getCustomerName()==name)
           return &(*iter);
       }
       return nullptr;
   }
   Account* findAccountWithMaxBalance() {
       std::list<Account>::iterator iter;
       iter=accounts.begin();
       double maxbal=iter->getBalance();
       std::list<Account>::iterator maxiter=iter;
       ++iter;
       for(;iter!=accounts.end();++iter) {
           if(iter->getBalance()>maxbal)
           {
               maxbal=iter->getBalance();
               maxiter=iter;
           }
       }
    return &(*maxiter);
   }
int countAccountBalanceLimit() {
    int count=0;
    std::list<Account>::iterator iter;
    for(iter=accounts.begin();iter!=accounts.end();++iter) {
        if(iter->getBalance()<60.0)
        ++count;
    }
    return count;

}
};
#endif
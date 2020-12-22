#include "customer.h"
#include<iostream>
using namespace std;

Customer::Customer():m_custId(""),m_custName(""),m_phone(""),m_balance(0.0)
{
}
Customer::Customer(string x, string y,string z,double a):m_custId(x),m_custName(y),m_phone(z),m_balance(a)
{
}
Customer::Customer(string x, string y,string z):m_custId(x),m_custName(y),m_phone(z)
{
}
Customer::Customer(const Customer &ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
{
}


void Customer::credit(double x) {
	m_balance+=x;    
}

void Customer::makeCall(double m_balance) {
	if(m_balance>0)
    {
        cout<<"Call can be made";
    }
    else
    {
        cout<<"Call cannot be made";
    }
    
}
/*Customer::Customer(AccountType x)
{
    if(m_balance==0 && m_balance<0)
    {
        return x::Postpaid;
    }
    else
    {
        return x::Prepaid;
    }
}*/

double Customer::getBalance() const{ 
	return m_balance;
	
}
void Customer::display() const
{
    std::cout<<"Customer ID: "<<m_custId<<"\n Customer Name: "<<m_custName<<"\n Phone Number: "<<m_phone<<"\n Balance: "<<m_balance;
}
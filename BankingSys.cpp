#include<bits/stdc++.h>
using namespace std;
class Bank{
    private:
    int credit;
    int balance;

    public:
    int accountno;
    string accountholname;
    int IfscCode;

    //Default con
    Bank()
    {
        credit=40,000;
        balance=60,000;
        accountno=1325671882;
        accountholname="Tommy";
        IfscCode=892712;
    }

    //parameterized con
    Bank(int credit,int balance,int accountno, string accountholname,int IfscCode)
    {
        this->credit=credit;
        this->balance=balance;
        this->accountno=accountno;
        this->accountholname=accountholname;
        this->IfscCode=IfscCode;
    }

    //copy cons
    Bank(Bank &account)
    {
        credit=account.credit;
        balance=account.balance;
        accountno=account.accountno;
        accountholname=account.accountholname;
        IfscCode=account.IfscCode;
    }

    int getbalance()
    {
        return balance;
    }

    


}
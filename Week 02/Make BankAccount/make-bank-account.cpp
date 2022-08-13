#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_no;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string account_holder, string address, int age, string password){
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        this->balance=0;
        this->account_no=rand()%1000000000;
        this->password=password;
    }

    int showBalance(string password)
    {
        if(this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }

    void addMoney(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance += amount;
            cout<<"Add money succesful"<<endl;
        }
        else
        {
            cout<<"Password did't match"<<endl;
        }
    }

    void depositMoney(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance -= amount;
            cout<<"Deposit money succesful"<<endl;
        }
        else
        {
            cout<<"Password did't match"<<endl;
        }
    }

    friend class MyCash;
};

BankAccount* createAccount()
{
    int age;
    string account_holder, address, password;
    cout<<"Create Bank Account"<<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);
    return myAccount;
}

void addMoney(BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Add Money To Your Account"<<endl;
    cin>>password>>money;
    myAccount->addMoney(password, money);
    cout<<"Your Balance is "<<myAccount->showBalance("abc")<<endl;
}

void depositMoney(BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Deposit Money To Your Account"<<endl;
    cin>>password>>money;
    myAccount->depositMoney(password, money);
    cout<<"Your Balance is "<<myAccount->showBalance("abc")<<endl;
}


// get money from bank to their app
class MyCash
{
protected:
    int balance;
public:
    MyCash(){
        this->balance = 0;
    }
    void addMoneyFromBank(BankAccount *myAccount, string password, int amount){
        if(myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout<<"Add money from bank is successful"<<endl;
        }
        else
        {
            cout<<"Password did't match"<<endl;
        }
    }

    int showBalance(){
        return balance;
    }

};

void addMoneyFromBank(BankAccount *myAccount, MyCash *myCash){
    string password;
    int money;
    cout<<"Add Money From Bank Account"<<endl;
    cin>>password>>money;
    myCash->addMoneyFromBank(myAccount, password, money);
    cout<<"Bank Balance is "<<myAccount->showBalance("abc")<<endl;
    cout<<"MyCash Balance is "<<myCash->showBalance()<<endl;
}

int main()
{
    BankAccount *myAccount = createAccount();

//    if(myAccount->showBalance("abc") == -1){
//        cout<<"Password did't match"<<endl;
//    } else {
//        cout<<"Your Balance is "<<myAccount->showBalance("abc")<<endl;
//    }
    addMoney(myAccount);
    depositMoney(myAccount);

    MyCash *myCash = new MyCash();
    addMoneyFromBank(myAccount, myCash);
    return 0;
}

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

    void addMoney(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance += amount;
            cout<<"Add money successful"<<endl;
        }
        else
        {
            cout<<"Password did't match"<<endl;
        }
    }

    void withdrawMoney(string password, int amount)
    {
        if(this->password == password)
        {
            this->balance -= amount;
            cout<<"Deposit money successful"<<endl;
        }
        else
        {
            cout<<"Password did't match"<<endl;
        }
    }

    string showBalance(string password)
    {
        if(this->password == password)
        {
            return "Your Balance is "+to_string(this->balance);
        }
        else
        {
            return "Balance is not accessible";
        }
    }

    friend class MyCash;
};

void addMoney(BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Add Money To Your Account"<<endl;
    cout<<"Password : ";
    cin>>password;
    cout<<"Money : ";
    cin>>money;

    myAccount->addMoney(password, money);
    cout<<myAccount->showBalance(password)<<endl;
}

void withdrawMoney(BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Deposit Money To Your Account"<<endl;
    cin>>password>>money;
    myAccount->withdrawMoney(password, money);
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
    int age;
    string account_holder, address, password;
    cout<<"Create Bank Account"<<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(account_holder, address, age, password);

    addMoney(myAccount);
    withdrawMoney(myAccount);

    MyCash *myCash = new MyCash();
    addMoneyFromBank(myAccount, myCash);

    return 0;
}

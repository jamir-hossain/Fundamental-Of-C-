#include <bits/stdc++.h>
using namespace std;

class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
private:
    int total_income;

    Shop(string product_name, int product_price, int product_quantity){
        this->product_name = product_name;
        this->product_price = product_price;
        this->product_quantity = product_quantity;
    }
};

int main()
{


    return 0;
}

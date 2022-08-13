#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
    public:
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];
        int total_tax;

        Restaurant() {}
        Restaurant(int foodItemCodes, string foodItemNames, int foodItemPrices){
            this->food_item_codes[12] = foodItemCodes;
            this->food_item_names[12] = foodItemNames;
            this->food_item_prices[12] = foodItemPrices;
            this->total_tax = 0;
        }
};


int main()
{
    int totalProduct;
    cin>>totalProduct;
    Restaurant products;
    for(int i=0; i<totalProduct; i++){
        int foodItemCodes;
        string foodItemNames;
        int foodItemPrices;

        cin>>foodItemCodes;
        cin.ignore();
        getline(cin, foodItemNames);
        cin>>foodItemPrices;

        products.food_item_codes[i] = foodItemCodes;
        products.food_item_names[i] = foodItemNames;
        products.food_item_prices[i] = foodItemPrices;
    }

    cout << "Item Code\t\tItem Name\t\t\t\tItem Price\n";
    for(int i=0; i<totalProduct; i++){
        cout<<products.food_item_codes[i]<<"\t\t\t"<<products.food_item_names[i]<<"\t\t\t"<<products.food_item_prices[i]<<endl;
    }

    int tableNo, totalItem;
    cout<<"Enter Table No : ";
    cin>>tableNo;
    cout<<"Enter Number Of Items : ";
    cin>>totalItem;

    for(int i=0; i<totalItem; i++){
        int code, quantity;
        cout<<"Enter Item "<<i+1<<" Code : ";
        cin>>code;
        cout<<"Enter Item "<<i+1<<" Quantity : ";
        cin>>quantity;
    }

    return 0;
}

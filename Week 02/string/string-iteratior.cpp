#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello word";

//    // ascending order
//    string:: iterator itr;
//    for(itr=str.begin(); itr!=str.end(); itr++)
//    {
//        cout<<*itr<<endl;
//    }
//    cout<<"="<<endl;
//    // descending order
//    string:: reverse_iterator ritr;
//    for(ritr=str.rbegin(); ritr!=str.rend(); ritr++)
//    {
//        cout<<*ritr<<endl;
//    }

//    // ascending order
//    for(string:: iterator itr=str.begin(); itr!=str.end(); itr++)
//    {
//        cout<<*itr<<endl;
//    }
//
//    cout<<"==="<<endl;
//
//    // descending order
//    for(string:: reverse_iterator ritr=str.rbegin(); ritr!=str.rend(); ritr++)
//    {
//        cout<<*ritr<<endl;
//    }

    // ascending order
    for(auto itr=str.begin(); itr!=str.end(); itr++)
    {
        cout<<*itr<<endl;
    }

    cout<<"==="<<endl;

    // descending order
    for(auto ritr=str.rbegin(); ritr!=str.rend(); ritr++)
    {
        cout<<*ritr<<endl;
    }

    return 0;
}

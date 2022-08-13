#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int firstNumber = n/100;
    int lastNumber = n%10;

    if(firstNumber == lastNumber){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}

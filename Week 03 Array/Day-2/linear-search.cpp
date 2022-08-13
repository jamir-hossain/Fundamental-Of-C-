#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Searching item
    bool isFound = false;
    int searchItem;
    cout<<"Search item is : ";
    cin>>searchItem;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == searchItem){
            isFound = true;
            cout<<i<<" No Index, "<<i+1<<" No Position"<<endl;
        }
    }

    if(!isFound) cout<<"Item Not Found"<<endl;

    return 0;
}

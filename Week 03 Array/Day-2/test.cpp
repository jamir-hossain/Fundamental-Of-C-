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

    for(int i=0; i<n; i++)
    {
        if(arr[i] % 3 == 0)
        {
            cout<<"-1 ";
        }
        else cout<<arr[i]<<" ";
    }

    return 0;
}

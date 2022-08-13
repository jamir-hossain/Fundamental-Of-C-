#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int lastIn = 0;
        for(int i=0; i<n; i++){
           if(arr[0] == arr[i]){
            lastIn++;
           }
        }

        int result = n-lastIn;
        cout<<result<<endl;
    }

    return 0;
}


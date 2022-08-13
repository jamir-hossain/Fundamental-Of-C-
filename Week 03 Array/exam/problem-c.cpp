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

        // Insertion sort
        for(int i=1; i<n; i++){
            int key = arr[i];
            int j = i-1;

            while(arr[j]>key && j>=0){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }

        int lastIn = 0;
        for(int i=0; i<n; i++){
           if(arr[0] == arr[i]){
            lastIn = i;
           }
        }

        int result = n-lastIn-1;
        cout<<result<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void arrayTravers(int arr[], int arrSize)
{
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[50] = {0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    arrayTravers(arr, n);

    return 0;
}

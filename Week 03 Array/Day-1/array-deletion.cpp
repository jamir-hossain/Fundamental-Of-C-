#include <bits/stdc++.h>
using namespace std;

void arrayTravers(int arr[], int arrSize)
{
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
}

// delete an element from array
void arrayDeletion(int arr[], int arrSize)
{
    int position;
    cin>>position;
    if(position < 0 || position > arrSize){
        cout<<"Invalid Position Number"<<endl;
    }
    else {
        for(int i=position; i<arrSize; i++){
            arr[i-1] = arr[i];
        }
        arrayTravers(arr, arrSize-1);
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

    arrayDeletion(arr, n);

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

void arrayTravers(int arr[], int arrSize)
{
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
}

// insert an element on sorted array
void arrayInsertion(int arr[], int arrSize)
{
    int position, value;
    cin>>position>>value;
    for(int i=arrSize; i>=position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = value;
    arrayTravers(arr, arrSize+1);
}

// insert an element on sorted array
void arrayInsertionByPosition(int arr[], int arrSize)
{
    int position, value;
    cin>>position>>value;

    int temp = arr[position];
    arr[position] = value;
    arr[arrSize] = temp;

    arrayTravers(arr, arrSize+1);
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

    //arrayInsertion(arr, n);
    arrayInsertionByPosition(arr, n);

    return 0;
}


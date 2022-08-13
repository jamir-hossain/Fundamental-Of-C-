#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int value, int lb, int ub)
{
    if(lb <= ub)
    {
        int mid = (lb+ub)/2;

        if(value == arr[mid]) return mid;
        else if(value < arr[mid]) binarySearch(arr, value, lb, mid-1);
        else binarySearch(arr, value, mid+1, ub);
    }
    else return -1;
}

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
    int searchValue;
    cout<<"Enter the search value : ";
    cin>>searchValue;

    int valueIndex = binarySearch(arr, searchValue, 0, n);

    if(valueIndex > 0)
    {
        cout<<valueIndex<<" No Index, "<<valueIndex+1<<" No Position"<<endl;
    }
    else cout<<"Item Not Found"<<endl;

    return 0;
}


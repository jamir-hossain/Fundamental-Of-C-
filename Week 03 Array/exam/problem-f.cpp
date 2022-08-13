#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int *n)
{
    for(int i=0;i<*n;++i)
        for(int j=i+1;j<*n;)
        {
            if(arr[i]==arr[j])
            {
            for(int k=j;k<*n-1;++k)
                arr[k]=arr[k+1];
                --*n;
            }
            else
                ++j;
        }
}

int main()
{
    int n = 3;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicates(arr, &n);

    int arrSize = 0;
    for(int i=0; i<n; i++){
        arrSize++;
    }
    cout<<arrSize;

    return 0;
}

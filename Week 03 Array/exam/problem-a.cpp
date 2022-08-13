#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    int weeks = 0;
    for(int i=0; i<4; i++){
        if(arr[i] >= 10){
            weeks++;
        }
    }
    cout<<weeks;

    return 0;
}

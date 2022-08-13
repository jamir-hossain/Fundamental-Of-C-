#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arrP = new int[n]{0};

    for(int i=0; i<n; i++){
        cin>>arrP[i];
    }

    for(int i=0; i<n; i++){
        cout<<arrP[i]<<" ";
    }

    return 0;
}

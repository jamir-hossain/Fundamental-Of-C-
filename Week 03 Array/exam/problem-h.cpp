#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int aIndex = 0;
    int zIndex = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A'){
            aIndex = i;
            break;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'Z'){
            zIndex = i;
        }
    }

    int result = (zIndex+1)-aIndex;
    cout<<result;

    return 0;
}

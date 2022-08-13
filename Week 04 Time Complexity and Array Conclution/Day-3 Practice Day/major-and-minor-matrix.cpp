#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	// an array with 3 rows and 2 columns.
	int arr[n][n];

	// input each array element's value
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}

	cout<<"Major diagonal: ";  //For displaying the major diagonal elements
    for(int i=0; i<n ; i++)
    {
        cout<<" ";
        cout<<arr[i][i];
    }
    cout<<endl;

    cout<<"Minor diagonal: ";  //For displaying the minor diagonal elements
    for(int i=0; i<n; i++)
    {
        cout<<" ";
        cout<<arr[i][n-i-1];
    }

	return 0;
}



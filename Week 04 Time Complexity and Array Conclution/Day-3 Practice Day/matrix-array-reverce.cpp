#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
	// an array with 3 rows and 2 columns.
	int arr[n][n];

	// input each array element's value
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
		    cin>>arr[i][j];
		}
	}

	// reverce each array element's value
	for (int i=0; i<n; i++)
	{
		for (int j=0, k=m-1; j<=k; j++, k--)
		{
		    int temp = arr[i][k];
		    arr[i][k] = arr[i+1][k+1];
		    arr[i+1][k+1] = temp;
		}
	}

	// output each array element's value
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

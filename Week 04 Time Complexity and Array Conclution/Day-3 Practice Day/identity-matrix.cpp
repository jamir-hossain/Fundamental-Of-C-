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
		    arr[i][j] = 0;
			arr[i][i] = 1;
		}
	}

	// output each array element's value
	int sum = 0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

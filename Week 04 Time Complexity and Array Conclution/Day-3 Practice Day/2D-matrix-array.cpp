#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	// an array with 3 rows and 2 columns.
	int x[n][n];

	// input each array element's value
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin>>x[i][j];
		}
	}

	// output each array element's value
	int sum = 0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<x[i][j]<<" ";
		}
	}

	return 0;
}


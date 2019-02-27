#include <bits/stdc++.h>
using namespace std;
struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);
// driver program

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}

int findMax(Height obj[], int n)
{
    int max, obj1[n];
    for(int i=0; i<n; i++){
        obj1[i] = (obj[i].feet*12) + (obj[i].inches); 
	}
	max = obj1[0];
	for (int i=1; i<n; i++){
	    if (obj1[i] > max)
	        max = obj1[i];
	}
	return max;
}

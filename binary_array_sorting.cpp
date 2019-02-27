#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
	    int n, count = 0;
	    cin>>n;
	    int array[n];
	    for (int j=0; j<n; j++){
	        cin>>array[j];
	        if (array[j] == 0){
	            count++;
	        }
	    }
	    for (int j=0; j<count; j++){
	        array[j] = 0;
	    }
	    for (int j=count; j<n; j++){
	        array[j] = 1;
	    }
	    for (int j=0; j<n; j++){
	        cout<<array[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

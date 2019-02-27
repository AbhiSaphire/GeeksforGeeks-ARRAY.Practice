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
	        if (array[j] == j+1){
	            cout<<array[j]<<" ";
	            count++;
	        }
	    }
	    if (count == 0){
	        cout<<"Not Found";
	    }
	    cout<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int array[n];
	    for (int i=0; i<n; i++){
	        cin>>array[i];
	    }
	    for (int i=0; i<n; i++){
	        array[i] = -1;
	        int max = array[i];
	        for (int j=i+1; j<n; j++){
	            if (array[j] > max)
	                max = array[j];
	        }
            array[i] = max;
            cout<<array[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

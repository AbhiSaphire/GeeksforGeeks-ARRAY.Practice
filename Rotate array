#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int n, d, a = 0;
	    cin>>n>>d;
	    int array[n], array1[d];
	    for (int i=0; i<n; i++){
	        cin>>array[i];
	    }
	    for (int i=0; i<d; i++){
	        array1[i] = array[i];
	    }
	    for (int i=0, a=d ; i<n-d ; i++, a++){
	        array[i] = array[a];
	    }
	    for (int i=0, j=n-d ; i<d && j<n ; i++, j++){
	        array[j] = array1[i];
	    }
	    for (int i=0; i<n; i++){
	        cout<<array[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

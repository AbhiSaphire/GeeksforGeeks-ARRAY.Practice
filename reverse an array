#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int array[n];
	    for (int j=0; j<n; j++){
	        cin>>array[j];
	    }
	    for (int j=0; j<n/2; j++){
	        swap(&array[j], &array[n-1-j]);
	    }
	    for (int j=0; j<n; j++){
	        cout<<array[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

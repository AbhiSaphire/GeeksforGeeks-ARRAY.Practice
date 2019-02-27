#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
	    int n, s;
	    cin>>n;
	    cin>>s;
	    int array[n];
	    for (int j=0; j<n; j++){
	        cin>>array[j];
	    }
	    swap(&array[s-1], &array[n-s]);
	    for (int j=0; j<n; j++){
	        cout<<array[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

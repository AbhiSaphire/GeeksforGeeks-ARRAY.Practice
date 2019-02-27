#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
	    int n, max = 0;
	    cin>>n;
	    char line[n][n];
	    for (int j=0; j<n; j++){
	        cin>>line[i][j];
	    }
	    for (int j=1; j<n; j++){
	        if (line[i][j] > line[i][j-1]){
	            max = j;
	        }
	    }
	    cout<<line[i][max]<<endl;
	}
	return 0;
}

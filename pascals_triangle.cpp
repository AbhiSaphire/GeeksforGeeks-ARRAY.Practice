#include <iostream>
using namespace std;

void pascaltriangle(int k){
    int array[k][k];
    for (int i=0; i<k; i++){
        for (int j=0; j<=i; j++){
            if (i == j || j == 0){
                array[i][j] = 1;
            }
            else
                array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }
    for (int i=0; i<k; i++){
        cout<<array[k-1][i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t, k;
    cin>>t;
    cin>>k;
    for (int i=0; i<t; i++){
        pascaltriangle(k);
    }
	return 0;
}

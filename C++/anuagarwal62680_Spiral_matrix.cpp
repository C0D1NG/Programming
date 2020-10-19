#include <iostream>
using namespace std;
#include<bits/stdc++.h>

#define SIZE 105

void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    
    int i=0;
    int row=m;
    int j=0;
    int col=n;
    int k;
    
    while(i<row && j<col){
        
        for(int p=j;p<col;p++){
            cout<<ar[i][p]<<" ";
        }
        i++;
        for(int p=i;p<row;p++){
            cout<<ar[p][col-1]<<" ";
        }
        col--;
        
        if(row>i){
            for(int p=col-1;p>=j;p--){
                cout<<ar[row-1][p]<<" ";
            }
            row--;
        }
        if(col>j){
            for(int p=row-1;p>=i;p--){
                cout<<ar[p][j]<<" ";
            }
            j++;
        }
    }
}

int main() {
	
	int m,n;
    cin>>m;
    cin>>n;
	int ar[SIZE][SIZE] = {{0}};
	    
	for(int i=0; i<m; i++){
	    for(int j=0; j<n; j++){
	        cin>>ar[i][j];
	    }
	}
	    
	spirallyTraverse(m, n, ar);
	cout<<endl;
	   
	return 0;
}



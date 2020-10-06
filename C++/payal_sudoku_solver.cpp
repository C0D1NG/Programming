#include <iostream>
#include<cmath>
using namespace std;

bool place(int mat[][9],int i,int j,int n,int ele){
    for(int k=0;k<n;k++){
        if(mat[i][k] == ele){
            return false;
        }
    }
    for(int k = 0; k<n;k++){
        if(mat[k][j] == ele){
            return false;
        }
    }
    int arroot = sqrt(n);
    int begx = (i/arroot)*arroot;
    int begy = (j/arroot)*arroot;

    for(int x = begx;x< begx+arroot;x++){
        for(int y = begy;y<begy+arroot;y++){
            if(mat[x][y] == ele){
                return false;
            }
        }
    }
return true;
}


bool solve(int mat[][9],int i,int j, int n){
    if(i==n){
        for(int f =0;f<n;f++){
            for(int b=0;b<n;b++){
                cout<<mat[f][b]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n){
        return solve(mat,i+1,0,n);
    }
    if(mat[i][j]!=0){
        return solve(mat,i,j+1,n);
    }

    // rec case
    for(int num = 1;num<=n;num++){
        
        if(place(mat,i,j,n,num)){
            mat[i][j] = num;
            bool possible = solve(mat,i,j+1,n);
            if(possible){
                return true;
            }
        }
    }
    mat[i][j] =0; 
    return false;
}

int main() {
    int mat[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    solve(mat,0,0,9);
}


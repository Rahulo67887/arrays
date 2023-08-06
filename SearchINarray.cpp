#include<iostream>
using namespace std;
int main(){
    int n,m,target;
    cin>>n>>m>>target;

    int A[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    int r=0, c=m-1;
    bool found=0;

    while(r<n && c>=0){
        if(A[r][c]==target){
            found=1;
        }
        else if(A[r][c]<target){
            r++;
        }
        else{
            c--;
        }
    }

    if(found){
        cout<<"Element found!";
    }
    else{
        cout<<"Element does not exist!";
    }

    return 0;
}
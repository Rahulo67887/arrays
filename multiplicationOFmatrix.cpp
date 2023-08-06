#include<iostream>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;

    int A[n][m];
    int B[m][l];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin>>B[i][j];
        }
    }

    int ans[n][l];

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            ans[i][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int k=0; k<m; k++){
                ans[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int sum=0;
    int maxS=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            sum=0;
        }
        else{
            sum+=arr[i];
        }
        maxS=max(maxS,sum); 
    }

    return maxS;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum=kadane(a, n);

    int totalsum=0;

    for(int i=0; i<n; i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapsum=totalsum+kadane(a,n);

    cout<<max(wrapsum,nonwrapsum);
    
    return 0;
}

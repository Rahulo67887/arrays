#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of your array:";
    cin>>n;
    int arr[n];
    

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int counter=1; counter<n; counter++){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    cout<<"Sorted array-"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
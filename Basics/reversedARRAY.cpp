#include<bits/stdc++.h>
using namespace std;
void replica(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-1-i]);
    replica(i+1,arr,n);
}
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    replica(0,arr,n);
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++){

        cout<<arr[i]<<""<<" ";
    }
}
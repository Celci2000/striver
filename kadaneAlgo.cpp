#include<iostream>
using namespace std;
int kadane(int arr[], int n){
    int max=INT_MIN;
    
}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=kadane(arr,n);
    cout<<ans;
    return 0;
}
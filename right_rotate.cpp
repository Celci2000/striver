
#include<iostream>
using namespace std;
int main(){
    int arr[20];
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[20];
    int j=0;
    for(int i=n-d;i<n;i++){
        temp[j++]=arr[i];
    }

    for(int i=0;i<j;i++){
        cout<<temp[i]<<" ";
    }
    
    // for(int i=0;i<n-d;i++){
    //     arr[n-d-1+i]=arr[i];
    //     cout<<arr[i]<<" ";

    // }
    int p=0;
    for(int i=n-d-1;i>=0;i--){
        arr[n-1-p]=arr[i];
        p++;
        
    }
    for( int k=0;k<j;k++){
        arr[k]=temp[j++];
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
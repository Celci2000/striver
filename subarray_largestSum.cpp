#include<iostream>
using namespace std;
int subarray(int arr[], int n){
    int sum, max=INT_MIN;
    int start , end;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
        sum+=arr[j];
        if(sum>max){
        start=i;
        end=j;
        max=sum;
        }

        }

    }
    return max;

}
int main(){
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans= subarray(arr, n);
    cout<<ans;
    return 0;
}
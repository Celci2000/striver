#include<iostream>
using namespace std;
int findCount(int num, int diff, int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(abs(arr[i]-num)<=diff){
            count++;
        }

    }
    if(count ==0){
        return -1;
    }
    else{
        return count;
    }
}
int main(){
    int num,diff, n,arr[100];
    cin>>num>>diff>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count= findCount( num,  diff, arr,n);
  cout<<count;
    return 0;

}
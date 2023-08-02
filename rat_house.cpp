#include<iostream>
using namespace std;
int func(int r, int unit, int arr[],int n){
    int sum=0;
if(n==0){
    return -1;
}
  int tot_need=r*unit;
  int i;
  for( i=0;i<n;i++){
    sum+=arr[i];
    if(sum>=tot_need){
    break;
    }
  }
  if(sum<tot_need){
    return 0;
  }
  else{
    return i+1;
  }


}
int main(){
    int r, unit,n;
    cin>>r>>unit>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    ans=func(r,unit, arr,n);
    cout<<ans<<endl;

    return 0;
}
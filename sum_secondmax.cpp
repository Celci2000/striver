#include<iostream>
using namespace std;
int largeSum(int arr[], int len) {
int even_max=INT_MIN;
int odd_max=INT_MIN;
if(len==0|| len<=3){
    return 0;

}
else{
for(int i=0;i<len;i=i+2){
    if(arr[i]>even_max){
        even_max=arr[i];
    }
}
int evensec_max=INT_MIN;
for(int i=0;i<len;i=i+2){
    if(arr[i]>evensec_max && arr[i]<even_max){
     evensec_max=arr[i];

    }
}
for(int i=1;i<len;i=i+2){
    if(arr[i]>odd_max){
        odd_max=arr[i];
    }
}
int oddsec_max=INT_MIN;
for(int i=1;i<len;i=i+2){
    if(arr[i]>oddsec_max && arr[i]<odd_max){
     oddsec_max=arr[i];

    }
}
return evensec_max + oddsec_max;
}
 

}
int main(){
    int len = 0;
    cin>>len;
    int arr[100];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int ans= largeSum(arr,len);
    cout<<ans;
    return 0;


    return 0;
}
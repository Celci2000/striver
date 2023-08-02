#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int calculate(int arr[], int n){
    int even[10], odd[10];
    int i,j,p,k,x;
      for( i=0,j=0;i<n;i=i+2,j++){
        even[j] = arr[i];
        cout<<even[j];
      }
      cout<<j;
      int even_len=j;
      for(p=0;p<even_len;p++){
        for( k=0;k<even_len-p-1;k++){
            if(even[k]>even[k+1]){
                int temp= even[k];
                even[k]=even[k+1];
                even[k+1]=temp;
            }
        }
      }
      printf("\n");
       for( x=0;x<even_len;x++){
        cout<<even[x];
      }
       printf("\n");
       for(p=1,k=0;p<n;p=p+2,k++){
        odd[k] = arr[p];
        cout<<arr[p];
        cout<<odd[k];
      }
      cout<<k;
     
       int odd_len=k;
       for(int i=0;i<odd_len;i++){
        for(int j=i+1;j<odd_len;j++){
            if(odd[j]<odd[i]){
                int temp= odd[j];
                odd[j]=odd[i];
                odd[i]=temp;
            }
        }
      }
    for( x=0;x<odd_len;x++){
        cout<<odd[x];
      }
    return even[even_len-2]+ odd[odd_len-2];
}

using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cout<<"enter the the element at "  + to_string(i)+ " index:";
        cin>>arr[i];

    }
    int ans =calculate(arr, n);
    cout<<ans;
    return 0;
}
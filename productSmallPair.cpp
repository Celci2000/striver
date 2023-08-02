#include<iostream>
using namespace std; //
int productSmallestPair(int arr[ ], int n,int sum){
    int i,j;
    if(n==0||n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }

        }
    }
    int check= arr[0]+arr[1];
    if(check<=sum){
        return arr[0]*arr[1];

    }
    else{
        return 0;
    }
}
int main(){
    int n, sum,arr[100];
    cout<<"enter size of array";
    cin>>n;
    cout<< "\nenter sum:";
    cin>>sum;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int prod= productSmallestPair(arr, n,sum);
   cout<<prod;
    
    return 0;
}
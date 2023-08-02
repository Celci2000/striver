#include<iostream>
using namespace std;
int prod_sum(int n){
    int sum=0;
    for(int  i=1;i<=10;i++){
        cout<<i*n<<endl;
        sum+=i*n;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter an input:";
    cin>>n;
    int ans= prod_sum(n);
    cout<<ans;
    return 0;
}
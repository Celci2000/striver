#include<iostream>
using namespace std;
int  count_carry(int n1,int n2){
    int rem1, rem2,sum=0,count=0;
    while(n1!=0 && n2!=0){

        if(sum>9){
            count++;
            sum=1;
        }
        rem1=n1%10;
        rem2=n2%10;
        sum=rem1+rem2;
        
        n1=n1/10;
        n2=n2/10;
        }
        while(n1!=0){
            rem1=n1%10;
            
        }
        return count;
}
int main(){
    int n1, n2;

    cout<<"enter the numbers";
    cin>>n1>>n2;
    int count = count_carry(n1,n2);
    cout <<count;

    return 0;

}
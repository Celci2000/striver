
#include<iostream>
using namespace std;
void palindrome_num(int a,int b)
{
        int rem, sum;
    int x;
for(int i=a;i<=b;i++){
sum=0;
x=i;
   while(x>0){
        rem=x%10;
        sum=sum*10 + rem;
        x=x/10;
    }

   
    if(sum==i){
        cout<<i<<endl;
    }
 
    
}
return ;
}
int main(){
    int a, b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    palindrome_num(a,b);
    return 0;
}
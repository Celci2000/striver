#include<iostream>
using namespace std;
int operationChoices(int a ,int b ,int c){
   if(c==1){
    return a+b;
   }
   else if(c==2){
    return a-b;

   }
   else if(c==3){
    return a*b;
   }
   else if(c==4){
    return a/b;
   }

}
int main(){
    int a,b,c;
    cout<<"enter three intgers";
    cin>>a>>b>>c;
    int ans= operationChoices(a,b,c);
   cout<<ans;
    return 0;
}
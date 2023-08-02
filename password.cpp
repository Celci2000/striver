#include<iostream>
using namespace std;
int checkPassword(string str,int n) {
    int i=0;
    cout<<n;
    int  digits=0, caps=0, space_slash=0;
    int flag;
    if(str[0]-'0'>=0 && str[0]-'0'<=9){
    
        flag=1;


    }
    else{
        cout<<str[0];
        flag=0;
    }
    while(str[i]!='\0'){
        if(str[i]-'0'>=0 && str[i]-'0'<=9){
            digits++;

        }
        if(str[i]>='A'&& str[i]<='Z'){
            caps++;
        }
        if(str[i]==' '||str[i]=='/'){
            space_slash++;
        }

 
        i++;
     }
        cout<<n<<digits<<caps<<endl;
    if(n>=4 && digits>=1 && caps>=1 && space_slash==0 && flag==0)
    {
     
        return 1;

    }
    else return 0;
}
int main(){
    string str;
    cin>>str;
    int n= str.size();
    int ans  = checkPassword(str,n);
    cout<<ans;
    return 0;
}
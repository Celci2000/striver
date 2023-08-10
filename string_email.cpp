#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <string> emails={"test.email+alex@leetcode.com", "test.email+bob.cathy@leetcode.com","edhbcdhc@jbdj.com"};


    int i=0;
    set<string> st;
    while(i<emails.size()){
            string str= emails[i];
             string ans="";
           int index=INT_MAX;
           int j=0;                                          
while(str[j]!='@'){
if(str[j]=='.'){
    j++;continue;

}
if(str[j]=='+'){
    while(str[j]!='@'){
        j++;
    }
    int index=j;
    break;
}
ans+=str[j];
j++;

}
int len= str.size()-index;
ans.append(str.substr(j,len));
st.insert(ans);
i++; 


    //        while(str[j]!='\0'){                                    
     //              if(str[j]=='.'&& j<index ){
    //                  if(index!=INT_MAX){
    //                  j++;
    //                  continue;
    //                  }
    //              }
    //             if(str[j]=='+'&& j<index ){
    //                    while(str[j]!='@'){
    //                        j++;
    //                    }
    //                    index=j;
    //              }

    //              ans+=str[j];
    //              j++;

    //        }
    //        cout<<ans<<endl;
    //        st.insert(ans);
    //        i++;

    //     }
    //    for(auto i: st){
    //     cout<<i<<endl;
    //    }
    //    cout<<st.size();
    //     return st.size();
    }
    cout<<st.size();
    return st.size();
}
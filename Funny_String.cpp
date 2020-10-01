#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
     string str1,str2="";
     cin>>str1;
     int len=str1.length(),count=0,c=0;
     for(int i=len-1;i>=0;i--){
         str2+=str1[i];
     }
     for(int i=0;i<len-1;i++)
        {int dif1=abs(str1[i]-str1[i+1]);
         int dif2=abs(str2[i]-str2[i+1]);
         if(dif1==dif2)
            count++;
        }
     if(count==len-1)
        cout<<"Funny\n";//Hehe
     else
        cout<<"Not Funny\n";//No hehe
    }
 return 0;
}


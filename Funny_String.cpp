#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
    {char str1[10005],str2[10005];
     cin>>str1;
     int len=strlen(str1),dif1,dif2,count=0,c=0;
     for(int i=len-1;i>=0;i--)
        {str2[c++]=str1[i];
        }
     str2[c]='\0';
     for(int i=0;i<len-1;i++)
        {dif1=abs(str1[i]-str1[i+1]);
         dif2=abs(str2[i]-str2[i+1]);
         if(dif1==dif2)
            count++;
        }
     if(count==len-1)
        cout<<"Funny\n";
     else
        cout<<"Not Funny\n";
    }
 return 0;
}


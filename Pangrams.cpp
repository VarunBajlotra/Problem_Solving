#include<iostream>
#include<cctype>

using namespace std;

int main()
{char str[1005];
 int arr[26]={0},num,count=0;
 cin.getline(str,1005);
 for(int i=0;str[i]!='\0';i++)
    {if(str[i]!=' ')
        {str[i]=toupper(str[i]);
         num=str[i]-65;
         arr[num]++;
        }
    }
 for(int i=0;i<26;i++)
    {if(arr[i]==0)
        count++;
    }
 if(count==0)
    cout<<"pangram";
 else
    cout<<"not pangram";
 return 0;
}


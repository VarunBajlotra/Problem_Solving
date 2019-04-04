#include<iostream>

using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
    {int n,arr[26]={0},count_=0,flag=0,count=0;
     char str[105];
     cin>>n;
     cin>>str;
     if(str[0]==str[1])
        count++;
     if(str[n-1]==str[n-2])
        count++;
     for(int i=0;i<n;i++)
        {if(str[i]!='_')
            {int num=str[i]-65;
             arr[num]++;
            }
         else
            {count_++;
            }
         if(i!=0&&i!=n-1)
            {if(str[i]==str[i-1]||str[i]==str[i+1])
                count++;
            }
        }
     for(int i=0;i<26;i++)
        {if(arr[i]==1)
            flag=1;
        }
     if((count_>0&&flag==0)||count==n)
        cout<<"YES\n";
     else
        cout<<"NO\n";
    }
 return 0;
}

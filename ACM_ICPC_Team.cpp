#include<iostream>

using namespace std;

int main()
{int n,m,arr[250010]={0},c=0,res=0,count;
 char str[505][505];
 cin>>n>>m;
 for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
        {cin>>str[i][j];
        }
     str[i][m]='\0';
    }
 for(int i=0;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
        {for(int k=0;k<m;k++)
            {if(str[i][k]=='1'||str[j][k]=='1')
                {arr[c]++;
                }
            }
         res=max(res,arr[c]);
         c++;
        }
    }
 for(int i=0;i<c;i++)
    {if(arr[i]==res)
        count++;
    }
 cout<<res<<endl<<count;
 return 0;
}


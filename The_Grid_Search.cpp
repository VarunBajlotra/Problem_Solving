#include<iostream>

using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
    {int n,m,n2,m2,fl=0;
     char str[1005][1005],str2[1005][1005];
     cin>>n>>m;
     for(int i=0;i<n;i++)
        {for(int j=0;j<m;j++)
            cin>>str[i][j];
        }
     cin>>n2>>m2;
     for(int i=0;i<n2;i++)
        {for(int j=0;j<m2;j++)
            cin>>str2[i][j];
        }
     for(int i=0;i<=n-n2;i++)
        {for(int j=0;j<=m-m2;j++)
            {if(str[i][j]==str2[0][0]&&str[i][j+1]==str2[0][1]&&str[i+1][j]==str2[1][0])
                {int flag=0;
                 for(int k=0;k<n2;k++)
                    {for(int l=0;l<m2;l++)
                        {if(str[i+k][j+l]==str2[k][l])
                            flag++;
                        }
                    }
                 if(flag==n2*m2)
                    {fl=1;
                     break;
                    }
                }
            }
         if(fl==1)
            break;
        }
     if(fl==1)
        cout<<"YES\n";
     else
        cout<<"NO\n";
    }
 return 0;
}

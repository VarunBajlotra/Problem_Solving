#include<iostream>

using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
    {int n,arr[1005],flag=0;
     cin>>n;
     for(int i=0;i<n;i++)
        {cin>>arr[i];
         arr[i]--;
        }
     int i=0;
     while(i<n)
        {if(i==arr[i])
            i++;
         else
            {int j=i+1;
             while(arr[j]!=i)
                {j++;
                }
             if(j-i>1)
                {int temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=arr[j-2];
                 arr[j-2]=temp;
                }
             else if(j-i==1)
                {if(j+1==n)
                    {flag=1;
                     break;
                    }
                 int temp=arr[j-1];
                 arr[j-1]=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
                }
            }
        }
     if(flag==0)
        cout<<"YES\n";
     else if(flag==1)
        cout<<"NO\n";
    }
 return 0;
}

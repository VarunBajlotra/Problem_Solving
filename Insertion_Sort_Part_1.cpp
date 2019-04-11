#include<iostream>

using namespace std;

int main()
{int n,arr[1005];
 cin>>n;
 for(int i=0;i<n;i++)
    cin>>arr[i];
 int num=arr[n-1];
 int i=n-1;
 while(i>=0)
    {if(arr[i]>=num)
        {if(i!=n-1)
         {
         arr[i+1]=arr[i];
         for(int k=0;k<n;k++)
            cout<<arr[k]<<" ";
         cout<<endl;
         }
        }
     else
        break;
     i--;
    }
 arr[i+1]=num;
 for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";
 cout<<endl;
 return 0;
}

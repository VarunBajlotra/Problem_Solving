#include<iostream>
#include<algorithm>

using namespace std;

int main()
{int t;
 cin>>t;
 while(t--)
    {int n,a,b,sum=0,*arr,c=0;
     cin>>n>>a>>b;
     arr=new int[n];
     sum=a*(n-1);
     arr[c++]=sum;
     for(int i=0;i<n-1;i++)
        {sum=sum-a+b;
         if(sum!=arr[c-1])
            arr[c++]=sum;
        }
     sort(arr,arr+c);
     for(int i=0;i<c;i++)
         cout<<arr[i]<<" ";
     cout<<endl;
    }
 return 0;
}

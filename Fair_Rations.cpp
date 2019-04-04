#include<iostream>

using namespace std;

int main()
{int n,*arr,count=0;
 cin>>n;
 arr=new int[n];
 for(int i=0;i<n;i++)
    {cin>>arr[i];
    }
 for(int i=0;i<n-1;i++)
    {if(arr[i]%2!=0)
        {arr[i]++;
         arr[i+1]++;
         count+=2;
        }
    }
 if(arr[n-1]%2==0)
    cout<<count;
 else
    cout<<"NO";
 return 0;
}

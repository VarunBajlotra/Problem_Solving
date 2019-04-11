#include<iostream>

using namespace std;

int main()
{int n,arr[1005],count=0;
 cin>>n;
 for(int i=0;i<n;i++)
    cin>>arr[i];
 for(int i=0;i<n-1;i++)
    {int j=i+1;
     int num=arr[j];
     while(num<arr[j-1]&&j>0)
        {arr[j]=arr[j-1];
         count++;
         j--;
        }
     arr[j]=num;
    }
 cout<<count;
 return 0;
}

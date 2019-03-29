#include<iostream>

using namespace std;

int main()
{int n,k,*arr,count=0;
 cin>>n>>k;
 arr=new int[n+1];
 for(int i=1;i<=n;i++)
    cin>>arr[i];
 int i=1,page=1,num=1,temp;
 while(i<=n)
    {temp=0;
     if(num==page)
        {count++;
        }
     if(num%k==0)
        {page++;
         temp=1;
        }
     if(num==arr[i])
        {if(temp!=1)
            page++;
         num=0;
         i++;
        }
     num++;
    }
 cout<<count;
 return 0;
}

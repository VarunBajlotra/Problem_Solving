#include<iostream>
#include<cmath>

using namespace std;

int main()
{long long p,q;
 cin>>p>>q;
 int coun=0;
 for(long long i=p;i<=q;i++)
    {long long sq=i*i,res1,res2,n;
     long long num=i,count=0;
     while(num)
        {count++;
         num/=10;
        }
     n=pow(10,count);
     res1=sq%n;
     res2=sq/n;
     if(res1+res2==i)
        {cout<<i<<" ";
         coun++;
        }
    }
 if(coun==0)
    cout<<"INVALID RANGE";
 return 0;
}

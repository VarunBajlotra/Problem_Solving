#include<iostream>

using namespace std;

int main()
{int n,num1,num,*left,*equal,*right,c1=0,c2=0,c3=0;
 cin>>n;
 left=new int[n];
 equal=new int[n];
 right=new int[n];
 cin>>num1;
 equal[c2++]=num1;
 for(int i=1;i<n;i++)
    {cin>>num;
     if(num<num1)
        left[c1++]=num;
     else if(num==num1)
        equal[c2++]=num;
     else if(num>num1)
        right[c3++]=num;
    }
 for(int i=0;i<c1;i++)
    cout<<left[i]<<" ";
 for(int i=0;i<c2;i++)
    cout<<equal[i]<<" ";
 for(int i=0;i<c3;i++)
    cout<<right[i]<<" ";
 return 0;
}


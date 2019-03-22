#include<iostream>

using namespace std;

int main()
{int num1=0,num2,n,m,*arr1,c=0,num;
 cin>>n;
 arr1=new int[n];
 for(int i=0;i<n;i++)
    {cin>>num2;
     if(num1!=num2)
        {arr1[c]=num2;
         c++;
        }
     num1=num2;
    }
 c--;   
 cin>>m;
 for(int i=0;i<m;i++)
    {cin>>num;
     while(num>=arr1[c]&&c>=0)
        {c--;
        }
     cout<<c+2<<endl;
    }
 return 0;
}


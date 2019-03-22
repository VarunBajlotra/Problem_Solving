#include<iostream>

using namespace std;

int main()
{int n,k,x,y,ans=0;
 cin>>n>>k;
 cin>>x>>y;
 x--;
 y--;
 n--;
 int dl=y;
 int dr=n-y;
 int dt=x;
 int db=n-x;
 int dtl,dtr,dbl,dbr;
 if(x+y<n)
    {dbl=y;
     dtr=x;
    }
 else
    {dbl=n-x;
     dtr=n-y;
    }
 if(y>x)
    {dtl=x;
     dbr=n-y;
    }
 else
    {dtl=y;
     dbr=n-x;
    }
 for(int i=0;i<k;i++)
    {int num1,num2;
     cin>>num1>>num2;
     num1--;
     num2--;
     if(num1==x)
        {if(num2<y)
            {int dist=y-num2-1;
             dl=min(dl,dist);
            }
         else
            {int dist=num2-y-1;
             dr=min(dr,dist);
            }
        }
     else if(num2==y)
        {if(num1<x)
            {int dist=x-num1-1;
             dt=min(dt,dist);
            }
         else
            {int dist=num1-x-1;
             db=min(db,dist);
            }
        }
     else if(num1+num2==x+y)
        {if(num2>y)
            {int dist=num2-y-1;
             dtr=min(dtr,dist);
            }
         else
            {int dist=y-num2-1;
             dbl=min(dbl,dist); 
            }
        }
     else if(num1-num2==x-y)
        {if(num1<x)
            {int dist=x-num1-1;
             dtl=min(dtl,dist);
            }
         else
            {int dist=num1-x-1;
             dbr=min(dbr,dist);
            }
        }
    }
 ans=dl+dr+dt+db+dtl+dtr+dbl+dbr;
 cout<<ans;
 return 0;
}

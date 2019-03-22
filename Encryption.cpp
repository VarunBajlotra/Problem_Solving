#include<iostream>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{char str[100],str1[100],res[1000][100],res1[100],c;
 cin.getline(str,100);
 int len_=strlen(str);
 int k1=0,i=0;
 do
    {if(str[i]!=' ')
        str1[k1++]=str[i];
     i++;
    }
 while(i<len_);
 str1[k1]='\0';
 int len=strlen(str1);
 int sqroot=sqrt(len);
 int row=sqroot,col=sqroot+1,c1=0,c2;
 if(row*col<len)
    row++;
 if(len==sqroot*sqroot)
    col--;
 for(int i=0;i<row;i++)
    {for(int j=0;j<col;j++)
        {res[i][j]=str1[c1++];
         if(c1==k1)
            {c2=j;
             break;
            }
        }
    }
 int temp=0;
 for(int j=0;j<col;j++)
    {for(int i=0;i<row;i++)
        {cout<<res[i][j];
        }
     if(j==c2&&temp==0&&j!=col-1)
        {row--;
         temp=1;
        }
     cout<<" ";
    }
 return 0;
}


#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{int n,m,arr[105][105],area=0;
 cin>>n>>m;
 for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin>>arr[i][j];
 area+=2*n*m;
 for(int j=0;j<m;j++)
    {area+=arr[0][j];
     area+=arr[n-1][j];
    }
 for(int i=0;i<n;i++)
    {area+=arr[i][0];
     area+=arr[i][m-1];
    }
 for(int i=0;i<n;i++)
    {for(int j=0;j<m-1;j++)
        {area+=abs(arr[i][j]-arr[i][j+1]);
        }
    }
 for(int j=0;j<m;j++)
    {for(int i=0;i<n-1;i++)
        {area+=abs(arr[i][j]-arr[i+1][j]);
        }
    }
 cout<<area;
 return 0;
}


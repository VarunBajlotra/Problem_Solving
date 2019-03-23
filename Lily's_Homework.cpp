#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortinrev(const pair<int,int> &a,const pair<int,int> &b) 
{return (a.first > b.first); 
}

int main()
{int n,count1=0,count2=0;
 cin>>n;
 vector< pair <int,int> > arr(n+1);
 for(int i=1;i<=n;i++)
    {cin>>arr[i].first;
     arr[i].second=i;
    }
 sort(arr.begin(),arr.end());
 int i=1;
 while(i<=n)
    {if(arr[i].second!=i)
        {swap( arr[i].first,arr[arr[i].second].first );
         swap( arr[i].second,arr[arr[i].second].second );
         count1++;
        }
     else
        i++;
    }
 sort(arr.begin(),arr.end());
 i=n;
 while(i>0)
    {if(arr[i].second!=n+1-i)
        {swap( arr[i].first,arr[n+1-arr[i].second].first );
         swap( arr[i].second,arr[n+1-arr[i].second].second );
         count2++;
        }
     else
        i--;
    }
 cout<<min(count1,count2);
 return 0;
}

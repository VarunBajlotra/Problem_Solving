#include<iostream>
#include<string>

using namespace std;

string s[]={" o' clock","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};

int main()
{int h,m;
 cin>>h>>m;
 if(m<30)
    {if(m==0)
        {cout<<s[h]<<s[m];
        }
     else if(m==1)
         {cout<<s[m]<<" minute past "<<s[h];
         }
     else if(m==15)
        {cout<<s[m]<<" past "<<s[h];
        }
     else
        {cout<<s[m]<<" minutes past "<<s[h];
        }                    
    }
 else if(m==30)
    {cout<<s[m]<<" past "<<s[h];
    }
 else if(m>30)
    {if(m==45)
        cout<<s[60-m]<<" to "<<s[h+1];
     else
        cout<<s[60-m]<<" minutes to "<<s[h+1];
    }
 return 0;
}


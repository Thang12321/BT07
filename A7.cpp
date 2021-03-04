#include <iostream>
#include <cstring>
using namespace std;
int demxau(string a,string b)
{int  dem=0;
    int x=a.length();
    for(int i=0;i<=b.length()-x; i++)
    {int cuoi=x+i;
        string con;
        for(int k=i;k<cuoi;k++)
            con=con+b[k];
            char s1[x];

                char y[x];

for(int i=0;i<a.length();i++) {s1[i]=a[i]; y[i]=con[i];}

       if(strcmp(s1,y)==0)dem++;
    }
    return dem;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<demxau(a,b);
}

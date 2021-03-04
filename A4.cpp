#include <iostream>
#include<algorithm>
using namespace std;
void timkiemnhiphan(int *a,int dau,int cuoi,int socantim)
{
 int mid=(dau+cuoi)/2;
 if(a[mid]==socantim) {cout<<"co"; exit(0);}
 if(dau>=cuoi) {cout<<"ko"; exit(0);}
 if(a[mid]<socantim) timkiemnhiphan(a,mid+1,cuoi,socantim);
if(a[mid]>socantim)  timkiemnhiphan(a,dau,mid-1,socantim);

}
main()
{
    int socantim;
    cin>>socantim;
    int *a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>*(a+i);
    sort(a,a+n);
  timkiemnhiphan(a,0,n-1,socantim);
}

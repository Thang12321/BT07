#include <iostream>
using namespace std;
void f(int a[])
{
    cout<<sizeof(a);
}
main()
{
    int a[10];
    cout<<sizeof(a)<<endl;
    f(a);
}

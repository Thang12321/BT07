#include <iostream>
using namespace std;
char* weird_string() {
   char c[] = "123345";
   return c;
}
main()
{
    char * x=weird_string();
    cout<<*x;
}
// bien dich canh bao dia chi cua bien dia phuong
// khong co output

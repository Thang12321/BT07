#include <iostream>
using namespace std;
main()
{
    // con tro chua khoi tao
    {
        int *px;
        *px=0;
    }
    // truy nhap con tro NULL
    {
        int *px=NULL;
        *px=0;
    }
    // dangling references
    {
        int c;
        return &c;
    }

}

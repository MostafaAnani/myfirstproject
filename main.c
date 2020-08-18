#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 5;

    printf("%d",&x);

    int* ptr;

    ptr = &x;

   *ptr = 44;

    printf("\n%d",x);

    return 0;



}

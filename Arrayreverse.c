#include <stdio.h>
//Reverse the array
int main()
{
   int a[9]={1,2,3,4,5,6,7,8,9};
    int i;
    //Original order
    for(i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    //Reverse order
    for(i=8;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

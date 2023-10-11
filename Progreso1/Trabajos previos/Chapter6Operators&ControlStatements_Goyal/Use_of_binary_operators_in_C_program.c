#include <stdio.h>
main()
{
    int x;
    int y;
    int a,b,c,d,e;
    printf("enter values of x and y separates by a space: ");
    scanf("%d %d",&x,&y);
    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;
    e=x%y;
    printf ("a= %d\n", a);
    printf("b= %d\n",b);
    printf ("c= %d\n", c);
    printf("d= %d\n",d);
    printf ("e= %d\n",e);
}
    /*if x=50 and y=3 then
    a=53
    b=47
    c=150
    d=16
    e=2
    */
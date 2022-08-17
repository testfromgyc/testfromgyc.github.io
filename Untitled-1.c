#include<stdio.h>
#include<conio.h>
void main()
{ 
        int a,b;
        int s;
        clrscr();
        printf ("Enter a number");
        scanf ("%d",&a);
        printf ("Enter another number");
        scanf ("%d",&b);
        s = a+b;
        printf ("The sum is %d",s);
        getch();
}
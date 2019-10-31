#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,n,c,i,d;
 clrscr();
 printf("Enter the number of terms: ");
 scanf("%d",&n);
 printf("%d \n%d \n",a,b);
 for(i=3;i<=n;i++)
 {
  c=a+b;
  printf("%d \n",c);
  a=b;
  b=c;
  }
  getch();
  }
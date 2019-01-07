#include <stdio.h>
#include <conio.h>
void main()
{
 int a=0,b=0,c=0,ch,x;

 FILE *fp;
 fp=fopen("ww.txt","w");

 clrscr();
while(1)
{
printf("enter your vote 1 for a\nenter  2 for b\nenter 3 for c\n enter more than 3 to exit");
scanf("%d",&ch);
if(ch==1){
    a=	a+1;
 clrscr();
    }
else if(ch==2){
    b=b+1;
    clrscr();
}
else if(ch==3)

    {c=c+1;
   clrscr();
  }
else if(ch>3)
 break;
}
if(a>b && a>c)
fprintf(fp,"a wins\n");
else if(b>a&&b>c)
fprintf(fp,"b wins\n");
else
fprintf(fp,"c wins\n");
fprintf(fp," a's votes are %d\n",a);
fprintf(fp,"b's votes are %d\n",b);
fprintf(fp,"c's votes are %d\n",c);
getch();
}
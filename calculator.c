#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int k=0;
int result=0;
int menu()
{
    int ch;
    
    printf(" -----------------SIMPLE CALCULATOR-----------------\n");
    printf("\n RESULT IS : %d\n",result);
    printf("1.ADD \n");
    printf("2.Subtarct \n");
    printf("3.Multiply \n");
    printf("4.Divide \n");
    printf("5.Get remainder \n");
    printf("6.clear \n");
    printf("7.Exit \n");
    printf("8.Square root\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    return (ch);
     
}
void square()
{
    int a;
    if (k)
    {
      printf("Your value is %d\n",result);
      a=sqrt(result);
      printf("Sqaure root is %d",a);
    }
    else{
    printf("Enter one value:");
    scanf("%d",&a);
    result=sqrt(a);
    printf(" Sqaure is :%d",result);
    }
}
void add()
{
    int a,b;
    if(k)
    {
     printf("\n Enter one value:");
     scanf("%d",&a);
     result+=a;
     printf("\n result is: %d",result);

    }
    else
    {
     printf("Enyer two values:");
     scanf("%d %d",&a,&b);
     result=a+b;
     printf("REsult is %d",result);
    }
    k=1;
}
void sub()
{
    int a,b;
    if(k)
    {
     printf("\n Enter one value:");
     scanf("%d",&a);
     result-=a;
     printf("\n result is: %d",result);

    }
    else
    {
     printf("Enyer two values:");
     scanf("%d %d",&a,&b);
     result=a-b;
     printf("REsult is %d",result);
    }
    k=1;
}
void mul()
{
    int a,b;
    if(k)
    {
     printf("\n Enter one value:");
     scanf("%d",&a);
     result*=a;
     printf("\n result is: %d",result);

    }
    else
    {
     printf("Enyer two values:");
     scanf("%d %d",&a,&b);
     result=a*b;
     printf("REsult is %d",result);
    }
    k=1;
}
void div2()
{
    int a,b;
    if(k)
    {
     printf("\n Enter one value:");
     scanf("%d",&a);
     result/=a;
     printf("\n result is: %d",result);

    }
    else
    {
     printf("Enyer two values:");
     scanf("%d %d",&a,&b);
     result=a/b;
     printf("REsult is %d",result);
    }
    k=1;
}
void mod()
{
    int a,b;
    if(k)
    {
     printf("\n Enter one value:");
     scanf("%d",&a);
     result%=a;
     printf("\n result is: %d",result);

    }
    else
    {
     printf("Enyer two values:");
     scanf("%d %d",&a,&b);
     result=a%b;
     printf("REsult is %d",result);
    }
    k=1;
}
void clear()
{
printf("old data cleared:");
result=0;
k=0;
}
void main()
{
    while (1)
    {
        system("cls");
switch (menu())
{
case 1:
add();
k=1;
break;
case 2:
sub();
k=1;
break;
case 3:
mul();
k=1;
break;
case 4:
div2();
k=1;
break;
case 5:
mod();
k=1;
break;
case 6:
clear();
break;
case 7:
abort();
case 8:
square();
k=1;
break;
}
getch();
    }
}
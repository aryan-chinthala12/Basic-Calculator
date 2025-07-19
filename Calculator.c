#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int a,b,x,choice,answer;
    
    printf("\n*Basic Calculator*\n");
    printf("-----------------------\n");
   
    printf("\nwhat do u want to use : \n1]Addition. \t2]Subtraction. \t3]Multiplication. \t4]Division.");
    printf("\nWhich Arithmetic operation u wanna do[select from above options] : ");
    scanf("%d",&choice);
   
    printf("\nEnter your no:");
    scanf("%d",&a);
    printf("\nEnter your no:");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
        answer=add(a,b);
        printf("\nresult=%d",answer);
        break;
        
        case 2:
        answer=sub(a,b);
        printf("\nresult=%d",answer);
        break;

        case 3:
        answer=mul(a,b);
        printf("\nresult=%d",answer);
        break;

        case 4:
        answer=div(a,b);
        printf("\nresult=%d",answer);
        break;

        default:
        printf("\nInvalid Choice.....");
        break;

    }
    printf("\nEnter zero to end the function:");
    scanf("%d",&x);
    if(x!=0)
    {
        main();
    }
    return 0;
}
int add(int x,int y)
{
    int res;
    res=x+y;
    return res;
}
int sub(int x,int y)
{
    int res;
    res=x-y;
    return res;
}
int mul(int x,int y)
{
    int res;
    res=x*y;
    return res;
}
int div(int x,int y)
{
    int res;
    res=x/y;
    return res;
}
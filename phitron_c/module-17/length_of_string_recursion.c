#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int 1=fun(a,i+1);
    return 1+1;
}
int main()
{

    char a[6]= "mariya";
    int length = fun(a,0);
    printf("%d\n",length);
    return 0;
}
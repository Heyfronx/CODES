#include<stdio.h>
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int c, d;
    printf("enter two numbers: ");
    scanf("%d %d\n",&c,&d);
    swap(&c,&d);
    printf("the changed values are: %d %d",c,d);
}


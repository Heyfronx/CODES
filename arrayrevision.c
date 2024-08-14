#include<stdio.h>
int main()
{
    // int arr[5]={1,2,3,4,5};
    // printf("%d\n",arr[2]);
    // arr[0]=20;
    // printf("%d",arr[0]);
    // float brr[3]={1.2, 3.4, 5.7};
    // for(int i=0;i<=3;i++)
    // {
    //     printf("%f",brr[i]);//printing of whole array.
    // }
    //char crr[3]={'a','s','Y'};
    //printf("%c",crr[0]);
    // int arr[4];
    // for(int i=0;i<=3;i++)
    // {
    //     printf("enter first element:%d\n",i+1);
    //     scanf("%d", &arr[i]);
    // }
    // printf("%d ", arr[0]);
    // int arr[4];
    // for(int i=0;i<=3;i++)
    // {
    //     printf("enter element:%d", i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int j=3;j>=0;j--)//reversing an array
    // {
    //     printf("%d ",arr[j]);
    // }
    // int marks[10];//printing marks of students
    // for(int i=0;i<=9;i++)
    // {
    //     printf("enter marks of student:%d\n",i+1);
    //     scanf("%d", &marks[i]);
    // }
    // for(int k=0;k<=9;k++) printf("%d ", marks[k]);
    // for(int j=0;j<=9;j++)
    // {
    //     if(marks[j]<=35)
    //     {
    //         printf("%d ", j);
    //     }
    // }
    // int arr[3]={1,2,3};
    // printf("%p", &arr[0]);//printing address of zeroth element. %p is used for printing address of element.
    // int arr[5]={23,45,4,3,6};
    // int prod=1;
    // for(int i=0;i<=4;i++)
    // {
    //     prod=prod*arr[i];//product of elements.
    // printf("%d", prod);//printinf sum of elements
    // int n;
    // printf("enter size of elements");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<=n-1;i++)//taking elements less than initial value
    // {
    //     printf("enter element:%d\n", i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=n-1;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // int arr[4]={-2,-5,-90,-110};
    // int min=arr[0];
    // for(int i=0;i<=3;i++)
    // {
    //     if(min>arr[i]){
    //         min=arr[i];
    //     }

    // }
    // printf("%d",min);//printing maximum and minimum element.
    // int arr[6];
    // for(int i=0;i<=5;i++)
    // {
    //     printf("enter elements: %d\n",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=5;i++)
    // {
    //     if(i%2==0)
    //     {
    //         arr[i]=arr[i]*2;
    //     }
    //     else
    //     {
    //         arr[i]+=10;
    //     }
    // }
    // for(int j=0;j<=5;j++)
    // {
    //     printf("%d ",arr[j]);}
    int arr[5]={1,2,3,4,50};
    int p,v;
    printf("enter the element you want to insert");
    scanf("%d\n",&v);
    printf("enter the position at which you want to add an element");
    scanf("%d",&p);
    for(int i=0;i<=4;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int j=(5-1);j>(p-1);j--)
    {
        arr[j+1]=arr[j];
    }
    arr[p-1]=v;
    for(int i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }

}
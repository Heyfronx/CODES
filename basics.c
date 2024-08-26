#include<stdio.h>//declaration of 2d arrays
int main()
{
// {
//     int r,c;
//     printf("enter the number of rows and columns: ");
//     scanf("%d %d ", &r,&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//     printf("\n");
//     }
// }
    //addition of two matrices;
    // int r=3;
    // int c=3;
    // int arr[r][c];
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // int brr[r][c];
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         scanf("%d",&brr[i][j]);
    //     }
    // }
    // int res[r][c];
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         res[i][j]=arr[i][j]+brr[i][j];
    //         printf("%d ", res[i][j]);
    //     }
    // printf("\n");
    // }
    //addition of two matrix without using third matrix
    // int arr[2][2]={1,2,3,4};
    // int brr[2][2]={3,4,7,10};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         arr[i][j]=arr[i][j]+brr[i][j];
    //         printf("%d ",arr[i][j]);
    //     }
    // printf("\n");
    // }
    //sum of matrix
    // int sum = 0;
    // int arr[2][2]={1,2,3,4};
    // for(int i=0;i<2;i++)
    // {
    //     for (int j=0;j<2;j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    // }
    // printf("%d ",sum);
    //to find max and min element in 2d array
    // int arr[2][3]={1,2,10,13,19,20};
    // int max=arr[0][0];
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(max<arr[i][j])
    //         {
    //             max=arr[i][j];
    //         }
    //     }
    // }
    // printf("the max element is: %d",max);
    // int arr[2][3]={1,2,10,13,19,20};
    // int min=arr[0][0];
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if(min>arr[i][j])
    //         {
    //             min=arr[i][j];
    //         }
    //     }
    // }
    // printf("the min element is: %d",min);
    //to find the inner rectangle sum of 2d array
    // int sum=0;
    // int arr[3][4]={1,2,3,4,10,11,12,32,9,10,2,3};
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         printf("%d ",arr[i][j]);

    //     }
    // printf("\n");
    // }
    // for(int i=0;i<=1;i++)
    // {
    //     for(int j=1;j<=3;j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    // }
    // printf("%d ",sum);

// int index=0; int maxsum=0;
// int arr[3][3]={1,2,3,4,5,6,1,5,7};
//     for(int i=0;i<3;i++)
//     {
//         int sum=0;
//         for(int j=0;j<3;j++)
//         {
//             sum+=arr[i][j];

//         }
//     if(maxsum<sum)
//     {
//         maxsum=sum;
//         index=i;
//     }
//     printf("\n");
// }
// printf("%d ",index); printf("%d ",maxsum);
// }

//to find row with max of ones.
// int maxcount=0; int idx=0;
// int arr[3][3]={1,1,0,1,0,0,1,1,1};
// for(int i=0;i<3;i++)
// {
//     int count =0;
//     for(int j=0;j<3;j++)
//     {
//         if(arr[i][j]==1)
//         count++;
//     }
// if(maxcount<count)
// {
//     maxcount=count;
//     idx=i;
// }
// printf("\n");
// }
// printf("%d ",maxcount);
// printf("%d ", idx);
// }
//transpose of matrix
// int a[2][3]={1,4,5,6,3,8};
// int b[3][2];
// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         printf("%d ",a[i][j]);
//     }
//     printf("\n");
// }

// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<2;j++)
//     {
//         printf("%d ",a[j][i]);//without using second matrix
//     }
//     printf("\n");
// }
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<2;j++)
//     {
//         b[i][j]=a[j][i];
//         printf("%d ",b[i][j]);
//     }
//     printf("\n");
// }
//to take transpose of square matrix
    // int arr[4][4]={1,2,3,4,5,6,7,8,9,10,4,56,73,89,12,11};
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    // printf("\n");
    // }
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<4;j++)
    //     {
    //         printf("%d ",arr[j][i]);
    //     }
    // printf("\n");
    // }
//     int d;
//     printf("enter number of rows/columns: ");
//     scanf("%d",&d);
//     int arr[d][d];
//     for(int i=0;i<d;i++)
//     {
//         for(int j=0;j<d;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<d;i++)
//     {
//         for(int j=i;j<d;j++)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     for(int i=0;i<d;i++)
//     {
//         for(int j=0;j<d;j++)
//         {
//             printf("%d",arr[i][j]);
//         }

// }
//rotate matrix 90 degree
    // int d;
    // printf("enter number of rows/columns: ");
    // scanf("%d",&d);
    // int arr[d][d];
    // for(int i=0;i<d;i++)
    // {
    //     for(int j=0;j<d;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(int i=0;i<d;i++)
    // {
    //     for(int j=i;j<d;j++)
    //     {
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
    // }
    // for(int i=0;i<d;i++)
    // {
    //     for(int j=0;j<d;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    // printf("\n");
    // }
    // for(int i=0;i<d;i++)
    // {
    //     int j=0;
    //     int k=d-1;
    //     while(j<k)
    //     {
    //         int t=arr[i][j];
    //         arr[i][j]=arr[i][k];
    //         arr[i][k]=t;
    //         j++;
    //         k--;
    //     }
    // }
    // for(int i=0;i<d;i++)
    // {
    //     for(int j=0;j<d;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    // printf("\n");
    // }
    //matrix multiplication
    // int m;
    // printf("enter no. of rows of first matrix: ");
    // scanf("%d",&m);//first mat
    // int n;
    // printf("enter no. of columns of first matrix: ");
    // scanf("%d",&n);
    // int arr[m][n];
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    // printf("\n");
    // }

    // int p;
    // printf("enter no. of rows of 2nd matrix: ");
    // scanf("%d",&p);//second matrix.
    // int q;
    // printf("enter no. of columns of 2nd matrix: ");
    // scanf("%d",&q);
    // int brr[p][q];
    // for(int i=0;i<p;i++)
    // {
    //     for(int j=0;j<q;j++)
    //     {
    //         scanf("%d",&brr[i][j]);
    //     }
    // }
    // for(int i=0;i<p;i++)
    // {
    //     for(int j=0;j<q;j++)
    //     {
    //         printf("%d ",brr[i][j]);
    //     }
    // printf("\n");
    // }
    // if(n!=p)
    // {
    //     printf("matrix can't be multiplied");
    // }
    // else 
    // {
    //     int res[m][q]; int rc=n;//rows and columns vary
    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<q;j++)
    //         {
    //             res[i][j]=0;
    //             //i row of a*jcolumn of b;
    //             for(int k=0;k<rc;k++)
    //             {
    //                 res[i][j]+=arr[i][k]*brr[k][j];
    //             }
    //         }
            
    //     }
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<q;j++)
    //     {
    //         printf("%d ",res[i][j]);
    //     }
    // printf("\n");
    // }
    // }

//wave printing
    // int m;
    // printf("enter no. of rows of first matrix: ");
    // scanf("%d",&m);//first mat
    // int n;
    // printf("enter no. of columns of first matrix: ");
    // scanf("%d",&n);
    // int arr[m][n];
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(int i=0;i<m;i++)
    // {
    //     if(i%2==0)
    //     {
    //         for(int j=0;j<n;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     }
    //     else
    //     {
    //         for(int j=n-1;j>=0;j--)
    //         {
    //             printf("%d ",arr[i][j]);
    //         }
    //     printf("\n");
    //     }
    // }

//wave printing 2
int arr[3][3]={1,2,3,4,5,6,7,8,9};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for(int j=0;j<3;j++)
{
    if(j%2==0)
    {
        for(int i=2;i>=0;i--)
        {
            printf("%d ",arr[i][j]);
        }
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            printf("%d ",arr[i][j]);
        }

    }
}
}
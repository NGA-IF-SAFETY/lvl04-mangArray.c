#include <stdio.h> 

#include <conio.h>

void main ()

{

    float a[10][10],max;

    int i,j,m,n;

    printf("nhap so dong cua ma tran  :");

    scanf("%d",&m);

    printf("\n nhap so cot cua ma tran :");

    scanf("%d",&n);

    for (i=0;i<m;i++)

        for (j=0;j<n;j++)

    {

        printf("a[%d,%d]=",i,j);

        scanf("%f/n",&a[i][j]);

    }

    max=a[0][0];

    for (i=0;i<m;i++)

      for (j=0;j<n;j++)

        if (a[i][j]>max) max=a[i][j];

    printf("so lon nhat la %0.2f ",max);

}

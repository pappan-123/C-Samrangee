// Write a C program to add two matrices of order 2×2.

// Example

// Matrix A:

// 1 2
// 3 4

// Matrix B:

// 5 6
// 7 8

// Result:

// 6  8
// 10 12

#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;

    printf("Enter Matrix A (4 elements):\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix B (4 elements):\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nAddition Matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Write a C program to subtract Matrix B from Matrix A.

#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i,j;

    printf("Enter Matrix A:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("\nSubtraction Matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Write a C program to find the transpose of a matrix.

// Example

// Original Matrix:

// 1 2 3
// 4 5 6

// Transpose:

// 1 4
// 2 5
// 3 6

#include <stdio.h>

int main()
{
    int a[2][3];
    int i,j;

    printf("Enter 6 elements:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}


// Write a C program to find the sum of elements in each row of a 3×3 matrix.

// Example

// 1 2 3
// 4 5 6
// 7 8 9

// Output:

// Row 1 Sum = 6
// Row 2 Sum = 15
// Row 3 Sum = 24


#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,sum;

    printf("Enter 9 elements:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        sum=0;

        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }

        printf("Row %d Sum = %d\n",i+1,sum);
    }

    return 0;
}


// Write a C program to find the sum of each column of a 3×3 matrix.

// Example

// 1 2 3
// 4 5 6
// 7 8 9

// Output:

// Column 1 Sum = 12
// Column 2 Sum = 15
// Column 3 Sum = 18


#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,sum;

    printf("Enter 9 elements:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(j=0;j<3;j++)
    {
        sum=0;

        for(i=0;i<3;i++)
        {
            sum=sum+a[i][j];
        }

        printf("Column %d Sum = %d\n",j+1,sum);
    }

    return 0;
}


// Write a C program to find the sum of the principal diagonal elements of a 3×3 matrix.

// Example

// 1 2 3
// 4 5 6
// 7 8 9

// Principal Diagonal:

// 1 5 9

//Sum

//15


#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,sum=0;

    printf("Enter 9 elements:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        sum=sum+a[i][i];
    }

    printf("Diagonal Sum = %d",sum);

    return 0;
}
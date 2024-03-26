#include <stdio.h>

int main()
{
    int m1[10][10];
    int m2[10][10];

    int m1_rows, m1_cols;
    int m2_rows, m2_cols;

    printf("------ Menu ------\n");
    printf("a. Addition of two matrices\n");
    printf("b. Subtraction of two matrices\n");
    printf("c. Finding upper and triangular matrices\n");
    printf("d. Transpose of a matrix\n");
    printf("e. Product of two matrices\n");

    char option;
    printf("Enter your option: ");
    scanf("%c", &option);

    switch (option - 'a' + 1)
    {

    // 1. Addtion
    case 1:
        printf("Enter the no of rows in matrix 1: ");
        scanf("%d", &m1_rows);

        printf("Enter the no of cols in matrix 1: ");
        scanf("%d", &m1_cols);

        printf("\n");

        printf("Enter the no of rows in matrix 2: ");
        scanf("%d", &m2_rows);

        printf("Enter the no of cols in matrix 2: ");
        scanf("%d", &m2_cols);

        if (!(m1_rows == m2_rows && m1_cols == m2_cols))
        {
            printf("Matrices are not valid");
            break;
        }

        // input m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m1[rows][cols]);
            }
        }

        // input m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m2[rows][cols]);
            }
        }

        // display m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // display m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("%d ", m2[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // m1 + m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("%d ", m1[rows][cols] + m2[rows][cols]);
            }
            printf("\n");
        }

        break;

    // 2. Subtraction
    case 2:
        printf("Enter the no of rows in matrix 1: ");
        scanf("%d", &m1_rows);

        printf("Enter the no of cols in matrix 1: ");
        scanf("%d", &m1_cols);

        printf("\n");

        printf("Enter the no of rows in matrix 2: ");
        scanf("%d", &m2_rows);

        printf("Enter the no of cols in matrix 2: ");
        scanf("%d", &m2_cols);

        if (!(m1_rows == m2_rows && m1_cols == m2_cols))
        {
            printf("Matrices are not valid");
            break;
        }

        // input m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m1[rows][cols]);
            }
        }

        // input m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m2[rows][cols]);
            }
        }

        // display m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // display m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("%d ", m2[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // m1 - m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("%d ", m1[rows][cols] - m2[rows][cols]);
            }
            printf("\n");
        }

        break;

    // 3. Upper and Lower triangular matrices
    case 3:
        printf("Enter the no of rows in matrix: ");
        scanf("%d", &m1_rows);

        printf("Enter the no of cols in matrix: ");
        scanf("%d", &m1_cols);

        // input m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m1[rows][cols]);
            }
        }

        // display m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // upper
        printf("Upper matrix: \n");

        for (int i = 0; i < m1_rows; i++)
        {
            for (int j = 0; j < m1_cols; j++)
            {
                if (i >= j)
                    printf("%d ", m1[i][j]);
                else
                    printf("%d ", 0);
            }
            printf("\n");
        }

        printf("\n");

        // lower
        printf("Lower matrix: \n");

        for (int i = 0; i < m1_rows; i++)
        {
            for (int j = 0; j < m1_cols; j++)
            {
                if (i <= j)
                    printf("%d ", m1[i][j]);
                else
                    printf("%d ", 0);
            }
            printf("\n");
        }

        break;

    // 4. Transpose
    case 4:
        printf("Enter the no of rows in matrix: ");
        scanf("%d", &m1_rows);

        printf("Enter the no of cols in matrix: ");
        scanf("%d", &m1_cols);

        // input m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("Enter the element(%d, %d)", rows, cols);
                scanf("%d", &m1[rows][cols]);
            }
        }

        // display m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // transpose

        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[cols][rows]);
            }
            printf("\n");
        }

        // alternative:
        /* for (int cols = 0; cols < m1_cols; cols++)
        {
            for (int rows = 0; rows < m1_rows; rows++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        } */

        break;

    // 5. Product
    case 5:

        printf("Enter the no of rows in matrix 1: ");
        scanf("%d", &m1_rows);

        printf("Enter the no of cols in matrix 1: ");
        scanf("%d", &m1_cols);

        printf("\n");

        printf("Enter the no of rows in matrix 2: ");
        scanf("%d", &m2_rows);

        printf("Enter the no of cols in matrix 2: ");
        scanf("%d", &m2_cols);

        if (m1_cols != m2_rows)
        {
            printf("Matrices are not valid\n");
            break;
        }

        printf("Enter first matrix\n");
        // input m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("Enter the element(%d, %d): ", rows, cols);
                scanf("%d", &m1[rows][cols]);
            }
        }

        printf("\n");
        printf("Enter second matrix\n");

        // input m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("Enter the element(%d, %d): ", rows, cols);
                scanf("%d", &m2[rows][cols]);
            }
        }

        // display m1
        for (int rows = 0; rows < m1_rows; rows++)
        {
            for (int cols = 0; cols < m1_cols; cols++)
            {
                printf("%d ", m1[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        // display m2
        for (int rows = 0; rows < m2_rows; rows++)
        {
            for (int cols = 0; cols < m2_cols; cols++)
            {
                printf("%d ", m2[rows][cols]);
            }
            printf("\n");
        }

        printf("\n");

        int n = m1_cols; // or m2_rows

        // multipy 2 matrices
        for (int i = 0; i < m1_rows; i++)
        {
            for (int j = 0; j < m2_cols; j++)
            {
                int sum = 0;
                for (int k = 0; k <= n - 1; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }

        printf("\n");

        break;

    default:
        printf("Invalid option");
        break;
    }

    return 0;
}
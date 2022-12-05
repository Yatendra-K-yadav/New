#include <stdio.h>

int main()
{
    int select;
    do
    {
        int n1, n2, n3, n4;
        printf("Enter first number: ");
        scanf("%d", &n1);
        printf("Enter second number: ");
        scanf("%d", &n2);
        printf("Enter third number: ");
        scanf("%d", &n3);
        printf("Enter fourth number: ");
        scanf("%d", &n4);

        printf(" Press 1 to Display the smallest number entered  \n Press 2 to Display the largest number entered \n Press 3 To Display the sum of the five numbers entered\n Press 4 to Display the average of the five numbers entered\n Press 5 to EXIT!!");
        printf("\nENTER YOUR CHOICE BETWEEN 1-5:  ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:

            if ((n1 < n2) && (n2 < n3) && (n3 < n4))
            {

                printf("\nSmallest: %d\n", n1);
            }
            else if ((n4 < n3) && (n3 < n2) && (n2 < n1))
            {

                printf("\nSmallest: %d\n", n4);
            }
            else if ((n3 < n4 || n3 < n1) && (n1 < n4 || n4 < n1) && (n1 < n2 || n4 < n2))
            {

                printf("\nSmallest: %d\n", n3);
            }
            else if ((n2 < n1 || n2 < n4) && (n1 < n4 || n4 < n1) && (n4 < n3 || n1 < n3))
            {

                printf("\nSmallest: %d\n", n2);
            }

            break;

        case 2:

            if (n1 > n2)
            {
                if (n1 > n3)
                {
                    if (n1 > n4)
                    {
                        printf("%d is largest\n", n1);
                    }
                    else
                    {
                        printf("%d is largest\n", n4);
                    }
                }
            }
            else if (n2 > n3)
            {
                if (n2 > n4)
                {
                    printf("%d is largest\n", n2);
                }
                else
                {
                    printf("%d is largest\n", n4);
                }
            }
            else if (n3 > n4)
            {
                printf("%d is largest\n", n3);
            }
            else
            {
                printf("%d is largest\n", n4);
            }

            break;

        case 3:

            printf("Sum of the numbers is: %d\n", n1 + n2 + n3 + n4);

            break;

        case 4:

            printf("Average of the numbers is: %d\n", (n1 + n2 + n3 + n4) / 4);
            break;

        case 5:

            printf("\n\nYOU HAVE EXITED THE MENU SUCCESSFULLY...!!\n");

            break;
        default:
            printf("enter a number from 1-4\n");
            break;
        }

    } while (select != 5);
    return 0;
}
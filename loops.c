#include <stdio.h>
int main()
{
    /*int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d", index);
        index = index + 1;
    } while (index < num);*/
    int i,j,num;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",i);
        for ( j = 0; j < 5; j++)
        {
            printf("enter number. to exit enter 0\n");
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    

    return 0;
}

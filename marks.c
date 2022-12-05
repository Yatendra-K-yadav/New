#include<stdio.h>
int main()
{
    int maths, science ;
    printf("Enter the marks you got in maths:\n");
    scanf("%d", &maths);

    printf("Enter the marks you got in science\n");
    scanf("%d", &science);

    if (maths>=28 && science>=28)
    {
        printf("You have passed in both the subject you have been rewared 45rs\n",maths, science);
    }
    else if (maths>=28 && science<28)
    {
        printf("you have only passed in maths you have been rewarded with 15rs\n");
    }
    if (maths<=28 && science>=28) 
    {
        printf("you have only passed in science you have been rewarded with 15rs\n");
    }
    else
    {
        printf("you have failed");
    }
    return 0; 
}

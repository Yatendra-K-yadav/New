#include<stdio.h>
#include<cs50.h>
int main(int argc, char const *argv[])
{
    string answer=get_string("what is your name?");
    printf("hello,%s\n",answer);
    return 0;
}

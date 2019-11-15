#include <stdio.h>
#include <cs50.h>

//Displays hello with name of the user
int main(void)
{
    string name = get_string("NAME: ");
    printf("hello, %s\n", name);
}

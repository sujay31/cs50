#include <cs50.h>
#include <stdio.h>

//Suggestions have been incorporated
//Displays the Mario pyramid of a given height
int main(void)
{
    int height;
    int counter = 0;
    
    //Accepts the valid value of height
    do
    {
        height = get_int("Height: ");
        if (height >= 1 && height <= 8)
        {
            counter = 1;
        }
    }
    while (counter == 0);
    
    //Displays the right aligned pyramid
    for (int i = 0; i < height; i++)
    {
        int j;
        
        //Displays the appropriate amount of spaces
        for (j = 0; j < height - i - 1; j++) 
        {
            printf(" ");
        }
        
        //Displays the reuired amount of hashes
        for (int k = j; k < height; k++) 
        {
            printf("#");
        }
        
        //Changes line
        printf("\n"); 
    }    
}

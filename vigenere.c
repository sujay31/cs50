#include <cs50.h>
#include <stdio.h>

//Contains strlen()
#include <string.h>  
int main(int argc, string argv[])  
{
    
    //No. of command line arguments
    if (argc == 2)
    {
        int sen = atoi(argv[1]);
        
        //Checking if number is entered
        if (sen != 0)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
        
        //Checking if 0 is entered
        else if (argv[1][0] == '0')
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
        
        //String transformations are performed
        else 
        {
            
            //Checking for alphanumeric key
            for (int i = 0, n = strlen(argv[1]); i < n; i++)
            {
                if (argv[1][i] < 65 || (argv[1][i] > 90 && argv[1][i] < 97) || argv[1][i] > 123)
                {
                    printf("Usage: ./vigenere keyword\n");
                    return 1;
                }
            }
            string key = argv[1];
            char c, k;
            string s = get_string("plaintext: ");
            int l = strlen(s), len = strlen(key), flag = 0;
            for (int i = 0, j = 0; i < l; i++)
            {
                c = s[i];
                if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                {
                    k = key[j];
                    j++;
                    if (j == len)
                    {
                        j = 0;
                    }
                }
                
                //For uppercase character and lowercase key
                if ((c >= 'A' && c <= 'Z') && (k >= 'a' && k <= 'z'))
                {
                    c = ((c - 65) + (k - 97)) % 26 + 65;               
                }
                
                //For uppercase character and uppercase key
                if ((c >= 'A' && c <= 'Z') && (k >= 'A' && k <= 'Z'))
                {
                    c = ((c - 65) + (k - 65)) % 26 + 65;               
                }
                
                //For lowercase character and lowercase key
                if ((c >= 'a' && c <= 'z') && (k >= 'a' && k <= 'z'))
                {
                    c = ((c - 97) + (k - 97)) % 26 + 97;               
                }
                
                //For lowercase character and uppercase key
                if ((c >= 'a' && c <= 'z') && (k >= 'A' && k <= 'Z'))
                {
                    c = ((c - 97) + (k - 65)) % 26 + 97;               
                }
                s[i] = c;
            }
            if (flag == 0)
            {
                printf("ciphertext: %s\n", s);
                return 0; 
            }
            else
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
    }
    //Checking if more than 2 command line arguments are there
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}

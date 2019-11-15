#include <cs50.h>
#include <stdio.h>

//Contains strlen() function 
#include <string.h>  

//parameters passed in main() method 
int main(int argc, string argv[])  
{
    
    //Stores ASCII value 
    int t;  
    if (argc == 2)
    {
        
        //Stores key
        int k = atoi(argv[1]);
        
        if (k != 0)
        {
            string s = get_string("plaintext: ");
            
            //Ciphers the code
            for (int i = 0, l = strlen(s); i < l; i++)  
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] = (((s[i] - 65) + k) % 26) + 65;                  
                }
                else if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = (((s[i] - 97) + k) % 26) + 97;
                }
            }
            printf("ciphertext: %s\n", s);
            return 0;
        }
       
        //Special case for key 0
        else if (argv[1][0] == '0')
        {
            string s = get_string("plaintext: ");
            printf("ciphertext: %s\n", s);
            return 0;
        }
        else 
        {
            printf("usage: ./caesar key\n");
            return 0;
        }
    }
    else
    {
        printf("usage: ./caesar key\n"); 
        return 1;
    }
}

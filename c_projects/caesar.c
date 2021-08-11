#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, string argv [])
{
    //prototype
    bool validate_key(string);
    void print_text(char, int);
    
    //check if key is valid and 2 arguments on command line
    if (argc != 2 || !validate_key(argv[1]))
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
        printf("\n");
    }
         
    //print, iterate string, and shift characters by key
    if (argc == 2)
    {
        //get text from user
        string text = get_string("plaintext: ");
        
        //print ciphertext
        printf("ciphertext: ");
        
        //iterate through text and shift by key amount
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            char c = text[i];
            
            //convert string to int
            int convert_key = atoi(argv[1]); 
            
            if (isalpha(c) && !isspace(c))
            {
                print_text(c, convert_key);
            }
            else
            {
                printf("%c", c);
            }
        }
        
    }
    
    printf("\n");
    
}

//check if letter is upper/lower case and print
void print_text(char letter, int k)
{
    if (islower(letter))  
    {
        printf("%c", (letter - 'a' + k) % 26 + 'a');
    }
    else if (isupper(letter))
    {
        printf("%c", (letter - 'A' + k) % 26 + 'A');
    }
}

//check if key is a number
bool validate_key(string key)
{
    for (int i = 0, n = strlen(key); i < n; i++) 
    {
        if (!isdigit(key[i]))
        {
           
            return false;
        }
    }
   
    return true;
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    
    //Get population size from user
    int startingSize;
    do
    {
        startingSize = get_int("Enter a starting number greater than 8: ");
    }
    while (startingSize <= 8);

    // TODO: Prompt for end size
    //Get population size from user

    int endSize;
    do
    {
        endSize = get_int("Enter an ending number:  ");
    }
    while (endSize < startingSize);
    
    
    //Calculate number of years until we reach threshold
    int years = 0;
    while (startingSize < endSize)
    {
        
        startingSize = startingSize + (startingSize / 3) - (startingSize / 4);
        years++;
    }
   

    // Print number of years
    printf("Years: %i\n", years);
}
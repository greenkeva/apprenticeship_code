#include <cs50.h>
#include <stdio.h>

int heightFromUserInput(void);
void printPyramid(int, int, int);
int main(void)
{
    
    int height = heightFromUserInput();
    int countSpaces = height - 1;
    int countHeightOfPyramid = 1;
    
    printPyramid(countSpaces, height, countHeightOfPyramid);
    
}

int heightFromUserInput(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    
    return height;

}

void printPyramid(int countSpaces, int height, int countHeightOfPyramid)
{
    for (int i = 0; i < height; i++)
    {
        
        for (int d = 0; d < countSpaces; d++)
        {
            printf(" "); 
        
        }
        
        countSpaces--;
        
        for (int j = 0; j < countHeightOfPyramid; j++)
        {
            printf("#");
        }
      
        countHeightOfPyramid++;
    
        printf("\n");
    }
}


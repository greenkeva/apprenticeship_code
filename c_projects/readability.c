#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//prototype
int letter_counter(string);
int word_counter(string);
int sentence_counter(string);

int main(void)
{
    //Get text from user
    string text = get_string("Text: ");
    
    //count letters
    int countLetters = letter_counter(text);
    
    //count words
    int countWords = word_counter(text);
    
    //count sentences
    int countSentences = sentence_counter(text);
    
    //calc avg letters
    float L = (countLetters / (float) countWords) * 100;
    
    //calculate avg sentences
    float S = (countSentences / (float) countWords) * 100;
    
    //find index
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    //print grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    
    // printf("Text %s\n", text);
    // printf("%i letter(s)\n", countLetters);
    // printf("%i word(s)\n", countWords);
    // printf("%i sentence(s)\n", countSentences);
    //printf("Grade %i\n", index);
    
}


int letter_counter(string letters)
{
    int numLetters = 0;
    for (int i = 0, n = strlen(letters); i < n; i++)
    {
        if (isalpha(letters[i]))
        {
            numLetters++;
        }
    }
    
    return numLetters;
}

int word_counter(string words)
{
    int numWords = 0;
    for (int i = 0, n = strlen(words); i < n; i++)
    {
        if (isspace(words[i]))
        {
            numWords++;
        }
    }
    
    numWords++;
    
    return numWords;
    
}

int sentence_counter(string sentences)
{
    int numSentences = 0;
    
    for (int i = 0, n = strlen(sentences); i < n; i++)
    {
        if (sentences[i] == '.' || sentences[i] == '!' || sentences[i] == '?')
        {
            numSentences++;
        }
    }
    
    return numSentences;
}


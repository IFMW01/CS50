# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <math.h>


 float sentences (char* string, int length);
 float letters (char* string, int length);
 float words (char* string, int length);
 bool valueinarray(int val, int *arr, int lengthOfArray);
 float AvrgLetters (float x, float y);
 float AvrgSen (float x, float y);


int main (void)
{
    float Index;
    float S;
    float L;
    int lengthOfInput;
    float letter;
    float word;
    float sentence;
    char* n=  get_string("Text: ");
    lengthOfInput = strlen(n);
    //printf("%s\n",n);
    //printf("Total Charecters: %i\n", lengthOfInput);
    letter = letters(n, lengthOfInput );
    word = words(n,lengthOfInput);
    word= words(n,lengthOfInput);
    sentence = sentences(n, lengthOfInput);
    L = AvrgLetters(letter,word);
    S = AvrgSen(sentence,word);
    Index =round(((0.0588*L)-(0.296*S)-15.8));
    printf("Readability: %.0f\n", Index);

    if (Index>16)
    {
        printf("Readabilty: 16+\n");
    }

    if (Index<1)
    {
        printf("Readbility: Before 1st Grade\n");
    }
}


 float letters (char* string, int length)
{
    float x=0;
    for (int letters = 0; letters <length; letters++)
    {
        if((65<= string[letters] && string[letters] <=90) || (97<=string[letters] && string[letters] <=122))
        {
             x++;
        }
    }
    //printf("Letters:%.f\n",x);
    return x;
}

float words (char* string, int length)
{
    float  w = 1;
    for (int words =0; words<length; words++)
    {
        if(string[words]==32)
        {
            w++;
        }
    }

    //printf("Words:%.f\n",w);
    return w;
}

float sentences (char* string, int length)
{
    float S=0;
    int array[3] = {46,33,63};
    for(int sentences = 0; sentences < length; sentences++ )
    {
        if(valueinarray(string[sentences], array,3))
        {
            S++;
        }

    }
    //printf("Sentences: %.f\n",S);
    return S;
}

float AvrgLetters (float x, float y)
{
    float L = 0;
    L = (( x/y)*100);
     //printf("L: %.f\n",L);
    return L;
}

float AvrgSen (float x, float y)
{
    float S;
    S = ((x/y)*100);
   // printf("S: %.f\n",S);
    return S;
}


bool valueinarray(int val, int *arr, int lengthOfArray)
{
    int i;
    for(i = 0; i < lengthOfArray; i++)
    {
        if(arr[i] == val)
        {
            return true;
        }
    }
    return false;
}
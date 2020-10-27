# include <stdio.h>
# include <cs50.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>

char * Ceasar (char* letters, int length, int shift, char * cipher );


int main (int argc, string argv[])
{
    if ((argc >= 1  ) && (argv[1] < 0)){
        printf("Usage: ./ceasar key");
        return 1;
    }
    else {
        int PlaintextLen;
        int k =  atoi(argv[1]);
        char* n = get_string("Plaintext: ");
        PlaintextLen = strlen(n);
        char  cipher[PlaintextLen];
        //  strcpy(cipher,
        char* text =  Ceasar(n,PlaintextLen,k, cipher);
        printf("Ciphertext: %s\n",text);

    }



}

char * Ceasar (char* letters, int length, int shift, char*  cipher )
{
    printf("length:%d", length);
    char x;
    for(int y=0; y < length; y++)
    {
        if ((letters[y]<=122 )&& (letters[y]>=97))
        {
            x=((((letters[y]-97)+shift)%26)+97);
            cipher[y] = x;
        }

        else if ((letters[y]<=90) && (letters[y]>=65))
        {

            x=((((letters[y]-65)+shift)%26)+65);
            cipher[y] = x;
        }
    }
    return cipher;
}

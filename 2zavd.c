#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    char C;

    string S = get_string("S:");
    string S0 = get_string("S0:");

    printf("C:");
    scanf("%c", &C);


    for (int i = 0; i < strlen(S); i++)
    {
        if (C == S[i])
        {
            for(int j=0; j < strlen(S0); j++) {
                printf("%c", S0[j]);
            }
        }

        printf("%c", S[i]);
    }

    printf("\n");
}
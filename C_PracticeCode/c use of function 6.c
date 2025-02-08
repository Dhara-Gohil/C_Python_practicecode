// reverse a word function and reverse each word of string given by user.
#include<stdio.h>
#include<string.h>

void reverseword(char *word)
{
    int len = strlen(word);
    int start = 0;
    int end = len - 1;

    while (start<end)
    {
        char temp = word[start];
        word [start]= word[end];
        word [end]= temp;
        start++;
        end--;
    }
}

int main ()
{
    char sentence[100];
    printf("Enter a sentence: ");
    scanf("% [^\n]s,sentence");
    char *word = strtok(sentence," ");

    while(word!='\0')
    {
        reverseword(word);
        printf("%s",word);
        word = strtok('\0', " ");
    }
    printf("\n");
    return 0;
}

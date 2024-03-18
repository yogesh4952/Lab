// WAP a program to get vowel and consonant//

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
       ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    {
        printf("%c is Vowel letter\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'B'))
    {
        printf("%c is consonant Letter", ch);
    }
    else
    {
        printf("Invalid Character");
    }
    return 0;
}

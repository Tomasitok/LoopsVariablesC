#include <stdio.h>

int main()
{
    char character = 'a';
    while (character <= 'z') {
        if (character == 'q'){
            character++;
        }
        else if (character == 'e'){
            character++;
        }
        putchar(character);
        character++;
    }
    putchar('\n');
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/


int main(void) {
    int ch;
    int result = 0;

    // Read in and convert number:
    while (((ch = getchar()) != EOF) && isdigit(ch)) {
        result = result * 10 + ch - '0';    // Use digit.
    }
        
    if (ch != EOF) {
        ungetc(ch, stdin);                // Put nondigit back.
    }
        
    printf("Number = %d\nNext character in stream = '%c'", result, getchar());

    _getch();
    return 0;
}
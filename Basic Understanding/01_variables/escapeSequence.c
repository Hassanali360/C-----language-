#include <stdio.h>

int main() {
    printf("Escape Sequences in C:\n");
    printf("\\n - Newline: Line 1\nLine 2\n");
    printf("\\t - Tab: Col1\tCol2\tCol3\n");
    printf("\\r - Carriage Return: Start\rEnd\n");
    printf("\\b - Backspace: ABC\bD\n");
    printf("\\f - Form Feed (page break)\f\n");
    printf("\\v - Vertical Tab:\vMoved down\n");
    printf("\\a - Alert (bell): \a\n");
    printf("\\\\ - Backslash: C:\\Users\\Name\n");
    printf("\\' - Single Quote: It\'s working\n");
    printf("\\\" - Double Quote: He said \"Hello\"\n");
    printf("\\0 - Null Character (invisible)\n");
    printf("\\x41 - Hex: \\x41 = %c\n", '\x41');
    printf("\\101 - Octal: \\101 = %c\n", '\101');
    
    return 0;
}
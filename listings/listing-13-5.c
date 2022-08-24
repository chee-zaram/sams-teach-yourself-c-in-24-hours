/* using scanf() */
#include <stdio.h>

int main()
{
    char str[80];
    int x, y;
    float z;

    printf("Enter two integers separated by a space: \n");
    scanf("%d %d", &x, &y);
    printf("Enter a floating-point number:\n");
    scanf("%f", &z);
    printf("Enter a string:\n");
    scanf("%s", str);
    printf("Here are what you've entered:\n");
    printf("%d %d\n%f\n%s\n", x, y, z, str);
    return 0;
}

// Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Numbers
{
    FIRST = 10,
    SECOND = 20,
    THIRD = 30,
    FOURTH = 40,
    FIFTH = 50
};
int main()
{
    enum Numbers num;
    num = FIRST;
    printf("FIRST = %d\n", num);
    num = SECOND;
    printf("SECOND = %d\n", num);
    num = THIRD;
    printf("THIRD = %d\n", num);
    num = FOURTH;
    printf("FOURTH = %d\n", num);
    num = FIFTH;
    printf("FIFTH = %d\n", num);
    return 0;
}

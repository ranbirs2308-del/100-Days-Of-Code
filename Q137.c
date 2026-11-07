// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum Roles
{
    ADMIN = 1,
    USER,
    GUEST
};
int main()
{
    enum Roles role;
    int choice;
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your role: ");
    scanf("%d", &choice);
    role = choice;
    switch (role)
    {
    case ADMIN:
        printf("Welcome Admin! You have full access.");
        break;
    case USER:
        printf("Welcome User! You have limited access.");
        break;
    case GUEST:
        printf("Welcome Guest! You have read-only access.");
        break;
    default:
        printf("Invalid Role");
    }
    return 0;
}
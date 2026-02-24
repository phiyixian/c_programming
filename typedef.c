#include <stdio.h>

typedef int Number;
typedef char* String;
typedef char Initials[3];

int main()
{
    // typedef existing_type new_name

    String name = "Phi Yi Xian";
    Initials user1 = "PYX";

    printf("User's name: %s\n", name);
    printf("User's initials: %s\n", user1);

    return 0;
}
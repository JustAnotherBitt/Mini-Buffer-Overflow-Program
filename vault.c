#include <stdio.h>
#include <string.h>

void show_confidential_information() {
    printf("[pass123] ALERT! Confidential information has been revealed!\n");
}

void auth() {
    char correct_pass[10] = "pass123";
    char pass[10];

    printf("Enter the password to access confidential information : ");
    gets(pass);

    if (strcmp(pass, correct_pass) == 0) {
        show_confidential_information();
    } else {
        printf("Wrong password. Access denied.\n");
    }
}

int main() {
    auth();

    return 0;
}

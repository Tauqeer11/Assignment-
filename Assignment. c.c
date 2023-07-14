*/name Tauqeer
Father name Muhammad Rafeeq 
roll no 40
    session 2022-2026
    semester 1stBscs
    */




#include <stdio.h>

int isprime(int num) {
    if (num < 2) {
       return 0;
}
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
       return 0;
}
}
       return 1;
}

int main() {
    int number;
    while (1) {
    printf("A number between 2 and 100: ");
    scanf("%d", &number);
    if (number < 2 || number > 100) {
    printf("Number is not in the range,\n press 1 to try again: ");
    int choice;
    scanf("%d", &choice);
    if (choice != 1) {
    break;
}
} else {
    int result = isprime(number);
    printf("function returns: %d",isprime(number));break;
}
}
     return 0;
}

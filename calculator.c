#include <stdio.h>

// tax calculator

int main() {

    int salary;
    float tax;

    printf("What's your Salary?:\n");

    scanf("%d", &salary);

    printf("%d", salary);

    switch (salary) {

         case 0 ... 18200:
            printf("$0\n");
            break;

        case 18201 ... 45000:
            tax = 0.16 * (salary - 45000);
            break;

        case 45001 ... 135000:
            tax = 0.30 * (salary - 135000) + 4288;
            break;

        case 135001 ... 190000: 
            tax = 0.37 * (salary - 190000) + 31288;
             break;

        default: 
            if (salary > 190000) {
                tax = 0.45 * (salary - 190000) + 51638;
            }
           
    }

printf("%d");

}

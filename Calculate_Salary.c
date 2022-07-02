
#include<stdio.h>

int main() {
    // variables
    int Salary, Gross;

    int count[9] = {0};

    printf("Enter gross sales: $");
    scanf("%d",&Gross);

    // while and if statements to calculate the salaries
    while (Gross >= 0) {
        Salary = 200 + Gross * .09;

        if (Salary < 300) {
            count[0]++;
        }
        else if (Salary < 400) {
            count[1]++;
        }
        else if (Salary < 500) {
            count[2]++;
        }
        else if (Salary < 600) {
            count[3]++;
        }
        else if (Salary < 700) {
            count[4]++;
        }
        else if (Salary < 800) {
            count[5]++;
        }
        else if (Salary < 900) {
            count[6]++;
        }
        else {
            count[8]++;
        }
        printf("Enter the gross sales: $ (-1 to list salary ranges)");
        scanf("%d", &Gross);

    }
    // count for the range list:
    int tmp = 200;
    int i = 1;
    puts("");
    // for loop to list correct $ ranges
    for (i = 0; i< 8; i++, tmp += 100) {
        printf("$%d-$%d range: %d\n", tmp, tmp + 99, count[i]);
    }
    printf("$1000 and higher: %d\n", tmp, count[i]);
;    }



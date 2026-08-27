//Q23 Write a program to calculate library fine based on late days as follows: 
/* First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main() {
    int lateDays;
    float fine;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine = %.2f\n", fine);
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4;
        printf("Fine = %.2f\n", fine);
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;
        printf("Fine = %.2f\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    getchar();
    getchar();
    return 0;
}
//Q24 Write a program to calculate electricity bill based on units consumed with these rates: 
/* First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */


#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill = %.2f\n", bill);

    getchar();
    getchar();
    return 0;
}
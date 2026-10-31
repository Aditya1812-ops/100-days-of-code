// Read integers from a file and find their sum and average.
#include <stdio.h>

int main(){
    FILE *f;
    int n, sum = 0, count = 0;
    float avg;

    f = fopen("numbers.txt", "r");

    if (f == NULL)
    {
        printf("File not found");
        return 1;
    }

    while (fscanf(f, "%d", &n) != EOF)
    {
        sum = sum + n;
        count++;
    }

    fclose(f);

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

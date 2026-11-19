
#include <stdio.h>

int main()
{
    int marks[5], i, total = 0;
    float percentage;

    printf("Enter marks in five subjects:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if(percentage >= 90)
        printf("Grade: A");
    else if(percentage >= 75)
        printf("Grade: B");
    else if(percentage >= 60)
        printf("Grade: C");
    else if(percentage >= 40)
        printf("Grade: D");
    else
        printf("Grade: Fail");

    return 0;
}

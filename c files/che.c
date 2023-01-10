#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float per;

    /* Input marks of 5 subjects */
    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    /* Calculate percentage */
    per = (m1 + m2 + m3 + m4 + m5) / 5.0;

    /* Check grade */
    if (per >= 60)
        printf("Grade A");
    else if (per >= 50)
        printf("Grade B");
    else if (per >= 33)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}
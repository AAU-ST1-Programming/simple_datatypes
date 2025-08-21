#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    /* Definer variabler */

    int id = 311;
    int age = 37;
    char gender = 'M';
    int marital_status = 'G';
    float weight = 82.0;
    float height = 1.82;

    float bmi = weight / height / height;


    printf("id: %i %s\n", id);

    /*Marital status*/
    switch (marital_status)
    {
    case 1:
        printf("Marital Status: Maried\n");
        break;
    case 0:
        printf("Marital Status: Single\n");
        break;
    default:
        printf("marital status not defined: %i\n", marital_status);
        return -1;
    }

    /* Print gender*/
    switch (gender)
    {
    case 'm':
    case 'M':
        printf("Gender: Male\n");
        break;
    case 'f':
    case 'F':
        printf("Gender: Female\n");
        break;
    default:
        printf("Gender not defined: %c\n", gender);
        return -1;
    }

    /* print age */
    printf("Age: %i\n", age);

    /* print bmi */
    printf("Height: %.2fM, Weight: %.1fKg, bmi: %.1f", height, weight, bmi);

    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int h_cm = 180;
    int w_kg = 80;

    int bmi_wrong = w_kg / (h_cm / 100 * h_cm * 100);
    printf("bmi_wrong: %i\n", bmi_wrong);

    int bmi_correct = (float)w_kg / ((float)h_cm * h_cm / 100.0 / 100.0);
    printf("bmi_correct: %i\n", bmi_correct);
    return 0;
}

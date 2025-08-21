#include <stdio.h>
#include <ctype.h>

#define MARRIED 1
#define UNMARRIED 0

#define MALE 'm'
#define FEMALE 'f'

int main()
{
    unsigned int age = 10;
    char gender = MALE;
    int marital_status = MARRIED;
    char forename[] = "Martin";

    for (int i = 0; i < sizeof(forename)-1; i++)
    {
        if (!isalpha(forename[i]))
        {
            printf("%s: contains unwamted chars", forename);
            return -1;
        }
        
    }
    

    return 0;
}

#include <stdio.h>
#include <string.h>

/* read the length of string */
int str_length(const char s[])
{
    int length = 0;

    while (s[length]) {
        length++;
    }

    return length;
}

void aph(char str[])
{
    char res[40];
    char j = 0;
    int length;

    length = str_length(str);

    for (char i = 0; i < length; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            res[j] = str[i];
            j++;
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            res[j] = str[i];
            j++;
        }
        else {
            /* str[i] = 0; */
        }
    }

    strcpy(str, res);

}

int main(void)
{    
    char str[40];

    printf("Enter sting:");
    scanf("%s", str);

    aph(str);

    printf("Result: %s\n", str);
    return(0);
}

/* Output: */
/* Enter sting:12a3G4b!5pl6& */
/* Result: aGbpl */

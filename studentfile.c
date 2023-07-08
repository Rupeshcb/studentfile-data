// input name and number will store into the studentfile.csv
// include <cs50.h> for use get_string function
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("studentfile.csv", "a");
    string comment = "Please give your information";
    printf("%s\n", comment);
    string name = get_string("Name: ");
    string number = get_string("Number: ");
    string city = get_string("City: ");

    fprintf(file, "Name: %s, Number: %s, City: %s\n", name, number, city);

    fclose(file);
}
// input name and number will store into the studentfile.csv
// include <cs50.h> for use get_string function
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("studentfile.csv", "a");

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}
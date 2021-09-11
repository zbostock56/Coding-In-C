#include <stdio.h>
#include <string.h>

int main() {
        //this is a string
        char * name = "John Doe";
        //which is the same as
        /*char name2[] = "John Smith";*/
        int age = 27;

        printf("%s is around %d years old.\n", name, age);
        
        char city[] = "Indianapolis";
        char state[] = "Indiana";

        strcat(city, state);
        
        printf("%s\n", city);
        printf("%s\n", state);

        return 0;
}

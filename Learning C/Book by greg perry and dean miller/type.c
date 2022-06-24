/* A Programs that uses Integer, Floating number, Character data type */

#include <stdio.h>
main() {

        printf("I am learning the %c Programing Language \n", 'C');
        printf("I have just completed the chapter %d \n", 2);
        printf("I am %.6f percent ready to move on ", 99.9);
        printf("to the next chapter! \n");

        //Let's try a different style of comment
        float a, b;
        printf("How much bonus did you get ? ");
        scanf(" %f", &a);
        b = .85 * a;
        printf("You give 15 percent to the charity, you will still \n");
        printf("have %.2f. \a", b);

        //now lets try all of the conversion character
        printf("My name is %s. \n I am %d years old. \n Now i'm gonna need $%f. \n I want to learn the basic of %c.",
               "ibrahim", 23, 1000.3432, 'C');

        return 0;
}


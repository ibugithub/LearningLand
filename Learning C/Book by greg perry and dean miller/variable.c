//A program to list three kids and their supply need and theirs costs

#include <stdio.h>

main() {
        char name[20];
        int number_of_pen;
        int number_of_notebook;
        int number_of_lunchbox;
        float pen_rate = 5.5;
        float notebook_rate = 12.7;
        float lunchbox_rate = 7.2;

        printf("Hey what's your name? \n\a");
        scanf("%s", &name);
        printf("How much pen will you need? \n\a");
        scanf('%d', &number_of_pen);
        printf("How much notebook will you need? \n\a");
        scanf('%d', &number_of_notebook);
        printf("How much luchbox will you need? \n\a");
        scanf('%d', &number_of_lunchbox);

        printf("%s Need %d number of pen, %d number of notebook, %d number of lunchbox \n %s's Total cost is %.3f", name, number_of_pen,number_of_notebook, number_of_lunchbox, name,number_of_pen*pen_rate + number_of_notebook*notebook_rate + number_of_lunchbox*lunchbox_rate
);


        return 0;

}

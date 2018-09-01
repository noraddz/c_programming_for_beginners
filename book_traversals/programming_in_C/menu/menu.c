#include <stdio.h>
#include <unistd.h>
void show_menu();

int main(int argc, char ** argv[])
{

    int choice = 0;

    while(choice != 4)
    {
        show_menu();
        printf("\nChoice: ");
        scanf("%d", choice);
        if(choice == 1)
        {
            printf("\nchoice 1 selected!");
            //sleep(1);
            //system("clear");
        }
    }


    return 0;
}

void show_menu()
{
    printf("\tthis is a menu\n\n");
    printf("\n1. choice 1");
    printf("\n2. choice 2");
    printf("\n3. choice 3");
    printf("\n4. exit");
}
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch;
    char fake;
    do
    {
        system("clear");
        printf("main menue\n1] insert\n2]display all\n3]searching\n4]exit\n");
        printf("enter your choice");
        scanf("%d",&ch);
        system("clear");
        

        switch (ch)
        {
        case 1:
            system("insertrecord");
            break;
        case 2:
            system("displayall");
            break;
        case 3:
            system("searching");
            break;
        case 4:
            printf("god bye\n");
            break;
                 





                   


        default:
            printf("wrong option\n");

            break;
        }
        printf("\n\n\t\tpress any key to count ....\n");
        fflush(stdin);
        scanf("%c",&fake);







        


    } while (ch!=4);



    
    
    
}
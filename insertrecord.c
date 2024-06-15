#include<stdio.h>
typedef struct empoyee
{
    int id;
    char name[30];
    long salary;
} emp;
 void main()
 {
    emp e;
    FILE *p;
    char ch;
    p=fopen("emp.db","r");
    if(p==NULL)
    {
        p=fopen("emp.db","w");
    }
    else{
        p=fopen("emp.db","a");
    }
    do
    {
        printf("enter id");
        scanf("%d",&e.id);
        printf("enter name");
        fflush(stdin);
        gets(e.name);
        printf("enter salary");
        scanf("%ld",&e.salary);

        fwrite(&e,sizeof(e),1,p);
        printf("add more empolyee y/n?");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch=='y'||ch=='Y');
    fclose(p);
    


 }
 
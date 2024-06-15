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
    int hra,da,ns,id,found=0;
    p=fopen("emp.db","r");
    if (p==NULL)    
    {
        printf("file not found");
    }
    
    else{
        printf("enter employee id u want to search?");
        scanf("%d",&id);
        printf("\t\tlist of employees\n");
        printf("\t\t------------------\n");
         printf("----------------------------------------------------------------------------------------\n");
         printf("id\t\tname\t\tsalary\t\thra\t\tda\t\tns\n");
          printf("----------------------------------------------------------------------------------------\n");

        while (!feof(p))
        {
             fread(&e,sizeof(e),1,p);
             if(feof(p)) break;
             if (e.id==id)
             {
             hra=e.salary*55/100;
             da=e.salary*10/100;
             ns=e.salary+da+hra;
             printf("%d\t\t%s\t\t%ld\t\t%d\t\t%d\t\t%d\n",e.id,e.name,e.salary,hra,da,ns);
             found=1;

             }
             
             
            
        }
        if (found==0)
        {
            printf("employee not exist\n");
        }
        
        
    }
    


 } 
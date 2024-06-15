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
    int hra,da,ns;
    p=fopen("emp.db","r");
    if (p==NULL)    
    {
        printf("file not found");
    }
    
    else{
        
        printf("\t\tlist of employees\n");
        printf("\t\t------------------\n");
         printf("----------------------------------------------------------------------------------------\n");
         printf("id\t\tname\t\tsalary\t\thra\t\tda\t\tns\n");
          printf("----------------------------------------------------------------------------------------\n");

        while (!feof(p))
        {
             fread(&e,sizeof(e),1,p);
             if(feof(p)) break;
             
             
             hra=e.salary*55/100;
             da=e.salary*10/100;
             ns=e.salary+da+hra;
             printf("%d\t\t%s\t\t%ld\t\t%d\t\t%d\t\t%d\n",e.id,e.name,e.salary,hra,da,ns);
            

             
             
             
            
        }
       
        
    }
    fclose(p);
    


 } 
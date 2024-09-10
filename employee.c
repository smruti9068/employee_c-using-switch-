#include<stdio.h>
int main(){
    int ch;
    int basic;
    float HRA,DA;
    int employee;
    float gross;
    printf("Enter the year of working experience of the employee: \n");
    scanf("%d",&employee);
    printf("Enter your choice (graduate(1) or post graduate(2)): \n");//graduate(1) or post graduate(2)
    scanf("%d",&ch);
    switch(ch){
        case 1:
            basic=5000;
            HRA=5000 * 0.4;
            DA=5000 * 0.9;
            gross=basic+HRA+DA;
            if(employee>=3){
                printf("Total amount: %f", (gross+25000));
                printf("\n");
            }
            else{
                printf("Total amount: %f", gross);
            }
        case 2:
            basic=40000;
            HRA=40000*0.25;
            DA=40000*0.70;
            if(employee>=3){
                printf("Total amount: %f", (gross+25000));
                   printf("\n");
            }
            else{
                printf("Total amount: %f", gross);
            }
        }
    }

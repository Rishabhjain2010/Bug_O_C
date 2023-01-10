#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float i,emp1,emp2,emp3,emp4,emp5,emp6;
    scanf("%f",&emp1);
    scanf("%f",&emp2);
    scanf("%f",&emp3);
    scanf("%f",&emp4);
    scanf("%f",&emp5);
    scanf("%f",&emp6);
    
    float daily_exp = (11*emp1)+(13*emp2)+(10*emp3)+(8*emp4)+(5*emp5)+(3*emp6);
    
    float tip = (emp1+emp2+emp3+emp4+emp5+emp6)*0.2*24;
    
    float salary_sum= (5000*emp1)+(4500*emp2)+(4500*emp3)+(3500*emp4)+(2000*emp5)+(1120*emp6);
    
    float total_exp_in_month = salary_sum + (daily_exp*24) + tip;
    
    printf("%.2f\n",total_exp_in_month);
        
    printf("%.2f\n",total_exp_in_month/24);
    
    
    printf("%.2f\n",tip);
    return 0;
}

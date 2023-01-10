#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dt;
    char ch;
    scanf("%d",&dt);
    if(dt>0&&dt<11){
        ch = '0';
    }
    else{ch = '*';}

    for(int i = 0;i<4;i++){
        for(int j = 0;j<5-i;j++){
            printf(" ");
        }
        for(int j = 0;j<i*2+1;j++){
            printf("%c",ch);
            
        }
        printf("\n");
        
    }
            printf("     %c \n\n",ch);

    printf("Thankyou for your help towards nature.");
              
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    while(t--) {
        int c;
        scanf("%d", &c);
        if(c > 26 || c < 1) 
            printf("There are only 26 Alphabets in english\n");
        else 
            printf("%c\n", (64+c));
         }
    return 0;
}

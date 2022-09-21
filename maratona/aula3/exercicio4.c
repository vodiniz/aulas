#include <stdio.h>
#include <string.h>


int main(void){

    int c; 
    char name[100];
    int force;
    scanf("%d", &c);

    for ( int i = 0; i < c; i++){
        scanf("%s %d", name, &force);
        if (!strcmp(name, "Thor")){
            printf("Y\n");
        } else{
            printf("N\n");
        }
    }


    return 0;
}
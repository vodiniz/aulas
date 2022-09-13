#include <stdio.h>

#define VECTOR_SIZE 5

char compare_vec(int vec1[], int vec2[]);

int main(void){

    int vec1[VECTOR_SIZE];
    for(int i = 0; i < VECTOR_SIZE;i++){
        scanf("%d", &vec1[i]);
    }
    int vec2[VECTOR_SIZE];
    for(int i = 0; i < VECTOR_SIZE;i++){
        scanf("%d", &vec2[i]);
    }


    printf("%c\n", compare_vec(vec1, vec2));
    return 0;
}

char compare_vec(int vec1[], int vec2[]){

    int compare = 1;
    for ( int i = 0; i < VECTOR_SIZE ; i++){
        if (vec1[i] != vec2[i]){
        } else {
            compare = 0;
            break;
        }
    }
    
    if (compare){
        return 'Y';
    } else {
        return 'N';
    }
}
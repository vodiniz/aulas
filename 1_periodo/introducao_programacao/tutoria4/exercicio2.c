#include <stdio.h>

void intercalate_vectors(int v1[], int v2[], int v3[], int n);



int main(void){
    int v1[100], v2[100], v3[200];
    int n;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &v2[i]);
    }
    intercalate_vectors(v1, v2, v3, n);




    return 0;
}


void intercalate_vectors(int v1[], int v2[], int v3[], int n){

    for ( int i = 0; i < n; i++){
        v3[i] = v1[i];
        v3[i + 1] = v2[(n - 1) - i];

        printf("%d ", v1[i]);
        printf("%d ", v2[(n - 1) - i]);
    }
    printf("\n");

}

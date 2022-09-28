#include <stdio.h>


typedef struct {
    double real;
    double imaginario; 
} Complexo ;

Complexo somaComplexo(Complexo x, Complexo y);
Complexo subComplexo(Complexo x, Complexo y);
Complexo multComplexo(Complexo x, Complexo y);

int main (void){

    Complexo n1, n2, resultado;
    char op;

    printf("Calculadora de números complexos!\n");
    printf("Digite os valores de a e b (x = a + bi): ");
    scanf("%lf %lf", &n1.real, &n1.imaginario);

    printf("Digite os valores de c e d (y = c + di): ");
    scanf("%lf %lf", &n2.real, &n2.imaginario);

    printf("Digite a operação (+, - ou *):");
    scanf("%c", &op);   
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        resultado = somaComplexo(n1, n2);
        break;
    
    case '-':
        resultado = subComplexo(n1, n2);
        
        break;
    
    case '*':
        resultado = multComplexo(n1, n2);
        break;
    }

    if (resultado.imaginario >= 0){
        printf("Resultado: %.1lf + %.1lfi\n", resultado.real, resultado.imaginario);
    } else {
        printf("Resultado: %.1lf - %.1lfi\n", resultado.real, resultado.imaginario);
    }

    return 0;

}

Complexo somaComplexo(Complexo x, Complexo y){
    Complexo result;

    result.real = x.real + y.real;
    result.imaginario = x.imaginario + y.imaginario;

    return result;
}

Complexo subComplexo(Complexo x, Complexo y){
    Complexo result;

    result.real = x.real - y.real;
    result.imaginario = x.imaginario - y.imaginario;

    return result;
}

Complexo multComplexo(Complexo x, Complexo y){
    Complexo result;

    result.real = x.real * y.real - (x.imaginario * y.imaginario);
    result.imaginario = (x.real * y.imaginario) + (x.imaginario * y.real);

    return result;

}
//===================================================================================================
/*
UNIVERSIDADE FEDERAL DE UBERLÂNDIA
INSTITUTO DE MATEMÁTICA E DE ESTATÍSTICA
DISCIPLINA: CÁLCULO NUMÉRICO (FAMAT31032)
CURSO: CIÊNCIA DA COMPUTAÇÃO
CÓDIGO: REGRA DOS TRAPEZIOS REPETIDOS
*/
//===================================================================================================
/* PRÉ PROCESSADORES */
//===================================================================================================
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//===================================================================================================
/* SUB-ROTINAS */
//===================================================================================================
// FUNÇÃO f(x)
//===================================================================================================
double f (double x) {
    return (exp(-pow(x,2)));
}
//===================================================================================================
// DERIVADA DA FUNÇÃO f(x)
//===================================================================================================
double df (double x) {
    return (1.0 + sin(x));
}
//===================================================================================================
/* PROGRAMA PRINCIPAL */
//===================================================================================================
int main(int argc, char *argv[]) {
    //===============================================================================================
    /* DECLARAÇÃO DE VARIÁVEIS */
    //===============================================================================================
    int k;          // ÍNDICE AUXILIAR PARA SOMA
    int N;          // NUMERO DE DIVISÕES
    double a, b;    // INTERVALO DE INTEGRAÇÃO
    double h;       // ESPAÇAMENTO ENTER PONTOS 
    double s;       // VARIAVEL AUXILIAR 1
    double Itr;     // VARIAVEL AUXILIAR 2
    double x;       // VARIÁVEL AUXILIAR 3
    //===============================================================================================
    /* LIMPEZA DA TELA DO TERMINAL */
    //===============================================================================================
    system("cls");
    //===============================================================================================
    /* ENTRADA DE DADOS */
    //===============================================================================================
    a = atof(argv[1]);  
    b = atof(argv[2]);
    N = atoi(argv[3]);
    //===============================================================================================
    /* ESPAÇAMENTO */
    //===============================================================================================
    h = (b - a) /  N;
    //===============================================================================================
    /* APLICAÇÃO DA REGRA DOS TRAPÉZIOS REPETIDOS */
    //===============================================================================================
   
    s = 0.0;
    for(k = 1; k < N; k++ ){
        x = a + k * h;
        s += f(x);
    }
    
    Itr = 0.5  * h * (f(a) + f(b) + 2.0 * s);
    //===============================================================================================
    /* IMPRESSÃO DOS RESULTADOS */
    //===============================================================================================
    printf("Integral: %.15lf\n", Itr);
    //===============================================================================================
    /* FIM DO PROGRAMA */
    //===============================================================================================
    return 0;
}

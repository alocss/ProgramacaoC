#include <stdio.h>
/*
//Definiçao de procedimento para imprimir uma mensagem 
void imprimirMensagem (){
    printf("Óla, mundo! \n");

}

int main (){
    //Chamada do procedimento
    imprimirMensagem ();
    return 0;
}*/

// Função recursiva para imprimir números de n até 1

void recursivo( int numero){
    if (numero > 0)
    {
        printf("%d \n",numero );

        recursivo(numero - 1);
    }
    
}

int main (){

    int quantidade = 10;
    printf("Contagem regressiva.... \n");
    recursivo(quantidade);


    return 0;
}
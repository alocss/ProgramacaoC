#include <stdio.h>

// Exemplo com "While"

/*
int main(){
    int i = 1;
    while (i <= 10){ // Loop externo 
        int j = 1; // Variável local
        while (j <= 10) //Loop interno
        {
            printf("%d\t", i *j);
            j++; // Incremento loop interno
        }
        printf("\n");
        i++; // Incremento loop externo

    }
    return 0;
}
*/

/*
// Exemplo com "Do-While"

int main (){
    int i = 1;
    do { // Loop externo
        int j = 1; // variavel local
        do{ // loop internoo
            printf("%d\t", i * j);
            j++; //Incremento loop interno
        } while (j <= 100); //Condição interna
        printf("\n");
        i++; // Incremento loop externo
    }while ( i<= 10); //Condição externa
    return 0;
}
*/

/*
// Exemplo com "For"
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}
*/


// Contagem regressiva
int main() {
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}
#include<stdio.h>

int main(){
    char cadena[100] = "";
    char pausa = ' ';
    char cadenacifrada[100] = "";
    char cadenadescifrada[100] = "";

    int x = 0;
    int clave = 0x69;
    int temp = 0;


    printf("Introduce una frase:\n");
    printf("esta frase se va a cifrar usando una operacion X-OR con el exadeciman %X\n",clave);
    printf("========================================================================\n");
    gets(cadena);

    //printf("\n PRINTF La cadena que metistessss es: %s\n\n", cadena);

    //while para cifrar y descifrar
    while(cadena[x] != '\0') {
    	//printf("%c\n", cadena[x]);//este muestra el caracter de la cadena en el que estamos
        //esta primer parte cifra
        temp = cadena[x] ^ clave;
        cadenacifrada[x] = temp;
        printf("valor cifrado: %X \n", cadenacifrada[x]);

        //esta segunda parte descifra
        temp = temp ^ clave;
        cadenadescifrada[x] = temp;
        printf("valor descifrado: %c \n", cadenadescifrada[x]);//me regresa su letra original
        pausa = getchar();
        
    	x++;    	
    }

    x = 0;

    printf("========================================================================\n");
    printf("tu cadena cifrada es: ");

    //while para recorrer e imprimir la cadena cifrada
    while(cadenacifrada[x] != '\0') {
    	printf("%X", cadenacifrada[x]);
    	x++;    	
    }

    printf("\ntu cadena descifrada es: ");

    x = 0;

    //while para recorrer e imprimir la cadena descifrada
    while(cadenadescifrada[x] != '\0') {
    	printf("%c", cadenadescifrada[x]);
    	x++;    	
    }

    return 0;
}

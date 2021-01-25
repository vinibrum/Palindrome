#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void isPalindrome(char *str) {
    int flag, i, tam;
    char *aux;

    aux = (char*) malloc(sizeof(char) * strlen(str));
    if(aux == NULL) {
        printf("Cannot allocate memory.\n");
        return;
    }

    strcpy(aux, str);
    tam = strlen(str);

    flag = 1;
    for(i = 0; i < tam/2; i++) {
        if(aux[i] != aux[tam - i - 1])
            flag = 0;
    }
    free(aux);

    if(flag)    printf("%s is palindrome.\n", str);
    else        printf("%s is not palindrome.\n", str);
}

int main(){
    isPalindrome("anilina");
    isPalindrome("aaa");
    isPalindrome("ovo");
    isPalindrome("abc");
    isPalindrome("ana");
    isPalindrome("anna");
    return 0;
}

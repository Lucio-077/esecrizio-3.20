#include <stdio.h>

int main(void) {
    int anno;
    printf("Inserisci anno (in formato AAAA): ");
    scanf("%d",&anno);

    if(anno%4) {
        printf("l'anno e' bisestile");
    }else if(anno/400) {
        printf("l'anno e' secolare");
    }
}

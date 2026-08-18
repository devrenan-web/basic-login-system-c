#include <stdio.h>
#include <string.h>

void checkEmail(char *emailDigitado) {
    printf("Digite seu email: ");
    scanf("%s", emailDigitado);
}
int main() {

char emailDigitado[30];
char emailCorreto[4] = "123";
    do {
        checkEmail(emailDigitado);
    } while (strcmp(emailDigitado, emailCorreto) != 0);

   // vai pra parte da senha
}
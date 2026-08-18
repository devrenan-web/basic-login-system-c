#include <stdio.h>
#include <string.h>


void checkEmail(char *emailDigitado) {
    printf("Digite seu email: ");
    scanf("%s", emailDigitado);
}

void checkSenha(char *senhaDigitada) {
    printf("Digite sua senha: ");
    scanf("%s", senhaDigitada);
}


int main() {
char emailDigitado[30];
char emailCorreto[4] = "123";

    do {
        checkEmail(emailDigitado);
    } while (strcmp(emailDigitado, emailCorreto) != 0);

char senhaDigitada[30];
char senhaCorreta[6] = "Rk123";

    do {
        checkSenha(senhaDigitada);
    } while (strcmp(senhaDigitada, senhaCorreta) != 0);

    printf("login realizado!\n");
}


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

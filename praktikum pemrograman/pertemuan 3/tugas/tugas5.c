#include <stdio.h>
#include <string.h>

int main(void)
{
    char user_benar[] = "user";
    char pass_benar[] = "alhamdulillah123";

    char input_user[20];
    char input_pass[20];

    printf("Masukkan Username: ");
    scanf("%s", input_user);
    
    printf("Masukkan Password: ");
    scanf("%s", input_pass);

    if (strcmp(input_user, user_benar) == 0 && strcmp(input_pass, pass_benar) == 0) {
        printf("Login BERHASIL! Selamat datang.\n");
    } else {
        printf("Login GAGAL! Username atau password salah.\n");
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>
int main() {

    int a = -1;
    while (a<0){
        printf("enter shift amount: ");
        scanf("%d", &a);
    }
    getchar();
    char cipherText[100] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    for (int i = 0; i < 99; ++i) {
        char temp = getchar();
        if (temp == '\n'){
            break;
        }
        if ( temp >= 'a' && temp <= 'z' ){
            cipherText[i] = (temp-'a'+a)%26+'a';
            continue;

        }
        if (temp >= 'A' && temp <= 'Z'){

            cipherText[i] = (temp-'A'+a)%26+'A';
            continue;
        }
        cipherText[i] = temp;


    }
    printf("%s", cipherText);
}

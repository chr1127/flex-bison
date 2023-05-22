# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    char s[255];
    char *sym;
    sym =s;
    unsigned int hash = 0;
    unsigned c;

    printf("Input String : \n");
    scanf("%s", s);

    fflush(stdin);
    while(c = *sym++){
        hash = hash*9 ^ c;
        printf("Character: %c: %u\n", c, hash);

    }
    
    printf("Hashed value %u\n", hash);

    return 0;

}

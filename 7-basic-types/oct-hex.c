#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("DEC: %d\n", 10);                    // 10
    printf("OCT: %d\n", 015);                   // 015 (oct) = 13
    printf("HEX: %d\n", 0x20);                  // 0x20 (hex) = 32
    printf("HEX forced as long: %ld\n", 0x20L);
    printf("SUM : %d\n", 10 + 015 + 0x20);      // 10 + 13 + 32 = 55 
    

    unsigned int u;
    scanf("%uo", &u);   // if input 15 (oct) will be read as 15 decimal
    printf("%x\n", u);  // will print f (hex)


    short s;    
    scanf("%hd", &s);
    printf("%hd\n", s);

    long l;
    scanf("%ld", &l);
    printf("%ld\n", l);

    return 0;
}

#include <stdio.h>

static void crash() {
    char *test = NULL;
    int i = 0;

    for(; i < 1000000; i++) printf("%c", test[i]);
}

int main(int argc, char *argv[]) {
    int distance = 100;

    crash();
    crash();
    crash();
    crash();
    crash();
    crash();

    return 0;
}

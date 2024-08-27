#include <stdio.h>
#include <string.h>

void reverse (unsigned N) {

    printf("N=%d\n", N);
    if ( N == 0) return;
    unsigned R = N %10;
    N = N / 10;
    while (N) {
        R = R * 10 + N % 10;
        N = N / 10;
    }
    printf("R=%d\n", R);
}
void reverse_final (unsigned N) {

    printf("N=%d\n", N);
    if ( N == 0) return;
    unsigned R = 0;
    while (N) {
        R = R * 10 + N % 10;
        N = N / 10;
    }
    printf("R=%d\n", R);
}
void reverse_string(char* S ) {
    int len = strlen(S);
    printf("S = %s\n ", S);
    for ( int i =0, j = len-1; i < j; i++, j--) {
        char c = S[i];
        S[i] = S[j];
        S[j] = c;
    }
    printf("S = %s\n ", S);
}
int main(void) {
    //OK 1st try reverse(123456789);
    reverse_final(123456789);
    char S[] = "123456789";
    reverse_string(S);

    return 0;
}

#include <stdio.h>
#include <string.h>

void Fibonacci(unsigned int N) {
    if (N == 0 ) {
        return;
    }
    unsigned Fib1 = 1;
    unsigned Fib2 = 2;
    printf("Fibonacci(%u) = %u\n", Fib1, Fib2);
    unsigned FibN = 0;
    for (unsigned i = 3; i <= N; i++) {
        FibN = Fib1 + Fib2;
        Fib1 = Fib2;
        Fib2 = FibN;
        printf("Fibonacci(%u) = %u\n", i, FibN);
    }
}
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
    Fibonacci(10);

    //OK 1st try reverse(123456789);
    //reverse_final(123456789);
    //char S[] = "123456789";
    //reverse_string(S);

    return 0;
}

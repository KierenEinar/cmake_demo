#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "mymath.h"
#include "utils.h"
typedef struct aofrwblock {
    unsigned long long free, used;
    char buf[1024*10];
}aofrwblock;

typedef struct __attribute__((__packed__)) flexablearr {
    unsigned long long free;
    char abc;
    char buf[];
}flexablearr;

typedef struct flexablearr1 {
    unsigned long long free;
    char abc;
    char buf[];
}flexablearr1;

int main() {
    printf("Hello, World!\n");
    aofrwblock b;
    printf("aofrwblock size=%lu;\n", sizeof(b));

    flexablearr a;
    printf("flexablearr size=%lu;\n", sizeof(a));

    flexablearr1 a1;
    printf("flexablearr1 size=%lu;\n", sizeof(a1));

#ifdef Test
    printf("test!\n");
#else
    printf("released!\n");
#endif

    printf("using .so sum, result by sum(10, 20)->%d\n", sum(10, 20));

    static int svar = 1000;
    printf("svar=%d\n", svar);
    svar = 1200;
    printf("svar=%d\n", svar);


    flexablearr *arr = malloc(sizeof(*arr) + 8);
    long long *num = (void *)(arr+1);
    *num = INT64_MAX;
    printf("*num=%lld\n", *num);
    free(arr);


    char *s = "-1111";
    long long v;
    int ok = string2ll(s, strlen(s), &v);
    printf("string2ll, %s to %lld, ok=%d\n", s, v, ok);

    printf("sizeof(int)=%zu\n", sizeof(int));
    printf("sizeof(long)=%zu\n", sizeof(long));
    printf("sizeof(long long)=%zu\n", sizeof(long long));

    return 0;
}

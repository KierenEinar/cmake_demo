//
// Created by kieren jiang on 2023/5/7.
//

#ifndef CMAKE_DEMO_UTILS_H
#define CMAKE_DEMO_UTILS_H

#define LLMAXSIZE 21

#include <sys/types.h>
int string2ll(const char *s, size_t slen, long long *value);
int string2l(const char *s, size_t slen, long *value);

// slen including '\0'
int ll2string(char *s, size_t slen, long long value);

#endif //CMAKE_DEMO_UTILS_H

// CMakeProject2.cpp: определяет точку входа для приложения.
//

#include "CMakeProject2.h"
#include <stdlib.h>
#include <stdio.h>
#include "getopt-master/getopt.h"

using namespace std;


//int getopt(int argc, char* argv[], const char* optstring);
//extern char* optarg;
//extern int optind, opterr, optopt;


int main(int argc, char** argv) {
    if (argc == 1) {
        printf("getopt test\n");
        printf("usage:\n");
        printf(" opts -a n -b m -o s\n");
        printf("example:\n");
        printf(" $ opts -a 323 -b 23 -o '-'\n");
        printf(" 323 — 23 = 300\n");
        return 0;
    }
    //char* opts = "a:b:o:";
    int a, b;
    char op;
    int opt;
    while ((opt = getopt(argc, argv, "a:b:c")) != -1) {
        switch (opt) {
        case 'a':
            a = atoi(optarg);
            break;
        case 'b':
            b = atoi(optarg);
            break;
        case 'o':
            op = optarg[0];
            break;
        }
    }
    switch (op) {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d — %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d\n", a, b, a / b);
        break;
    }
    return 0;
}

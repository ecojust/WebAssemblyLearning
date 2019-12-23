#include <emscripten/emscripten.h>
#include <stdio.h>

int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
   return a + b;
}

int EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



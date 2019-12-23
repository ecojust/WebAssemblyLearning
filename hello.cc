/*
 * @Author: 桔子桑
 * @Date: 2019-12-23 10:41:15
 * @FilePath: /WebAssemblyLearning/hello.cpp
 * @Description: 
 */
#include <emscripten/emscripten.h>
#include <stdio.h>
#include <iostream>
using namespace std;
extern "C" {

    int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
        return a + b;
    }

    int EMSCRIPTEN_KEEPALIVE reduce(int a, int b) {
        return a - b;
    }

    int EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
        if (n <= 1) {
            return n;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
}


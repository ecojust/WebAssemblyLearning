/*
 * @Author: 桔子桑
 * @Date: 2019-12-23 15:32:35
 * @FilePath: /WebAssemblyLearning/add.c
 * @Description: 
 */
// #include <emscripten/emscripten.h>
// #include <stdio.h>
#include <emscripten/val.h>
#include <emscripten/bind.h>

using namespace emscripten;


val get1XArray(double *arr, int len){
	return val(typed_memory_view(len, arr));
} 
  


 
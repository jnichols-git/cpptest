#include "headers/cbp-struct-example.h"

example_struct createExampleStruct(int a, int b) {
  example_struct x;
  x.a = a;
  x.b = b;
  return x;
}
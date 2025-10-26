
#include "MTSagittarius-swift.h"

#include <iostream>
#include "fibonacci.h"

int fibo::calcFibonacci() {
  auto abc = MTSagittarius::fibonacciSwift(5);
  std::cout << "abc: " << abc << std::endl;
  return 0;
}

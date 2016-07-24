#include <stdio.h>

#include "mymodule/module.h"

void myModulePrint(const char* msg) {
  printf("[Module] %s\n", msg);

  return;
}

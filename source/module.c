#include <stdio.h>

#include "mymodule/module.h"

void myModulePrint(const char* msg) {
  printf("[GithubModule] %s\n", msg);

  return;
}

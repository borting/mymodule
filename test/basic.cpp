#include "mbed-drivers/mbed.h"
#include "mymodule/module.h"

void app_start(int argc, char* argv[]) {
  myModulePrint("Hello World");

  return;
}

#ifndef YOTTA_CFG_MBED_OS
int main(int argc, char* argv[]) {
  app_start(0. (char**) 0);

  return 0;
}
#endif

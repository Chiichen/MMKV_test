#include "MMKV.h"
#include <iostream>
#include <unistd.h>
int main() {
  std::string rootDir = get_current_dir_name();
  MMKV::initializeMMKV(rootDir);
  auto mmkv = MMKV::defaultMMKV();

  mmkv->set(true, "bool");
  std::cout << "bool = " << mmkv->getBool("bool") << std::endl;

  mmkv->set(1024, "int32");
  std::cout << "int32 = " << mmkv->getInt32("int32") << std::endl;

  mmkv->set("Hello, MMKV for Win32", "string");
  std::string result;
  mmkv->getString("string", result);
  std::cout << "string = " << result << std::endl;
}
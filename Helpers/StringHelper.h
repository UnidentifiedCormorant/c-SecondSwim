#pragma once
#include <iostream>

int getStringLength(const char* string) {

  int i = 0;

  while (string[i])
    i++;

  return i;
}

char* copyString(char* destination, const char* source) {

  int length = getStringLength(source);
  char* result = new char[length];

  while (*source != '\0') {
    *result = *source;

    source++;
    result++;
  }

  delete[] destination;

  return result - length;
}
#pragma once
#include <iostream>

char* copyString(char* destination, const char* source) {

  char* current = destination;

  while (*source != '\0') {
    *current = *source;

    source++;
    current++;
  }

  *current = '\0';

  return destination;
}
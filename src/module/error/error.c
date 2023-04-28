#include "lib/error.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void exit_as_error(const char *format, ...) {
  va_list args;

  va_start(args, format);
  vfprintf(stderr, format, args);
  va_end(args);

  exit(EXIT_FAILURE);
}

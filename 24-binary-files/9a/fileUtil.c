#include "fileUtil.h"

#include <stdlib.h>

void assertFileOpen(FILE * file) {
  if (file == NULL) {
    printf("Error opening a file");
    exit(1);
  }
}

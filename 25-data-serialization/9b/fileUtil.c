#include "fileUtil.h"
#include <stdlib.h>

void assertFileOpen(FILE * file) {
  if (file == NULL) {
    printf("Error opening the file");
    exit(1);
  }
}
#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna) {
  char *rna = strdup(dna);
  size_t i = 0; 
  while (rna[i]) {
    if (rna[i] == 'T') {
      rna[i] = 'U';
    }
    i += 1;
  }
  return rna;
}
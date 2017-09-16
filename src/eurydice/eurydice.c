/* eurydice.c
 * -------------
 * top-level eurydice initialization functions. */

#include <stdio.h>

#include "eurydice/eurydice.h"

void eury_hello_world(void) {
   printf ("%s: %s\n", eury_config_version(), EURY_TEST_STRING);
}

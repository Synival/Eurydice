/* init.c
 * ------
 * top-level eurydice initialization functions. */

#include <stdio.h>

#include "eurydice/system/init.h"
#include "eurydice/system/eury_config.h"

void eury_hello_world(void) {
   printf ("%s: Hello, world!\n", eury_config_version());
}

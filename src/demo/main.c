#include <stdio.h>

#include <eurydice/eurydice.h>

int main(void) {
   printf (
      "Eurydice v%s (build %d) Demo\n"
      "------------------------------\n",
      eury_config_version(), eury_config_build());
   eury_hello_world();
   printf ("\n");

   return 0;
}

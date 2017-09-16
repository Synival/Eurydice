/* eury_config.c
 * -------------
 * definitions and tweaks based on generated config.h configuration. */

#include <stdlib.h>
#include <string.h>

#include "eurydice/eury_config.h"

#ifndef HAVE_STRDUP
char *_eury_strdup(const char *str) {
   if (str == NULL)
      return NULL;
   int len = strlen(str) + 1;
   char *buf = malloc(len);
   memcpy(buf, str, len);
   return buf;
}
#endif

#ifndef HAVE_STRCASECMP
int _eury_strcasecmp(const char *s1, const char *s2) {
   int c1, c2;
   while (1) {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 >= 'A' && c1 < 'Z') c1 += 32;
      if (c2 >= 'A' && c2 < 'Z') c2 += 32;
      if (c1 == 0 || c1 != c2)
         return c1 - c2;
   }
}
#endif

char *eury_config_version(void) {
   return EURY_VERSION;
}

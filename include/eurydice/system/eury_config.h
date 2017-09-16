/* eury_config.h
 * -------------
 * definitions and tweaks based on generated config.h configuration. */

#ifndef __EURY_EURY_CONFIG_H
#define __EURY_EURY_CONFIG_H

#ifdef HAVE_CONFIG_H
   #include "config.h"
#endif

/* check manually for some functions - configure script can make mistakes. */
#undef HAVE_STRDUP
#undef HAVE_STRCASECMP
#if (defined __APPLE__) || \
    (defined _SVID_SOURCE) || \
    (defined _BSD_SOURCE) || \
    (_XOPEN_SOURCE >= 500) || \
    ((defined _XOPEN_SOURCE) && (defined _XOPEN_SOURCE_EXTENDED)) || \
    (_POSIX_C_SOURCE >= 200809L)
   #define HAVE_STRDUP 1
   #define HAVE_STRCASECMP 1
#else
   #define strdup     _eury_strdup
   #define strcasecmp _eury_strcasecmp
#endif

/* add strdup() if we have to. */
#ifndef HAVE_STRDUP
   char *_eury_strdup(const char *str);
   int _eury_strcasecmp(const char *s1, const char *s2);
#else
#endif

/* handy functions. */
char *eury_config_version(void);
int eury_config_build(void);

#endif

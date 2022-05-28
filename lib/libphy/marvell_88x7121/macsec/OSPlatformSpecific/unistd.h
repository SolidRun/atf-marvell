#ifndef UNISTD_H
#define UNISTD_H

/* Need to port to non Linux platform */
#if defined __MINGW32__ || defined WIN32
#include "Windows.h"

#define usleep Sleep 

#else

//#error "Sleep timer need to be ported to specific platform"
#define usleep udelay 

#endif

#endif /* UNISTD_H  */

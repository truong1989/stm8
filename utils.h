#ifndef __UTILS_H
#define __UTILS_H

#if DEBUG
#define DEBUG_PRINT(...) do{ fprintf( stderr, __VA_ARGS__ ); fflush(stderr); } while( false )
#else
#define DEBUG_PRINT(...) do{ } while ( false )
#endif

#endif

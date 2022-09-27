/*
 * __utilities.h
 *
 *  Created on: 25-Sep-2022
 *      Author: naman
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define RT {return true;}
#define RF {return false;}
#define NEWLINE {printf("\n");}
#define ALL_DEBUG 1
#if ALL_DEBUG
#define DEBUG(...) {printf(__VA_ARGS__);}
#define DEBUGN(...) {printf(__VA_ARGS__); NEWLINE}
#define LOGERR() {printf("ERROR---> \n");printf(__FUNCTION__); NEWLINE; printf(__LINE__); NEWLINE; printf(__FILE__); NEWLINE}
#define LOGFUNC() {printf(__FUNCTION__); NEWLINE}
#define PTRCHECK(PTR) {if(!PTR)\
                       {return false;}\
					   else\
                       {\
                    	 return true;\
                       }}
#endif


#endif /* UTILITIES_H_ */

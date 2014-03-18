
/****************************************************************************
*                                                                           *
* Trick Simulation Environment Software                                     *
*                                                                           *
* Copyright (c) 1996,1997 LinCom Corporation, Houston, TX                   *
* All rights reserved.                                                      *
*                                                                           *
* Copyrighted by LinCom Corporation and proprietary to it. Any unauthorized *
* use of Trick Software including source code, object code or executables is*
* strictly prohibited and LinCom assumes no liability for such actions or   *
* results thereof.                                                          *
*                                                                           *
* Trick Software has been developed under NASA Government Contracts and     *
* access to it may be granted for Government work by the following contact: *
*                                                                           *
* Contact: Charles Gott, Branch Chief                                       *
*          Simulation and Graphics Branch                                   *
*          Automation, Robotics, & Simulation Division                      *
*          NASA, Johnson Space Center, Houston, TX                          *
*                                                                           *
****************************************************************************/

/*
 * This file was automatically generated by the ICG based on the file:
 * cannon/gravity/include/cannon.h
 * This file contains database parameter declarations specific to the
 * data structures and enumerated types declared in the above file.
 * These database parameters are used by the Trick input and
 * data recording processors to gain access to important simulation
 * variable information.
 *
 * Auto Code Generator Programmer:
 *    Rob Bailey  Sweet Systems Inc  12/97
 *    Alex Lin    NASA               03/01
 */
#define TRICK_IN_IOSRC

#if __GNUC__ == 2
    #define ADDRESS_OFFSET 1
#else
    #define ADDRESS_OFFSET 0 
#endif

#include <stdlib.h>
#include <stddef.h>
#include "sim_services/include/parameter_types.h"
#include "sim_services/include/exec_proto.h"
#include "trick_utils/trick_adt/include/avl.h"

extern struct avl_table *equiv_attributes ;

#include "cannon/gravity/include/cannon.h"



#ifdef __cplusplus
    extern "C" {
#endif

#ifdef __cplusplus
    }
#endif

void init_attrCANNON(void);

ATTRIBUTES attrCANNON[] = {
{ "pos0", "double", "m", "", "",
  "Init position of cannonball",
  2,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "vel0", "double", "m/s", "", "",
  "Init velocity of cannonball",
  2,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "acc0", "double", "m/s2", "", "",
  "Init acceleration of cannonball",
  2,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "pos", "double", "m", "", "",
  "xy-position",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "vel", "double", "m/s", "", "",
  "xy-velocity",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "acc", "double", "m/s2", "", "",
  "xy-acceleration",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 1,{{2,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "init_speed", "double", "m/s", "", "",
  "Init barrel speed",
  2,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "init_angle", "double", "r", "", "",
  "Angle of cannon",
  2,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "","","","","","",
  0,0,0,0,0,Language_C,0,0,0,
  0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } };

void init_attrCANNON(void) {


        EQUIV_ATTRIBUTES * equiv;
        ATTRIBUTES* last_non_bf;
        int i = 0;
        static int initialized_1337 ;

        if ( initialized_1337 ) {
                return ;
        }
        initialized_1337 = 1 ;

        last_non_bf = NULL ;
        attrCANNON[i++].offset = offsetof(CANNON,pos0) ;
        attrCANNON[i++].offset = offsetof(CANNON,vel0) ;
        attrCANNON[i++].offset = offsetof(CANNON,acc0) ;
        attrCANNON[i++].offset = offsetof(CANNON,pos) ;
        attrCANNON[i++].offset = offsetof(CANNON,vel) ;
        attrCANNON[i++].offset = offsetof(CANNON,acc) ;
        attrCANNON[i++].offset = offsetof(CANNON,init_speed) ;
        attrCANNON[i++].offset = offsetof(CANNON,init_angle) ;

        equiv = (EQUIV_ATTRIBUTES*) malloc(sizeof(EQUIV_ATTRIBUTES));
        equiv->attr = attrCANNON ;
        equiv->base = attrCANNON ;
        avl_insert(equiv_attributes , (void *)equiv) ;

}


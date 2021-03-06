/*****************************************************************************
  FILE           : $Source: /projects/higgs1/SNNS/CVS/SNNS/xgui/sources/bn_basics.h,v $
  SHORTNAME      : bn_basics
  SNNS VERSION   : 4.2

  PURPOSE        : 
  NOTES          :

  AUTHOR         : Kai-Uwe Herrmann
  DATE           : 15.1.1993

  CHANGED BY     : 
  RCS VERSION    : $Revision: 2.7 $
  LAST CHANGE    : $Date: 1998/02/25 15:19:40 $

    Copyright (c) 1990-1995  SNNS Group, IPVR, Univ. Stuttgart, FRG
    Copyright (c) 1996-1998  SNNS Group, WSI, Univ. Tuebingen, FRG

******************************************************************************/
#ifndef _BN_BASICS_DEFINED_
#define  _BN_BASICS_DEFINED_



#define ART1_MODEL    1
#define ART2_MODEL    2
#define ARTMAP_MODEL  3



extern void bn_basics_createART(int model, Widget *baseWidget,int *already_open,
                                Widget unitWidget[], Widget rowWidget[],
                                XtCallbackProc   CreateCallbackProc,
                                XtCallbackProc   DoneCallbackProc
                               );
extern void bn_basics_refresh (void);
extern int bn_basics_check_existingNetwork (void);
extern void bn_basics_getValues (int NoOfLayers, int units[], int rows[],
                                 Widget unitWidget[], Widget rowWidget[]);
extern int bn_basics_checkValues (int NoOfLayers, int units[], int rows[]);

#endif 
/* end of file */
/* lines:  */

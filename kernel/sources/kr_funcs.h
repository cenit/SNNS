/*****************************************************************************
  FILE           : $Source: /projects/higgs1/SNNS/CVS/SNNS/kernel/sources/kr_funcs.h,v $
  SHORTNAME      : 
  SNNS VERSION   : 4.2

  PURPOSE        : SNNS-Kernel: Routines for User-Function Management
		               (Function Prototypes)
  NOTES          :

  AUTHOR         : Niels Mache
  DATE           : 12.02.90

  CHANGED BY     : Sven Doering
  RCS VERSION    : $Revision: 2.6 $
  LAST CHANGE    : $Date: 1998/02/25 15:26:43 $

    Copyright (c) 1990-1995  SNNS Group, IPVR, Univ. Stuttgart, FRG
    Copyright (c) 1996-1998  SNNS Group, WSI, Univ. Tuebingen, FRG

******************************************************************************/
#ifndef _KR_FUNCS_DEFINED_
#define  _KR_FUNCS_DEFINED_


extern krui_err  krf_getFuncInfo( int  mode, struct FuncInfoDescriptor  *func_descr );

/*  Returns the number of functions in the function table
*/
extern int krf_getNoOfFuncs( void );

/*  seaches for the given function (name and type) and returns a pointer to
    this function. krf_funcSearch(...) returns TRUE if the given function was
    found, FALSE otherwise.
*/
extern bool krf_funcSearch( char *func_name, int  func_type, FunctionPtr  *func_ptr );

/*  Returns the name of the given function
*/
extern char *krf_getFuncName( FunctionPtr func_ptr );

/*  returns the name of the current network function
*/
extern char  *krf_getCurrentNetworkFunc( int  type );

/*  sets the current network function.
*/
extern krui_err  krf_setCurrentNetworkFunc( char  *function_name, int  type );




#endif 



/* 56 lines generated by deleteprivatedefinitions.awk */
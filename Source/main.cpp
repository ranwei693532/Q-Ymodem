/**
 * @file      main.cpp
 * @brief     
 * @details   
 * @author    ranwei
 * @version     
 * @date      2019/1/22 15:34:12:247
 * @copyright R_W
 * @par         (c) COPYRIGHT 2010-2018 by R_W Systems, Inc.    
 *                        All rights reserved.
 *                                                                    
 *       This software is confidential and proprietary to R_W 
 *     Systems, Inc.  No part of this software may be reproduced,    
 *     stored, transmitted, disclosed or used in any form or by any means
 *     other than as expressly provided by the written license agreement    
 *     between R_W Systems and its licensee.
 * @par History      
 *         1.Date         -- 2019/1/22 15:34:12:247
 *           Author       -- ranwei
 *           Modification -- Created file
 *
 */

#define  MAIN_GLOBAL

/* includes-------------------------------------------------------------------*/
#include <QApplication>
#include "mainwin.hh"

    
/** @defgroup MAIN                                            
  * @brief MAIN system modules                                
  * @{                                                                         
  */
    
/* Private typedef&macro&definde----------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* External functions --------------------------------------------------------*/
/* External variables --------------------------------------------------------*/
                                                                                
/** @defgroup MAIN_Private_Functions                          
  * @{                                                                         
  */                                                                            
                                                                                
/**                                                                             
  * @}                                                                         
  */	                                                                        
                                                                                
/** @defgroup MAIN_CLASS_Functions                          
  * @{                                                                         
  */                                                                            

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CMainWin w;
    w.show();

    return a.exec();
}


/**                                                                             
  * @}                                                                         
  */	                                                                        
                                                                                
/**                                                                             
  * @}                                                                         
  */
                                                                                
/****************** (C) COPYRIGHT 2010-2018 R_W ******END OF FILE**************/





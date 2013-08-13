#include "mat_trans_temp1.h"
 /*!  My new WoW-application
   *  \image html mat_trans_temp1.png
   *  \image latex application.eps "My application" width=10cm
 */


void matrix_transpose ( ) {
	uint32_t  R1 = 0;
		uint32_t  C1 = 0;
		uint32_t  ROUT = 0;
		uint32_t  COUT = 0;
		
   arm_status status; 
     
   arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  A_TRANSPOSE_OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  A_TRANSPOSE_OUT_data[4];
      
    arm_mat_init_f32( &A , 
    R1  , 
    C1,
    A_data );
	  
	arm_mat_init_f32( &A_TRANSPOSE_OUT ,
	ROUT ,
    COUT ,
    A_TRANSPOSE_OUT_data );
    
	status = arm_mat_trans_f32( &A ,
		    &A_TRANSPOSE_OUT );		
 
	
}
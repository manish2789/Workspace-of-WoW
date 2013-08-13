#include "Matrix_transpose_updated.h"
 /*!  My new WoW-application
   *  \image html Matrix_transpose_updated.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_transpose ( ) {
	uint32_t  srcRows = 0;
		uint32_t  srcColums = 0;
		uint32_t  destRows = 0;
		uint32_t  destColums = 0;
		
   arm_status status; 
     
   arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  A_TRANSPOSE_OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  A_TRANSPOSE_OUT_data[4];
      
    arm_mat_init_f32( &A , 
    srcRows  , 
    srcColums,
    A_data );
	  
	arm_mat_init_f32( &A_TRANSPOSE_OUT ,
	destRows ,
    destColums ,
    A_TRANSPOSE_OUT_data );
    
	status = arm_mat_trans_f32( &A ,
		    &A_TRANSPOSE_OUT );		
 
	
}
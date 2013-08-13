#include "Matrix_scaling_updated.h"
 /*!  My new WoW-application
   *  \image html Matrix_scaling_updated.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_scaling_updated ( ) {
	uint32_t  srcRows = 0;
		uint32_t  srcColums = 0;
		uint32_t  destRows = 0;
		uint32_t  destColums = 0;
		float32_t  scaling_factor = 0;
		
   arm_status status; 
     
   arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  Scale_A__OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  Scale_A__OUT_data[4];
      
    arm_mat_init_f32( &A , 
    srcRows  , 
    srcColums,
    A_data );
	  
	arm_mat_init_f32( &Scale_A__OUT ,
	destColums ,
    scaling_factor ,
    Scale_A__OUT_data );
    
	status = arm_mat_scale_f32( &A ,
		    destRows,
		    &Scale_A__OUT );		
 
	
}
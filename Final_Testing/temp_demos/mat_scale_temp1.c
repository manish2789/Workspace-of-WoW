#include "mat_scale_temp1.h"
 /*!  My new WoW-application
   *  \image html mat_scale_temp1.png
   *  \image latex application.eps "My application" width=10cm
 */


void Mat_scale ( ) {
	uint32_t  R1 = 0;
		uint32_t  C1 = 0;
		uint32_t  R2 = 0;
		uint32_t  C2 = 0;
		uint32_t  Scaling_factor = 0;
		
   arm_status status; 
     
   arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  Scale_A__OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  Scale_A__OUT_data[4];
      
    arm_mat_init_f32( &A , 
    R1  , 
    C1,
    A_data );
	  
	arm_mat_init_f32( &Scale_A__OUT ,
	C2 ,
    Scaling_factor ,
    Scale_A__OUT_data );
    
	status = arm_mat_scale_f32( &A ,
		    R2,
		    &Scale_A__OUT );		
 
	
}
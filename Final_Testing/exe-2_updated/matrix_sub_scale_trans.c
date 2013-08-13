#include "matrix_sub_scale_trans.h"
 /*!  My new WoW-application
   *  \image html matrix_sub_scale_trans.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_all ( ) {
	uint32_t  r1 = 0;
		uint32_t  c1 = 0;
		uint32_t  r2 = 0;
		uint32_t  c2 = 0;
		uint32_t  rout = 0;
		uint32_t  cout = 0;
		uint32_t  scale = 0;
		
	 arm_status status; 
     
    arm_matrix_instance_f32  A  ;
    arm_matrix_instance_f32  B  ;
	arm_matrix_instance_f32  A_SUB_B_OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  B_data[4];
      const float32_t  A_SUB_B_OUT_data[4];
      
      arm_mat_init_f32( &A , 
      r1  , 
      c1,
      A_data );
		
		 
      arm_mat_init_f32( &B , 
      r2  , 
      c2,
      B_data );
		
		 arm_mat_init_f32( &A_SUB_B_OUT ,
		  rout ,
		   cout ,
		  A_SUB_B_OUT_data );
		  
		  status = arm_mat_sub_f32( &A ,
&B ,  &A_SUB_B_OUT );		
 
	
}
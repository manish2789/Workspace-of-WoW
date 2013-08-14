#include "Matrix_Inverse_updated.h"
 /*!  My new WoW-application
   *  \image html Matrix_Inverse_updated.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_Inverse ( ) {
	uint32_t  srcRow = 0;
		uint32_t  srcColum = 0;
		uint32_t  destRow = 0;
		uint32_t  destColum = 0;
		
   arm_status status; 
     
   arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  A_INVERSE_OUT  ;
	
	const float32_t  A_data[4];
	const float32_t  A_INVERSE_OUT_data[4];
      
    arm_mat_init_f32( &A , 
    srcRow  , 
    srcColum,
    A_data );
	  
	arm_mat_init_f32( &A_INVERSE_OUT ,
	destRow ,
    destColum ,
    A_INVERSE_OUT_data );
    
	status = arm_mat_inverse_f32( &A ,
		    &A_INVERSE_OUT );		
 
	
}
#include "mat_inv.h"
 /*!  My new WoW-application
   *  \image html mat_inv.png
   *  \image latex application.eps "My application" width=10cm
 */


void Mat_inv ( ) {
	uint32_t  var = 0;
		uint32_t  var = 0;
		uint32_t  var = 0;
		uint32_t  var = 0;
		
	 arm_status status; 
     
    arm_matrix_instance_f32  A  ;
   arm_matrix_instance_f32  A_INVERSE_OUT  ;
	
	const float32_t  A_data[4];
	 const float32_t  A_INVERSE_OUT_data[4];
      
      arm_mat_init_f32( &A , 
      var  , 
      var,
      A_data );
		
		 
      
		 arm_mat_init_f32( &A_INVERSE_OUT ,
		  var ,
		   var ,
		  A_INVERSE_OUT_data );
		  
		  status = arm_mat_inverse_f32( &A ,
		    &A_INVERSE_OUT );		
 
	
}
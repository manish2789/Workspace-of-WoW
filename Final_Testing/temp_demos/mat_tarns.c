#include "mat_tarns.h"
 /*!  My new WoW-application
   *  \image html mat_tarns.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_transpose ( ) {
	uint32_t  r1 = 0;
		uint32_t  c1 = 0;
		uint32_t  r2 = 0;
		uint32_t  c2 = 0;
		
	
	arm_status status; 
	
  arm_matrix_instance_f32   A  ;
  arm_matrix_instance_f32   A_OUT  ;
  
  const float32_t  A_data[4];
  const float32_t  A_OUT_data[4];
  
  arm_mat_init_f32( &A ,
   r1  , 
   c1,
   A_data );
 
 arm_mat_init_f32( &A_OUT ,
  r2 ,
   c2 , 
   A_OUT_data );
 
 arm_mat_trans_f32( &A ,
   &A_OUT  );		
 
 
	
}

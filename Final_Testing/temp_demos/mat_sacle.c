#include "mat_sacle.h"
 /*!  My new WoW-application
   *  \image html mat_sacle.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_scaling ( ) {
	uint32_t  srcRows = 0;
		uint32_t  srcColums = 0;
		uint32_t  destRow = 0;
		uint32_t  destColums = 0;
		uint32_t  scaling_fact = 0;
		
 arm_status status; 
	
 arm_matrix_instance_f32   A  ;
 arm_matrix_instance_f32   A_OUT  ;
 
 const float32_t  A_data[4];
 const float32_t  A_OUT_data[4];
 
 arm_mat_init_f32( &A , srcRows  , srcColums,A_data[4] );
 arm_mat_init_f32( &A_OUT , destRow , destColums , A_OUT_data[4] );
 
 arm_mat_scale_f32( &A , scaling_fact , &A_OUT , scaling_fact );		

	
}

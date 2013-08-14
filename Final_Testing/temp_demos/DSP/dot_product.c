#include "dot_product.h"
 /*!  My new WoW-application
   *  \image html dot_product.png
   *  \image latex application.eps "My application" width=10cm
 */


void Dot_product_logic ( ) {
	uint32_t  Blocksize = 0;
		
	
       arm_status status; 
     
    arm_matrix_instance_f32  Vect1[Blocksize]  ;
    arm_matrix_instance_f32  Vect2[Blocksize]  ;
	arm_matrix_instance_f32  Vect_out[Blocksize] ;
	
	arm_dot_prod_f32( Vect1 ,Vect2 , &Blocksize  , Vect_out );
	
}
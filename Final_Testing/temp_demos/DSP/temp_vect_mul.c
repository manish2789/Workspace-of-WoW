#include "temp_vect_mul.h"
 /*!  My new WoW-application
   *  \image html temp_vect_mul.png
   *  \image latex application.eps "My application" width=10cm
 */


void untitled ( ) {
	uint32_t  blocksize = 0;
		uint32_t  scaling_fcator = 0;
		
	     
   float32_t  Vect1[blocksize]  ;
   float32_t  Vect2[blocksize]  ;
   float32_t  Vect_out[blocksize] ;
	
	arm_add_f32( Vect1 ,Vect2 ,  Vect_out, &blocksize  );
	
	     
   float32_t  Vect1[blocksize]  ;
   float32_t  Vect2[blocksize]  ;
   float32_t  Vect_out[blocksize] ;
	
	arm_mult_f32( Vect1 ,Vect2 ,  Vect_out,&blocksize   );
	
}
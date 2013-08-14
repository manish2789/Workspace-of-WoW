#include "vect_new2.h"
 /*!  My new WoW-application
   *  \image html vect_new2.png
   *  \image latex application.eps "My application" width=10cm
 */


void vectror_operations ( ) {
	uint32_t  blocksize = 0;
		uint32_t  scaling_factor = 0;
		
	     
   float32_t  Vect1[blocksize]  ;
   float32_t  Vect2[blocksize]  ;
   float32_t  Vect_out[blocksize] ;
	
	arm_sub_f32( Vect1 ,Vect_out,Vect2 , &blocksize  );
	
	     
   float32_t  Vect1[blocksize]  ;
   float32_t  Vect_out[blocksize] ;
	
	arm_negate_f32( Vect1  , Vect_out, &blocksize   );
	
	     
   float32_t  Vect1[scaling_factor]  ;
   float32_t  blocksize[scaling_factor]  ;
   float32_t  Vect_out[scaling_factor] ;
	
	arm_scale_f32( Vect1 ,blocksize , Vect_out, &scaling_factor  );
	
}
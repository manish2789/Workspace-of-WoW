#include "mean_temp1.h"
 /*!  My new WoW-application
   *  \image html mean_temp1.png
   *  \image latex application.eps "My application" width=10cm
 */


void mean ( ) {
	uint32_t  blocksize = 0;
		
	float32_t  Vect [ blocksize ];
    float32_t  mean;
    
     arm_mean_f32( Vect , &blocksize , &mean ) ;
       

		
	
}
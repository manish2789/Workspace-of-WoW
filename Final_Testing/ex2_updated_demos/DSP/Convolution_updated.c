#include "Convolution_updated.h"
 /*!  My new WoW-application
   *  \image html Convolution_updated.png
   *  \image latex application.eps "My application" width=10cm
 */


void Convolution_calculaion ( ) {
	uint32_t  seq1Len = 0;
		uint32_t  seq2Len = 0;
		
	     
    float32_t  Vect1[seq1Len]  ;
    float32_t  Vect2[seq2Len]  ;
    float32_t  Vect_out[ { (seq1Len) + (seq2Len) } -1 ] ;
	
    arm_conv_f32( Vect1 ,
    &seq1Len,
    Vect2 ,
    &seq2Len,
    Vect_out );
	
	
}
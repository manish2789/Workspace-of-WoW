#include "timer.h"
 /*!  My new WoW-application
   *  \image html timer.png
   *  \image latex application.eps "My application" width=10cm
 */


void main ( ) {
	uint32_t  out = ;
		uint32_t  a = ;
		
	
		xTimerHandle xTimer;

        xTimer = xTimerCreate( "MyTimer",( a),pdTRUE,( void * ) 0,MyvTimerCallback);
        
        xTimerStart( xTimer,0);

	
}void MyvTimerCallback ( ) {
	
}
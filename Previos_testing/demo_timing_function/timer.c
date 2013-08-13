#include "timer.h"
 /*! Here is a snapshot of my new application:
   *  \image html timer.png
   *  \image latex application.eps "My application" width=10cm
 */


void timing_function ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		
	
		xTimerHandle xTimer;

        xTimer = xTimerCreate("Timer",( /portTICK_RATE_MS ),pdTRUE,( void * ) 0,vTimerCallback);
        
        xTimerStart( xTimer,0);

	var = TIMER/Output;
		
}
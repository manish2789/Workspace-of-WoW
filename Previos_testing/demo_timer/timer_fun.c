#include "timer_fun.h"
 /*!  My new WoW-application
   *  \image html timer_fun.png
   *  \image latex application.eps "My application" width=10cm
 */


void Freertos_timer ( ) {
	uint32_t  b = ;
		uint32_t  a = ;
		
	
		xTimerHandle xTimer;

        xTimer = xTimerCreate("Timer",( /portTICK_RATE_MS ),pdTRUE,( void * ) 0,vTimerCallback);
        
        xTimerStart( xTimer,0);

	b = TIMER/Output;
		
}
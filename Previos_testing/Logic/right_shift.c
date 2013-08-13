#include "right_shift.h"
 /*! Here is a snapshot of my new application:
   *  \image html right_shift.png
   *  \image latex application.eps "My application" width=10cm
 */


void right_shift ( ) {
	LCD_CWR = LCD_CWR &gt;&gt; BIT_SHIFT ;
       
	
}
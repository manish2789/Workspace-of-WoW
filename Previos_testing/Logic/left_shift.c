#include "left_shift.h"
 /*! Here is a snapshot of my new application:
   *  \image html left_shift.png
   *  \image latex application.eps "My application" width=10cm
 */


void left_shift ( ) {
	LCD_DATA = LCD_DATA &lt;&lt; Bit_shift ;
       
	
}
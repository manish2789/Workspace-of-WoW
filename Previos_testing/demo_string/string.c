#include "string.h"
 /*! Here is a snapshot of my new application:
   *  \image html string.png
   *  \image latex application.eps "My application" width=10cm
 */


void string_concatenate ( ) {
	char str1 [10];
	 char str2 [20];
	strcat (str1,str2);
		
	
}void str_cpy ( ) {
	 char str_src [10];
	 char str_dest [10];
	 strcpy (str_src,str_dest);
		
	
}void str_len ( ) {
	 char str_src [10];		
        int  string_length ;
	string_length = strlen (str_src);
	
}void str_cmp ( ) {
	char str1 [10];
	 char str2 [10];
	int  result ;
	result = strcmp (str1,str2);
	
}void str_fnr ( ) {
	 char str_find [20];
	 char str_src [20];
	 char str_result [20];
	 char str_replace [20];
	str_result = strfnr (str_src,str_find,str_replace);
		
	
}

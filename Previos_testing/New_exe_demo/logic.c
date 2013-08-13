#include "logic.h"
 /*!  My new WoW-application
   *  \image html logic.png
   *  \image latex application.eps "My application" width=10cm
 */


void and ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var =  var &amp;&amp;var  ;
		
	var = AND_logic/output;
		
}void or ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = var || var ;
		
	var = OR/output;
		
}void nor ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = ~ (var | var) ;
		
	var = NOR/output;
		
}void xor ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = var ^ var ;
		
	var = XOR/output;
		
}void nand ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = ~ (var &amp;&amp; var) ;
		
	var = NAND/output;
		
}void not ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		var = ~ (var) ;
		
	var = NOT/output;
		
}void left shift ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = var &lt;&lt; var ;
       
	var = left_shift/output;
		
}void rigtht_shift ( ) {
	uint32_t  var = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = var &gt;&gt; var ;
       
	var = right_shift/output;
		
}void increment_op ( ) {
	uint32_t  var = ;
		uint32_t  count = ;
		uint32_t  var = ;
		var = var + count ;
       
	var = Increment/output;
		
}void decrement_op ( ) {
	uint32_t  count = ;
		uint32_t  var = ;
		uint32_t  var = ;
		var = var - count ;
       
	var = decrement/output;
		
}

#include "Matrix_op.h"
 /*! Here is a snapshot of my new application:
   *  \image html Matrix_op.png
   *  \image latex application.eps "My application" width=10cm
 */


void Matrix_add ( ) {
	arr1 [10];
	int i;    
		arr2 [10];
	   
		add_mat [10];
	    for (i=0 ; i< 10 ;i++)
{
		add_mat [i] = arr1 [i]  + arr2 [i]
 }      
	
}void Matrix_substract ( ) {
	arr1 [20];
	   int i;
		arr2 [20];
	    
		Mat_Subtraction [20];
 for (i=0 ; i< 10 ;i++)
{	   
		Mat_Subtraction [i] =  arr1 [i]  - arr2 [i]
 }      
	
}void Matrix_Inverse ( ) {
	inv_arr1 [10];
	    int i;
		arr1 [10];
	 for (i=0 ; i< 10 ;i++)
{  
		inv_arr1[i] = arr1 [i]^-1 ;
 }      
	
}void Matrix_Transpose ( ) {
	arr1 [10];
	   int i;
		trans_arr1 [10];
	    for (i=0 ; i< 10 ;i++)
{  
		trans_arr1 [i]= trnas( arr1 [i]);
}
       
	
}void Matrix_multiply ( ) {
	arr2 [10];
	    
		Mat_muliplicaion [10];
	   int i;
		arr1 [10];
     for (i=0 ; i< 10 ;i++){

	Mat_muliplicaion[i] = arr1 [i] * arr2 [i];
    }   
	
}

/* Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P
*/

#include<stdio.h>
#include<math.h>  
int main()  
{ 
  // Principal amount 
  
  double principal = 10000;  
  
  // Annual rate of interest 
  double rate = 5;  
  
  // Time 
  double time = 2;  
  
  // Calculating compound Interest 
  double Amount = principal *  ((pow((1 + rate / 100),time))); 
  double CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 
  return 0; 
} 
    
//calculate compound interesst
/*Input principal amount. Store it in some variable say principal.
Input time in some variable say time.
Input rate in some variable say rate.
Calculate Amount using formula, 
Amount = principal * (1 + rate / 100)  time).
Calculate Compound Interest using Formula.
Finally, print the resultant value of CI. */

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
    
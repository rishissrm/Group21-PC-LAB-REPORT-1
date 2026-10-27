#include 
<stdio.h> 
#defineMAX 100
 struct cg { // structure to hold x and y coordinates and mass 
float x, y, mass; 
}masses[MAX]; 
int readin(void) 
{
/* Write this function to read in the data 
into the array masses  
note that this function should return the number of  
2 
of 
Page 
4 
masses read in from the file */ 
} 
void computecg(int n_masses) 
{ 
/* Write this function to compute the C of G  
and print the result 
)
int main(void)
{ 
int number; 
((number = readin()) > 0) 
computecg(number); 
return 0; 
} 

#include <stdio.h> 
#define MAX 100
 struct cg { // structure to hold x and y coordinates and mass 
    float x, y, mass; 
} masses[MAX]; 
int readin(void) 

// function to read in the data 
//int  readin( void)
{ 
int n, i ;

printf("number of weights:");
scanf("%d",&n);

if (n>MAX){
    printf("ERROR!\n");
    return 0;
}


printf("x: y: mass:\n");
  for(i = 0; i<n; i++)
  {scanf("%f %f %f", &masses[i].x, &masses[i].y, &masses[i].mass);
   
}
return n;
}

//void readin(int n)
  
   // int n, i;
  

 //read x,y and mass for each weight



 //function to calculate the centre of gravity
void computecg(int n)
{
float sum_of_xmass = 0;
float sum_of_ymass = 0;
float sum_of_mass = 0;
int i;
// loop through all the masses and add everything up
for(i = 0; i < n; i++)
{
sum_of_xmass = sum_of_xmass + (masses[i].x * masses[i].mass);
sum_of_ymass = sum_of_ymass + (masses[i].y * masses[i].mass);
sum_of_mass = sum_of_mass + masses[i].mass;
}
// calculate the centre of gravity
float cg_x = sum_of_xmass / sum_of_mass;
float cg_y = sum_of_ymass / sum_of_mass;

// print the result
printf("CoG coordinates are: x = %.2f y = %.2f\n", cg_x, cg_y);
}
int main(void)
{ 
int number; 
if ((number = readin()) > 0) 
computecg(number); 
return 0; 
} 

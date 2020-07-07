#include<stdio.h>

//Define a structure called point3d that encapsulates values for x, y, and z coordinates of a point and following functions: 
//- a function to display a point3d variable. 
//- a function to receive coordinates of a point3d variable from user. 
//- a function to compare two point3d variables that returns a negative value if first argument is closer to origin, 
//a positive value if the second argument is closer to origin, zero if both arguments are equidistance to origin. 
//Test your functions in a program. 

struct point3d{
	
	int x;
	int y;
	int z;
};
int compare(struct point3d pp1,struct point3d pp2){
	
	int sqr1=pow(pp1.x,2)+pow(pp1.y,2)+pow(pp1.z,2);
	int dstn1=sqrt(sqr1);
	
	int sqr2=pow(pp2.x,2)+pow(pp2.y,2)+pow(pp2.z,2);
	int dstn2=sqrt(sqr2);
	
	if(dstn1<dstn2){
		return -1;
	}
	else if(dstn1>dstn2){
		return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	
	struct point3d p1;
	struct point3d p2;
	
	printf("Enter x value of point one:");
	scanf("%d",&p1.x);
	printf("Enter y value of point one:");
	scanf("%d",&p1.y);
	printf("Enter z value of point one:");
	scanf("%d",&p1.z);
	printf("Point one=(%d,%d,%d)",p1.x,p1.y,p1.z);
	
	
	printf("\nEnter x value of point two:");
	scanf("%d",&p2.x);
	printf("Enter y value of point two:");
	scanf("%d",&p2.y);
	printf("Enter z value of point two:");
	scanf("%d",&p2.z);
	printf("Second one=(%d,%d,%d)",p2.x,p2.y,p2.z);
	
	int result=compare(p1,p2);
	
	if(result==-1){
		printf("\nFirst argument is closer to origin.");
	}
	else if(result==1){
		printf("\nThe second argument is closer to origin.");
	}
	else if(result==0){
		printf("\nBoth arguments are equidistance to origin.");
	}
	
  return 0;	
}

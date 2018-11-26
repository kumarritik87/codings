#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, x2, y2, distance;
	printf("Enter the coardinates of given point : \n");
	scanf("%f %f %f %f",&x1, &y1, &x2, &y2);
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	
	printf("Distance between the two points: %.2f", sqrt(distance));
	printf("\n");
	return 0;
}

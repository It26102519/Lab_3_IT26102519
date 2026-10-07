#include <stdio.h>
int main () {
	double speed_kmh;
	double distance;
	double speed_ms;
	double acceleration;
	double time;
	
	printf("Enter takeoff speed (km/hr): ");
	scanf("%lf" , &speed_kmh);


	 printf("Enter catapult distance (meters): ");
        scanf("%lf" , &distance);
 
	speed_ms = speed_kmh * (1000.0/3600.0);
	acceleration = (speed_ms * speed_ms) / (2.0 * distance );
	time = speed_ms / acceleration;

	 printf("\n--- Result ---\n");
	 printf("Takeoff speed; %.2f m/s\n",  speed_ms);
	 printf("Acceleration: %.2f m/s^2\n", acceleration);
	 printf("Time: %.2f seconds\n" , time);
	 return 0;
}



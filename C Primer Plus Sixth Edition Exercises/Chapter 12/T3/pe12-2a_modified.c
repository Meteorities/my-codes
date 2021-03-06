#include <stdio.h>

void set_mode(int mode,int * mode_decided) {
	if (mode >= 0) {
		if (mode != 0 && mode != 1) {
			printf("Invalid mode specified.");
			if (* mode_decided == 0) {
				printf("Mode 0(metric) used.\n");
			}
			else {
				printf("Mode 1(US) used.\n");
			}
		}
		else {
			* mode_decided = mode;
		}
	}
}

void get_info(int * mode_decided,double * distance,double * gasoline_used) {
	if (* mode_decided == 0) {  //metric caculation mean
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%lf", distance);
		printf("Enter fuel consumed in liters: ");
		scanf_s("%lf", gasoline_used);
	}
	else {  //US caculation mean
		printf("Enter distance traveled in miles: ");
		scanf_s("%lf", distance);
		printf("Enter fuel consumed in gallons: ");
		scanf_s("%lf", gasoline_used);
	}
}

void show_info(const int * mode_decided,const double * distance,const double * gasoline_used) {
	double fuel_consumption = 0.00;
	if (* mode_decided == 0) {  //metric caculation mean
		fuel_consumption = * gasoline_used / (* distance / (double)100);
		printf("Fuel consumption is %.2f liters per 100 km.\n", fuel_consumption);
	}
	else {  //US caculation mean
		fuel_consumption = * distance / * gasoline_used;
		printf("Fuel consumption is %.1f miles per gallon.\n", fuel_consumption);
	}
}
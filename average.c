#include <stdio.h>
#include "average.h"

int average(int payments[], int n) {
	double ave=0.0, sum=0.0;
	int i;
	for(i=0;i<n;i++) {
		sum += payments[i];
	}
	ave = sum/i;

	return ave;
}
	

#include<stdio.h>
#include"sum.h"

int sum(int payments[],int n){
	int sum,i;
	sum = 0;
	for(i=0;i<n;i++){
		sum=sum+payments[i];
	}
	return sum;
}

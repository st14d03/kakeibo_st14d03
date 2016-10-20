#include<stdio.h>
#include"sum.h"

int main(void){
	int n;	
	//テスト用配列
	int payments[]={1,2,3,4,5};
	n=sizeof(payments)/sizeof(payments[0]);	
	
	if(sum(payments,n)==15){
		printf("成功\n");
	}else{
		printf("失敗\n");
		printf("%d\n",sum(payments,n));
	}
}

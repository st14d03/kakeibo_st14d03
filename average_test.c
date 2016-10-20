#include <stdio.h>
#include "average.h"

int main(void) {
	int payments[5] = {1, 2, 3, 4, 5};
	int size = sizeof(payments)/sizeof(payments[0]);
	printf("%d\n", average(payments, size));

	// 1,2,3,4,5の平均
	if (average(payments, size) == 3) {
		printf("1,2,3,4,5の平均　テスト成功\n");
	} else {
		printf("1,2,3,4,5の平均　テスト失敗\n");
	}

	return 0;
}

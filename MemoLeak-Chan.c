/**
* MemoLeak-Chan
* (C) 2019 HyodaKazuaki
* This software is released under the MIT License.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int getSize = 0;
	size_t size = 0;
	size_t i = 0;
	int pt;
	char* p;

	printf("メモリ食べたい！\n");
	printf("何GBくれるの？\n");
	scanf("%d", &getSize);
	if(size < 0) {
		printf("食べさせてー！\n");
		return 1;
	}
	size = (size_t)((size_t)getSize * 1024L * 1024L * 1024L);
	printf("%dGB食べるよ！\n", getSize);
	printf("%zu\n", size);

	p = (char *)malloc(size);
	if(p == NULL) {
		printf("ぐえー噛まれちゃった...\n");
		return 1;
	}

	printf("パクパク....\n");
	for(i = 0; i < size; i++) {
		p[i] = '\0';
	}

	printf("%dGB食べちゃった！お腹いっぱい！\n", getSize);
	scanf("%d", &pt);
	free(p);

	return 0;
}

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

	printf("�������H�ׂ����I\n");
	printf("��GB�����́H\n");
	scanf("%d", &getSize);
	if(size < 0) {
		printf("�H�ׂ����ā[�I\n");
		return 1;
	}
	size = (size_t)((size_t)getSize * 1024L * 1024L * 1024L);
	printf("%dGB�H�ׂ��I\n", getSize);
	printf("%zu\n", size);

	p = (char *)malloc(size);
	if(p == NULL) {
		printf("�����[���܂ꂿ�����...\n");
		return 1;
	}

	printf("�p�N�p�N....\n");
	for(i = 0; i < size; i++) {
		p[i] = '\0';
	}

	printf("%dGB�H�ׂ�������I���������ς��I\n", getSize);
	scanf("%d", &pt);
	free(p);

	return 0;
}

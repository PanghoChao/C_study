#include<stdio.h>


int main_loop(void) {
	/*for (int i = 1; i<6; i++) {

		for(int k = 5; k > i; k--){
				printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	/*for (int i = 4; i >= 1; i--) {

		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//ÇÇ¶ó¹Ìµå¸¦ ½×¾Æ¶ó 

	int floor;
	printf("¸î ÃþÀ¸·Î ½×°Ú´À³Ä?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {

		for (int j = 1; j < floor-i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

}
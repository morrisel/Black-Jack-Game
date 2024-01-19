/* The program writed in ANSI standart */
#include <stdio.h>


/* Card representation */
typedef struct Card
{
	/* uint8_t data; <-- since c99	*/		/* [3:0] - suit, [7:4] - rank */
	unsigned char data;
	struct Card *next;
} Card;


int main(void)
{
	puts("Hello");

	puts("World");
	/*
	return 0;
	*/
}

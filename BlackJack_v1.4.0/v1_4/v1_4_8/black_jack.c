/* The program writed in ANSI standart */
/* compilation: */
/* gcc -ansi -pedantic -Wall -Wextra -Wconversion -g v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion v1_4_0/black_jack.c -o black_jack */

#include <stdio.h>


/* Card representation */
typedef struct Card
{
	/* uint8_t data; <-- since c99	*/		/* [3:0] - suit, [7:4] - rank */
	unsigned char data;
	struct Card *next;
} Card;

typedef struct CardList
{
	Card *head;
	size_t len;
} CardList;

typedef struct CameState
{
	CardList deck;
	CardList dealer_hand;
	CardList player_hand;
	int cash;
	int pot;
} GameState;


/* Function Prototype */
/*
void init_cardlist(CardList *cardlist);
void fill_deck(CardList *deck);
void clear_cardlist(CardList *cardlist);
int get_rank(Card *card);
Card *card_new(int rank, int suit);
Card *card_remove_at(CardList *cardlist, size_t index);
Card *card_draw(CardList *cardlist);
void card_push(CardList *cardlist, Card *card);
void print_cards(const char *player, CardList *hand, int hide_second);
void print_game_state(GameState *state);
int calculate_hand_value(CardList *hand);
void betting_phase(GameState *state);
void initial_deal_phase(GameState *state);
void blackjack_check_phase(GameState *state);
void hit_or_stand_phase(GameState *state);
void dealer_draw_phase(GameState *state);
void reset_cards_phase(GameState *state);
*/


int main(void)
{
	puts("Hello");

	puts("World");

	
	/*
	return 0;
	*/

	/*
	return;
	*/
}

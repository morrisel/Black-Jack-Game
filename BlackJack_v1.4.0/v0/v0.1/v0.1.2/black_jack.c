/* The program writed in ANSI standart */
/* compilation: */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */

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



void main(void)
{
	puts("Hello");

	puts("World");

	
	/*
	return 0;
	*/

	
	return;
	
}


void init_cardlist(CardList *cardlist __attribute__((unused)))
{	
}
void fill_deck(CardList *deck __attribute__((unused)))
{
}
void clear_cardlist(CardList *cardlist __attribute__((unused)))
{
}
int get_rank(Card *card __attribute__((unused)))
{
	return 0;
}
Card *card_new(int rank __attribute__((unused)), int suit __attribute__((unused)))
{
	return NULL;
}
Card *card_remove_at(CardList *cardlist __attribute__((unused)), size_t index __attribute__((unused))) 
{ 
	return NULL;
} 
Card *card_draw(CardList *cardlist __attribute__((unused))) 
{ 
	return NULL;
} 
void card_push(CardList *cardlist __attribute__((unused)), Card *card __attribute__((unused))) 
{ 
} 
void print_cards(const char *player __attribute__((unused)), CardList *hand __attribute__((unused)), int hide_second __attribute__((unused))) 
{ 
} 
void print_game_state(GameState *state __attribute__((unused))) 
{ 
} 
int calculate_hand_value(CardList *hand __attribute__((unused))) 
{ 
	return 0;
} 
/* void betting_phase(GameState *state) */ 
/* { */ 
/* } */ 
/* void initial_deal_phase(GameState *state) */ 
/* { */ 
/* } */ 
/* void blackjack_check_phase(GameState *state) */ 
/* { */ 
/* } */ 
/* void hit_or_stand_phase(GameState *state) */ 
/* { */ 
/* } */ 
/* void dealer_draw_phase(GameState *state) */ 
/* { */ 
/* } */ 
/* void reset_cards_phase(GameState *state) */ 
/* { */ 
/* } */ 


/* compilation: */
/* gcc -ansi -pedantic -Wall -Wextra -Wconversion -g v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */


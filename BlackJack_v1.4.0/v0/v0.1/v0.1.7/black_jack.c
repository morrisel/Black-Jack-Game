/* The program writed in ANSI standart */
/* compilation: */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */
#include <stdio.h>


/* Card representation */
struct Card;
struct Card
{
	/* uint8_t data; <-- since c99	*/		/* [3:0] - suit, [7:4] - rank */
	unsigned char data;
	struct Card *next;
};

struct CardList;
struct CardList
{
	struct Card *head;
	size_t len;
};

struct GameStateAccessor;
struct GameStateAccessor
{
	int cash;
	int pot;
	
	void (*set_cash)(struct GameStateAccessor *accessor, int value);
	void (*set_pot)(struct GameStateAccessor *accessor, int value);
};

struct GameState;
struct GameState
{
	struct CardList deck;
	struct CardList dealer_hand;
	struct CardList player_hand;

	struct GameStateAccessor cash;
	struct GameStateAccessor pot;
};


void set_cash(struct GameState *state, int cash)
{
	/* state->cash = cash; */
	state->cash.set_cash(&state->cash, cash);
}

void set_pot(struct GameState *state, int pot)
{
	/* state->pot = pot; */
	state->pot.set_pot(&state->pot, pot);
}




/* Function Prototype */
/*void init_cardlist(struct CardList *cardlist);*/
/*void fill_deck(struct CardList *deck);*/
/*void clear_cardlist(struct CardList *cardlist);*/
/*int get_rank(struct Card *card);*/
/*struct Card *card_new(int rank, int suit);*/
/*struct Card *card_remove_at(struct CardList *cardlist, size_t index);*/
/*struct Card *card_draw(struct CardList *cardlist);*/
/*void card_push(struct CardList *cardlist, Card *card);*/
/*void print_cards(const char *player, CardList *hand, int hide_second);*/
/*void print_game_state(struct GameState *state);*/
/*int calculate_hand_value(struct CardList *hand);*/
/*void betting_phase(struct GameState *state);*/
/*void initial_deal_phase(struct GameState *state);*/
/*void blackjack_check_phase(struct GameState *state);*/
/*void dealer_draw_phase(struct GameState *state);*/
/*void reset_cards_phase(struct GameState *state);*/

void main(void)
{
	puts("Hello");

	puts("World");


	/*
	   return 0;
	   */


	return;

}

/*
void init_cardlist(struct CardList *cardlist __attribute__((unused)))
{	
}
void fill_deck(struct CardList *deck __attribute__((unused)))
{
}
void clear_cardlist(struct CardList *cardlist __attribute__((unused)))
{
}
int get_rank(struct Card *card __attribute__((unused)))
{
	return 0;
}
struct Card *card_new(int rank __attribute__((unused)), int suit __attribute__((unused)))
{
	return NULL;
}
struct Card *card_remove_at(struct CardList *cardlist __attribute__((unused)), size_t index __attribute__((unused))) 
{ 
	return NULL;
} 
struct Card *card_draw(struct CardList *cardlist __attribute__((unused))) 
{ 
	return NULL;
} 
void card_push(struct CardList *cardlist __attribute__((unused)), Card *card __attribute__((unused))) 
{ 
} 
void print_cards(const char *player __attribute__((unused)), CardList *hand __attribute__((unused)), int hide_second __attribute__((unused))) 
{ 
} 
void print_game_state(struct GameState *state __attribute__((unused))) 
{ 
} 
int calculate_hand_value(struct CardList *hand __attribute__((unused))) 
{ 
	return 0;
} 
void betting_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
void initial_deal_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
void blackjack_check_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
void hit_or_stand_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
void dealer_draw_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
void reset_cards_phase(struct GameState *state __attribute__((unused))) 
{ 
} 
*/

/* compilation: */
/* gcc -ansi -pedantic -Wall -Wextra -Wconversion -g v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */

/* --> before c89 compilers wokrs without keyword typedef. */

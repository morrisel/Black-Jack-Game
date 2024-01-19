#include <stdio.h>
#include <inttypes.h>	// uint8_t uint16_t uint32_t --> since c99

#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Constants */
#define MAX_RANK 13
#define MAX_SUIT 4
#define BET_INCREMENT 10

/* Card representation */
typedef struct Card
{
	uint8_t data;		/* [3:0] - suit, [7:4] - rank */
	struct Card *next;
} Card;

/* Linked list representation of deck and hands */
//typedef struct CardList
//{
//	Card *head;
//	size_t len;
//} CardList;

/* Game state */
//typedef struct GameState
//{
//	CardList deck;
//	CardList dealer_hand;
//	CardList player_hand;
//	int cash;
//	int pot;
//} GameState;

/* Function prototypes */
//void init_cardlist(CardList *cardlist);
//void fill_deck(CardList *deck);
//void clear_cardlist(CardList *cardlist);
//int get_rank(Card *card);
//Card *card_new(int rank, int suit);
//Card *card_remove_at(CardList *cardlist, size_t index);
//Card *card_draw(CardList *cardlist);
//void card_push(CardList *cardlist, Card *card);
//void print_cards(const char *player, CardList *hand, int hide_second);
//void print_game_state(GameState *state);
//int calculate_hand_value(CardList *hand);
//void betting_phase(GameState *state);
//void initial_deal_phase(GameState *state);
//void blackjack_check_phase(GameState *state);
//void hit_or_stand_phase(GameState *state);
//void dealer_draw_phase(GameState *state);
//void reset_cards_phase(GameState *state);

int main(void)
{
	puts("Hello");
	/*
	srand(time(NULL));

	GameState state;
	init_cardlist(&state.deck);
	init_cardlist(&state.dealer_hand);
	init_cardlist(&state.player_hand);

	state.cash = 1000;
	state.pot = 0;

	while (state.cash >= BET_INCREMENT) {
		betting_phase(&state);
		initial_deal_phase(&state);
		blackjack_check_phase(&state);
		hit_or_stand_phase(&state);
		dealer_draw_phase(&state);
		reset_cards_phase(&state);
	}

	printf("Out of cash to bet. Game Over.\n");

	// Free dynamically allocated memory before exiting
	clear_cardlist(&state.deck);
	clear_cardlist(&state.dealer_hand);
	clear_cardlist(&state.player_hand);
	*/

	puts("World");
	/*
	return 0;
	*/
}

/*
// Implement functions based on the provided requirements and suggestions
// ...
// ...
ssdfasdf l0 0 43
*/



/* The program writed in ANSI standart */
/* compilation: */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */
#include <stdio.h>

/* --- Card representation --- */
/* struct members declarations */
struct Card;
struct CardList;
struct GameStateAccessor;
struct GameState;
/* structs definitions for structs member declarations */
struct Card
{
	/* uint8_t data; <-- since c99	*/		/* [3:0] - suit, [7:4] - rank */
	unsigned char data;
	struct Card *next;
};
struct CardList
{
	struct Card *head;
	size_t len;
};
struct GameStateAccessor
{
	int cash;
	int pot;

	void (*set_cash)(struct GameStateAccessor *accessor, int value);
	void (*set_pot)(struct GameStateAccessor *accessor, int value);
};
struct GameState
{
	struct CardList deck;
	struct CardList dealer_hand;
	struct CardList player_hand;

	struct GameStateAccessor cash;
	struct GameStateAccessor pot;
};
/* Functions 'set_cash' and 'set_pot' declaration for GameStateAccessor struct definition */
void set_cash(struct GameState *state, int cash);
void set_pot(struct GameState *state, int pot);

/* --- Function Prototype --- */
void init_cardlist(struct CardList *cardlist);
void fill_deck(struct CardList *deck);
void clear_cardlist(struct CardList *cardlist);
int get_rank(struct Card *card);
struct Card *card_new(int rank, int suit);
struct Card *card_remove_at(struct CardList *cardlist, size_t index);
struct Card *card_draw(struct CardList *cardlist);
void card_push(struct CardList *cardlist, struct Card *card);
void print_cards(const char *player, struct CardList *hand, int hide_second);
void print_game_state(struct GameState *state);
int calculate_hand_value(struct CardList *hand);
void betting_phase(struct GameState *state);
void initial_deal_phase(struct GameState *state);
void blackjack_check_phase(struct GameState *state);
void dealer_draw_phase(struct GameState *state);
void reset_cards_phase(struct GameState *state);


void main(void)
{
	puts("Hello");

	puts("World");


	return;
}

/* Function definition for 'set_cash' and 'set_pot' */
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


/**/
void init_cardlist(struct CardList *cardlist __attribute__((unused)))
{	
	cardlist->head = NULL;	/* Initialize the head pointer to NULL */
	cardlist->len = 0;	/* Initialize the length to 0 */
}


/* Initializes a CardList by setting its head pointer to NULL and its len to 0, indicating an empty
   list.
 */
/** v1: fill_deck *********************************************************************************
 *
 * void fill_deck(struct CardList *deck __attribute__((unused)))
 * {
 * 	int rank = 1;
 * 	int suit = 0;
 *
 */ 
  	/* Iterate through all card ranks (1-13) and suits (0-3) */
/*
 * 	for (rank = 1; rank <= 13; rank++) {
 * 		for (suit = 0; suit <= 3; suit++) {
 */
  			/* Create a new card */
/*
 * 			struct Card *new_card = card_new(rank, suit);
 */
  			/* Add the card to the deck */
/*
 * 			card_push(deck, new_card);
 * 		}
 * 	}
 * }
 *************************************************************************************************/

/* Initializes a CardList by setting its head pointer to NULL and its len to 0, indicating an empty
   list.
 */
/** v2: fill_deck *********************************************************************************
 *
 * void fill_deck(struct CardList *deck __attribute__((unused)))
 * {
 */     /* Arrays to represent ranks and suits */
/*      char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A'};
 *      char suits[] = {'H', 'D', 'C', 'S'};
 */ 
  	/* Iterate through all card ranks (1-13) and suits (0-3) */
/*
 * 	for (rank = 0; rank < 13; rank++) {
 * 		for (suit = 0; suit < 4; suit++) {
 */
  			/* Create a new card */
/*
 * 			struct Card *new_card = card_new(ranks[rank], suits[suit]);
 */
  			/* Add the card to the deck */
/*
 * 			card_push(deck, new_card);
 * 		}
 * 	}
 * }
 *************************************************************************************************/


/* Initializes a CardList by setting its head pointer to NULL and its len to 0, indicating an empty
   list.
 */
void fill_deck(struct CardList *deck)
{
    /* Arrays to represent ranks and suits */
    char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A'};
    char suits[] = {'H', 'D', 'C', 'S'};

    for (int i = 0; i < 13; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            /* Create a new card and add it to the end of the list */
            struct Card *new_card = card_new(ranks[i], suits[j]);
            card_push(deck, new_card);
        }
    }
}


struct Card *card_new(char rank, char suit)
{
    struct Card *new_card = malloc(sizeof(struct Card));
    if (new_card == NULL)
    {
        // Обработка ошибки выделения памяти
        fprintf(stderr, "Failed to allocate memory for a new card\n");
        exit(EXIT_FAILURE);
    }

    // Устанавливаем данные карты
    new_card->data = ((suit & 0xF) << 4) | (rank & 0xF);
    new_card->next = NULL;

    return new_card;
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
void card_push(struct CardList *cardlist __attribute__((unused)), struct Card *card __attribute__((unused))) 
{ 
} 
void print_cards(const char *player __attribute__((unused)), struct CardList *hand __attribute__((unused)), int hide_second __attribute__((unused))) 
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


/* compilation: */
/* gcc -ansi -pedantic -Wall -Wextra -Wconversion -g v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion v1_4_0/black_jack.c -o black_jack */
/* gcc -std=c89 -Wall -Wextra -Wconversion -Wno-main v1_4_0/black_jack.c -o black_jack */

/* --> before c89 compilers wokrs without keyword typedef. */

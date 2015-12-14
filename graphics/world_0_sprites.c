/*
*	Creates enemies on the level. One file for the whole world... will be broken up at runtime. 
*	Format: position, sprite type
*/

#include "world_0_sprites.h"
#include <gb/gb.h>
#include "../sprite.h"

const UBYTE world_0_egg_counts[] = 			{ 1U,	1U,		2U, 	3U, 	4U, 	2U, 	1U, 	3U};
const UBYTE world_0_start_positions[] =		{ 30U,	40U,	21U, 	0U, 	2U,		4U,		6U,		22U};
const UBYTE world_0_x_start_positions[] = 	{ 76U,	36U,	36U, 	36U, 	36U,	36U,	36U,	76U};
const UBYTE world_0_y_start_positions[] = 	{ 36U,	52U,	36U, 	36U, 	36U, 	36U,	36U,	52U};

const UBYTE world_0_data[1] = { 
	3U // Total eggs
};

const UBYTE NO_SPRITES[1] = { 255U };

const UBYTE DOUBLE_SPIDER[] = {
	22U, (UBYTE)SPRITE_TYPE_SPIDER,
	27U, (UBYTE)SPRITE_TYPE_SPIDER,
	56U, (UBYTE)SPRITE_TYPE_EGG, 
	255U
};

const UBYTE ROOM_OF_SPIDERS[] = {
	27U, (UBYTE)SPRITE_TYPE_SPIDER,
	47U, (UBYTE)SPRITE_TYPE_EGG,
	67U, (UBYTE)SPRITE_TYPE_SPIDER, 
	255U
};

const UBYTE ONE_MONSTER[] = {
	27U, (UBYTE)SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE ESCAPEH[] = {
	17U, (UBYTE)SPRITE_TYPE_SPIDER,
	12U, (UBYTE)SPRITE_TYPE_SPIDER,
	46U, (UBYTE)SPRITE_TYPE_EGG,
	255U
};

const UBYTE ENEMY_CRAB[] = {
	45U, SPRITE_TYPE_EGG,
	52U, SPRITE_TYPE_CRAB,
	56U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE ROOM_2_0[] = {
	27U, SPRITE_TYPE_SPIDER,
	53U, SPRITE_TYPE_SPIDER,
	54U, SPRITE_TYPE_CRAB, // GIANT ENEMY CRAB APPEARS!!
	66U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE ROOM_2_0B[] = {
	17U, SPRITE_TYPE_SPIDER,
	23U, SPRITE_TYPE_SPIDER,
	47U, SPRITE_TYPE_SPIDER, 
	66U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE ROOM_2_1[] = {
	28U, SPRITE_TYPE_SPIDER,
	64U, SPRITE_TYPE_SPIDER,
	24U, SPRITE_TYPE_CRAB,
	36U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE RIVERSIDE_1[] = {
	17U, SPRITE_TYPE_SPIDER,
	77U, SPRITE_TYPE_SPIDER,
	47U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE RIVERSIDE_2[] = {
	57U, SPRITE_TYPE_SPIDER,
	66U, SPRITE_TYPE_SPIDER,
	62U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE CRABWALK_0[] = {
	52U, SPRITE_TYPE_SPIDER,
	25U, SPRITE_TYPE_SPIDER,
	18U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE CRABWALK_1[] = {
	25U, SPRITE_TYPE_SPIDER,
	57U, SPRITE_TYPE_EGG,
	54U, SPRITE_TYPE_SPIDER,
	10U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE CRABWALK_2[] = {
	52U, SPRITE_TYPE_EGG,
	21U, SPRITE_TYPE_SPIDER,
	26U, SPRITE_TYPE_SPIDER,
	28U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE CRABWALK_3[] = {
	25U, SPRITE_TYPE_SPIDER,
	54U, SPRITE_TYPE_SPIDER,
	10U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE SPIDER_BITE_0[] = {
	57U, SPRITE_TYPE_EGG,
	61U, SPRITE_TYPE_SPIDER,
	17U, SPRITE_TYPE_SPIDER,
	27U, SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE SPIDER_BITE_1[] = {
	46U, SPRITE_TYPE_SPIDER,
	51U, SPRITE_TYPE_SPIDER,
	65U, SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE ADVENTURE_0[] = {
	11U, SPRITE_TYPE_SPIDER,
	18U, SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE ADVENTURE_1[] = {
	54U, SPRITE_TYPE_EGG,
	42U, SPRITE_TYPE_SPIDER,
	62U, SPRITE_TYPE_SPIDER,
	46U, SPRITE_TYPE_SPIDER,
	66U, SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE ADVENTURE_2[] = {
	41U, SPRITE_TYPE_CRAB,
	61U, SPRITE_TYPE_CRAB,
	47U, SPRITE_TYPE_CRAB,
	67U, SPRITE_TYPE_CRAB,
	255U
};

// No adventure 3 :(

const UBYTE ADVENTURE_4[] = {
	17U, SPRITE_TYPE_EGG,
	22U, SPRITE_TYPE_SPIDER,
	27U, SPRITE_TYPE_SPIDER,
	52U, SPRITE_TYPE_SPIDER,
	56U, SPRITE_TYPE_SPIDER,
	255U
};

const UBYTE ADVENTURE_5[] = {
	57U, SPRITE_TYPE_EGG,
	68U, SPRITE_TYPE_CRAB,
	32U, SPRITE_TYPE_CRAB,
	255U
};

const UBYTE INTRO[] = {
	64U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE INTRO2[] = {
	28U, SPRITE_TYPE_EGG,
	255U
};

const UBYTE* world_0_sprites[] = {
	NO_SPRITES, 		ROOM_OF_SPIDERS,ROOM_2_0, 			ROOM_2_0B, 			CRABWALK_0, 		CRABWALK_1, 		SPIDER_BITE_0, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 
	DOUBLE_SPIDER,	 	NO_SPRITES, 	ESCAPEH,	 		ROOM_2_1, 			CRABWALK_2, 		CRABWALK_3, 		SPIDER_BITE_1, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 
	ENEMY_CRAB,			RIVERSIDE_1, 	ADVENTURE_0, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 
	INTRO,		 		RIVERSIDE_2, 	ADVENTURE_1, 		ADVENTURE_4, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES,
	INTRO2,		 		NO_SPRITES, 	ADVENTURE_2, 		ADVENTURE_5, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES,
	NO_SPRITES, 		NO_SPRITES, 	NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES,
	NO_SPRITES, 		NO_SPRITES, 	NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES,
	NO_SPRITES, 		NO_SPRITES, 	NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES,
	NO_SPRITES, 		NO_SPRITES, 	NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES, 		NO_SPRITES
};
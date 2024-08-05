#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

//♠♣♥♦ | Ɐ | ╰╭╮╯─│ | ΌᴚΛ

//Pike
#define Pike_AS	"╭───╮\n│A  │\n│ ♠ │\n│  Ɐ│\n╰───╯"
#define Pike_2	"╭───╮\n│2  │\n│ ♠ │\n│  2│\n╰───╯"
#define Pike_3	"╭───╮\n│3  │\n│ ♠ │\n│  3│\n╰───╯"
#define Pike_4	"╭───╮\n│4  │\n│ ♠ │\n│  4│\n╰───╯"
#define Pike_5	"╭───╮\n│5  │\n│ ♠ │\n│  5│\n╰───╯"
#define Pike_6	"╭───╮\n│6  │\n│ ♠ │\n│  6│\n╰───╯"
#define Pike_7	"╭───╮\n│7  │\n│ ♠ │\n│  7│\n╰───╯"
#define Pike_8	"╭───╮\n│8  │\n│ ♠ │\n│  8│\n╰───╯"
#define Pike_9	"╭───╮\n│9  │\n│ ♠ │\n│  9│\n╰───╯"
#define Pike_10	"╭───╮\n│10 │\n│ ♠ │\n│ 10│\n╰───╯"
#define Pike_J	"╭───╮\n│J  │\n│ ♠ │\n│  J│\n╰───╯"
#define Pike_Q	"╭───╮\n│Q  │\n│ ♠ │\n│  Q│\n╰───╯"
#define Pike_K	"╭───╮\n│K  │\n│ ♠ │\n│  K│\n╰───╯"

//Heart
#define Heart_AS	"╭───╮\n│A  │\n│ \e[31m♥\e[0m │\n│  Ɐ│\n╰───╯"
#define Heart_2	"╭───╮\n│2  │\n│ \e[31m♥\e[0m │\n│  2│\n╰───╯"
#define Heart_3	"╭───╮\n│3  │\n│ \e[31m♥\e[0m │\n│  3│\n╰───╯"
#define Heart_4	"╭───╮\n│4  │\n│ \e[31m♥\e[0m │\n│  4│\n╰───╯"
#define Heart_5	"╭───╮\n│5  │\n│ \e[31m♥\e[0m │\n│  5│\n╰───╯"
#define Heart_6	"╭───╮\n│6  │\n│ \e[31m♥\e[0m │\n│  6│\n╰───╯"
#define Heart_7	"╭───╮\n│7  │\n│ \e[31m♥\e[0m │\n│  7│\n╰───╯"
#define Heart_8	"╭───╮\n│8  │\n│ \e[31m♥\e[0m │\n│  8│\n╰───╯"
#define Heart_9	"╭───╮\n│9  │\n│ \e[31m♥\e[0m │\n│  9│\n╰───╯"
#define Heart_10	"╭───╮\n│10 │\n│ \e[31m♥\e[0m │\n│ 10│\n╰───╯"
#define Heart_J	"╭───╮\n│J  │\n│ \e[31m♥\e[0m │\n│  J│\n╰───╯"
#define Heart_Q	"╭───╮\n│Q  │\n│ \e[31m♥\e[0m │\n│  Q│\n╰───╯"
#define Heart_K	"╭───╮\n│K  │\n│ \e[31m♥\e[0m │\n│  K│\n╰───╯"

//Club
#define Club_AS	"╭───╮\n│A  │\n│ ♣ │\n│  Ɐ│\n╰───╯"
#define Club_2	"╭───╮\n│2  │\n│ ♣ │\n│  2│\n╰───╯"
#define Club_3	"╭───╮\n│3  │\n│ ♣ │\n│  3│\n╰───╯"
#define Club_4	"╭───╮\n│4  │\n│ ♣ │\n│  4│\n╰───╯"
#define Club_5	"╭───╮\n│5  │\n│ ♣ │\n│  5│\n╰───╯"
#define Club_6	"╭───╮\n│6  │\n│ ♣ │\n│  6│\n╰───╯"
#define Club_7	"╭───╮\n│7  │\n│ ♣ │\n│  7│\n╰───╯"
#define Club_8	"╭───╮\n│8  │\n│ ♣ │\n│  8│\n╰───╯"
#define Club_9	"╭───╮\n│9  │\n│ ♣ │\n│  9│\n╰───╯"
#define Club_10	"╭───╮\n│10 │\n│ ♣ │\n│ 10│\n╰───╯"
#define Club_J	"╭───╮\n│J  │\n│ ♣ │\n│  J│\n╰───╯"
#define Club_Q	"╭───╮\n│Q  │\n│ ♣ │\n│  Q│\n╰───╯"
#define Club_K	"╭───╮\n│K  │\n│ ♣ │\n│  K│\n╰───╯"

//Diamond
#define Diamond_AS	"╭───╮\n│A  │\n│ \e[31m♦\e[0m │\n│  Ɐ│\n╰───╯"
#define Diamond_2	"╭───╮\n│2  │\n│ \e[31m♦\e[0m │\n│  2│\n╰───╯"
#define Diamond_3	"╭───╮\n│3  │\n│ \e[31m♦\e[0m │\n│  3│\n╰───╯"
#define Diamond_4	"╭───╮\n│4  │\n│ \e[31m♦\e[0m │\n│  4│\n╰───╯"
#define Diamond_5	"╭───╮\n│5  │\n│ \e[31m♦\e[0m │\n│  5│\n╰───╯"
#define Diamond_6	"╭───╮\n│6  │\n│ \e[31m♦\e[0m │\n│  6│\n╰───╯"
#define Diamond_7	"╭───╮\n│7  │\n│ \e[31m♦\e[0m │\n│  7│\n╰───╯"
#define Diamond_8	"╭───╮\n│8  │\n│ \e[31m♦\e[0m │\n│  8│\n╰───╯"
#define Diamond_9	"╭───╮\n│9  │\n│ \e[31m♦\e[0m │\n│  9│\n╰───╯"
#define Diamond_10	"╭───╮\n│10 │\n│ \e[31m♦\e[0m │\n│ 10│\n╰───╯"
#define Diamond_J	"╭───╮\n│J  │\n│ \e[31m♦\e[0m │\n│  J│\n╰───╯"
#define Diamond_Q	"╭───╮\n│Q  │\n│ \e[31m♦\e[0m │\n│  Q│\n╰───╯"
#define Diamond_K	"╭───╮\n│K  │\n│ \e[31m♦\e[0m │\n│  K│\n╰───╯"

//Joker
//#define Joker	"╭───╮\n│JO │\n│ K │\n│ ER│\n╰───╯"

// enum class Card {
// 	Pike_AS, Pike_2, Pike_3, Pike_4, Pike_5, Pike_6, Pike_7, Pike_8, Pike_9, Pike_10, Pike_J, Pike_Q, Pike_K,
// 	Heart_AS, Heart_2, Heart_3, Heart_4, Heart_5, Heart_6, Heart_7, Heart_8, Heart_9, Heart_10, Heart_J, Heart_Q, Heart_K,
// 	Club_AS, Club_2, Club_3, Club_4, Club_5, Club_6, Club_7, Club_8, Club_9, Club_10, Club_J, Club_Q, Club_K,
// 	Diamond_AS, Diamond_2, Diamond_3, Diamond_4, Diamond_5, Diamond_6, Diamond_7, Diamond_8, Diamond_9, Diamond_10, Diamond_J, Diamond_Q, Diamond_K
// };


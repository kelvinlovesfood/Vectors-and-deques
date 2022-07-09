#include "Deck.h"
#include "DeckVector.h"
#include "DeckDeQue.h"
#include <memory>

void printDeckType(Deck* deck){
    if (dynamic_cast<DeckVector*>(deck)) {
        std::cout << "Deck implimented using Vector" << std::endl;
    }
    else {
        std::cout << "Deck implimented using Deque" << std::endl;
    }
}
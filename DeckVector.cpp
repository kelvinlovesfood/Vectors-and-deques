#include "DeckVector.h"


DeckVector::DeckVector() {

}

DeckVector::~DeckVector() {

}

int DeckVector::size() {
   return deck.size();
}

Card DeckVector::get(int index) {
   return deck[index];
}

void DeckVector::add(Card&& card) {
   deck.push_back(card);
}

void DeckVector::clear() {
   deck.clear();
}
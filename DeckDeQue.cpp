#include "DeckDeQue.h"

DeckDeQue::DeckDeQue() {

}

DeckDeQue::~DeckDeQue() {

}

int DeckDeQue::size() {
   return deck.size();
}

Card DeckDeQue::get(int index) {
   return deck[index];
}

void DeckDeQue::add(Card&& card) {
   deck.push_back(card);
}

void DeckDeQue::clear() {
   deck.clear();
}
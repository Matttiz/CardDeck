#include "carddeck.h"

CardDeck::CardDeck(){
    for(int suit = 1; suit <= 4; suit++){
        for(int face = 2; face <= 13; face++){
            list.append(*new Card(face,suit));
        }
    }
}

CardHand CardDeck::deal(int k){
    srandom(time(0));
    QList <Card> hand;
    do{
        int randomSuit = (random() % 4) + 1;
        int randomFace = (random() % 13) + 1;
        Card *choosen = new Card(randomFace, randomSuit);
        for(Card* card: list){
            if(card == choosen){

            }

        }
        k--;
    }while(k == 0);

}

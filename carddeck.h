#ifndef CARDDECK_H
#define CARDDECK_H
#import <cardhand.h>
#import <card.h>
#import <cstdlib>

class CardDeck
{
public:
    CardDeck();
    CardHand deal(int k);
    QString toString();
    int getCardsLeft();
    void restoreDeck();
private:
    QList<Card> list;
};

#endif // CARDDECK_H

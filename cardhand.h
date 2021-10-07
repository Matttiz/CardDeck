#ifndef CARDHAND_H
#define CARDHAND_H
#include <QString>
#include <card.h>

class CardHand
{
public:
    CardHand();
    int getValue();
    QString toString();
private:
    QList<Card> hand;
};

#endif // CARDHAND_H

#include "card.h"
#include <QStringList>
#include <QDebug>

Card::Card(int faceNbr, int suitNbr): m_FaceNbr(faceNbr), m_SuitNbr(suitNbr)
{
}

QString Card::getFace(){
    switch (m_FaceNbr){
        case 1: return "A";
        case 2: return "2";
        case 3: return "3";
        case 4: return "4";
        case 5: return "5";
        case 6: return "6";
        case 7: return "7";
        case 8: return "8";
        case 9: return "9";
        case 10: return "T";
        case 11: return "J";
        case 12: return "Q";
        case 13: return "K";
    };
    return "Face is not valid";
}

QString Card::getSuit(){
    switch (m_SuitNbr) {
        case 1: return "Spade";
        case 2: return "Heart";
        case 3: return "Club";
        case 4: return "Diamond";
    }
    return "Suit is not valid";
}

int Card::getValue(){
    switch (m_FaceNbr) {
        case 1: return 4;
        case 13: return 3;
        case 12: return 12;
        case 11: return 11;
        default: return 0;
    }
}

QString Card::toString(){
    qDebug() << getSuit() << " "<< getFace() << Qt::endl;
}



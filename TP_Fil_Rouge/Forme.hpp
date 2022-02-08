#ifndef ZZ2_TP3_FORME_HPP
#define ZZ2_TP3_FORME_HPP
#include "Point.hpp"

enum class COULEURS {
  NOIR, BLANC, VERT, BLEU, ROUGE, JAUNE
};

class Forme{
    protected:
        int _w;
        int _h;
        COULEURS _couleur;
        Point _point;
        int static _nbFormes;
        int _id;
    public:
        Forme();
        Forme(int w,int h,COULEURS,Point);
        Forme(int w,int h,COULEURS,int,int);
        virtual ~Forme()=default;
        void setCouleur(COULEURS);
        COULEURS getCouleur();
        Point & getPoint();
        void setX(int);
        void setY(int);
        int getId();
        int static prochainId();
        virtual std::string toString()=0;
        int getLargeur();
        int getHauteur();
};
#endif
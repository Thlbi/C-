#include <fstream>
#include <iostream>

#include "catch.hpp"
#include "Point.hpp"
#include "Rectangle.hpp"
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Groupe.hpp"
// NOTE : ce test utilise des enum "class"
// il faut donc utiliser un compilateur g++ >= 6.1
// ou activer l'option c++11 du compilateur
// -std=c++11 ou -std=c++0x sur les tres vieux compilateurs

// Les tests ne sont pas exhaustifs, loin de là
Point ORIGINE;
TEST_CASE("Instanciation", "[Point]") {
	
	Point p1;
	REQUIRE(p1.getX() == 0);
	REQUIRE(p1.getY() == 0);
	
    p1.setX(11);
    p1.setY(21);

    REQUIRE(p1.getX() == 11);
	REQUIRE(p1.getY() == 21);

	Point p2(12, 22);

	REQUIRE(p2.getX() == 12);
	REQUIRE(p2.getY() == 22);  

}


TEST_CASE("Origine", "[Point]") {
	REQUIRE(ORIGINE.getX() == 0);
	REQUIRE(ORIGINE.getY() == 0);
}



/*
TEST_CASE("Compteur", "[Forme]") {
   // Pour être correct, ce test doit etre le premier sur Forme
   REQUIRE(0 == Forme::prochainId());
   Forme f1;
   REQUIRE(0 == f1.getId());
   REQUIRE(1 ==  Forme::prochainId());	
   // Verification que la valeur n'est pas decrementee accidentellement.
   Forme *p = new Forme;
   REQUIRE(1 == p->getId());
   delete p;
   REQUIRE(2 == Forme::prochainId());	
}



TEST_CASE("Instanciation1", "[Forme]") {
	Forme f1{};
	REQUIRE(f1.getPoint().getX() == 0);
	REQUIRE(f1.getPoint().getY() == 0);
	REQUIRE(f1.getCouleur() ==  COULEURS::BLEU);
}



TEST_CASE("Instanciation2", "[Forme]") {
	Forme f2;
	
	f2.setX(15);
	f2.setY(25);
	f2.setCouleur(COULEURS::VERT);
	REQUIRE (f2.getPoint().getX() == 15);
	REQUIRE (f2.getPoint().getY() == 25);
	REQUIRE (f2.getCouleur() == COULEURS::VERT);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::JAUNE);
}



TEST_CASE("Instanciation3", "[Forme]") {
    // IL N'Y A PAS D'ERREUR DANS LE TEST, CELA DOIT MARCHER	
	Forme f2(5,5, COULEURS::ROUGE,Point(10,20));
	REQUIRE (f2.getPoint().getX() == 10);
	REQUIRE (f2.getPoint().getY() == 20);
	REQUIRE (f2.getCouleur() == COULEURS::ROUGE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);

	f2.getPoint().setX(15);
	f2.getPoint().setY(25);
	f2.setCouleur(COULEURS::JAUNE);
	REQUIRE (f2.getPoint().getX() == 15);
	REQUIRE (f2.getPoint().getY() == 25);
	REQUIRE (f2.getCouleur() == COULEURS::JAUNE);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
	REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
}
*/
TEST_CASE("Cercle", "[Cercle]") {
   int compteur = Forme::prochainId();
   Cercle c1;
   Cercle c2(5,COULEURS::BLANC,Point(5,5)); 
   
   REQUIRE(c1.toString() == "CERCLE 0 0 0 0");
   REQUIRE(c2.toString() == "CERCLE 5 5 10 10");

   c2.setRayon(5);
   REQUIRE(c2.getRayon()   == 5  );
   REQUIRE(c2.toString()   == "CERCLE 5 5 10 10");
   REQUIRE(c2.getLargeur() == 10);
   REQUIRE(c2.getHauteur() == 10);  

   REQUIRE(Forme::prochainId() == (compteur+2) ); 
}

TEST_CASE("Rectangle", "[Reclangle]") {
   int compteur = Forme::prochainId();
   Rectangle c1;
   Rectangle c2(5,5,5,5); 
   
   REQUIRE(c1.toString() == "RECTANGLE 0 0 0 0");
   REQUIRE(c2.toString() == "RECTANGLE 5 5 5 5");

   REQUIRE(c2.getLargeur() == 5);
   REQUIRE(c2.getHauteur() == 5);  

   REQUIRE(Forme::prochainId() == (compteur+2) ); 
}

TEST_CASE("Groupe", "[Groupe]") {
    Rectangle r1(5, 5, 5, 5);
    Cercle c1(6,COULEURS::JAUNE,10,5);
    Groupe l;
    l.addForme(&c1);
    l.addForme(&r1);

	REQUIRE(l.getCompteur() == 2);

	REQUIRE(l.toString()== "Le groupe fait :17 22. Les formes sont :CERCLE 10 5 12 12 RECTANGLE 5 5 5 5 ");

}
/*
TEST_CASE("BoiteEnglobante", "[Forme]") {
	Forme f;
	REQUIRE (f.getLargeur() == 0);
	REQUIRE (f.getHauteur() == 0);
}
*/
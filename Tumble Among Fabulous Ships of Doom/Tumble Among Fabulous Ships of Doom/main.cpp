#include <iostream>

using namespace std;

int main()
{

}

/*
	1- Faire un tableau avec ARRAY, assigner un '.' sur chaque case. '.' doit �tre associer dans un ENUM qui g�rera l'interaction et l'affichage des objects
			class map
			class display
			class unit
			class unit::player
			class unit::ship
			class time

	2- Faire un personnage '@' qui peut se d�placer avec les fl�ches. Chaque d�placement cause time++.
	3- Faire une classe SPACESHIP avec x et y et speed et HP. L'affichage est de 1, 2, 3, 4, 5, 6, 7, 8, 9 selon leur HP.
	4- Faire un vector de SPACESHIPS
	5- Faire se d�placer les SPACESHIPS de gauche � droite selon leur SPEED. S'ils d�passent la const de la map, ils r�aparraissent � gauche.
	6- GAME OVER si le personnnage touche � un spaceship.
	7- Avec espace, le personnage peut shooter un # dans une direction. Si le # touche un ennemi, le # disparait et l'ennemi perd 1 HP. Si le # quitte la map, il dispara�t.
	8- Si le vector de SPACESHIPS est vide, LV++ est pushback plusieurs fois selon LV. Une fonction distribue au hasard des points (=LV) dans SPEED et HP pour chacun des nouveaux spaceships.
	
	8.5 - Ajouter un menu d'intro avec Start Game, Instructions, Credits et Quit.
	
	9- Ajouter un timer pour que les vaisseaux se d�placent continuellement. Bouger le personnage ne change plus TIME.
	10 - Sp�cifier une vitesse de d�placement de #
	11 - Graphiques. Lier � SDL et remplacer tout par des graphiques.
	13 - Remplacer l'array de la map par des coordonn�es en pixels (changer la const d�terminante pour que tout demeure coh�rent).
	14 - Bien s�r, augmenter les vitesses de d�placement. Les fl�ches keydown d�placent le personnage en continue.
	15 - Ajouter des effets sonores (d�but de tableau, charge#, tire#, # explose, mort).
	16 - Ajouter musique (menu, jeu, mort)

	17 - Ajouter un boss apr�s chaque level (LV1 = 1 unit� boss, LV = 2 unit�s boss, etc.)
	18 - Ajouter un boss de fin (au LV 8)
	19 - Musique de BOSS et musique de victoire
*/
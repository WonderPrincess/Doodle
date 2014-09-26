#include <iostream>

using namespace std;

int main()
{

}

/*
	1- Faire un tableau avec ARRAY, assigner un '.' sur chaque case. '.' doit être associer dans un ENUM qui gèrera l'interaction et l'affichage des objects
			class map
			class display
			class unit
			class unit::player
			class unit::ship
			class time

	2- Faire un personnage '@' qui peut se déplacer avec les flèches. Chaque déplacement cause time++.
	3- Faire une classe SPACESHIP avec x et y et speed et HP. L'affichage est de 1, 2, 3, 4, 5, 6, 7, 8, 9 selon leur HP.
	4- Faire un vector de SPACESHIPS
	5- Faire se déplacer les SPACESHIPS de gauche à droite selon leur SPEED. S'ils dépassent la const de la map, ils réaparraissent à gauche.
	6- GAME OVER si le personnnage touche à un spaceship.
	7- Avec espace, le personnage peut shooter un # dans une direction. Si le # touche un ennemi, le # disparait et l'ennemi perd 1 HP. Si le # quitte la map, il disparaît.
	8- Si le vector de SPACESHIPS est vide, LV++ est pushback plusieurs fois selon LV. Une fonction distribue au hasard des points (=LV) dans SPEED et HP pour chacun des nouveaux spaceships.
	
	8.5 - Ajouter un menu d'intro avec Start Game, Instructions, Credits et Quit.
	
	9- Ajouter un timer pour que les vaisseaux se déplacent continuellement. Bouger le personnage ne change plus TIME.
	10 - Spécifier une vitesse de déplacement de #
	11 - Graphiques. Lier à SDL et remplacer tout par des graphiques.
	13 - Remplacer l'array de la map par des coordonnées en pixels (changer la const déterminante pour que tout demeure cohérent).
	14 - Bien sûr, augmenter les vitesses de déplacement. Les flèches keydown déplacent le personnage en continue.
	15 - Ajouter des effets sonores (début de tableau, charge#, tire#, # explose, mort).
	16 - Ajouter musique (menu, jeu, mort)

	17 - Ajouter un boss après chaque level (LV1 = 1 unité boss, LV = 2 unités boss, etc.)
	18 - Ajouter un boss de fin (au LV 8)
	19 - Musique de BOSS et musique de victoire
*/
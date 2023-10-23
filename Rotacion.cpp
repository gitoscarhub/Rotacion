#include<SFML/Graphics.hpp>

using namespace sf;

 Texture rot;
 Sprite rota;
 

int main(){
	sf::RenderWindow App(sf::VideoMode(512, 512, 32),
		" Rotacion ");
	App.setFramerateLimit(60);
	rot.loadFromFile("rcircletranspazul.png");
	
	rota.setTexture(rot);
	rota.setOrigin(75,75);
	rota.setPosition(250, 250);
	rota.setTexture(rot);
	

	while (App.isOpen())
	{
		rota.rotate(1.5f);

			App.clear();
			App.draw(rota);
			App.display();

	}

	return 0;

}
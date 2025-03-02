#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "Square.hpp"


int main() {

    


    unsigned int SCREEN_WIDTH = 1000;
    unsigned int SCREEN_HEIGHT = 800;

    int num = 1000000;
    std::vector<Square> squares(num);
    std::srand(std::time(0)); 

    for(int i = 0; i < num; i++){
        squares[i] = Square(1,{(float) (rand()%1000),(float) (rand()%800)}, {(float) (rand()%10)/((float)100.) - (float)(5/100.),(float) (rand()%10)/((float)100.) - (float)(5/100.)}, rand()%5);
    }


    sf::RenderWindow window(sf::VideoMode({SCREEN_WIDTH,SCREEN_HEIGHT}), "SFML window");
    window.setPosition({600,300});
    
    float x = 0;
    while (window.isOpen())
    {
       
        while (const std::optional event = window.pollEvent())
        {
           
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        
       
        window.clear();
        for(int i = 0; i < num; i++){
            sf::Vector2f v = squares[i].getVel();
            sf::Vector2f p = squares[i].getPos();
            v *= x;

            
            squares[i].setPos({p.x + v.x, p.y + v.y});
            window.draw(squares[i].getRect());
        }
       
        window.display();

        x += 1;
    }
    
    

     return 0;
}
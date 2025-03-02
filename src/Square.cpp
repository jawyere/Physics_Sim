#include <SFML/Graphics.hpp>
#include <string>
#include "Square.hpp"


    Square::Square(float sl, sf::Vector2f p, sf::Vector2f vel, int col){

        velocity = vel;
        rect.setSize({sl,sl});
        rect.setPosition(p);
        side_len = sl;


        if(col == 0){
            color = sf::Color::White;
        }else if(col == 1){
            color = sf::Color::Blue;
        }else if(col == 2){
            color = sf::Color::Green;
        }else if(col == 3){
            color = sf::Color::Red;    
        }else{
            color = sf::Color::Yellow;
        }
       
        rect.setFillColor(color);
    }

    Square::Square(){
        
    }
    
    sf::Vector2f Square::getPos(){
        return rect.getPosition();
    }
    
    sf::Vector2f Square::getVel(){
        return velocity;
    }

    void Square::setPos(sf::Vector2f pos){
        rect.setPosition(pos);
    }

    sf::RectangleShape Square::getRect(){
        return rect;
    }




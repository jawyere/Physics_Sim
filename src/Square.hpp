#include <SFML/Graphics.hpp>
#include <string>


class Square{

public:

    Square();
    Square(float sl, sf::Vector2f p,sf::Vector2f vel, int col);
    
    int get_x();
    int get_y();

    sf::RectangleShape getRect();

    sf::Vector2f getPos();
    
    sf::Vector2f getVel();

    void setPos(sf::Vector2f pos);
    


private:
    int side_len;
    sf::Color color;
    sf::RectangleShape rect;
    sf::Vector2f velocity;
};
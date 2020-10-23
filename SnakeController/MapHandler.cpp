
#include<utility>
#include <algorithm>
#include <sstream>

namespace Snake
{
    class MapHandler
    {      
        std::pair<int, int> m_mapDimension;
        std::pair<int, int> m_foodPosition;
    public:
        void setDimension(int width, int height);
        void setFoodPosition(int foodX, int foodY);
        bool isPositionOutsideMap(int x, int y) const;
        int getFoodPositionX();
        int getFoodPositionY();
        std::pair<int,int> getFoodPosition();
    };

void MapHandler::setDimension(int width, int height)
{
    m_mapDimension = std::make_pair(width, height);
}
void MapHandler::setFoodPosition(int foodX, int foodY)
{
    m_foodPosition = std::make_pair(foodX, foodY);
}
bool MapHandler::isPositionOutsideMap(int x, int y) const
{
    return x < 0 or y < 0 or x >= m_mapDimension.first or y >= m_mapDimension.second;
}
int MapHandler::getFoodPositionX()
{
    return m_foodPosition.first;
}
int MapHandler::getFoodPositionY()
{
    return m_foodPosition.second;
}
std::pair<int,int> MapHandler::getFoodPosition()
{
    return m_foodPosition;
}
}


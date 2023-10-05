#include <iostream>
#include <string>

// Spaceship class
class Spaceship
{
    private: // private data fields keep track of coordinates and position
        // note that we are using computer graphics coordinates, not cartesian coordinates.
        int x;
        int y;
        std::string position; // Format: {x: X, y: Y, direction: 'DIRECTION'}
    
    public:
        // no argument constructor starts spaceship at origin pointing upward
        Spaceship()
        {
            x = 0;
            y = 0;
            position = "{x: 0, y: 0, direction: 'up'}";
        }

        /*
        Constructor that takes in a path string. The path string contains the following characters:
        R for turning right
        L for turning left
        A for advancing
        */
        Spaceship(const std::string & path)
        {
            // initialize the data fields
            x = 0;
            y = 0;

            // integers for determining if we are intending to move in positive or negative axial directions
            int xPositive = 0;
            int yPositive = -1;

            // check each character in the path
            for(int i = 0; i < path.length(); i++)
            {
                if(path[i] == 'R') // right turn sequence
                {
                    switch(xPositive)
                    {
                        case 0:
                            if(yPositive == -1)
                            {
                                xPositive = 1;
                                yPositive = 0;
                            }
                            else if(yPositive == 1)
                            {
                                xPositive = -1;
                                yPositive = 0;
                            }
                            break;
                        case 1:
                            xPositive = 0;
                            yPositive = 1;
                            break;
                        case -1:
                            xPositive = 0;
                            yPositive = -1;
                            break;
                    }
                }
                else if(path[i] == 'L') // left turn sequence
                {
                    switch(xPositive)
                    {
                        case 0:
                            if(yPositive == -1)
                            {
                                xPositive = -1;
                                yPositive = 0;
                            }
                            else if(yPositive == 1)
                            {
                                xPositive = 1;
                                yPositive = 0;
                            }
                            break;
                        case 1:
                            xPositive = 0;
                            yPositive = -1;
                            break;
                        case -1:
                            xPositive = 0;
                            yPositive = 1;
                            break;
                    }
                }
                else if(path[i] == 'A') // advancing sequence
                {
                    if(xPositive == 0 && yPositive == -1)
                        y--;
                    else if(xPositive == 1 && yPositive == 0)
                        x++;
                    else if(xPositive == 0 && yPositive == 1)
                        y++;
                    else if(xPositive == -1 && yPositive == 0)
                        x--;
                }
            }

            // now, write the position string accordingly
            position = "{x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: ";
            if(xPositive == 0 && yPositive == -1)
                position += "'up'}";
            else if(xPositive == 1 && yPositive == 0)
                position += "'right'}";
            else if(xPositive == 0 && yPositive == 1)
                position += "'down'}";
            else if(xPositive == -1 && yPositive == 0)
                position += "'left'}";
        }

        // accessor method for the position
        std::string getPosition() const
        {
            return position;
        }
};

// main function was copied from the assignment instructions to test the class and look for specific output
int main(void)
{
    Spaceship astrochuckler;
    std::cout << astrochuckler.getPosition() << std::endl;

    Spaceship lunacycle("RAALALL");
    std::cout << lunacycle.getPosition() << std::endl;

    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    std::cout << quirkonaut.getPosition() << std::endl;

    Spaceship zanyverse("");
    std::cout << zanyverse.getPosition() << std::endl;

    Spaceship cosmocomedy("LAAA");
    std::cout << cosmocomedy.getPosition() << std::endl;

    return 0;
}
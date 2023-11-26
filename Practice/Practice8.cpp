#include <iostream>

class LivingThing
{
    public:
        LivingThing()
        {
            std::cout << "This is the constructor of LivingThing class" << std::endl;
        }
        
        virtual void toString() const
        {
            std::cout << "Called toString() function of LivingThing class" << std::endl;
        }
};


class Animal : public LivingThing
{
    public:
        Animal()
        {
            std::cout << "This is the constructor of Animal class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Animal class" << std::endl;
        }
};


class Fish : public Animal
{
    public:
        Fish()
        {
            std::cout << "This is the constructor of Fish class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Fish class" << std::endl;
        }
};

class Mammal : public Animal
{
    public:
        Mammal()
        {
            std::cout << "This is the constructor of Mammal class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Mammal class" << std::endl;
        }
};

class Sardine : public Fish
{
    public:
        Sardine()
        {
            std::cout << "This is the constructor of Sardine class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Sardine class" << std::endl;
        }
};

class Bass : public Fish
{
    public:
        Bass()
        {
            std::cout << "This is the constructor of Bass class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Bass class" << std::endl;
        }
};

class Cat : public Mammal
{
    public:
        Cat()
        {
            std::cout << "This is the constructor of Cat class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Cat class" << std::endl;
        }
};

class Tiger : public Cat
{
    public:
        Tiger()
        {
            std::cout << "This is the constructor of Tiger class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Tiger class" << std::endl;
        }
};

class Lion : public Cat
{
    public:
        Lion()
        {
            std::cout << "This is the constructor of Lion class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Lion class" << std::endl;
        }
};

class Plant : public LivingThing
{
    public:
        Plant()
        {
            std::cout << "This is the constructor of Plant class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Plant class" << std::endl;
        }
};

class Tree : public Plant
{
    public:
        Tree()
        {
            std::cout << "This is the constructor of Tree class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Tree class" << std::endl;
        }
};

class Chestnut : public Tree
{
    public:
        Chestnut()
        {
            std::cout << "This is the constructor of Chestnut class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Chestnut class" << std::endl;
        }
};

class Cherry : public Tree
{
    public:
        Cherry()
        {
            std::cout << "This is the constructor of Cherry class" << std::endl;
        }
        
        void toString() const
        {
            std::cout << "Called toString() function of Cherry class" << std::endl;
        }
};

void display(const LivingThing & obj)
{
    obj.toString();
}

int main()
{
    Sardine sardine; 
    Bass bass; 
    Tiger tiger; 
    Lion lion;
    Chestnut chestnut;
    Cherry cherry;
    Tree tree;

    tree.toString();
    display(sardine);
    display(tiger);
    display(tree);

    return 0;
}
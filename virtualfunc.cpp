#include <iostream>
#include <string>
using namespace std;

class Entity
{
public:
	
	virtual string GetName()
	{
		return "Entity";
	}	

};
class player : public Entity
{
private:
	string m_name;

public:

	player(const string& name) : m_name(name)
	{}
	string GetName() override
	{
		return m_name;
	}
	
};
void PrintName(Entity* entity)
{
	cout << entity->GetName()<<endl;
}
int main(int argc, char const *argv[])
{
	Entity* e = new Entity();
	PrintName(e);
	player* p = new player("Anurag");
	PrintName(p);


	
	

	return 0;
}
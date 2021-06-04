#include<iostream>
using namespace std;

class Leader
{
	static Leader* leader;
	Leader() { cout << "New Leader" << endl; };
public:
	static Leader* getInstance()
	{
		if (leader == NULL)
		{
			//puts("Constructing new Instance");
			leader = new Leader;
		}
		return leader;
	}
	void Speak()
	{
		puts("Gives Speech");
	}
};
Leader* Leader:: leader = NULL;

int main()
{
	// this will not work as it is in accessible the constructor is private 
	/*Leader* elected = new Leader;
	elected->Speak();*/

	//Leader::getInstance();
	Leader* elected = elected->getInstance();
	elected->Speak();
	elected->getInstance();
	elected->Speak();

}
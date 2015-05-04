// Lab 2a, Fraction
// Programmer: Kevin Crabbe
// Date: 02/16/15
// Editor: Visual Studio 2013
// Compiler: Visual C++ 2013
#include <iostream>
#include "ServerGroup.h"
using namespace std;


int main()
{
	cout << "Lab 2a, Fraction\n";
	cout << "Programmer: Kevin Crabbe\n";
	cout << "Date: 02/16/15\n";
	cout << "Editor: Visual Studio 2013\n";
	cout << "Compiler: Visual C++ 2013\n\n";

	int size = 10;
	//Situation 1: All servers are empty
	
	cout << "All Servers are Empty" << endl;
	ServerGroup group1(size);
	group1.displayServers();

	cout << "The special server is: ";
	if (group1.spServerFree())
		cout << "free." << endl;
	else cout << "not free." << endl;

	if (group1.serverFree())
		cout << "There is a free server." << endl;
	else cout << "There is no free server." << endl;

	cout << "About to decrement servers...." << endl;
	group1.displayServers();
	cout << "Decrementing servers..." << endl;
	group1.decServer();
	cout << "Servers decremented: " << endl;
	group1.displayServers();



	//Situation 2: Some servers are being used
	cout << "----------------------------------" << endl;
	ServerGroup group2(size);
	cout << "Some Servers are being used" << endl;
	for (int i = 0; i < 5; i++)
	{
		group2.useServer(i);
	}
	group2.displayServers();

	if (group2.spServerFree())
		cout << "The special server is free" << endl;
	else cout << "The special server is not free." << endl;

	if (group2.serverFree())
		cout << "There is a free server " << endl;
	else cout << "There is no free server" << endl;
	
	cout << "About to decrement servers...." << endl;
	group2.displayServers();
	cout << "Decrementing servers..." << endl;
	group2.decServer();
	cout << "Servers decremented: " << endl;
	group2.displayServers();

	//Situation 3: All servers are being used
	cout << "----------------------------------" << endl;
	cout << "All servers are being used" << endl;
	ServerGroup group3(size);
	for (int i = 0; i < 10; i++)
		group3.useServer(i);

	group3.displayServers();

	if (group3.spServerFree())
		cout << "The special server is free" << endl;
	else cout << "The special server is not free." << endl;

	if (group3.serverFree())
		cout << "There is a free server " << endl;
	else cout << "There is no free server" << endl;

	cout << "About to decrement servers...." << endl;
	group3.displayServers();
	cout << "Decrementing servers..." << endl;
	group3.decServer();
	cout << "Servers decremented: " << endl;
	group3.displayServers();
	

	cout << "Press enter to continue: " << endl;
	cin.get();
}

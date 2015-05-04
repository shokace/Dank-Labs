#include "ServerGroup.h"
#include <iostream>
using namespace std;

ServerGroup::ServerGroup(int num) //starts by creating dynamic array with size based on int val
{
	//point to new array in heap
	ptr = new int[num];
	size = num;

	//set all elements of array to 0
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}

	//set spServer to 0(there is only one sp server)
	spServer = 0;
}

bool ServerGroup::spServerFree()//true if spServer = 0; else false;called by usespServer
{
	if (spServer == 0)
		return true;
	else
		return false;
}

bool ServerGroup::serverFree()
{
	for (int i = 0; i < size - 1; i++)
	{
		if (ptr[i] == 0)
		{
			freeServer = i;
			return true;
		}
	}
	return false;
}

void ServerGroup::useServer(int avTransTime)
{
	ptr[freeServer] = avTransTime;
}

void ServerGroup::usespServer(int avTransTime)
{
	spServer = avTransTime;
}

void ServerGroup::decServer()
{
	//decrement spServer by 1 unless already 0
	if (spServer > 0)
		spServer--;

	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > 0)
			ptr[i]--;
	}

}

void ServerGroup::displayServers()
{
	cout << "Servers: \n";
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << " " << ptr[i];
	cout << " ]" << endl;

	cout << "Special Server:";
	cout << spServer <<endl;
}

#ifndef SERVERGROUP_H
#define SERVERGROUP_H

class ServerGroup
{
private:
	
	int *ptr;//pointer to dynamic integer array called servers(will have to be declared in main?
	int spServer;
	int freeServer;
	int size;

public:
	ServerGroup();
	ServerGroup(int);
	bool spServerFree();//will return true if 0 is found in array or will return false otherwise(based on whether special purpose server is free)
	bool serverFree();// will return true if 0 is found in array or will return false otherwise(based on whether server is free) will set freeServer to index of array
	void useServer(int);//sets servers[freeServer] to avTransTime which is average transaction time to serve user in line
	void usespServer(int);//sets spServer to avTransTime
	void decServer();
	void displayServers();

};
#endif

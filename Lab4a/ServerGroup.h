#include <iostream>

class ServerGroup
{
public:
  ServerGroup( int n );
  bool spServerFree();
  bool ServerFree();
  8

private:
  int * servers;
  int spServer, freeServer, size;
};

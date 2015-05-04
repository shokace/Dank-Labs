// ServerGroup header file

#ifndef SERVERGROUP_H
#define SERVERGROUP_H
class ServerGroup
{
public:

  ServerGroup(const int & num );

  bool spServerFree();
  bool serverFree();
  void useServer( const int & avTransTime );
  void usespServer( const int & avTransTime );
  void decServers();

  int printServer( int num )
  {
    return servers[ num ];
  }

private:
  int *servers;
  int spServer, freeServer, size;

  };
#endif

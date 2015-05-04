// ServerGroup.cpp Class Implementation File

#include "ServerGroup.h"

ServerGroup::ServerGroup( const int & num )
{
  size = num;
  int *servers = new int [ size ];
  for(int i=0; i<size; i++)
  {
    servers[ i ] = 0;
  }
  freeServer = 0;
  spServer = 0;
}

bool ServerGroup::spServerFree()
{
  if (spServer = 0) return true;
  else return false;
}

bool ServerGroup::serverFree()  {
  for (int i=0; i<size; i++)
  {
    if ( servers[ i ] = 0)
    {
      freeServer = i;
      return true;
    }
  }
  return false;
}

void ServerGroup::useServer( const int & avTransTime )
{
  servers[ freeServer ] = avTransTime;
}

void ServerGroup::usespServer( const int & avTransTime )
{
  spServer = avTransTime;
}

void ServerGroup::decServers()
{
  if ( spServer > 0) spServer--;

  for (int i=0; i<size; i++)
  {
    if( servers[ i ] > 0) servers[ i ]--;
  }
}

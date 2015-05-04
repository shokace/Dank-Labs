// Server Group Class Driver

#include <iostream>
#include "ServerGroup.h"

using namespace std;

int main()
{
  int size = 5;
  int avTransTime = 5;
  ServerGroup sg( size );

  cout << "Using initial size " << size << " and TransTime of " << avTransTime << endl;


  for(int i=0; i<size; i++)
  {

    sg.useServer( avTransTime );
    for(int i=0; i<size; i++)
    {
      sg.printServer( i );
    }
    cout << endl;
    sg.decServers();
  }
}

#include <iostream>

// The following lines are here to check that SFML is installed and working
#include <SFML/Graphics.hpp>
#include <client/Client.h>  
#include <cstring>

void testSFML() {
    sf::Texture texture;
}
// end of test SFML

using namespace std;

int main(int argc,char* argv[])
{
    if (argc<1) {
        cout << "So far, nothing here..." << endl;
        return EXIT_FAILURE;
    }
    client::Client client;
    if (strcmp(argv[0],"hello")==0) {
        client.helloWorld();
        return EXIT_SUCCESS;
    }
    if (strcmp(argv[0],"state")==0) {
        client.printState();
        return EXIT_SUCCESS;
    }
    return 0;
}

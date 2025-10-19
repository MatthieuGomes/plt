#include "Client.h"
#include <iostream>

namespace client
{
    Client::Client()
    {
        state::State *currentGameState = new state::State();
        this->currentGameState = currentGameState;
    }
    // Client::Client(state::State* lastGameState)
    // {
    //     this->currentGameState = lastGameState;
    // }
    void Client::helloWorld()
    {
        std::cout << "Hello, World!" << std::endl;
    }

    void Client::printState()
    {
        // @Yosra + @Chahrazed + @Theo will call here the printState method from state class
        this->currentGameState->printState();
    }
}

#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int Zero::BaseApplication::Initialize()
{
        bQuit = false;

        return 0;
}


// Finalize all sub modules and clean up all runtime temporary files.
void Zero::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void Zero::BaseApplication::Tick()
{
        std::cout<<"BaseApplication::Tick"<<std::endl;
}

bool Zero::BaseApplication::IsQuit()
{
        return bQuit;
}

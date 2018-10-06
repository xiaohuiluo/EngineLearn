#include "BaseApplication.hpp"

int Eg::BaseApplication::Initialize()
{
    m_bQuit = false;
    
    return 0;
}

void Eg::BaseApplication::Finalize()
{
}

void Eg::BaseApplication::Tick()
{
}

bool Eg::BaseApplication::IsQuit()
{
    return m_bQuit;
}

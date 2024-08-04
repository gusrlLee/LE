#include "RF/RF.h"

int main()
{
    RFEntryPoint::Init();

    RFEntryPoint::Run();

    RFEntryPoint::Shutdown();
    return 0;
}

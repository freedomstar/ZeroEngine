#include <stdio.h>
#include "IApplication.hpp"

using namespace Zero;

namespace Zero {
        extern IApplication* zero_pApp;
}

int main(int argc, char** argv) {
        int ret;

        if ((ret = zero_pApp->Initialize()) != 0) {
                printf("App Initialize failed, will exit now.");
                return ret;
        }

        while (!zero_pApp->IsQuit()) {
                zero_pApp->Tick();
        }

        zero_pApp->Finalize();

        return 0;
}
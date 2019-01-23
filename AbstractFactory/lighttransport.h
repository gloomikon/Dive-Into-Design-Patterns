#ifndef LIGHTTRANSPORT_H
#define LIGHTTRANSPORT_H

#include "transport.h"

class LightTransport : public Transport
{
public:
    virtual void goTo(Elf *elf, int x, int y) override
    {
        std::cout <<"I am a light transtort. That's why I'm TELEPORTATING with " << elf->getName().c_str()
                 << " to point " << x << " " << y << std::endl;
    }
};

#endif // LIGHTTRANSPORT_H

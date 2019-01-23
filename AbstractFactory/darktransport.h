#ifndef DARKTRANSPORT_H
#define DARKTRANSPORT_H

#include "transport.h"

class DarkTransport : public Transport
{
public:
    virtual void goTo(Elf *elf, int x, int y) override
    {
        std::cout <<"I am a dark transtort. That's why I'm FLYING with " << elf->getName().c_str()
                 << " to point " << x << " " << y << std::endl;
    }
};

#endif // DARKTRANSPORT_H

#pragma once
#include "audiostream.hpp"

namespace remixer
{
    class AudioFilter: AudioStream
    {
    public:
        virtual void process() = 0;
    };
}

#pragma once
#include "audiostream.hpp"

namespace remixer
{
    class AudioDevice
    {
    public:
        virtual ~AudioDevice() = 0;
        virtual std::string get_supported_formats() const = 0;
        virtual AudioStream* get_stream() const = 0;
        
    };
}

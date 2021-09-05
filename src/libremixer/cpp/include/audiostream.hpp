#pragma once
#include <cstdint>
#include <string>
#include <chrono>

namespace remixer
{
    /**
     * Translation layer between the connections
     * 
     */
    class AudioStream
    {
    public:
        virtual bool is_writeable() const = 0;
        
        virtual bool is_readable() const = 0;

        virtual std::string get_native_format() const = 0;
        virtual std::tuple<int, int> get_frequency() const = 0;
        virtual int write(uint8_t *buf, int size) = 0;
        virtual int write(uint16_t *buf, int size) = 0;
        virtual int write(uint32_t *buf, int size) = 0;
        virtual int write(float *buf, int size) = 0;
        virtual int write(double *buf, int size) = 0;

        virtual int read(uint8_t *buf, int size) = 0;
        virtual int read(uint16_t *buf, int size) = 0;
        virtual int read(uint32_t *buf, int size) = 0;
        virtual int read(float *buf, int size) = 0;
        virtual int read(double *buf, int size) = 0;

        virtual int flush() = 0;
    };
}

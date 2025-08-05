#pragma once 
#include <cstdint>
#include <array>
#include "cpu6502.h"

class Bus {
public:
    Bus();
    ~Bus() = default;
public: 
    cpu6502 cpu;
private:
    static constexpr uint16_t RAM_SIZE = 64 * 1024;
    std::array<uint8_t, RAM_SIZE> ram{};
public:
    void write(uint16_t address, uint8_t data);
    uint8_t read(uint16_t address, readOnly = false) const;
}

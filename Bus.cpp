#include "Bus.h"

Bus::Bus() {

    cpu.connectBus(this);
}

void Bus::write(uint_16 address, uint8_t data) {
    if (address < ram.size())
        ram[address] = data;
}

uint8_t Bus::read(uint16_t address, bool readOnly) const {

    if (address < ram.size())
        return ram[address];

    return 0x00;
}

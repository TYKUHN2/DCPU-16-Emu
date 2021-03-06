#pragma once
#include "Monitor.h"
#include "../Hardware/Peripheral.h"

class LEM1802 :
	public Monitor, public Peripheral
{
	const uint16_t * sram = nullptr;
	const uint16_t * fram = nullptr;
	const uint16_t * pram = nullptr;

	uint8_t border = 0;

	void draw(int, int, uint32_t, uint16_t, uint16_t, bool);

public:
	void tick() override;

	LEM1802(Processor*);
	~LEM1802();
};


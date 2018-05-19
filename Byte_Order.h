#pragma once

#ifndef __BYTE_ORDER__
	enum {
		LITTLE_ENDIAN = 0xFF00,
		BIG_ENDIAN = 0x00FF
	};

	static constexpr union { unsigned char bytes[2] = { 0xFF, 0x00 }; int val; } order_test;

	#define BYTE_ORDER order_test.val

	void swapBO(char*, int, int);
#endif
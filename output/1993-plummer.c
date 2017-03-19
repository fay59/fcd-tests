#include "tests/bin/1993-plummer.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600958 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t* anon1 = (uint64_t*)0x6009a8;
	uint64_t anon3 = arg1 << 32;
	uint64_t anon2 = *(uint64_t*)((anon3 >> 29) - 8 + arg2) - 1;
	*anon1 = anon2;
	*(uint8_t*)anon2 = 13;
	**(uint8_t**)(arg2 + 16) = 0;
	while (true)
	{
		uint64_t phi_in4;
		uint64_t* anon8;
		uint64_t anon9;
		uint64_t* anon5 = (uint64_t*)(arg2 + 8);
		phi_in4 = *anon5;
		uint32_t dispatch6 = 0;
		do
		{
			uint64_t phi7 = phi_in4;
			printf((uint8_t*)phi7);
			anon8 = (uint64_t*)0x6009b0;
			anon9 = *anon1 - 1;
			*anon8 = anon9;
			phi_in4 = *anon5;
		}
		while (anon9 < *anon5);
		uint8_t* anon10 = (uint8_t*)anon9;
		uint8_t anon11 = *anon10 + 1;
		*anon10 = anon11;
		uint64_t phi_in12 = anon9;
		uint8_t phi_in13 = anon11;
		uint64_t phi14 = phi_in12;
		uint8_t phi15 = phi_in13;
		if ((__sext int32_t)phi15 > (uint32_t)arg1 * (uint32_t)((__sext int64_t)**(uint8_t**)0x6009a8 + (arg1 << 1)))
		{
			uint64_t anon16 = phi14 - 1;
			*anon8 = anon16;
			uint8_t anon17 = (uint8_t)((anon3 >> 32) * (__zext uint64_t)((uint8_t)arg1 + **(uint8_t**)0x6009a8));
			*(uint8_t*)phi14 = anon17;
			phi_in4 = *anon5;
			dispatch6 = 0;
			if (*anon5 <= anon16)
			{
				uint8_t anon18 = anon17 + 1;
				*(uint8_t*)anon16 = anon18;
				phi_in12 = anon16;
				phi_in13 = anon18;
				dispatch6 = 1;
			}
		}
	}
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4005c0, (void(*)())0x400630, (void(*)())arg2, *(uint8_t**)anon1);
	__builtin_trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x6009a0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195714);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4195827);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600770)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}

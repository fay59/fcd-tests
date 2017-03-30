#include "tests/bin/1996-dalbec.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bd0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6)
{
	struct { uint8_t field0[8]; uint32_t field1; uint8_t field2[3]; uint8_t field3; uint8_t field4[56]; uint64_t field5; } alloca1;
	uint64_t phi8;
	uint32_t phi9;
	uint32_t anon10;
	uint32_t anon14;
	uint64_t anon15;
	alloca1.field5 = arg0;
	uint64_t phi2 = arg4 & 0xffffffff;
	uint64_t phi3 = arg6 & 0xffffffff;
	uint64_t phi4 = arg5 & 0xffffffff;
	uint64_t phi_in5 = arg2 & 0xffffffff;
	uint32_t phi_in6 = (uint32_t)arg2;
	do
	{
		uint64_t phi_in7;
		uint64_t anon13;
		do
		{
			do
			{
				phi_in7 = phi_in7;
				phi8 = phi_in5;
				phi9 = phi_in6;
				anon10 = (__zext uint32_t)(phi9 != 0) << 8;
				if (phi9 > anon10)
				{
					alloca1.field1 = anon10;
					uint64_t anon11 = strtol(*(uint8_t**)arg3, null, 10);
					phi2 = strtol(*(uint8_t**)(arg3 + 8), null, 10) & 0xffffffff;
					phi3 = anon11 & 0xffffffff;
					phi4 = 1;
					uint32_t anon12 = ~alloca1.field1 - alloca1.field1;
					phi_in5 = (__zext uint64_t)anon12;
					phi_in6 = anon12;
				}
			}
			while (phi9 > anon10);
			phi2 = 2;
			phi3 = 0;
			anon13 = phi_in7 & 0xffffffffffff00ff | (__zext uint64_t)(phi9 == 0) << 8;
			phi_in7 = anon13;
			phi4 = 1;
			phi_in5 = 4294967293;
			phi_in6 = 4294967293;
			anon14 = (__zext uint32_t)(phi9 == 0);
		}
		while (phi9 > anon14);
		if ((__zext uint32_t)(phi9 != 255) < ~phi9)
		{
			uint32_t phi16;
			anon15 = (uint64_t)&alloca1;
			main(4195888, anon15, 0, arg3, phi2, phi4, (__zext uint64_t)-phi9);
			phi3 = 1;
			uint32_t anon17 = (uint32_t)phi8;
			phi16 = anon17;
			if (anon17 == 255)
			{
				uint32_t anon18 = printf((uint8_t*)0x400884);
				phi3 = (__zext uint64_t)(anon18 + fflush(*(struct _IO_FILE**)0x600c30));
				phi16 = 255;
			}
			phi2 = phi2;
			phi_in7 = anon13;
			phi4 = phi4 + 1 & 0xffffffff;
			uint32_t anon19 = phi16 - 2;
			phi_in5 = (__zext uint64_t)anon19;
			phi_in6 = anon19;
		}
	}
	while ((__zext uint32_t)(phi9 != 255) < ~phi9);
	if (!((__zext uint32_t)(phi9 == 255) < ~phi9 | (phi4 & 1) == 0))
	{
		alloca1.field3 = (__zext uint8_t)(phi9 == 0);
		uint32_t* anon20 = (uint32_t*)(arg1 - 72);
		*anon20 = anon10;
		uint64_t anon21 = phi3 & 0xffffffff;
		main(4195952, anon15, (__zext uint64_t)phi9, arg3, phi2, phi4 << 32 >> 32 >> 1 & 0xffffffff, anon21);
		uint64_t anon22 = (__zext uint64_t)((uint32_t)phi8 - anon14 - *anon20);
		main(4195982, anon15, anon22, arg3, 0, 0, anon21);
		main(4196002, anon15, anon22, arg3, phi2, 0, anon21);
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c38;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196290);
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
	_init(4196403);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6009e8)(arg1 & 0xffffffff, arg2, arg3);
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

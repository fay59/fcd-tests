#include "tests/bin/1996-dalbec.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bd0 != 0)
	{
		__gmon_start__(4195445);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600c00);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6)
{
	uint32_t anon16;
	uint32_t phi_in21;
	uint64_t anon15;
	uint64_t anon17;
	uint32_t anon14;
	uint64_t phi12;
	uint64_t phi9;
	uint32_t phi13;
	uint64_t phi11;
	uint64_t phi8;
	uint64_t phi7;
	struct { uint8_t field0[8]; uint32_t field1; uint8_t field2[3]; uint8_t field3; uint8_t field4[56]; uint64_t field5; } alloca1;
	alloca1.field5 = arg0;
	uint64_t phi_in2 = arg4 & 0xffffffff;
	uint64_t phi_in3 = arg6 & 0xffffffff;
	uint64_t phi_in4 = arg5 & 0xffffffff;
	uint64_t phi_in5 = arg2 & 0xffffffff;
	uint32_t phi_in6 = (uint32_t)arg2;
	while (true)
	{
		phi7 = phi_in2;
		phi8 = phi_in3;
		phi9 = phi_in10;
		phi11 = phi_in4;
		phi12 = phi_in5;
		phi13 = phi_in6;
		anon14 = (__zext uint32_t)(phi13 != 0) << 8;
		if (phi13 <= anon14)
		{
			phi_in2 = 2;
			phi_in3 = 0;
			anon15 = phi9 & 0xffffffffffff00ff | (__zext uint64_t)(phi13 == 0) << 8;
			phi_in10 = anon15;
			phi_in4 = 1;
			phi_in5 = 4294967293;
			phi_in6 = 4294967293;
			anon16 = (__zext uint32_t)(phi13 == 0);
			if (phi13 <= anon16)
			{
				break;
			}
		}
	}
	if ((__zext uint32_t)(phi13 == 255) < (phi13 ^ 0xffffffff) | (phi11 & 1) == 0)
	{
		return;
	}
	else 
	{
		alloca1.field3 = (__zext uint8_t)(phi13 == 0);
		alloca1.field1 = anon14;
		anon17 = (uint64_t)&alloca1;
		uint64_t anon18 = phi8 & 0xffffffff;
		main(4195952, anon17, (__zext uint64_t)phi13, arg3, phi7, phi11 << 32 >> 32 >> 1 & 0xffffffff, anon18);
		uint64_t anon19 = (__zext uint64_t)((uint32_t)phi12 - anon16 - alloca1.field1);
		main(4195982, anon17, anon19, arg3, 0, 0, anon18);
		main(4196002, anon17, anon19, arg3, phi7, 0, anon18);
		return;
	}
	main(4195888, anon17, 0, arg3, phi7, phi11, (__zext uint64_t)(0 - phi13));
	uint64_t phi_in20 = 1;
	uint32_t anon22 = (uint32_t)phi12;
	phi_in21 = anon22;
	if (anon22 == 255)
	{
		uint32_t anon23 = printf((uint8_t*)0x400884);
		uint32_t anon24 = fflush(*(struct _IO_FILE**)0x600c30);
		phi_in20 = (__zext uint64_t)(anon23 + anon24);
		phi_in21 = 255;
	}
	uint64_t phi25 = phi_in20;
	uint32_t phi26 = phi_in21;
	phi_in2 = phi7;
	phi_in3 = phi25;
	uint64_t phi_in10 = anon15;
	phi_in4 = phi11 + 1 & 0xffffffff;
	uint32_t anon27 = phi26 - 2;
	phi_in5 = (__zext uint64_t)anon27;
	phi_in6 = anon27;
	uint32_t* anon28 = (uint32_t*)(arg1 - 72);
	*anon28 = anon14;
	uint64_t anon29 = strtol(*(uint8_t**)arg3, null, 10);
	uint64_t anon30 = strtol(*(uint8_t**)(arg3 + 8), null, 10);
	phi_in2 = anon30 & 0xffffffff;
	phi_in3 = anon29 & 0xffffffff;
	phi_in10 = phi9;
	phi_in4 = 1;
	uint32_t anon31 = (*anon28 ^ 0xffffffff) - *anon28;
	phi_in5 = (__zext uint64_t)anon31;
	phi_in6 = anon31;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
	llvm.trap();
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

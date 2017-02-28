#include "tests/bin/1995-makarios.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600980 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi1;
	uint32_t phi9;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi6;
		uint32_t phi8;
		uint32_t anon10;
		uint32_t phi11;
		uint32_t phi12;
		uint64_t phi13;
		uint64_t phi14;
		uint64_t anon15;
		uint32_t phi16;
		uint32_t phi17;
		uint32_t phi18;
		uint64_t phi_in19;
		uint64_t phi_in20;
		uint32_t phi_in21;
		int64_t anon25;
		int64_t anon26;
		uint64_t anon27;
		uint64_t anon28;
		uint32_t anon30;
		uint32_t anon31;
		uint64_t phi34;
		uint64_t phi35;
		uint32_t phi36;
		uint32_t phi37;
		uint32_t phi38;
		uint32_t phi39;
		uint32_t phi_in40;
		uint32_t anon42;
		uint32_t anon43;
		if (dispatch5 == 0)
		{
			phi6 = phi1;
			uint64_t phi7 = phi_in4;
			phi8 = phi_in3;
			anon10 = (uint32_t)phi7 + 1;
			phi9 = anon10;
			if (anon10 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			phi11 = phi6;
			phi12 = phi9;
			phi13 = 0;
			anon15 = (__zext uint64_t)phi12;
			phi14 = anon15;
			phi16 = phi12;
			phi17 = phi12;
			phi18 = 0;
		}
		if (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			phi_in19 = phi13;
			phi_in20 = phi14;
			phi_in21 = phi12;
		}
		if (dispatch5 == 3 || dispatch5 == 1 && phi12 > phi18 || dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && dispatch5 == 0 && phi12 > phi18)
		{
			uint64_t phi22 = phi_in19;
			uint64_t phi23 = phi_in20;
			uint32_t phi24 = phi_in21;
			anon26 = (__sext int64_t)phi24 >> 60;
			anon27 = phi22 << 3;
			anon25 = (anon26 + phi23 & 7) - (anon26 & 7) + anon27 & 0xffffffff;
			phi_in19 = anon25;
			anon30 = (uint32_t)phi23;
			uint64_t anon29 = (anon30 > 4294967295 ? phi23 : phi23 + 7) << 32 >> 35;
			anon28 = anon29 & 0xffffffff;
			phi_in20 = anon28;
			anon31 = (uint32_t)anon29;
			phi_in21 = anon31;
			dispatch5 = 3;
		}
		uint32_t anon33 = (uint32_t)anon26;
		uint32_t anon32 = (anon33 + anon30 & 7) - (anon33 & 7) + (uint32_t)anon27;
		if (anon31 <= anon32 && (dispatch5 == 3 || dispatch5 == 1 && phi12 > phi18 || dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && dispatch5 == 0 && phi12 > phi18))
		{
			phi34 = (__zext uint64_t)anon32;
			phi35 = anon28;
			phi36 = phi12;
			phi37 = phi12;
			phi38 = (__zext uint32_t)(anon31 == anon32) | (__zext uint32_t)((uint32_t)((anon32 > 4294967295 ? anon25 : (__zext uint64_t)(anon32 + 7)) << 32 >> 35) == anon31);
		}
		if (phi12 <= phi18 && (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0))
		{
			phi34 = phi13;
			phi35 = phi14;
			phi36 = phi16;
			phi37 = phi17;
			phi38 = phi11 << 8 | phi8 & 0xff;
		}
		if (phi12 <= phi18 && dispatch5 == 1 || phi12 <= phi18 && dispatch5 == 2 || anon10 != 0 && phi12 <= phi18 && dispatch5 == 0 || anon31 <= anon32 && dispatch5 == 3 || anon31 <= anon32 && dispatch5 == 1 && phi12 > phi18 || anon31 <= anon32 && dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && anon31 <= anon32 && dispatch5 == 0 && phi12 > phi18)
		{
			phi14 = phi35;
			phi39 = phi36;
			phi_in40 = phi37;
		}
		uint32_t anon41 = phi38 + 1;
		if (anon41 == phi37 && (phi12 <= phi18 && dispatch5 == 1 || phi12 <= phi18 && dispatch5 == 2 || anon10 != 0 && phi12 <= phi18 && dispatch5 == 0 || anon31 <= anon32 && dispatch5 == 3 || anon31 <= anon32 && dispatch5 == 1 && phi12 > phi18 || anon31 <= anon32 && dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && anon31 <= anon32 && dispatch5 == 0 && phi12 > phi18))
		{
			anon42 = printf((uint8_t*)0x400644);
			anon43 = anon41 >> 8;
			phi1 = anon43;
			phi_in3 = phi37;
			phi_in4 = anon15;
			phi39 = phi12;
			phi_in40 = phi12;
			dispatch5 = 0;
		}
		if (phi12 <= phi18 && anon41 != phi37 && dispatch5 == 1 || phi12 <= phi18 && anon41 != phi37 && dispatch5 == 2 || anon10 != 0 && phi12 <= phi18 && anon41 != phi37 && dispatch5 == 0 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 3 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 1 && phi12 > phi18 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && anon31 <= anon32 && anon41 != phi37 && dispatch5 == 0 && phi12 > phi18 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 1 && anon41 == phi37 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 2 && anon41 == phi37 || anon10 != 0 && phi12 <= phi18 && anon42 != 0 && dispatch5 == 0 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 3 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 1 && phi12 > phi18 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 2 && phi12 > phi18 && anon41 == phi37 || anon10 != 0 && anon31 <= anon32 && anon42 != 0 && dispatch5 == 0 && phi12 > phi18 && anon41 == phi37)
		{
			phi16 = phi39;
		}
		if ((uint32_t)((__sext int64_t)phi_in40 % (__sext int64_t)anon41) == 0)
		{
			if (phi12 <= phi18 && anon41 != phi37 && dispatch5 == 1 || phi12 <= phi18 && anon41 != phi37 && dispatch5 == 2 || anon10 != 0 && phi12 <= phi18 && anon41 != phi37 && dispatch5 == 0 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 3 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 1 && phi12 > phi18 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && anon31 <= anon32 && anon41 != phi37 && dispatch5 == 0 && phi12 > phi18 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 1 && anon41 == phi37 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 2 && anon41 == phi37 || anon10 != 0 && phi12 <= phi18 && anon42 != 0 && dispatch5 == 0 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 3 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 1 && phi12 > phi18 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 2 && phi12 > phi18 && anon41 == phi37 || anon10 != 0 && anon31 <= anon32 && anon42 != 0 && dispatch5 == 0 && phi12 > phi18 && anon41 == phi37)
			{
				phi6 = anon43;
				phi8 = anon41;
				uint32_t anon44 = phi16 + 1;
				phi9 = anon44;
				dispatch5 = 2;
				if (anon44 == 0)
				{
					break;
				}
			}
		}
		else if (phi12 <= phi18 && anon41 != phi37 && dispatch5 == 1 || phi12 <= phi18 && anon41 != phi37 && dispatch5 == 2 || anon10 != 0 && phi12 <= phi18 && anon41 != phi37 && dispatch5 == 0 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 3 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 1 && phi12 > phi18 || anon31 <= anon32 && anon41 != phi37 && dispatch5 == 2 && phi12 > phi18 || anon10 != 0 && anon31 <= anon32 && anon41 != phi37 && dispatch5 == 0 && phi12 > phi18 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 1 && anon41 == phi37 || phi12 <= phi18 && anon42 != 0 && dispatch5 == 2 && anon41 == phi37 || anon10 != 0 && phi12 <= phi18 && anon42 != 0 && dispatch5 == 0 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 3 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 1 && phi12 > phi18 && anon41 == phi37 || anon31 <= anon32 && anon42 != 0 && dispatch5 == 2 && phi12 > phi18 && anon41 == phi37 || anon10 != 0 && anon31 <= anon32 && anon42 != 0 && dispatch5 == 0 && phi12 > phi18 && anon41 == phi37)
		{
			phi11 = anon43;
			phi8 = anon41;
			phi13 = phi34;
			phi17 = phi_in40;
			phi12 = (uint32_t)phi14;
			phi18 = (uint32_t)phi34;
			dispatch5 = 1;
		}
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4005c0, (void(*)())0x400630, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6009c8;
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
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600798)(arg1 & 0xffffffff, arg2, arg3);
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

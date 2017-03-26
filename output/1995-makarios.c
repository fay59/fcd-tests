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
	uint32_t phi_in1;
	uint32_t anon8;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi7;
		uint32_t phi5 = phi_in1;
		uint32_t phi6 = phi_in3;
		anon8 = (uint32_t)phi4 + 1;
		phi7 = anon8;
		if (anon8 != 0)
		{
			uint64_t phi_in29;
			uint64_t phi32;
			uint32_t phi_in33;
			uint32_t phi34;
			uint32_t anon38;
			uint32_t anon39;
			uint32_t phi9 = phi7;
			uint64_t phi10 = 0;
			uint64_t anon12 = (__zext uint64_t)phi9;
			phi11 = anon12;
			phi7 = phi9;
			uint32_t phi13 = phi9;
			uint32_t phi14 = 0;
			uint32_t phi_in15 = phi7;
			uint32_t phi16 = phi9;
			uint32_t phi_in17 = phi13;
			uint64_t phi18 = phi10;
			uint64_t phi19 = phi11;
			if (phi_in17 > phi14)
			{
				int64_t anon22;
				uint64_t anon23;
				uint64_t anon24;
				uint32_t anon26;
				uint32_t anon27;
				uint32_t anon28;
				do
				{
					uint32_t phi20 = phi_in17;
					anon22 = (__sext int64_t)phi20 >> 60;
					anon23 = phi18 << 3;
					int64_t anon21 = (anon22 + phi19 & 7) - (anon22 & 7) + anon23;
					phi18 = anon21 & 0xffffffff;
					anon26 = (uint32_t)phi19;
					uint64_t anon25 = (anon26 > 4294967295 ? phi19 : phi19 + 7) << 32 >> 35;
					anon24 = anon25 & 0xffffffff;
					phi19 = anon24;
					anon27 = (uint32_t)anon25;
					phi_in17 = anon27;
					anon28 = (uint32_t)anon21;
				}
				while (anon27 > anon28);
				uint32_t anon31 = (uint32_t)anon22;
				uint32_t anon30 = (anon31 + anon26 & 7) - (anon31 & 7) + (uint32_t)anon23;
				phi_in29 = (__zext uint64_t)anon30;
				phi32 = anon24;
				phi_in33 = phi9;
				phi16 = phi9;
				phi34 = (__zext uint32_t)(anon28 == anon27 | (uint32_t)((__zext uint64_t)(anon28 > 4294967295 ? anon30 : anon30 + 7) << 32 >> 35) == anon27);
			}
			else 
			{
				phi_in29 = phi10;
				phi32 = phi11;
				phi_in33 = phi_in15;
				phi34 = phi5 << 8 | phi6 & 0xff;
			}
			uint64_t phi11 = phi32;
			uint32_t phi35 = phi_in33;
			uint32_t phi36 = phi16;
			uint32_t anon37 = phi34 + 1;
			if (anon37 == phi16)
			{
				anon38 = printf((uint8_t*)0x400644);
				anon39 = anon37 >> 8;
				phi_in1 = anon39;
				phi_in3 = phi16;
				phi4 = anon12;
				phi35 = phi9;
				phi36 = phi9;
			}
			if (anon37 != phi16 || anon38 != 0)
			{
				phi7 = phi35;
				phi9 = phi36;
			}
			if ((uint32_t)((__sext int64_t)phi9 % (__sext int64_t)anon37) == 0)
			{
				if (anon37 != phi16 || anon38 != 0)
				{
					phi5 = anon39;
					phi6 = anon37;
					uint32_t anon40 = phi7 + 1;
					phi7 = anon40;
					if (anon40 == 0)
					{
						break;
					}
				}
			}
			else if (anon37 != phi16 || anon38 != 0)
			{
				phi5 = anon39;
				phi6 = anon37;
				phi10 = phi_in29;
				phi13 = (uint32_t)phi11;
				phi14 = (uint32_t)phi_in29;
			}
		}
	}
	while (anon8 != 0);
	return;
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

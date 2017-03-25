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
	uint32_t anon7;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi_in6;
		uint32_t phi5 = phi_in3;
		anon7 = (uint32_t)phi4 + 1;
		phi_in6 = anon7;
		if (anon7 != 0)
		{
			uint64_t phi29;
			uint64_t phi32;
			uint32_t phi33;
			uint32_t phi34;
			uint32_t phi35;
			uint32_t anon40;
			uint32_t anon41;
			uint32_t phi_in8 = phi1;
			uint32_t phi9 = phi5;
			uint32_t phi10 = phi_in8;
			uint64_t phi11 = 0;
			uint64_t anon13 = (__zext uint64_t)phi_in6;
			phi12 = anon13;
			uint32_t phi14 = phi_in6;
			uint32_t phi_in15 = phi_in6;
			uint32_t phi16 = 0;
			uint32_t phi_in17 = phi14;
			uint64_t phi18 = phi11;
			uint64_t phi19 = phi12;
			if (phi_in15 > phi16)
			{
				int64_t anon22;
				uint64_t anon23;
				uint64_t anon24;
				uint32_t anon26;
				uint32_t anon27;
				uint32_t anon28;
				do
				{
					uint32_t phi20 = phi_in15;
					anon22 = (__sext int64_t)phi20 >> 60;
					anon23 = phi18 << 3;
					int64_t anon21 = (anon22 + phi19 & 7) - (anon22 & 7) + anon23;
					phi18 = anon21 & 0xffffffff;
					anon26 = (uint32_t)phi19;
					uint64_t anon25 = (anon26 > 4294967295 ? phi19 : phi19 + 7) << 32 >> 35;
					anon24 = anon25 & 0xffffffff;
					phi19 = anon24;
					anon27 = (uint32_t)anon25;
					phi_in15 = anon27;
					anon28 = (uint32_t)anon21;
				}
				while (anon27 > anon28);
				uint32_t anon31 = (uint32_t)anon22;
				uint32_t anon30 = (anon31 + anon26 & 7) - (anon31 & 7) + (uint32_t)anon23;
				phi29 = (__zext uint64_t)anon30;
				phi32 = anon24;
				phi33 = phi_in6;
				phi34 = phi_in6;
				phi35 = (__zext uint32_t)(anon28 == anon27 | (uint32_t)((__zext uint64_t)(anon28 > 4294967295 ? anon30 : anon30 + 7) << 32 >> 35) == anon27);
			}
			else 
			{
				phi29 = phi11;
				phi32 = phi12;
				phi33 = phi_in6;
				phi34 = phi_in17;
				phi35 = phi10 << 8 | phi9 & 0xff;
			}
			phi11 = phi29;
			uint64_t phi12 = phi32;
			uint32_t phi_in36 = phi33;
			uint32_t phi37 = phi34;
			uint32_t phi_in38 = phi_in36;
			uint32_t anon39 = phi35 + 1;
			if (anon39 == phi37)
			{
				anon40 = printf((uint8_t*)0x400644);
				anon41 = anon39 >> 8;
				phi1 = anon41;
				phi_in3 = phi37;
				phi4 = anon13;
				phi_in38 = phi_in6;
				phi37 = phi_in6;
			}
			if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
			{
				phi14 = phi37;
			}
			if ((uint32_t)((__sext int64_t)phi14 % (__sext int64_t)anon39) == 0)
			{
				if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
				{
					phi1 = anon41;
					phi5 = anon39;
					uint32_t anon42 = phi_in38 + 1;
					phi_in6 = anon42;
					if (anon42 == 0)
					{
						break;
					}
				}
			}
			else if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
			{
				phi10 = anon41;
				phi9 = anon39;
				phi_in6 = phi_in38;
				phi_in15 = (uint32_t)phi12;
				phi16 = (uint32_t)phi11;
			}
		}
	}
	while (anon7 != 0);
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

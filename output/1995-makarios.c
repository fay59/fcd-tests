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
	uint32_t anon6;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi5;
		anon6 = (uint32_t)phi4 + 1;
		phi5 = anon6;
		if (anon6 != 0)
		{
			uint64_t phi12;
			uint64_t phi30;
			uint64_t phi_in33;
			uint32_t phi34;
			uint32_t phi35;
			uint32_t anon39;
			uint32_t anon40;
			uint32_t phi_in7 = phi1;
			uint32_t phi8 = phi3;
			uint32_t phi9 = phi5;
			uint32_t phi10 = phi_in7;
			uint64_t phi11 = 0;
			uint64_t anon13 = (__zext uint64_t)phi9;
			phi12 = anon13;
			uint32_t phi14 = phi9;
			phi5 = phi9;
			uint32_t phi15 = 0;
			uint32_t phi_in16 = phi14;
			uint32_t phi_in17 = phi5;
			uint32_t phi_in18 = phi9;
			uint64_t phi19 = phi11;
			uint64_t phi20 = phi12;
			if (phi_in18 > phi15)
			{
				int64_t anon23;
				uint64_t anon24;
				uint64_t anon25;
				uint32_t anon27;
				uint32_t anon28;
				uint32_t anon29;
				do
				{
					uint32_t phi21 = phi_in18;
					anon23 = (__sext int64_t)phi21 >> 60;
					anon24 = phi19 << 3;
					int64_t anon22 = (anon23 + phi20 & 7) - (anon23 & 7) + anon24;
					phi19 = anon22 & 0xffffffff;
					anon27 = (uint32_t)phi20;
					uint64_t anon26 = (anon27 > 4294967295 ? phi20 : phi20 + 7) << 32 >> 35;
					anon25 = anon26 & 0xffffffff;
					phi20 = anon25;
					anon28 = (uint32_t)anon26;
					phi_in18 = anon28;
					anon29 = (uint32_t)anon22;
				}
				while (anon28 > anon29);
				uint32_t anon32 = (uint32_t)anon23;
				uint32_t anon31 = (anon32 + anon27 & 7) - (anon32 & 7) + (uint32_t)anon24;
				phi30 = (__zext uint64_t)anon31;
				phi_in33 = anon25;
				phi_in16 = phi9;
				phi34 = phi9;
				phi35 = (__zext uint32_t)(anon29 == anon28 | (uint32_t)((__zext uint64_t)(anon29 > 4294967295 ? anon31 : anon31 + 7) << 32 >> 35) == anon28);
			}
			else 
			{
				phi30 = phi11;
				phi_in33 = phi12;
				phi34 = phi_in17;
				phi35 = phi10 << 8 | phi8 & 0xff;
			}
			phi11 = phi30;
			uint32_t phi36 = phi_in16;
			uint32_t phi37 = phi34;
			uint32_t anon38 = phi35 + 1;
			if (anon38 == phi34)
			{
				anon39 = printf((uint8_t*)0x400644);
				anon40 = anon38 >> 8;
				phi1 = anon40;
				phi3 = phi34;
				phi4 = anon13;
				phi36 = phi9;
				phi37 = phi9;
			}
			if (anon38 != phi34 || anon39 != 0)
			{
				phi14 = phi36;
				phi5 = phi37;
			}
			if ((uint32_t)((__sext int64_t)phi5 % (__sext int64_t)anon38) == 0)
			{
				if (anon38 != phi34 || anon39 != 0)
				{
					phi1 = anon40;
					phi3 = anon38;
					uint32_t anon41 = phi14 + 1;
					phi5 = anon41;
					if (anon41 == 0)
					{
						break;
					}
				}
			}
			else if (anon38 != phi34 || anon39 != 0)
			{
				phi10 = anon40;
				phi8 = anon38;
				phi12 = phi_in33;
				phi9 = (uint32_t)phi_in33;
				phi15 = (uint32_t)phi11;
			}
		}
	}
	while (anon6 != 0);
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

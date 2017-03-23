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
	uint32_t anon10;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi9;
		uint32_t phi_in5 = phi1;
		uint64_t phi6 = phi_in4;
		uint32_t phi_in7 = phi_in5;
		uint32_t phi8 = phi_in3;
		anon10 = (uint32_t)phi6 + 1;
		phi9 = anon10;
		if (anon10 != 0)
		{
			uint64_t phi31;
			uint64_t phi34;
			uint32_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t anon42;
			uint32_t anon43;
			uint32_t phi11 = phi_in7;
			uint64_t phi12 = 0;
			uint64_t anon14 = (__zext uint64_t)phi9;
			phi13 = anon14;
			uint32_t phi15 = phi9;
			uint32_t phi_in16 = phi9;
			uint32_t phi17 = 0;
			uint64_t phi_in18 = phi12;
			uint64_t phi_in19 = phi13;
			if (phi_in16 > phi17)
			{
				int64_t anon24;
				uint64_t anon25;
				uint64_t anon26;
				uint32_t anon28;
				uint32_t anon29;
				uint32_t anon30;
				do
				{
					uint64_t phi20 = phi_in18;
					uint64_t phi21 = phi_in19;
					uint32_t phi22 = phi_in16;
					anon24 = (__sext int64_t)phi22 >> 60;
					anon25 = phi20 << 3;
					int64_t anon23 = (anon24 + phi21 & 7) - (anon24 & 7) + anon25;
					phi_in18 = anon23 & 0xffffffff;
					anon28 = (uint32_t)phi21;
					uint64_t anon27 = (anon28 > 4294967295 ? phi21 : phi21 + 7) << 32 >> 35;
					anon26 = anon27 & 0xffffffff;
					phi_in19 = anon26;
					anon29 = (uint32_t)anon27;
					phi_in16 = anon29;
					anon30 = (uint32_t)anon23;
				}
				while (anon29 > anon30);
				uint32_t anon33 = (uint32_t)anon24;
				uint32_t anon32 = (anon33 + anon28 & 7) - (anon33 & 7) + (uint32_t)anon25;
				phi31 = (__zext uint64_t)anon32;
				phi34 = anon26;
				phi35 = phi9;
				phi36 = phi9;
				phi37 = (__zext uint32_t)(anon30 == anon29 | (uint32_t)((__zext uint64_t)(anon30 > 4294967295 ? anon32 : anon32 + 7) << 32 >> 35) == anon29);
			}
			else 
			{
				phi31 = phi12;
				phi34 = phi13;
				phi35 = phi9;
				phi36 = phi15;
				phi37 = phi11 << 8 | phi8 & 0xff;
			}
			phi12 = phi31;
			uint64_t phi13 = phi34;
			uint32_t phi_in38 = phi35;
			uint32_t phi39 = phi_in38;
			uint32_t phi40 = phi36;
			uint32_t anon41 = phi37 + 1;
			if (anon41 == phi36)
			{
				anon42 = printf((uint8_t*)0x400644);
				anon43 = anon41 >> 8;
				phi1 = anon43;
				phi_in3 = phi36;
				phi_in4 = anon14;
				phi39 = phi9;
				phi40 = phi9;
			}
			if (anon41 != phi36 || anon42 != 0 && anon41 == phi36)
			{
				phi9 = phi39;
				phi15 = phi40;
			}
			if ((uint32_t)((__sext int64_t)phi15 % (__sext int64_t)anon41) == 0)
			{
				if (anon41 != phi36 || anon42 != 0 && anon41 == phi36)
				{
					phi_in7 = anon43;
					phi8 = anon41;
					uint32_t anon44 = phi9 + 1;
					phi9 = anon44;
					if (anon44 == 0)
					{
						break;
					}
				}
			}
			else if (anon41 != phi36 || anon42 != 0 && anon41 == phi36)
			{
				phi11 = anon43;
				phi8 = anon41;
				phi_in16 = (uint32_t)phi13;
				phi17 = (uint32_t)phi12;
			}
		}
	}
	while (anon10 != 0);
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

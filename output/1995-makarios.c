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
	uint32_t phi5;
	uint32_t anon6;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		anon6 = (uint32_t)phi4 + 1;
		phi5 = anon6;
		if (anon6 != 0)
		{
			uint64_t phi30;
			uint64_t phi33;
			uint32_t phi34;
			uint32_t anon38;
			uint32_t anon39;
			uint32_t phi7 = phi1;
			uint32_t phi8 = phi3;
			uint32_t phi9 = phi5;
			uint64_t phi10 = 0;
			uint64_t anon12 = (__zext uint64_t)phi9;
			phi11 = anon12;
			uint32_t phi13 = phi9;
			uint32_t phi14 = phi9;
			uint32_t phi15 = 0;
			uint32_t phi16 = phi13;
			uint32_t phi_in17 = phi14;
			uint32_t phi_in18 = phi9;
			uint64_t phi19 = phi10;
			uint64_t phi20 = phi11;
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
				phi33 = anon25;
				phi16 = phi9;
				phi_in17 = phi9;
				phi34 = (__zext uint32_t)(anon29 == anon28 | (uint32_t)((__zext uint64_t)(anon29 > 4294967295 ? anon31 : anon31 + 7) << 32 >> 35) == anon28);
			}
			else 
			{
				phi30 = phi10;
				phi33 = phi11;
				phi34 = phi7 << 8 | phi8 & 0xff;
			}
			phi10 = phi30;
			uint64_t phi11 = phi33;
			uint32_t phi35 = phi16;
			uint32_t phi36 = phi_in17;
			uint32_t anon37 = phi34 + 1;
			if (anon37 == phi_in17)
			{
				anon38 = printf((uint8_t*)0x400644);
				anon39 = anon37 >> 8;
				phi1 = anon39;
				phi3 = phi_in17;
				phi4 = anon12;
				phi35 = phi9;
				phi36 = phi9;
			}
			if (anon37 != phi_in17 || anon38 != 0)
			{
				phi13 = phi35;
				phi14 = phi36;
			}
			if ((uint32_t)((__sext int64_t)phi14 % (__sext int64_t)anon37) == 0)
			{
				if (anon37 != phi_in17 || anon38 != 0)
				{
					phi1 = anon39;
					phi3 = anon37;
					uint32_t anon40 = phi13 + 1;
					phi5 = anon40;
					if (anon40 == 0)
					{
						break;
					}
				}
			}
			else if (anon37 != phi_in17 || anon38 != 0)
			{
				phi7 = anon39;
				phi8 = anon37;
				phi9 = (uint32_t)phi11;
				phi15 = (uint32_t)phi10;
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

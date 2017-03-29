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
	uint32_t phi3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi7;
		uint32_t phi5 = phi3;
		uint32_t phi_in6 = phi_in1;
		anon8 = (uint32_t)phi4 + 1;
		phi7 = anon8;
		if (anon8 != 0)
		{
			uint64_t phi14;
			uint64_t phi31;
			uint64_t phi34;
			uint32_t phi35;
			uint32_t anon41;
			uint32_t anon42;
			uint32_t phi_in9 = phi5;
			uint32_t phi10 = phi7;
			uint32_t phi11 = phi_in6;
			uint32_t phi12 = phi_in9;
			uint64_t phi13 = 0;
			uint64_t anon15 = (__zext uint64_t)phi10;
			phi14 = anon15;
			uint32_t phi16 = phi10;
			phi7 = phi10;
			uint32_t phi17 = 0;
			uint32_t phi_in18 = phi16;
			phi3 = phi10;
			uint32_t phi_in19 = phi7;
			uint64_t phi20 = phi13;
			uint64_t phi21 = phi14;
			if (phi_in19 > phi17)
			{
				int64_t anon24;
				uint64_t anon25;
				uint64_t anon26;
				uint32_t anon28;
				uint32_t anon29;
				uint32_t anon30;
				do
				{
					uint32_t phi22 = phi_in19;
					anon24 = (__sext int64_t)phi22 >> 60;
					anon25 = phi20 << 3;
					int64_t anon23 = (anon24 + phi21 & 7) - (anon24 & 7) + anon25;
					phi20 = anon23 & 0xffffffff;
					anon28 = (uint32_t)phi21;
					uint64_t anon27 = (anon28 > 4294967295 ? phi21 : phi21 + 7) << 32 >> 35;
					anon26 = anon27 & 0xffffffff;
					phi21 = anon26;
					anon29 = (uint32_t)anon27;
					phi_in19 = anon29;
					anon30 = (uint32_t)anon23;
				}
				while (anon29 > anon30);
				uint32_t anon33 = (uint32_t)anon24;
				uint32_t anon32 = (anon33 + anon28 & 7) - (anon33 & 7) + (uint32_t)anon25;
				phi31 = (__zext uint64_t)anon32;
				phi34 = anon26;
				phi_in18 = phi10;
				phi3 = phi10;
				phi35 = (__zext uint32_t)(anon30 == anon29 | (uint32_t)((__zext uint64_t)(anon30 > 4294967295 ? anon32 : anon32 + 7) << 32 >> 35) == anon29);
			}
			else 
			{
				phi31 = phi13;
				phi34 = phi14;
				phi35 = phi11 << 8 | phi12 & 0xff;
			}
			uint64_t phi_in36 = phi31;
			uint64_t phi_in37 = phi34;
			uint32_t phi38 = phi_in18;
			uint32_t phi39 = phi3;
			uint32_t anon40 = phi35 + 1;
			if (anon40 == phi3)
			{
				anon41 = printf((uint8_t*)0x400644);
				anon42 = anon40 >> 8;
				phi_in1 = anon42;
				phi4 = anon15;
				phi38 = phi10;
				phi39 = phi10;
			}
			if (anon40 != phi3 || anon41 != 0)
			{
				phi16 = phi38;
				phi10 = phi39;
			}
			if ((uint32_t)((__sext int64_t)phi10 % (__sext int64_t)anon40) == 0)
			{
				if (anon40 != phi3 || anon41 != 0)
				{
					phi_in6 = anon42;
					phi5 = anon40;
					uint32_t anon43 = phi16 + 1;
					phi7 = anon43;
					if (anon43 == 0)
					{
						break;
					}
				}
			}
			else if (anon40 != phi3 || anon41 != 0)
			{
				phi11 = anon42;
				phi12 = anon40;
				phi13 = phi_in36;
				phi14 = phi_in37;
				phi7 = (uint32_t)phi_in37;
				phi17 = (uint32_t)phi_in36;
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

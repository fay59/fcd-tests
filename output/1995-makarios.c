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
	uint32_t phi10;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi6;
		uint32_t phi_in9;
		uint32_t anon11;
		uint32_t phi13;
		uint32_t phi14;
		uint32_t phi15;
		uint64_t phi16;
		uint64_t phi17;
		uint64_t anon18;
		uint32_t phi19;
		uint32_t phi20;
		uint32_t phi21;
		uint64_t phi_in22;
		uint64_t phi_in23;
		uint32_t phi_in24;
		int64_t anon28;
		int64_t anon29;
		uint64_t anon30;
		uint64_t anon31;
		uint32_t anon33;
		uint32_t anon34;
		uint64_t phi37;
		uint64_t phi38;
		uint32_t phi39;
		uint32_t phi40;
		uint32_t phi41;
		uint32_t phi43;
		uint32_t phi44;
		uint32_t anon46;
		uint32_t anon47;
		if (dispatch5 == 0)
		{
			phi6 = phi1;
			uint32_t phi_in7 = phi3;
			uint64_t phi8 = phi_in4;
			phi_in9 = phi_in7;
			anon11 = (uint32_t)phi8 + 1;
			phi10 = anon11;
			if (anon11 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 2 || anon11 != 0 && dispatch5 == 0)
		{
			uint32_t phi_in12 = phi6;
			phi13 = phi10;
			phi14 = phi_in12;
			phi15 = phi_in9;
			phi16 = 0;
			anon18 = (__zext uint64_t)phi13;
			phi17 = anon18;
			phi19 = phi13;
			phi20 = phi13;
			phi21 = 0;
		}
		if (dispatch5 == 1 || dispatch5 == 2 || anon11 != 0 && dispatch5 == 0)
		{
			phi_in22 = phi16;
			phi_in23 = phi17;
			phi_in24 = phi20;
		}
		if (dispatch5 == 3 || dispatch5 == 1 && phi20 > phi21 || dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && dispatch5 == 0 && phi20 > phi21)
		{
			uint64_t phi25 = phi_in22;
			uint64_t phi26 = phi_in23;
			uint32_t phi27 = phi_in24;
			anon29 = (__sext int64_t)phi27 >> 60;
			anon30 = phi25 << 3;
			anon28 = (anon29 + phi26 & 7) - (anon29 & 7) + anon30 & 0xffffffff;
			phi_in22 = anon28;
			anon33 = (uint32_t)phi26;
			uint64_t anon32 = (anon33 > 4294967295 ? phi26 : phi26 + 7) << 32 >> 35;
			anon31 = anon32 & 0xffffffff;
			phi_in23 = anon31;
			anon34 = (uint32_t)anon32;
			phi_in24 = anon34;
			dispatch5 = 3;
		}
		uint32_t anon36 = (uint32_t)anon29;
		uint32_t anon35 = (anon36 + anon33 & 7) - (anon36 & 7) + (uint32_t)anon30;
		if (anon34 <= anon35 && (dispatch5 == 3 || dispatch5 == 1 && phi20 > phi21 || dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && dispatch5 == 0 && phi20 > phi21))
		{
			phi37 = (__zext uint64_t)anon35;
			phi38 = anon31;
			phi39 = phi13;
			phi40 = phi13;
			phi41 = (__zext uint32_t)(anon34 == anon35) | (__zext uint32_t)((uint32_t)((anon35 > 4294967295 ? anon28 : (__zext uint64_t)(anon35 + 7)) << 32 >> 35) == anon34);
		}
		if (phi20 <= phi21 && (dispatch5 == 1 || dispatch5 == 2 || anon11 != 0 && dispatch5 == 0))
		{
			phi37 = phi16;
			phi38 = phi17;
			phi39 = phi13;
			phi40 = phi19;
			phi41 = phi14 << 8 | phi15 & 0xff;
		}
		if (phi20 <= phi21 && dispatch5 == 1 || phi20 <= phi21 && dispatch5 == 2 || anon11 != 0 && phi20 <= phi21 && dispatch5 == 0 || anon34 <= anon35 && dispatch5 == 3 || anon34 <= anon35 && dispatch5 == 1 && phi20 > phi21 || anon34 <= anon35 && dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && anon34 <= anon35 && dispatch5 == 0 && phi20 > phi21)
		{
			phi16 = phi37;
			phi17 = phi38;
			uint32_t phi_in42 = phi39;
			phi43 = phi_in42;
			phi44 = phi40;
		}
		uint32_t anon45 = phi41 + 1;
		if (anon45 == phi40 && (phi20 <= phi21 && dispatch5 == 1 || phi20 <= phi21 && dispatch5 == 2 || anon11 != 0 && phi20 <= phi21 && dispatch5 == 0 || anon34 <= anon35 && dispatch5 == 3 || anon34 <= anon35 && dispatch5 == 1 && phi20 > phi21 || anon34 <= anon35 && dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && anon34 <= anon35 && dispatch5 == 0 && phi20 > phi21))
		{
			anon46 = printf((uint8_t*)0x400644);
			anon47 = anon45 >> 8;
			phi1 = anon47;
			phi3 = phi40;
			phi_in4 = anon18;
			phi43 = phi13;
			phi44 = phi13;
			dispatch5 = 0;
		}
		if (phi20 <= phi21 && anon45 != phi40 && dispatch5 == 1 || phi20 <= phi21 && anon45 != phi40 && dispatch5 == 2 || anon11 != 0 && phi20 <= phi21 && anon45 != phi40 && dispatch5 == 0 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 3 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 1 && phi20 > phi21 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && anon34 <= anon35 && anon45 != phi40 && dispatch5 == 0 && phi20 > phi21 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 1 && anon45 == phi40 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 2 && anon45 == phi40 || anon11 != 0 && phi20 <= phi21 && anon46 != 0 && dispatch5 == 0 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 3 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 1 && phi20 > phi21 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 2 && phi20 > phi21 && anon45 == phi40 || anon11 != 0 && anon34 <= anon35 && anon46 != 0 && dispatch5 == 0 && phi20 > phi21 && anon45 == phi40)
		{
			phi13 = phi43;
			phi19 = phi44;
		}
		if ((uint32_t)((__sext int64_t)phi19 % (__sext int64_t)anon45) == 0)
		{
			if (phi20 <= phi21 && anon45 != phi40 && dispatch5 == 1 || phi20 <= phi21 && anon45 != phi40 && dispatch5 == 2 || anon11 != 0 && phi20 <= phi21 && anon45 != phi40 && dispatch5 == 0 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 3 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 1 && phi20 > phi21 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && anon34 <= anon35 && anon45 != phi40 && dispatch5 == 0 && phi20 > phi21 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 1 && anon45 == phi40 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 2 && anon45 == phi40 || anon11 != 0 && phi20 <= phi21 && anon46 != 0 && dispatch5 == 0 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 3 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 1 && phi20 > phi21 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 2 && phi20 > phi21 && anon45 == phi40 || anon11 != 0 && anon34 <= anon35 && anon46 != 0 && dispatch5 == 0 && phi20 > phi21 && anon45 == phi40)
			{
				phi6 = anon47;
				phi_in9 = anon45;
				uint32_t anon48 = phi13 + 1;
				phi10 = anon48;
				dispatch5 = 2;
				if (anon48 == 0)
				{
					break;
				}
			}
		}
		else if (phi20 <= phi21 && anon45 != phi40 && dispatch5 == 1 || phi20 <= phi21 && anon45 != phi40 && dispatch5 == 2 || anon11 != 0 && phi20 <= phi21 && anon45 != phi40 && dispatch5 == 0 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 3 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 1 && phi20 > phi21 || anon34 <= anon35 && anon45 != phi40 && dispatch5 == 2 && phi20 > phi21 || anon11 != 0 && anon34 <= anon35 && anon45 != phi40 && dispatch5 == 0 && phi20 > phi21 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 1 && anon45 == phi40 || phi20 <= phi21 && anon46 != 0 && dispatch5 == 2 && anon45 == phi40 || anon11 != 0 && phi20 <= phi21 && anon46 != 0 && dispatch5 == 0 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 3 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 1 && phi20 > phi21 && anon45 == phi40 || anon34 <= anon35 && anon46 != 0 && dispatch5 == 2 && phi20 > phi21 && anon45 == phi40 || anon11 != 0 && anon34 <= anon35 && anon46 != 0 && dispatch5 == 0 && phi20 > phi21 && anon45 == phi40)
		{
			phi14 = anon47;
			phi15 = anon45;
			phi20 = (uint32_t)phi17;
			phi21 = (uint32_t)phi16;
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

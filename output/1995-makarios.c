#include "tests/bin/1995-makarios.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600980 != 0)
	{
		__gmon_start__(4195261);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x6009b0);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in11;
	uint32_t phi_in1;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi68;
		uint32_t phi67;
		uint32_t phi_in63;
		uint32_t phi_in62;
		uint32_t phi60;
		uint32_t phi59;
		uint32_t anon55;
		uint64_t phi57;
		uint32_t phi_in53;
		uint32_t phi_in52;
		uint64_t phi_in51;
		uint32_t phi69;
		uint32_t phi_in37;
		uint64_t phi_in36;
		uint32_t phi34;
		uint32_t phi27;
		uint32_t phi32;
		uint32_t phi33;
		uint32_t phi15;
		uint32_t phi31;
		uint32_t phi30;
		uint64_t anon20;
		uint64_t phi29;
		uint64_t phi28;
		uint32_t phi26;
		uint64_t phi56;
		uint64_t phi_in35;
		uint32_t phi_in24;
		uint32_t anon12;
		uint32_t phi_in22;
		uint64_t phi_in49;
		uint32_t phi_in23;
		uint32_t phi_in54;
		uint32_t phi_in21;
		uint32_t phi_in25;
		uint32_t phi_in61;
		uint64_t phi_in18;
		uint64_t phi_in19;
		uint32_t phi_in16;
		uint32_t phi_in10;
		uint32_t anon66;
		uint32_t phi_in9;
		uint32_t anon65;
		uint32_t anon48;
		uint32_t phi_in17;
		if (dispatch5 == 0)
		{
			uint32_t phi6 = phi_in1;
			uint32_t phi7 = phi_in3;
			uint64_t phi8 = phi_in4;
			phi_in9 = phi6;
			phi_in10 = phi7;
			anon12 = (uint32_t)phi8 + 1;
			phi_in11 = anon12;
			if (anon12 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 1 || anon12 != 0 && dispatch5 == 0)
		{
			uint32_t phi13 = phi_in9;
			uint32_t phi14 = phi_in10;
			phi15 = phi_in11;
			phi_in16 = phi13;
			phi_in17 = phi14;
			phi_in18 = 0;
			anon20 = (__zext uint64_t)phi15;
			phi_in19 = anon20;
			phi_in21 = phi15;
			phi_in22 = phi15;
			phi_in23 = phi15;
			phi_in24 = phi15;
			phi_in25 = 0;
		}
		if (dispatch5 == 2 || dispatch5 == 1 || anon12 != 0 && dispatch5 == 0)
		{
			phi26 = phi_in16;
			phi27 = phi_in17;
			phi28 = phi_in18;
			phi29 = phi_in19;
			phi30 = phi_in21;
			phi31 = phi_in22;
			phi32 = phi_in23;
			phi33 = phi_in24;
			phi34 = phi_in25;
			phi_in35 = phi28;
			phi_in36 = phi29;
			phi_in37 = phi33;
		}
		if (dispatch5 == 3 || dispatch5 == 2 && phi33 > phi34 || dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && dispatch5 == 0 && phi33 > phi34)
		{
			uint64_t phi38 = phi_in35;
			uint64_t phi39 = phi_in36;
			uint32_t phi40 = phi_in37;
			int64_t anon43 = (__sext int64_t)phi40 >> 60;
			uint32_t anon42 = (uint32_t)anon43;
			uint32_t anon44 = (uint32_t)phi39;
			uint64_t anon45 = phi38 << 3;
			uint32_t anon41 = (anon42 + anon44 & 7) - (anon42 & 7) + (uint32_t)anon45;
			phi_in35 = (__zext uint64_t)anon41;
			uint64_t anon47 = (anon44 > 4294967295 ? phi39 : phi39 + 7) << 32 >> 35;
			uint64_t anon46 = anon47 & 0xffffffff;
			phi_in36 = anon46;
			anon48 = (uint32_t)anon47;
			phi_in37 = anon48;
			int64_t anon50 = (anon43 + phi39 & 7) - (anon43 & 7) + anon45;
			phi_in49 = anon50 & 0xffffffff;
			phi_in51 = anon46;
			phi_in52 = phi30;
			phi_in53 = phi30;
			anon55 = (uint32_t)anon50;
			phi_in54 = (__zext uint32_t)(anon48 == anon55 | (uint32_t)((__zext uint64_t)(anon55 > 4294967295 ? anon41 : anon41 + 7) << 32 >> 35) == anon48);
			dispatch5 = 3;
		}
		if (phi33 <= phi34 && (dispatch5 == 2 || dispatch5 == 1 || anon12 != 0 && dispatch5 == 0))
		{
			phi_in49 = phi28;
			phi_in51 = phi29;
			phi_in52 = phi31;
			phi_in53 = phi32;
			phi_in54 = phi26 << 8 | phi27 & 0xff;
		}
		if (phi33 <= phi34 && dispatch5 == 2 || phi33 <= phi34 && dispatch5 == 1 || anon12 != 0 && phi33 <= phi34 && dispatch5 == 0 || anon48 <= anon55 && dispatch5 == 3 || anon48 <= anon55 && dispatch5 == 2 && phi33 > phi34 || anon48 <= anon55 && dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && anon48 <= anon55 && dispatch5 == 0 && phi33 > phi34)
		{
			phi56 = phi_in49;
			phi57 = phi_in51;
			uint32_t phi58 = phi_in52;
			phi59 = phi_in53;
			phi60 = phi_in54;
			phi_in61 = phi30;
			phi_in62 = phi58;
			phi_in63 = phi59;
		}
		uint32_t anon64 = phi60 + 1;
		if (anon64 == phi59 && (phi33 <= phi34 && dispatch5 == 2 || phi33 <= phi34 && dispatch5 == 1 || anon12 != 0 && phi33 <= phi34 && dispatch5 == 0 || anon48 <= anon55 && dispatch5 == 3 || anon48 <= anon55 && dispatch5 == 2 && phi33 > phi34 || anon48 <= anon55 && dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && anon48 <= anon55 && dispatch5 == 0 && phi33 > phi34))
		{
			anon65 = printf((uint8_t*)0x400644);
			anon66 = anon64 >> 8;
			phi_in1 = anon66;
			phi_in3 = phi59;
			phi_in4 = anon20;
			phi_in61 = phi15;
			phi_in62 = phi15;
			phi_in63 = phi15;
			dispatch5 = 0;
		}
		if (phi33 <= phi34 && anon64 != phi59 && dispatch5 == 2 || phi33 <= phi34 && anon64 != phi59 && dispatch5 == 1 || anon12 != 0 && phi33 <= phi34 && anon64 != phi59 && dispatch5 == 0 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 3 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 2 && phi33 > phi34 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && anon48 <= anon55 && anon64 != phi59 && dispatch5 == 0 && phi33 > phi34 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 2 && anon64 == phi59 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 1 && anon64 == phi59 || anon12 != 0 && phi33 <= phi34 && anon65 != 0 && dispatch5 == 0 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 3 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 2 && phi33 > phi34 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 1 && phi33 > phi34 && anon64 == phi59 || anon12 != 0 && anon48 <= anon55 && anon65 != 0 && dispatch5 == 0 && phi33 > phi34 && anon64 == phi59)
		{
			phi67 = phi_in61;
			phi68 = phi_in62;
			phi69 = phi_in63;
		}
		if ((uint32_t)((__sext int64_t)phi69 % (__sext int64_t)anon64) == 0)
		{
			if (phi33 <= phi34 && anon64 != phi59 && dispatch5 == 2 || phi33 <= phi34 && anon64 != phi59 && dispatch5 == 1 || anon12 != 0 && phi33 <= phi34 && anon64 != phi59 && dispatch5 == 0 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 3 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 2 && phi33 > phi34 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && anon48 <= anon55 && anon64 != phi59 && dispatch5 == 0 && phi33 > phi34 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 2 && anon64 == phi59 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 1 && anon64 == phi59 || anon12 != 0 && phi33 <= phi34 && anon65 != 0 && dispatch5 == 0 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 3 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 2 && phi33 > phi34 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 1 && phi33 > phi34 && anon64 == phi59 || anon12 != 0 && anon48 <= anon55 && anon65 != 0 && dispatch5 == 0 && phi33 > phi34 && anon64 == phi59)
			{
				phi_in9 = anon66;
				phi_in10 = anon64;
				uint32_t anon70 = phi68 + 1;
				phi_in11 = anon70;
				dispatch5 = 1;
				if (anon70 == 0)
				{
					break;
				}
			}
		}
		else if (phi33 <= phi34 && anon64 != phi59 && dispatch5 == 2 || phi33 <= phi34 && anon64 != phi59 && dispatch5 == 1 || anon12 != 0 && phi33 <= phi34 && anon64 != phi59 && dispatch5 == 0 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 3 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 2 && phi33 > phi34 || anon48 <= anon55 && anon64 != phi59 && dispatch5 == 1 && phi33 > phi34 || anon12 != 0 && anon48 <= anon55 && anon64 != phi59 && dispatch5 == 0 && phi33 > phi34 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 2 && anon64 == phi59 || phi33 <= phi34 && anon65 != 0 && dispatch5 == 1 && anon64 == phi59 || anon12 != 0 && phi33 <= phi34 && anon65 != 0 && dispatch5 == 0 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 3 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 2 && phi33 > phi34 && anon64 == phi59 || anon48 <= anon55 && anon65 != 0 && dispatch5 == 1 && phi33 > phi34 && anon64 == phi59 || anon12 != 0 && anon48 <= anon55 && anon65 != 0 && dispatch5 == 0 && phi33 > phi34 && anon64 == phi59)
		{
			phi_in16 = anon66;
			phi_in17 = anon64;
			phi_in18 = phi56;
			phi_in19 = phi57;
			phi_in21 = phi67;
			phi_in22 = phi68;
			phi_in23 = phi69;
			phi_in24 = (uint32_t)phi57;
			phi_in25 = (uint32_t)phi56;
			dispatch5 = 2;
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

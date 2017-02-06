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
		uint32_t phi64;
		uint32_t phi63;
		uint32_t anon62;
		uint32_t phi57;
		uint32_t phi56;
		uint64_t phi53;
		uint64_t anon48;
		uint64_t phi28;
		uint32_t phi_in58;
		uint32_t anon51;
		uint64_t phi_in37;
		uint64_t phi42;
		uint32_t phi_in40;
		uint32_t phi_in39;
		uint64_t phi_in34;
		uint32_t phi32;
		uint32_t phi31;
		uint64_t phi27;
		uint32_t phi25;
		int64_t anon46;
		uint32_t phi_in24;
		uint32_t phi_in22;
		uint32_t phi_in21;
		uint64_t phi_in19;
		uint64_t phi_in18;
		uint64_t anon20;
		uint32_t phi_in59;
		uint32_t phi_in10;
		uint32_t phi_in17;
		uint32_t phi_in9;
		uint32_t phi_in38;
		uint32_t phi30;
		uint64_t phi_in36;
		uint32_t phi_in35;
		uint64_t phi54;
		uint32_t anon61;
		uint32_t phi_in16;
		uint32_t phi29;
		uint32_t phi26;
		uint32_t anon12;
		uint64_t phi_in33;
		uint32_t anon44;
		uint64_t anon49;
		uint32_t phi_in23;
		uint32_t phi15;
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
		if (dispatch5 == 2 || anon12 != 0 && dispatch5 == 0)
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
			phi_in24 = 0;
		}
		if (dispatch5 == 3 || dispatch5 == 2 || anon12 != 0 && dispatch5 == 0)
		{
			phi25 = phi_in16;
			phi26 = phi_in17;
			phi27 = phi_in18;
			phi28 = phi_in19;
			phi29 = phi_in21;
			phi30 = phi_in22;
			phi31 = phi_in23;
			phi32 = phi_in24;
			phi_in33 = phi27;
			phi_in34 = phi28;
			phi_in35 = phi31;
		}
		if (phi31 <= phi32 && (dispatch5 == 3 || dispatch5 == 2 || anon12 != 0 && dispatch5 == 0))
		{
			phi_in36 = phi27;
			phi_in37 = phi28;
			phi_in38 = phi29;
			phi_in39 = phi30;
			phi_in40 = phi25 << 8 | phi26 & 0xff;
		}
		if (dispatch5 == 1 || dispatch5 == 3 && phi31 > phi32 || dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && dispatch5 == 0 && phi31 > phi32)
		{
			uint64_t phi41 = phi_in33;
			phi42 = phi_in34;
			uint32_t phi43 = phi_in35;
			anon46 = (__sext int64_t)phi43 >> 60;
			uint32_t anon45 = (uint32_t)anon46;
			uint32_t anon47 = (uint32_t)phi42;
			anon48 = phi41 << 3;
			anon44 = (anon45 + anon47 & 7) - (anon45 & 7) + (uint32_t)anon48;
			phi_in33 = (__zext uint64_t)anon44;
			uint64_t anon50 = (anon47 > 4294967295 ? phi42 : phi42 + 7) << 32 >> 35;
			anon49 = anon50 & 0xffffffff;
			phi_in34 = anon49;
			anon51 = (uint32_t)anon50;
			phi_in35 = anon51;
			dispatch5 = 1;
		}
		if (anon51 <= anon44 && (dispatch5 == 1 || dispatch5 == 3 && phi31 > phi32 || dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && dispatch5 == 0 && phi31 > phi32))
		{
			int64_t anon52 = (anon46 + phi42 & 7) - (anon46 & 7) + anon48 & 0xffffffff;
			phi_in36 = anon52;
			phi_in37 = anon49;
			phi_in38 = phi15;
			phi_in39 = phi15;
			phi_in40 = (__zext uint32_t)(anon51 == anon44) | (__zext uint32_t)((uint32_t)((anon44 > 4294967295 ? anon52 : (__zext uint64_t)(anon44 + 7)) << 32 >> 35) == anon51);
		}
		if (phi31 <= phi32 && dispatch5 == 3 || phi31 <= phi32 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && dispatch5 == 0 || anon51 <= anon44 && dispatch5 == 1 || anon51 <= anon44 && dispatch5 == 3 && phi31 > phi32 || anon51 <= anon44 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon51 <= anon44 && dispatch5 == 0 && phi31 > phi32)
		{
			phi53 = phi_in36;
			phi54 = phi_in37;
			uint32_t phi55 = phi_in38;
			phi56 = phi_in39;
			phi57 = phi_in40;
			phi_in58 = phi55;
			phi_in59 = phi56;
		}
		uint32_t anon60 = phi57 + 1;
		if (anon60 == phi56 && (phi31 <= phi32 && dispatch5 == 3 || phi31 <= phi32 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && dispatch5 == 0 || anon51 <= anon44 && dispatch5 == 1 || anon51 <= anon44 && dispatch5 == 3 && phi31 > phi32 || anon51 <= anon44 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon51 <= anon44 && dispatch5 == 0 && phi31 > phi32))
		{
			anon61 = printf((uint8_t*)0x400644);
			anon62 = anon60 >> 8;
			phi_in1 = anon62;
			phi_in3 = phi56;
			phi_in4 = anon20;
			phi_in58 = phi15;
			phi_in59 = phi15;
			dispatch5 = 0;
		}
		if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 3 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 1 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 3 && phi31 > phi32 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon51 <= anon44 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 3 && phi31 > phi32 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon51 <= anon44 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
		{
			phi63 = phi_in58;
			phi64 = phi_in59;
		}
		if ((uint32_t)((__sext int64_t)phi64 % (__sext int64_t)anon60) == 0)
		{
			if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 3 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 1 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 3 && phi31 > phi32 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon51 <= anon44 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 3 && phi31 > phi32 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon51 <= anon44 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
			{
				phi_in9 = anon62;
				phi_in10 = anon60;
				uint32_t anon65 = phi63 + 1;
				phi_in11 = anon65;
				dispatch5 = 2;
				if (anon65 == 0)
				{
					break;
				}
			}
		}
		else if (phi31 <= phi32 && anon60 != phi56 && dispatch5 == 3 || phi31 <= phi32 && anon60 != phi56 && dispatch5 == 2 || anon12 != 0 && phi31 <= phi32 && anon60 != phi56 && dispatch5 == 0 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 1 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 3 && phi31 > phi32 || anon51 <= anon44 && anon60 != phi56 && dispatch5 == 2 && phi31 > phi32 || anon12 != 0 && anon51 <= anon44 && anon60 != phi56 && dispatch5 == 0 && phi31 > phi32 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 3 && anon60 == phi56 || phi31 <= phi32 && anon61 != 0 && dispatch5 == 2 && anon60 == phi56 || anon12 != 0 && phi31 <= phi32 && anon61 != 0 && dispatch5 == 0 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 1 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 3 && phi31 > phi32 && anon60 == phi56 || anon51 <= anon44 && anon61 != 0 && dispatch5 == 2 && phi31 > phi32 && anon60 == phi56 || anon12 != 0 && anon51 <= anon44 && anon61 != 0 && dispatch5 == 0 && phi31 > phi32 && anon60 == phi56)
		{
			phi_in16 = anon62;
			phi_in17 = anon60;
			phi_in18 = phi53;
			phi_in19 = phi54;
			phi_in21 = phi63;
			phi_in22 = phi64;
			phi_in23 = (uint32_t)phi54;
			phi_in24 = (uint32_t)phi53;
			dispatch5 = 3;
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

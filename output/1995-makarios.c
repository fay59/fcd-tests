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
	uint32_t phi_in10;
	uint32_t anon11;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi5 = phi_in1;
		uint32_t phi6 = phi_in3;
		uint64_t phi7 = phi_in4;
		uint32_t phi_in8 = phi5;
		uint32_t phi_in9 = phi6;
		anon11 = (uint32_t)phi7 + 1;
		phi_in10 = anon11;
		if (anon11 != 0)
		{
			uint64_t phi_in18;
			uint64_t phi_in46;
			uint64_t phi_in49;
			uint32_t phi_in50;
			uint32_t phi_in51;
			uint32_t phi_in52;
			uint32_t anon61;
			uint32_t anon62;
			uint32_t phi63;
			uint32_t phi64;
			uint32_t phi12 = phi_in8;
			uint32_t phi13 = phi_in9;
			uint32_t phi14 = phi_in10;
			uint32_t phi_in15 = phi12;
			uint32_t phi_in16 = phi13;
			uint64_t phi_in17 = 0;
			uint64_t anon19 = (__zext uint64_t)phi14;
			phi_in18 = anon19;
			uint32_t phi_in20 = phi14;
			uint32_t phi_in21 = phi14;
			uint32_t phi_in22 = phi14;
			uint32_t phi_in23 = 0;
			uint32_t phi24 = phi_in15;
			uint32_t phi25 = phi_in16;
			uint64_t phi26 = phi_in17;
			uint64_t phi27 = phi_in18;
			uint32_t phi28 = phi_in20;
			uint32_t phi29 = phi_in21;
			uint32_t phi30 = phi_in22;
			uint32_t phi31 = phi_in23;
			uint64_t phi_in32 = phi26;
			uint64_t phi_in33 = phi27;
			uint32_t phi_in34 = phi30;
			if (phi30 > phi31)
			{
				int64_t anon39;
				uint64_t anon40;
				uint64_t anon41;
				uint32_t anon43;
				uint32_t anon44;
				uint32_t anon45;
				do
				{
					uint64_t phi35 = phi_in32;
					uint64_t phi36 = phi_in33;
					uint32_t phi37 = phi_in34;
					anon39 = (__sext int64_t)phi37 >> 60;
					anon40 = phi35 << 3;
					int64_t anon38 = (anon39 + phi36 & 7) - (anon39 & 7) + anon40;
					phi_in32 = anon38 & 0xffffffff;
					anon43 = (uint32_t)phi36;
					uint64_t anon42 = (anon43 > 4294967295 ? phi36 : phi36 + 7) << 32 >> 35;
					anon41 = anon42 & 0xffffffff;
					phi_in33 = anon41;
					anon44 = (uint32_t)anon42;
					phi_in34 = anon44;
					anon45 = (uint32_t)anon38;
				}
				while (anon44 > anon45);
				uint32_t anon48 = (uint32_t)anon39;
				uint32_t anon47 = (anon48 + anon43 & 7) - (anon48 & 7) + (uint32_t)anon40;
				phi_in46 = (__zext uint64_t)anon47;
				phi_in49 = anon41;
				phi_in50 = phi14;
				phi_in51 = phi14;
				phi_in52 = (__zext uint32_t)(anon45 == anon44 | (uint32_t)((__zext uint64_t)(anon45 > 4294967295 ? anon47 : anon47 + 7) << 32 >> 35) == anon44);
			}
			else 
			{
				phi_in46 = phi26;
				phi_in49 = phi27;
				phi_in50 = phi28;
				phi_in51 = phi29;
				phi_in52 = phi24 << 8 | phi25 & 0xff;
			}
			uint64_t phi53 = phi_in46;
			uint64_t phi54 = phi_in49;
			uint32_t phi55 = phi_in50;
			uint32_t phi56 = phi_in51;
			uint32_t phi57 = phi_in52;
			uint32_t phi_in58 = phi55;
			uint32_t phi_in59 = phi56;
			uint32_t anon60 = phi57 + 1;
			if (anon60 == phi56)
			{
				anon61 = printf((uint8_t*)0x400644);
				anon62 = anon60 >> 8;
				phi_in1 = anon62;
				phi_in3 = phi56;
				phi_in4 = anon19;
				phi_in58 = phi14;
				phi_in59 = phi14;
			}
			if (anon60 != phi56 || anon61 != 0 && anon60 == phi56)
			{
				phi63 = phi_in58;
				phi64 = phi_in59;
			}
			if ((uint32_t)((__sext int64_t)phi64 % (__sext int64_t)anon60) == 0)
			{
				if (anon60 != phi56 || anon61 != 0 && anon60 == phi56)
				{
					phi_in8 = anon62;
					phi_in9 = anon60;
					uint32_t anon65 = phi63 + 1;
					phi_in10 = anon65;
					if (anon65 == 0)
					{
						break;
					}
				}
			}
			else if (anon60 != phi56 || anon61 != 0 && anon60 == phi56)
			{
				phi_in15 = anon62;
				phi_in16 = anon60;
				phi_in17 = phi53;
				phi_in18 = phi54;
				phi_in20 = phi63;
				phi_in21 = phi64;
				phi_in22 = (uint32_t)phi54;
				phi_in23 = (uint32_t)phi53;
			}
		}
	}
	while (anon11 != 0);
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

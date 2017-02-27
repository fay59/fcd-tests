#include "tests/bin/1995-cdua.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint32_t field0; uint32_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint64_t field6; uint8_t field7[56]; uint64_t field8; } alloca1;
	uint32_t phi3;
	uint32_t* anon6;
	uint32_t* anon8;
	uint32_t phi13;
	uint32_t phi14;
	uint32_t phi15;
	void(** anon16)(uint64_t);
	uint64_t phi17;
	uint64_t phi28;
	int32_t anon29;
	uint32_t dispatch49;
	uint64_t phi_in50;
	uint32_t phi51;
	uint32_t phi52;
	uint64_t phi53;
	void(** anon54)(uint64_t, uint64_t);
	uint64_t* anon55;
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t phi_in2 = (uint32_t)arg1;
	uint32_t* anon4 = (uint32_t*)0x601a9c;
	phi3 = *anon4;
	if (*anon4 == 0)
	{
		uint32_t phi_in7;
		uint64_t anon5 = time(null);
		srand((uint32_t)anon5);
		anon6 = (uint32_t*)0x601a94;
		*anon6 = 1000;
		anon8 = (uint32_t*)0x601300;
		phi_in7 = *anon8;
		phi_in2 = 1000;
		phi3 = 1000;
		if (*anon8 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in7;
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = 10;
				uint32_t anon11 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon10 = phi9 == 79 | phi9 + 79 < 158 | anon11 == 78;
				bool anon12 = !(anon11 == 79 || anon11 == 0);
				if (!anon10 && anon12)
				{
					*(uint8_t*)((__sext int64_t)phi9 + 6296384) = 35;
				}
				if (anon12 && anon10 || !anon10 && anon12 && phi9 == 1839 | phi9 - 1760 < 79 || anon11 == 0)
				{
					*(uint8_t*)((__sext int64_t)phi9 + 6296384) = 32;
				}
				phi_in7 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon8 = 1840;
			phi13 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi13 = phi_in2;
		phi14 = phi3;
		phi15 = phi13;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi14 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi14 == 1839)
	{
		phi15 = phi13;
		*anon4 = 1840;
		anon16 = (void(**)(uint64_t))0x601aa0;
		(*anon16)(4197348);
		phi14 = *anon4;
	}
	uint64_t anon18 = (uint64_t)&alloca1;
	phi17 = anon18;
	uint32_t phi19 = phi14;
	if (phi14 == 1840)
	{
		uint32_t anon21 = phi15 + 2;
		int64_t anon20 = (__sext int64_t)anon21;
		alloca1.field6 = anon20;
		uint32_t anon23 = phi15 - 2;
		int64_t anon22 = (__sext int64_t)anon23;
		alloca1.field3 = anon22;
		uint32_t anon25 = phi15 + 160;
		int64_t anon24 = (__sext int64_t)anon25;
		alloca1.field5 = anon24;
		uint32_t anon27 = phi15 - 160;
		int64_t anon26 = (__sext int64_t)anon27;
		alloca1.field4 = anon26;
		phi28 = anon18;
		anon29 = (__sext int32_t)*(uint8_t*)(anon26 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384);
		if (anon29 != 128)
		{
			uint64_t anon31 = (__zext uint64_t)phi15;
			int64_t anon32 = (__sext int64_t)phi15;
			uint32_t anon30 = (uint32_t)(anon31 * 1717986919 >> 37) - (uint32_t)(anon32 >> 31);
			alloca1.field1 = anon30 + 1;
			alloca1.field2 = anon32;
			alloca1.field0 = phi15 + anon30 * 4294967216 + 1;
			uint64_t phi_in33 = anon18;
			do
			{
				uint64_t phi34;
				uint64_t phi38;
				uint32_t* anon41;
				uint32_t phi42;
				do
				{
					phi34 = phi_in33;
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon36 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon36;
					uint32_t phi37 = 80;
					phi38 = 80;
					uint32_t phi_in39 = anon25;
					uint2_t anon40 = (uint2_t)anon35;
					if (anon40 == 1)
					{
						phi37 = 4294967216;
						phi38 = 4294967216;
						phi_in39 = anon27;
					}
					if (!(anon40 == 0 || anon40 == 1))
					{
						phi37 = anon36 == 2 ? 1 : 4294967295;
						phi38 = anon36 == 2 ? 1 : 4294967295;
						phi_in39 = anon36 == 2 ? anon21 : anon23;
					}
					anon41 = (uint32_t*)0x601a90;
					*anon41 = phi37;
					phi42 = phi_in39;
					phi_in33 = phi34;
				}
				while (*(uint8_t*)((__sext int64_t)phi42 + 6296384) != 35);
				uint64_t anon44 = anon31 + phi38;
				uint32_t anon43 = *anon41 + (uint32_t)anon44;
				*(uint8_t*)((__sext int64_t)anon43 + 6296384) = 32;
				uint32_t anon45 = phi15 + (uint32_t)phi38;
				*(uint8_t*)((__sext int64_t)anon45 + 6296384) = 32;
				*(uint8_t*)(phi34 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi34 + 8) + 6296384) = 32;
				uint32_t anon46 = (uint32_t)((__zext uint64_t)anon43 * 1717986919 >> 37) - (anon43 >> 31);
				*(uint64_t*)(phi34 - 9) = (__zext uint64_t)(anon43 + anon46 * 4294967216 + 1);
				*(uint64_t*)(phi34 - 17) = (__zext uint64_t)(anon46 + 1);
				*(uint8_t*)(phi34 - 18) = 32;
				uint64_t anon47 = phi34 + 14;
				uint32_t anon48 = (uint32_t)((anon44 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon45 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi34 + 18), (__zext uint64_t)*(uint32_t*)anon47, (__zext uint64_t)(anon48 + 1), (__zext uint64_t)(anon45 + anon48 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi15 + (*anon41 << 1)));
				phi17 = anon47;
				phi19 = *anon4;
				dispatch49 = 1;
				if (*anon4 == 1840)
				{
					phi28 = anon47;
					phi_in33 = anon47;
					dispatch49 = 0;
					if ((__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128)
					{
						break;
					}
				}
			}
			while (*anon4 == 1840);
		}
	}
	if (phi14 != 1840 || phi14 == 1840 && anon29 != 128 && dispatch49 == 1)
	{
		phi_in50 = phi17;
		phi51 = phi19;
		phi_in50 = phi_in50;
		phi52 = phi15;
		phi53 = phi_in50;
	}
	if (phi14 == 1840 && (anon29 != 128 && dispatch49 == 0 || anon29 == 128))
	{
		phi_in50 = phi28;
	}
	if (*anon6 == phi15 && (phi14 != 1840 || phi14 == 1840 && anon29 != 128 && dispatch49 == 0 || phi14 == 1840 && anon29 == 128 || phi14 == 1840 && anon29 != 128 && dispatch49 == 1))
	{
		*anon4 = 1;
		anon54 = (void(**)(uint64_t, uint64_t))0x601aa0;
		anon55 = (uint64_t*)0x601258;
		(*anon54)(*anon55, *(uint64_t*)0x6012a8);
		(*(void(**)())0x601aa8)();
		phi52 = 162;
		phi53 = phi_in50;
		phi51 = *anon4;
	}
	if ((phi14 == 1840 && anon29 != 128 && dispatch49 == 0 && *anon6 == phi15 || phi14 == 1840 && anon29 == 128 && *anon6 == phi15 || phi14 == 1840 && anon29 != 128 && dispatch49 == 1 && *anon6 == phi15 || phi14 != 1840 && *anon6 == phi15 || *anon6 != phi15 && phi14 == 1840 && anon29 != 128 && dispatch49 == 1 || phi14 != 1840 && *anon6 != phi15) && phi51 == 1)
	{
		int64_t anon57 = (__sext int64_t)phi52;
		uint8_t* anon56 = (uint8_t*)(anon57 + 6296384);
		if (*anon56 == 32)
		{
			void(** anon63)(uint64_t, uint64_t, uint64_t);
			uint64_t anon64;
			uint32_t* anon58 = (uint32_t*)phi53;
			*anon58 = 1;
			*anon56 = 46;
			(*anon54)(*anon55, *(uint64_t*)0x601290);
			void(** anon59)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon60 = (uint64_t*)0x601260;
			int64_t anon61 = anon57 / 80 + 1 & 0xffffffff;
			int64_t anon62 = anon57 % 80 + 1 & 0xffffffff;
			(*anon59)(*anon60, anon61, anon62, 46);
			if (phi52 == 1676)
			{
				anon63 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon64 = (__zext uint64_t)*anon58;
				(*anon63)(*anon55, *(uint64_t*)0x601288, anon64);
				(*anon16)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon66)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon65 = (*anon66)((__zext uint64_t)(phi52 + 1), anon64);
				if ((uint32_t)anon65 == 0)
				{
					uint64_t anon67 = (*anon66)((__zext uint64_t)(phi52 + 80), (__zext uint64_t)*anon58);
					if ((uint32_t)anon67 == 0)
					{
						uint64_t anon68 = (*anon66)((__zext uint64_t)(phi52 - 80), (__zext uint64_t)*anon58);
						if ((uint32_t)anon68 == 0)
						{
							uint64_t anon69 = (*anon66)((__zext uint64_t)(phi52 - 1), (__zext uint64_t)*anon58);
							if ((uint32_t)anon69 == 0)
							{
								*anon56 = 32;
								(*anon63)(*anon55, *(uint64_t*)0x601280, (__zext uint64_t)*anon58);
								(*anon59)(*anon60, anon61, anon62, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon16)(*anon55);
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400540, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400b60, (void(*)())0x400bd0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6012c0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4197154);
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
	_init(4197267);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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

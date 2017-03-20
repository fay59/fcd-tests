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
	uint32_t* anon3;
	uint32_t* anon5;
	uint32_t phi6;
	uint32_t phi7;
	uint32_t phi_in13;
	uint32_t phi14;
	uint32_t phi15;
	void(** anon16)(uint64_t);
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t* anon2 = (uint32_t*)0x601a9c;
	if (*anon2 == 0)
	{
		uint32_t phi_in4;
		srand((uint32_t)time(null));
		anon3 = (uint32_t*)0x601a94;
		*anon3 = 1000;
		anon5 = (uint32_t*)0x601300;
		phi_in4 = *anon5;
		phi6 = 1000;
		phi7 = 1000;
		if (*anon5 < 1840)
		{
			uint32_t phi8;
			do
			{
				phi8 = phi_in4;
				*(uint8_t*)((__sext int64_t)phi8 + 6296384) = 10;
				uint32_t anon10 = phi8 + ((uint32_t)((__zext uint64_t)phi8 * 1717986919 >> 37) - (phi8 >> 31)) * 4294967216;
				bool anon9 = phi8 == 79 | phi8 + 79 < 158 | anon10 == 78;
				bool anon11 = !(anon10 == 79 || anon10 == 0);
				if (!anon9 && anon11)
				{
					*(uint8_t*)((__sext int64_t)phi8 + 6296384) = 35;
				}
				bool anon12 = phi8 == 1839 | phi8 - 1760 < 79;
				if (anon10 == 0 || anon11 && anon9 || !anon9 && anon11 && anon12)
				{
					*(uint8_t*)((__sext int64_t)phi8 + 6296384) = 32;
				}
				phi_in4 = phi8 + 1;
			}
			while (phi8 != 1839);
			*anon5 = 1840;
			phi_in13 = 1000;
		}
	}
	else 
	{
		phi6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840 && *anon2 == 0)
	{
		phi_in13 = phi6;
		phi_in13 = phi_in13;
		phi14 = phi_in13;
		phi15 = phi7;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi7 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi7 == 1839)
	{
		*anon2 = 1840;
		anon16 = (void(**)(uint64_t))0x601aa0;
		(*anon16)(4197348);
		phi14 = phi_in13;
		phi15 = *anon2;
	}
	while (true)
	{
		uint64_t phi_in17;
		uint64_t phi28;
		int32_t anon29;
		uint64_t phi_in31;
		uint64_t phi32;
		uint64_t anon43;
		uint32_t phi46;
		uint32_t phi47;
		uint64_t phi48;
		void(** anon50)(uint64_t, uint64_t);
		uint64_t* anon51;
		uint64_t anon18 = (uint64_t)&alloca1;
		phi_in17 = anon18;
		uint32_t phi19 = phi15;
		if (phi15 == 1840)
		{
			uint32_t anon21 = phi14 + 2;
			int64_t anon20 = (__sext int64_t)anon21;
			alloca1.field6 = anon20;
			uint32_t anon23 = phi14 - 2;
			int64_t anon22 = (__sext int64_t)anon23;
			alloca1.field3 = anon22;
			uint32_t anon25 = phi14 + 160;
			int64_t anon24 = (__sext int64_t)anon25;
			alloca1.field5 = anon24;
			uint64_t anon27 = (__zext uint64_t)phi14;
			uint64_t anon26 = (anon27 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon26;
			phi28 = anon18;
			anon29 = (__sext int32_t)*(uint8_t*)(anon26 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384);
			if (anon29 != 128)
			{
				uint32_t* anon35;
				uint64_t phi36;
				uint32_t phi39;
				uint32_t anon30 = (uint32_t)(anon27 * 1717986919 >> 37) - (phi14 >> 31);
				alloca1.field1 = anon30 + 1;
				alloca1.field2 = (__sext int64_t)phi14;
				alloca1.field0 = phi14 + anon30 * 4294967216 + 1;
				phi_in31 = anon18;
				do
				{
					phi32 = phi_in31;
					uint64_t anon33 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon34 = (uint32_t)anon33 & 3;
					*(uint32_t*)0x601a98 = anon34;
					anon35 = (uint32_t*)0x601a90;
					*anon35 = 80;
					phi36 = 80;
					uint32_t phi_in37 = anon25;
					uint2_t anon38 = (uint2_t)anon33;
					if (!(anon38 == 0 || anon38 == 1))
					{
						*anon35 = anon34 == 2 ? 1 : 4294967295;
						phi36 = anon34 == 2 ? 1 : 4294967295;
						phi_in37 = anon34 == 2 ? anon21 : anon23;
					}
					if (anon38 == 1)
					{
						*anon35 = 4294967216;
						phi36 = 4294967216;
						phi_in37 = phi14 - 160;
					}
					phi39 = phi_in37;
					phi_in31 = phi32;
				}
				while (*(uint8_t*)((__sext int64_t)phi39 + 6296384) != 35);
				uint32_t anon40 = *anon35 + (uint32_t)(anon27 + phi36);
				*(uint8_t*)((__sext int64_t)anon40 + 6296384) = 32;
				uint32_t anon41 = phi14 + (uint32_t)phi36;
				*(uint8_t*)((__sext int64_t)anon41 + 6296384) = 32;
				*(uint8_t*)(phi32 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi32 + 8) + 6296384) = 32;
				uint32_t anon42 = (uint32_t)((__zext uint64_t)anon40 * 1717986919 >> 37) - (anon40 >> 31);
				*(uint64_t*)(phi32 - 9) = (__zext uint64_t)(anon40 + anon42 * 4294967216 + 1);
				*(uint64_t*)(phi32 - 17) = (__zext uint64_t)(anon42 + 1);
				*(uint8_t*)(phi32 - 18) = 32;
				anon43 = phi32 + 14;
				uint64_t anon45 = (__zext uint64_t)anon41;
				uint32_t anon44 = (uint32_t)(anon45 * 1717986919 >> 37) - (uint32_t)(anon45 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi32 + 18), (__zext uint64_t)*(uint32_t*)anon43, (__zext uint64_t)(anon44 + 1), (__zext uint64_t)(anon41 + anon44 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi14 + (*anon35 << 1)));
				phi_in17 = anon43;
				phi19 = *anon2;
			}
		}
		if (phi15 != 1840 || *anon2 != 1840 && phi15 == 1840 && anon29 != 128)
		{
			phi46 = phi19;
			phi_in17 = phi_in17;
			phi47 = phi14;
			phi48 = phi_in17;
		}
		if (phi15 == 1840)
		{
			if (anon29 != 128 && *anon2 == 1840)
			{
				phi28 = anon43;
				phi_in31 = anon43;
			}
			if (anon29 == 128 || anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128)
			{
				uint64_t phi_in49 = phi28;
				phi_in17 = phi_in49;
				if (*anon3 != phi14)
				{
					break;
				}
			}
		}
		if (*anon3 == phi14 && (phi15 != 1840 || phi15 == 1840 && anon29 == 128 || phi15 == 1840 && anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128 || *anon2 != 1840 && phi15 == 1840 && anon29 != 128))
		{
			*anon2 = 1;
			anon50 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon51 = (uint64_t*)0x601258;
			(*anon50)(*anon51, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi47 = 162;
			phi48 = phi_in17;
			phi46 = *anon2;
		}
		if (phi15 == 1840 && anon29 == 128 && *anon3 == phi14 || phi15 == 1840 && anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128 && *anon3 == phi14 || phi15 != 1840 && *anon3 == phi14 || *anon2 != 1840 && phi15 == 1840 && anon29 != 128 && *anon3 == phi14 || phi15 != 1840 && *anon3 != phi14 || *anon2 != 1840 && *anon3 != phi14 && phi15 == 1840 && anon29 != 128)
		{
			if (phi46 == 1)
			{
				int64_t anon53 = (__sext int64_t)phi47;
				uint8_t* anon52 = (uint8_t*)(anon53 + 6296384);
				if (*anon52 == 32)
				{
					void(** anon59)(uint64_t, uint64_t, uint64_t);
					uint64_t anon60;
					uint32_t* anon54 = (uint32_t*)phi48;
					*anon54 = 1;
					*anon52 = 46;
					(*anon50)(*anon51, *(uint64_t*)0x601290);
					void(** anon55)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon56 = (uint64_t*)0x601260;
					int64_t anon57 = anon53 / 80 + 1 & 0xffffffff;
					int64_t anon58 = anon53 % 80 + 1 & 0xffffffff;
					(*anon55)(*anon56, anon57, anon58, 46);
					if (phi47 == 1676)
					{
						anon59 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon60 = (__zext uint64_t)*anon54;
						(*anon59)(*anon51, *(uint64_t*)0x601288, anon60);
						(*anon16)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon61)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon61)((__zext uint64_t)(phi47 + 1), anon60) == 0 && (uint32_t)(*anon61)((__zext uint64_t)(phi47 + 80), (__zext uint64_t)*anon54) == 0 && (uint32_t)(*anon61)((__zext uint64_t)(phi47 - 80), (__zext uint64_t)*anon54) == 0 && (uint32_t)(*anon61)((__zext uint64_t)(phi47 - 1), (__zext uint64_t)*anon54) == 0)
					{
						*anon52 = 32;
						(*anon59)(*anon51, *(uint64_t*)0x601280, (__zext uint64_t)*anon54);
						(*anon55)(*anon56, anon57, anon58, 32);
					}
				}
				else 
				{
					(*anon16)(*anon51);
				}
			}
			break;
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

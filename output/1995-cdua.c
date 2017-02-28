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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi16;
	void(** anon18)(uint64_t);
	uint64_t phi_in19;
	uint64_t phi30;
	int32_t anon31;
	uint32_t dispatch51;
	uint64_t phi52;
	uint32_t phi53;
	uint64_t phi54;
	uint32_t phi55;
	void(** anon57)(uint64_t, uint64_t);
	uint64_t* anon58;
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t phi2 = (uint32_t)arg1;
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
		phi2 = 1000;
		phi3 = 1000;
		if (*anon8 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in7;
				uint8_t phi10 = 10;
				uint32_t anon12 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon11 = phi9 == 79 | phi9 + 79 < 158 | anon12 == 78;
				bool anon13 = !(anon12 == 79 || anon12 == 0);
				if (!anon11 && anon13)
				{
					phi10 = 35;
				}
				if (anon13 && anon11 || !anon11 && anon13 && phi9 == 1839 | phi9 - 1760 < 79 || anon12 == 0)
				{
					phi10 = 32;
				}
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = phi10;
				phi_in7 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon8 = 1840;
			phi14 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi15 = phi2;
		phi16 = phi3;
		phi14 = phi15;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi16 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi16 == 1839)
	{
		uint32_t phi_in17 = phi14;
		*anon4 = 1840;
		anon18 = (void(**)(uint64_t))0x601aa0;
		(*anon18)(4197348);
		phi15 = phi_in17;
		phi16 = *anon4;
	}
	uint64_t anon20 = (uint64_t)&alloca1;
	phi_in19 = anon20;
	uint32_t phi_in21 = phi16;
	if (phi16 == 1840)
	{
		uint32_t anon23 = phi15 + 2;
		int64_t anon22 = (__sext int64_t)anon23;
		alloca1.field6 = anon22;
		uint32_t anon25 = phi15 - 2;
		int64_t anon24 = (__sext int64_t)anon25;
		alloca1.field3 = anon24;
		uint32_t anon27 = phi15 + 160;
		int64_t anon26 = (__sext int64_t)anon27;
		alloca1.field5 = anon26;
		uint32_t anon29 = phi15 - 160;
		int64_t anon28 = (__sext int64_t)anon29;
		alloca1.field4 = anon28;
		phi30 = anon20;
		anon31 = (__sext int32_t)*(uint8_t*)(anon28 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384) + (__sext int32_t)*(uint8_t*)(anon26 + 6296384);
		if (anon31 != 128)
		{
			uint64_t anon33 = (__zext uint64_t)phi15;
			int64_t anon34 = (__sext int64_t)phi15;
			uint32_t anon32 = (uint32_t)(anon33 * 1717986919 >> 37) - (uint32_t)(anon34 >> 31);
			alloca1.field1 = anon32 + 1;
			alloca1.field2 = anon34;
			alloca1.field0 = phi15 + anon32 * 4294967216 + 1;
			uint64_t phi_in35 = anon20;
			do
			{
				uint64_t phi36;
				uint64_t phi40;
				uint32_t* anon43;
				uint32_t phi44;
				do
				{
					phi36 = phi_in35;
					uint64_t anon37 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon38 = (uint32_t)anon37 & 3;
					*(uint32_t*)0x601a98 = anon38;
					uint32_t phi39 = 80;
					phi40 = 80;
					uint32_t phi_in41 = anon27;
					uint2_t anon42 = (uint2_t)anon37;
					if (anon42 == 1)
					{
						phi39 = 4294967216;
						phi40 = 4294967216;
						phi_in41 = anon29;
					}
					if (!(anon42 == 0 || anon42 == 1))
					{
						phi39 = anon38 == 2 ? 1 : 4294967295;
						phi40 = anon38 == 2 ? 1 : 4294967295;
						phi_in41 = anon38 == 2 ? anon23 : anon25;
					}
					anon43 = (uint32_t*)0x601a90;
					*anon43 = phi39;
					phi44 = phi_in41;
					phi_in35 = phi36;
				}
				while (*(uint8_t*)((__sext int64_t)phi44 + 6296384) != 35);
				uint64_t anon46 = anon33 + phi40;
				uint32_t anon45 = *anon43 + (uint32_t)anon46;
				*(uint8_t*)((__sext int64_t)anon45 + 6296384) = 32;
				uint32_t anon47 = phi15 + (uint32_t)phi40;
				*(uint8_t*)((__sext int64_t)anon47 + 6296384) = 32;
				*(uint8_t*)(phi36 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi36 + 8) + 6296384) = 32;
				uint32_t anon48 = (uint32_t)((__zext uint64_t)anon45 * 1717986919 >> 37) - (anon45 >> 31);
				*(uint64_t*)(phi36 - 9) = (__zext uint64_t)(anon45 + anon48 * 4294967216 + 1);
				*(uint64_t*)(phi36 - 17) = (__zext uint64_t)(anon48 + 1);
				*(uint8_t*)(phi36 - 18) = 32;
				uint64_t anon49 = phi36 + 14;
				uint32_t anon50 = (uint32_t)((anon46 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon47 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi36 + 18), (__zext uint64_t)*(uint32_t*)anon49, (__zext uint64_t)(anon50 + 1), (__zext uint64_t)(anon47 + anon50 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi15 + (*anon43 << 1)));
				phi_in19 = anon49;
				phi_in21 = *anon4;
				dispatch51 = 1;
				if (*anon4 == 1840)
				{
					phi30 = anon49;
					phi_in35 = anon49;
					dispatch51 = 0;
					if ((__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 46) + 6296384) == 128)
					{
						break;
					}
				}
			}
			while (*anon4 == 1840);
		}
	}
	if (phi16 != 1840 || phi16 == 1840 && anon31 != 128 && dispatch51 == 1)
	{
		phi52 = phi_in19;
		phi53 = phi15;
		phi54 = phi_in19;
		phi55 = phi_in21;
	}
	if (phi16 == 1840 && (anon31 != 128 && dispatch51 == 0 || anon31 == 128))
	{
		uint64_t phi_in56 = phi30;
		phi52 = phi_in56;
	}
	if (*anon6 == phi15 && (phi16 != 1840 || phi16 == 1840 && anon31 != 128 && dispatch51 == 0 || phi16 == 1840 && anon31 == 128 || phi16 == 1840 && anon31 != 128 && dispatch51 == 1))
	{
		phi_in19 = phi52;
		*anon4 = 1;
		anon57 = (void(**)(uint64_t, uint64_t))0x601aa0;
		anon58 = (uint64_t*)0x601258;
		(*anon57)(*anon58, *(uint64_t*)0x6012a8);
		(*(void(**)())0x601aa8)();
		phi53 = 162;
		phi54 = phi_in19;
		phi55 = *anon4;
	}
	if ((phi16 == 1840 && anon31 != 128 && dispatch51 == 0 && *anon6 == phi15 || phi16 == 1840 && anon31 == 128 && *anon6 == phi15 || phi16 == 1840 && anon31 != 128 && dispatch51 == 1 && *anon6 == phi15 || phi16 != 1840 && *anon6 == phi15 || *anon6 != phi15 && phi16 == 1840 && anon31 != 128 && dispatch51 == 1 || phi16 != 1840 && *anon6 != phi15) && phi55 == 1)
	{
		int64_t anon60 = (__sext int64_t)phi53;
		uint8_t* anon59 = (uint8_t*)(anon60 + 6296384);
		if (*anon59 == 32)
		{
			void(** anon66)(uint64_t, uint64_t, uint64_t);
			uint64_t anon67;
			uint32_t* anon61 = (uint32_t*)phi54;
			*anon61 = 1;
			*anon59 = 46;
			(*anon57)(*anon58, *(uint64_t*)0x601290);
			void(** anon62)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon63 = (uint64_t*)0x601260;
			int64_t anon64 = anon60 / 80 + 1 & 0xffffffff;
			int64_t anon65 = anon60 % 80 + 1 & 0xffffffff;
			(*anon62)(*anon63, anon64, anon65, 46);
			if (phi53 == 1676)
			{
				anon66 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon67 = (__zext uint64_t)*anon61;
				(*anon66)(*anon58, *(uint64_t*)0x601288, anon67);
				(*anon18)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon69)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon68 = (*anon69)((__zext uint64_t)(phi53 + 1), anon67);
				if ((uint32_t)anon68 == 0)
				{
					uint64_t anon70 = (*anon69)((__zext uint64_t)(phi53 + 80), (__zext uint64_t)*anon61);
					if ((uint32_t)anon70 == 0)
					{
						uint64_t anon71 = (*anon69)((__zext uint64_t)(phi53 - 80), (__zext uint64_t)*anon61);
						if ((uint32_t)anon71 == 0)
						{
							uint64_t anon72 = (*anon69)((__zext uint64_t)(phi53 - 1), (__zext uint64_t)*anon61);
							if ((uint32_t)anon72 == 0)
							{
								*anon59 = 32;
								(*anon66)(*anon58, *(uint64_t*)0x601280, (__zext uint64_t)*anon61);
								(*anon62)(*anon63, anon64, anon65, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon18)(*anon58);
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

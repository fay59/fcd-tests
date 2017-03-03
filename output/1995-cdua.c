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
	uint32_t phi_in3;
	uint32_t* anon6;
	uint32_t* anon8;
	uint32_t phi_in13;
	void(** anon14)(uint64_t);
	uint32_t phi15;
	uint32_t phi16;
	int32_t anon29;
	uint64_t phi34;
	uint32_t phi50;
	uint64_t phi51;
	uint32_t phi52;
	void(** anon53)(uint64_t, uint64_t);
	uint64_t* anon54;
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t phi2 = (uint32_t)arg1;
	uint32_t* anon4 = (uint32_t*)0x601a9c;
	phi_in3 = *anon4;
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
		phi_in3 = 1000;
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
			phi_in13 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi_in13 = phi2;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in3 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in3 == 1839)
	{
		*anon4 = 1840;
		anon14 = (void(**)(uint64_t))0x601aa0;
		(*anon14)(4197348);
		phi_in3 = *anon4;
	}
	do
	{
		uint64_t phi17;
		uint64_t phi_in28;
		uint64_t phi_in33;
		uint64_t anon46;
		uint64_t phi_in48;
		uint64_t phi49;
		phi15 = phi_in13;
		phi16 = phi_in3;
		uint64_t anon18 = (uint64_t)&alloca1;
		phi17 = anon18;
		uint32_t phi_in19 = phi16;
		if (phi16 == 1840)
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
			phi_in28 = anon18;
			anon29 = (__sext int32_t)*(uint8_t*)(anon26 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384);
			if (anon29 != 128)
			{
				uint32_t* anon37;
				uint64_t phi38;
				uint32_t phi41;
				uint64_t anon31 = (__zext uint64_t)phi15;
				int64_t anon32 = (__sext int64_t)phi15;
				uint32_t anon30 = (uint32_t)(anon31 * 1717986919 >> 37) - (uint32_t)(anon32 >> 31);
				alloca1.field1 = anon30 + 1;
				alloca1.field2 = anon32;
				alloca1.field0 = phi15 + anon30 * 4294967216 + 1;
				phi_in33 = anon18;
				do
				{
					phi34 = phi_in33;
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon36 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon36;
					anon37 = (uint32_t*)0x601a90;
					*anon37 = 80;
					phi38 = 80;
					uint32_t phi_in39 = anon25;
					uint2_t anon40 = (uint2_t)anon35;
					if (anon40 == 1)
					{
						*anon37 = 4294967216;
						phi38 = 4294967216;
						phi_in39 = anon27;
					}
					if (!(anon40 == 0 || anon40 == 1))
					{
						*anon37 = anon36 == 2 ? 1 : 4294967295;
						phi38 = anon36 == 2 ? 1 : 4294967295;
						phi_in39 = anon36 == 2 ? anon21 : anon23;
					}
					phi41 = phi_in39;
					phi_in33 = phi34;
				}
				while (*(uint8_t*)((__sext int64_t)phi41 + 6296384) != 35);
				uint64_t anon43 = anon31 + phi38;
				uint32_t anon42 = *anon37 + (uint32_t)anon43;
				*(uint8_t*)((__sext int64_t)anon42 + 6296384) = 32;
				uint32_t anon44 = phi15 + (uint32_t)phi38;
				*(uint8_t*)((__sext int64_t)anon44 + 6296384) = 32;
				*(uint8_t*)(phi34 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi34 + 8) + 6296384) = 32;
				uint32_t anon45 = (uint32_t)((__zext uint64_t)anon42 * 1717986919 >> 37) - (anon42 >> 31);
				*(uint64_t*)(phi34 - 9) = (__zext uint64_t)(anon42 + anon45 * 4294967216 + 1);
				*(uint64_t*)(phi34 - 17) = (__zext uint64_t)(anon45 + 1);
				*(uint8_t*)(phi34 - 18) = 32;
				anon46 = phi34 + 14;
				uint32_t anon47 = (uint32_t)((anon43 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon44 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi34 + 18), (__zext uint64_t)*(uint32_t*)anon46, (__zext uint64_t)(anon47 + 1), (__zext uint64_t)(anon44 + anon47 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi15 + (*anon37 << 1)));
				phi17 = anon46;
				phi_in19 = *anon4;
			}
		}
		if (phi16 != 1840 || *anon4 != 1840 && phi16 == 1840 && anon29 != 128)
		{
			phi_in48 = phi17;
			phi49 = phi_in48;
			phi50 = phi15;
			phi51 = phi_in48;
			phi52 = phi_in19;
		}
		if (phi16 == 1840)
		{
			if (anon29 != 128 && *anon4 == 1840)
			{
				phi_in28 = anon46;
				phi_in33 = anon46;
			}
			if (anon29 == 128 || anon29 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128)
			{
				phi49 = phi_in28;
				if (*anon6 != phi15)
				{
					break;
				}
			}
		}
		if (*anon6 == phi15 && (phi16 != 1840 || phi16 == 1840 && anon29 == 128 || phi16 == 1840 && anon29 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 || *anon4 != 1840 && phi16 == 1840 && anon29 != 128))
		{
			phi_in48 = phi49;
			*anon4 = 1;
			anon53 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon54 = (uint64_t*)0x601258;
			(*anon53)(*anon54, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi50 = 162;
			phi51 = phi_in48;
			phi52 = *anon4;
		}
	}
	while (!(phi16 == 1840 && anon29 == 128 && *anon6 == phi15 || anon29 != 128 && phi16 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 && *anon6 == phi15 || anon29 != 128 && *anon4 != 1840 && phi16 == 1840 && *anon6 == phi15 || phi16 != 1840 && *anon6 == phi15 || anon29 != 128 && *anon4 != 1840 && *anon6 != phi15 && phi16 == 1840 || phi16 != 1840 && *anon6 != phi15));
	if (phi52 == 1)
	{
		int64_t anon56 = (__sext int64_t)phi50;
		uint8_t* anon55 = (uint8_t*)(anon56 + 6296384);
		if (*anon55 == 32)
		{
			void(** anon62)(uint64_t, uint64_t, uint64_t);
			uint64_t anon63;
			uint32_t* anon57 = (uint32_t*)phi51;
			*anon57 = 1;
			*anon55 = 46;
			(*anon53)(*anon54, *(uint64_t*)0x601290);
			void(** anon58)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon59 = (uint64_t*)0x601260;
			int64_t anon60 = anon56 / 80 + 1 & 0xffffffff;
			int64_t anon61 = anon56 % 80 + 1 & 0xffffffff;
			(*anon58)(*anon59, anon60, anon61, 46);
			if (phi50 == 1676)
			{
				anon62 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon63 = (__zext uint64_t)*anon57;
				(*anon62)(*anon54, *(uint64_t*)0x601288, anon63);
				(*anon14)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon65)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon64 = (*anon65)((__zext uint64_t)(phi50 + 1), anon63);
				if ((uint32_t)anon64 == 0)
				{
					uint64_t anon66 = (*anon65)((__zext uint64_t)(phi50 + 80), (__zext uint64_t)*anon57);
					if ((uint32_t)anon66 == 0)
					{
						uint64_t anon67 = (*anon65)((__zext uint64_t)(phi50 - 80), (__zext uint64_t)*anon57);
						if ((uint32_t)anon67 == 0)
						{
							uint64_t anon68 = (*anon65)((__zext uint64_t)(phi50 - 1), (__zext uint64_t)*anon57);
							if ((uint32_t)anon68 == 0)
							{
								*anon55 = 32;
								(*anon62)(*anon54, *(uint64_t*)0x601280, (__zext uint64_t)*anon57);
								(*anon58)(*anon59, anon60, anon61, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon14)(*anon54);
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

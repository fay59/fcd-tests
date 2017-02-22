#include "tests/bin/1995-cdua.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195509);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601228);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint64_t* anon68;
	uint32_t phi_in63;
	int32_t anon36;
	uint32_t phi_in19;
	uint32_t phi_in65;
	uint32_t phi_in3;
	void(** anon67)(uint64_t, uint64_t);
	void(** anon21)(uint64_t);
	uint32_t phi17;
	uint64_t phi_in60;
	uint64_t phi_in24;
	uint32_t phi_in18;
	uint32_t dispatch58;
	uint32_t* anon8;
	uint32_t* anon6;
	struct { uint32_t field0; uint32_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint64_t field6; uint8_t field7[56]; uint64_t field8; } alloca1;
	uint64_t phi_in64;
	uint32_t phi_in15;
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t phi_in2 = (uint32_t)arg1;
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
		phi_in2 = 1000;
		phi_in3 = 1000;
		if (*anon8 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in7;
				uint8_t phi_in10 = 10;
				uint32_t anon12 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon11 = phi9 == 79 | phi9 + 79 < 158 | anon12 == 78;
				bool anon13 = !(anon12 == 79 || anon12 == 0);
				if (!anon11 && anon13)
				{
					phi_in10 = 35;
				}
				if (anon13 && anon11 || !anon11 && anon13 && phi9 == 1839 | phi9 - 1760 < 79 || anon12 == 0)
				{
					phi_in10 = 32;
				}
				uint8_t phi14 = phi_in10;
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = phi14;
				phi_in7 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon8 = 1840;
			phi_in15 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		uint32_t phi16 = phi_in2;
		phi17 = phi_in3;
		phi_in15 = phi16;
		phi_in18 = phi16;
		phi_in19 = phi17;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi17 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi17 == 1839)
	{
		uint32_t phi20 = phi_in15;
		*anon4 = 1840;
		anon21 = (void(**)(uint64_t))0x601aa0;
		(*anon21)(4197348);
		phi_in18 = phi20;
		phi_in19 = *anon4;
	}
	uint32_t phi22 = phi_in18;
	uint32_t phi23 = phi_in19;
	uint64_t anon25 = (uint64_t)&alloca1;
	phi_in24 = anon25;
	uint32_t phi_in26 = phi23;
	if (phi23 == 1840)
	{
		uint32_t anon28 = phi22 + 2;
		int64_t anon27 = (__sext int64_t)anon28;
		alloca1.field6 = anon27;
		uint32_t anon30 = phi22 - 2;
		int64_t anon29 = (__sext int64_t)anon30;
		alloca1.field3 = anon29;
		uint32_t anon32 = phi22 + 160;
		int64_t anon31 = (__sext int64_t)anon32;
		alloca1.field5 = anon31;
		uint32_t anon34 = phi22 - 160;
		int64_t anon33 = (__sext int64_t)anon34;
		alloca1.field4 = anon33;
		uint64_t phi_in35 = anon25;
		anon36 = (__sext int32_t)*(uint8_t*)(anon33 + 6296384) + (__sext int32_t)*(uint8_t*)(anon27 + 6296384) + (__sext int32_t)*(uint8_t*)(anon29 + 6296384) + (__sext int32_t)*(uint8_t*)(anon31 + 6296384);
		if (anon36 != 128)
		{
			uint64_t anon38 = (__zext uint64_t)phi22;
			int64_t anon39 = (__sext int64_t)phi22;
			uint32_t anon37 = (uint32_t)(anon38 * 1717986919 >> 37) - (uint32_t)(anon39 >> 31);
			alloca1.field1 = anon37 + 1;
			alloca1.field2 = anon39;
			alloca1.field0 = phi22 + anon37 * 4294967216 + 1;
			uint64_t phi_in40 = anon25;
			do
			{
				uint32_t* anon51;
				uint32_t phi50;
				uint32_t phi48;
				uint64_t phi41;
				uint64_t phi49;
				do
				{
					phi41 = phi_in40;
					uint64_t anon42 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon43 = (uint32_t)anon42 & 3;
					*(uint32_t*)0x601a98 = anon43;
					uint32_t phi_in44 = 4294967216;
					uint64_t phi_in45 = 4294967216;
					uint32_t phi_in46 = anon34;
					uint2_t anon47 = (uint2_t)anon42;
					if (!(anon47 == 0 || anon47 == 1))
					{
						phi_in44 = anon43 == 2 ? 1 : 4294967295;
						phi_in45 = anon43 == 2 ? 1 : 4294967295;
						phi_in46 = anon43 == 2 ? anon28 : anon30;
					}
					if (anon47 == 0)
					{
						phi_in44 = 80;
						phi_in45 = 80;
						phi_in46 = anon32;
					}
					phi48 = phi_in44;
					phi49 = phi_in45;
					phi50 = phi_in46;
					anon51 = (uint32_t*)0x601a90;
					*anon51 = phi48;
					phi_in40 = phi41;
				}
				while (*(uint8_t*)((__sext int64_t)phi50 + 6296384) != 35);
				uint64_t anon53 = anon38 + phi49;
				uint32_t anon52 = phi48 + (uint32_t)anon53;
				*(uint8_t*)((__sext int64_t)anon52 + 6296384) = 32;
				uint32_t anon54 = phi22 + (uint32_t)phi49;
				*(uint8_t*)((__sext int64_t)anon54 + 6296384) = 32;
				*(uint8_t*)(phi41 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi41 + 8) + 6296384) = 32;
				uint32_t anon55 = (uint32_t)((__zext uint64_t)anon52 * 1717986919 >> 37) - (anon52 >> 31);
				*(uint64_t*)(phi41 - 9) = (__zext uint64_t)(anon52 + anon55 * 4294967216 + 1);
				*(uint64_t*)(phi41 - 17) = (__zext uint64_t)(anon55 + 1);
				*(uint8_t*)(phi41 - 18) = 32;
				uint64_t anon56 = phi41 + 14;
				uint32_t anon57 = (uint32_t)((anon53 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon54 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi41 + 18), (__zext uint64_t)*(uint32_t*)anon56, (__zext uint64_t)(anon57 + 1), (__zext uint64_t)(anon54 + anon57 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi22 + (*anon51 << 1)));
				phi_in24 = anon56;
				phi_in26 = *anon4;
				dispatch58 = 1;
				if (*anon4 == 1840)
				{
					phi_in35 = anon56;
					phi_in40 = anon56;
					dispatch58 = 0;
					if ((__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi41 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi41 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi41 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi41 + 46) + 6296384) == 128)
					{
						break;
					}
				}
			}
			while (*anon4 == 1840);
		}
		if (anon36 != 128 && dispatch58 == 0 || anon36 == 128)
		{
			uint64_t phi59 = phi_in35;
			phi_in60 = phi59;
		}
	}
	if (phi23 != 1840 || phi23 == 1840 && anon36 != 128 && dispatch58 == 1)
	{
		uint64_t phi61 = phi_in24;
		uint32_t phi62 = phi_in26;
		phi_in60 = phi61;
		phi_in63 = phi22;
		phi_in64 = phi61;
		phi_in65 = phi62;
	}
	if (*anon6 == phi22 && (phi23 != 1840 || phi23 == 1840 && anon36 != 128 && dispatch58 == 0 || phi23 == 1840 && anon36 == 128 || phi23 == 1840 && anon36 != 128 && dispatch58 == 1))
	{
		uint64_t phi66 = phi_in60;
		*anon4 = 1;
		anon67 = (void(**)(uint64_t, uint64_t))0x601aa0;
		anon68 = (uint64_t*)0x601258;
		(*anon67)(*anon68, *(uint64_t*)0x6012a8);
		(*(void(**)())0x601aa8)();
		phi_in63 = 162;
		phi_in64 = phi66;
		phi_in65 = *anon4;
	}
	if (phi23 == 1840 && anon36 != 128 && dispatch58 == 0 && *anon6 == phi22 || phi23 == 1840 && anon36 == 128 && *anon6 == phi22 || phi23 == 1840 && anon36 != 128 && dispatch58 == 1 && *anon6 == phi22 || phi23 != 1840 && *anon6 == phi22 || *anon6 != phi22 && phi23 == 1840 && anon36 != 128 && dispatch58 == 1 || phi23 != 1840 && *anon6 != phi22)
	{
		uint32_t phi69 = phi_in63;
		uint64_t phi70 = phi_in64;
		uint32_t phi71 = phi_in65;
		if (phi71 == 1)
		{
			int64_t anon73 = (__sext int64_t)phi69;
			uint8_t* anon72 = (uint8_t*)(anon73 + 6296384);
			if (*anon72 == 32)
			{
				void(** anon79)(uint64_t, uint64_t, uint64_t);
				uint64_t anon80;
				uint32_t* anon74 = (uint32_t*)phi70;
				*anon74 = 1;
				*anon72 = 46;
				(*anon67)(*anon68, *(uint64_t*)0x601290);
				void(** anon75)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
				uint64_t* anon76 = (uint64_t*)0x601260;
				int64_t anon77 = anon73 / 80 + 1 & 0xffffffff;
				int64_t anon78 = anon73 % 80 + 1 & 0xffffffff;
				(*anon75)(*anon76, anon77, anon78, 46);
				if (phi69 == 1676)
				{
					anon79 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
					anon80 = (__zext uint64_t)*anon74;
					(*anon79)(*anon68, *(uint64_t*)0x601288, anon80);
					(*anon21)(*(uint64_t*)0x601278);
				}
				else 
				{
					uint64_t(** anon82)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					uint64_t anon81 = (*anon82)((__zext uint64_t)(phi69 + 1), anon80);
					if ((uint32_t)anon81 == 0)
					{
						uint64_t anon83 = (*anon82)((__zext uint64_t)(phi69 + 80), (__zext uint64_t)*anon74);
						if ((uint32_t)anon83 == 0)
						{
							uint64_t anon84 = (*anon82)((__zext uint64_t)(phi69 - 80), (__zext uint64_t)*anon74);
							if ((uint32_t)anon84 == 0)
							{
								uint64_t anon85 = (*anon82)((__zext uint64_t)(phi69 - 1), (__zext uint64_t)*anon74);
								if ((uint32_t)anon85 == 0)
								{
									*anon72 = 32;
									(*anon79)(*anon68, *(uint64_t*)0x601280, (__zext uint64_t)*anon74);
									(*anon75)(*anon76, anon77, anon78, 32);
								}
							}
						}
					}
				}
			}
			else 
			{
				(*anon21)(*anon68);
			}
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

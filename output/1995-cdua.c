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
	uint32_t phi_in7;
	uint32_t phi12;
	uint32_t phi14;
	uint32_t phi_in15;
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
		uint32_t phi4;
		srand((uint32_t)time(null));
		anon3 = (uint32_t*)0x601a94;
		*anon3 = 1000;
		anon5 = (uint32_t*)0x601300;
		phi4 = *anon5;
		phi6 = 1000;
		phi_in7 = 1000;
		if (*anon5 < 1840)
		{
			do
			{
				*(uint8_t*)((__sext int64_t)phi4 + 6296384) = 10;
				uint32_t anon9 = phi4 + ((uint32_t)((__zext uint64_t)phi4 * 1717986919 >> 37) - (phi4 >> 31)) * 4294967216;
				bool anon8 = phi4 == 79 | phi4 + 79 < 158 | anon9 == 78;
				bool anon10 = !(anon9 == 79 || anon9 == 0);
				if (!anon8 && anon10)
				{
					*(uint8_t*)((__sext int64_t)phi4 + 6296384) = 35;
				}
				bool anon11 = phi4 == 1839 | phi4 - 1760 < 79;
				if (anon9 == 0 || anon10 && anon8 || !anon8 && anon10 && anon11)
				{
					*(uint8_t*)((__sext int64_t)phi4 + 6296384) = 32;
				}
				phi4 = phi4 + 1;
			}
			while (phi4 != 1839);
			*anon5 = 1840;
			phi12 = 1000;
		}
	}
	else 
	{
		phi6 = (uint32_t)arg1;
		phi_in7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840 && *anon2 == 0)
	{
		uint32_t phi_in13 = phi6;
		phi12 = phi_in13;
		phi14 = phi_in13;
		phi_in15 = phi_in7;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in7 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in7 == 1839)
	{
		phi14 = phi12;
		*anon2 = 1840;
		anon16 = (void(**)(uint64_t))0x601aa0;
		(*anon16)(4197348);
		phi_in15 = *anon2;
	}
	while (true)
	{
		uint64_t phi17;
		uint64_t phi_in28;
		int32_t anon29;
		uint64_t phi31;
		uint64_t anon43;
		uint64_t phi46;
		uint32_t phi47;
		uint32_t phi48;
		void(** anon49)(uint64_t, uint64_t);
		uint64_t* anon50;
		uint64_t anon18 = (uint64_t)&alloca1;
		phi17 = anon18;
		uint32_t phi_in19 = phi_in15;
		if (phi_in15 == 1840)
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
			phi_in28 = anon18;
			anon29 = (__sext int32_t)*(uint8_t*)(anon26 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384);
			if (anon29 != 128)
			{
				uint64_t phi35;
				uint32_t* anon38;
				uint32_t phi39;
				uint32_t anon30 = (uint32_t)(anon27 * 1717986919 >> 37) - (phi14 >> 31);
				alloca1.field1 = anon30 + 1;
				alloca1.field2 = (__sext int64_t)phi14;
				alloca1.field0 = phi14 + anon30 * 4294967216 + 1;
				phi31 = anon18;
				do
				{
					uint64_t anon33 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon32 = (uint32_t)anon33 & 3;
					*(uint32_t*)0x601a98 = anon32;
					uint32_t phi34 = 80;
					phi35 = 80;
					uint32_t phi_in36 = anon25;
					uint2_t anon37 = (uint2_t)anon33;
					if (!(anon37 == 0 || anon37 == 1))
					{
						phi34 = anon32 == 2 ? 1 : 4294967295;
						phi35 = anon32 == 2 ? 1 : 4294967295;
						phi_in36 = anon32 == 2 ? anon21 : anon23;
					}
					if (anon37 == 1)
					{
						phi34 = 4294967216;
						phi35 = 4294967216;
						phi_in36 = phi14 - 160;
					}
					anon38 = (uint32_t*)0x601a90;
					*anon38 = phi34;
					phi39 = phi_in36;
					phi31 = phi31;
				}
				while (*(uint8_t*)((__sext int64_t)phi39 + 6296384) != 35);
				uint32_t anon40 = *anon38 + (uint32_t)(anon27 + phi35);
				*(uint8_t*)((__sext int64_t)anon40 + 6296384) = 32;
				uint32_t anon41 = phi14 + (uint32_t)phi35;
				*(uint8_t*)((__sext int64_t)anon41 + 6296384) = 32;
				*(uint8_t*)(phi31 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi31 + 8) + 6296384) = 32;
				uint32_t anon42 = (uint32_t)((__zext uint64_t)anon40 * 1717986919 >> 37) - (anon40 >> 31);
				*(uint64_t*)(phi31 - 9) = (__zext uint64_t)(anon40 + anon42 * 4294967216 + 1);
				*(uint64_t*)(phi31 - 17) = (__zext uint64_t)(anon42 + 1);
				*(uint8_t*)(phi31 - 18) = 32;
				anon43 = phi31 + 14;
				uint64_t anon45 = (__zext uint64_t)anon41;
				uint32_t anon44 = (uint32_t)(anon45 * 1717986919 >> 37) - (uint32_t)(anon45 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi31 + 18), (__zext uint64_t)*(uint32_t*)anon43, (__zext uint64_t)(anon44 + 1), (__zext uint64_t)(anon41 + anon44 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi14 + (*anon38 << 1)));
				phi17 = anon43;
				phi_in19 = *anon2;
			}
		}
		if (phi_in15 != 1840 || *anon2 != 1840 && phi_in15 == 1840 && anon29 != 128)
		{
			phi_in28 = phi17;
			phi46 = phi_in28;
			phi47 = phi14;
			phi46 = phi_in28;
			phi48 = phi_in19;
		}
		if (phi_in15 == 1840)
		{
			if (anon29 != 128)
			{
				if (*anon2 == 1840)
				{
					phi_in28 = anon43;
					phi31 = anon43;
				}
			}
			if (anon29 == 128 || anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 46) + 6296384) == 128)
			{
				phi46 = phi_in28;
				if (*anon3 != phi14)
				{
					break;
				}
			}
		}
		if (*anon3 == phi14)
		{
			if (phi_in15 != 1840 || phi_in15 == 1840 && anon29 == 128 || phi_in15 == 1840 && anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 46) + 6296384) == 128 || *anon2 != 1840 && phi_in15 == 1840 && anon29 != 128)
			{
				*anon2 = 1;
				anon49 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon50 = (uint64_t*)0x601258;
				(*anon49)(*anon50, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi47 = 162;
				phi48 = *anon2;
			}
		}
		if (phi_in15 == 1840 && anon29 == 128 && *anon3 == phi14 || phi_in15 == 1840 && anon29 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi31 + 46) + 6296384) == 128 && *anon3 == phi14 || phi_in15 != 1840 && *anon3 == phi14 || *anon2 != 1840 && phi_in15 == 1840 && anon29 != 128 && *anon3 == phi14 || phi_in15 != 1840 && *anon3 != phi14 || *anon2 != 1840 && *anon3 != phi14 && phi_in15 == 1840 && anon29 != 128)
		{
			if (phi48 == 1)
			{
				int64_t anon52 = (__sext int64_t)phi47;
				uint8_t* anon51 = (uint8_t*)(anon52 + 6296384);
				if (*anon51 == 32)
				{
					void(** anon58)(uint64_t, uint64_t, uint64_t);
					uint64_t anon59;
					uint32_t* anon53 = (uint32_t*)phi46;
					*anon53 = 1;
					*anon51 = 46;
					(*anon49)(*anon50, *(uint64_t*)0x601290);
					void(** anon54)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon55 = (uint64_t*)0x601260;
					int64_t anon56 = anon52 / 80 + 1 & 0xffffffff;
					int64_t anon57 = anon52 % 80 + 1 & 0xffffffff;
					(*anon54)(*anon55, anon56, anon57, 46);
					if (phi47 == 1676)
					{
						anon58 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon59 = (__zext uint64_t)*anon53;
						(*anon58)(*anon50, *(uint64_t*)0x601288, anon59);
						(*anon16)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon60)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon60)((__zext uint64_t)(phi47 + 1), anon59) == 0)
					{
						if ((uint32_t)(*anon60)((__zext uint64_t)(phi47 + 80), (__zext uint64_t)*anon53) == 0)
						{
							if ((uint32_t)(*anon60)((__zext uint64_t)(phi47 - 80), (__zext uint64_t)*anon53) == 0)
							{
								if ((uint32_t)(*anon60)((__zext uint64_t)(phi47 - 1), (__zext uint64_t)*anon53) == 0)
								{
									*anon51 = 32;
									(*anon58)(*anon50, *(uint64_t*)0x601280, (__zext uint64_t)*anon53);
									(*anon54)(*anon55, anon56, anon57, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon16)(*anon50);
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

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
	uint32_t phi_in15;
	uint32_t phi_in16;
	void(** anon17)(uint64_t);
	uint32_t phi18;
	uint32_t phi19;
	int32_t anon32;
	uint64_t phi37;
	uint32_t phi52;
	uint64_t phi54;
	void(** anon55)(uint64_t, uint64_t);
	uint64_t* anon56;
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
		phi14 = phi2;
		phi_in15 = phi3;
		phi_in16 = phi14;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in15 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in15 == 1839)
	{
		phi_in16 = phi14;
		*anon4 = 1840;
		anon17 = (void(**)(uint64_t))0x601aa0;
		(*anon17)(4197348);
		phi_in15 = *anon4;
	}
	do
	{
		uint64_t phi20;
		uint64_t phi31;
		uint64_t phi_in36;
		uint64_t anon49;
		uint64_t phi_in51;
		uint64_t phi53;
		phi18 = phi_in16;
		phi19 = phi_in15;
		uint64_t anon21 = (uint64_t)&alloca1;
		phi20 = anon21;
		uint32_t phi22 = phi19;
		if (phi19 == 1840)
		{
			uint32_t anon24 = phi18 + 2;
			int64_t anon23 = (__sext int64_t)anon24;
			alloca1.field6 = anon23;
			uint32_t anon26 = phi18 - 2;
			int64_t anon25 = (__sext int64_t)anon26;
			alloca1.field3 = anon25;
			uint32_t anon28 = phi18 + 160;
			int64_t anon27 = (__sext int64_t)anon28;
			alloca1.field5 = anon27;
			uint32_t anon30 = phi18 - 160;
			int64_t anon29 = (__sext int64_t)anon30;
			alloca1.field4 = anon29;
			phi31 = anon21;
			anon32 = (__sext int32_t)*(uint8_t*)(anon29 + 6296384) + (__sext int32_t)*(uint8_t*)(anon23 + 6296384) + (__sext int32_t)*(uint8_t*)(anon25 + 6296384) + (__sext int32_t)*(uint8_t*)(anon27 + 6296384);
			if (anon32 != 128)
			{
				uint32_t* anon40;
				uint64_t phi41;
				uint32_t phi44;
				uint64_t anon34 = (__zext uint64_t)phi18;
				int64_t anon35 = (__sext int64_t)phi18;
				uint32_t anon33 = (uint32_t)(anon34 * 1717986919 >> 37) - (uint32_t)(anon35 >> 31);
				alloca1.field1 = anon33 + 1;
				alloca1.field2 = anon35;
				alloca1.field0 = phi18 + anon33 * 4294967216 + 1;
				phi_in36 = anon21;
				do
				{
					phi37 = phi_in36;
					uint64_t anon38 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon39 = (uint32_t)anon38 & 3;
					*(uint32_t*)0x601a98 = anon39;
					anon40 = (uint32_t*)0x601a90;
					*anon40 = 80;
					phi41 = 80;
					uint32_t phi_in42 = anon28;
					uint2_t anon43 = (uint2_t)anon38;
					if (anon43 == 1)
					{
						*anon40 = 4294967216;
						phi41 = 4294967216;
						phi_in42 = anon30;
					}
					if (!(anon43 == 0 || anon43 == 1))
					{
						*anon40 = anon39 == 2 ? 1 : 4294967295;
						phi41 = anon39 == 2 ? 1 : 4294967295;
						phi_in42 = anon39 == 2 ? anon24 : anon26;
					}
					phi44 = phi_in42;
					phi_in36 = phi37;
				}
				while (*(uint8_t*)((__sext int64_t)phi44 + 6296384) != 35);
				uint64_t anon46 = anon34 + phi41;
				uint32_t anon45 = *anon40 + (uint32_t)anon46;
				*(uint8_t*)((__sext int64_t)anon45 + 6296384) = 32;
				uint32_t anon47 = phi18 + (uint32_t)phi41;
				*(uint8_t*)((__sext int64_t)anon47 + 6296384) = 32;
				*(uint8_t*)(phi37 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi37 + 8) + 6296384) = 32;
				uint32_t anon48 = (uint32_t)((__zext uint64_t)anon45 * 1717986919 >> 37) - (anon45 >> 31);
				*(uint64_t*)(phi37 - 9) = (__zext uint64_t)(anon45 + anon48 * 4294967216 + 1);
				*(uint64_t*)(phi37 - 17) = (__zext uint64_t)(anon48 + 1);
				*(uint8_t*)(phi37 - 18) = 32;
				anon49 = phi37 + 14;
				uint32_t anon50 = (uint32_t)((anon46 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon47 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi37 + 18), (__zext uint64_t)*(uint32_t*)anon49, (__zext uint64_t)(anon50 + 1), (__zext uint64_t)(anon47 + anon50 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi18 + (*anon40 << 1)));
				phi20 = anon49;
				phi22 = *anon4;
			}
		}
		if (phi19 != 1840 || *anon4 != 1840 && phi19 == 1840 && anon32 != 128)
		{
			phi_in51 = phi20;
			phi52 = phi22;
			phi53 = phi_in51;
			phi54 = phi_in51;
		}
		if (phi19 == 1840)
		{
			if (anon32 != 128 && *anon4 == 1840)
			{
				phi31 = anon49;
				phi_in36 = anon49;
			}
			if (anon32 == 128 || anon32 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 46) + 6296384) == 128)
			{
				phi53 = phi31;
				if (*anon6 != phi18)
				{
					break;
				}
			}
		}
		if (*anon6 == phi18 && (phi19 != 1840 || phi19 == 1840 && anon32 == 128 || phi19 == 1840 && anon32 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 46) + 6296384) == 128 || *anon4 != 1840 && phi19 == 1840 && anon32 != 128))
		{
			phi_in51 = phi53;
			*anon4 = 1;
			anon55 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon56 = (uint64_t*)0x601258;
			(*anon55)(*anon56, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi18 = 162;
			phi54 = phi_in51;
			phi52 = *anon4;
		}
	}
	while (!(phi19 == 1840 && anon32 == 128 && *anon6 == phi18 || anon32 != 128 && phi19 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi37 + 46) + 6296384) == 128 && *anon6 == phi18 || anon32 != 128 && *anon4 != 1840 && phi19 == 1840 && *anon6 == phi18 || phi19 != 1840 && *anon6 == phi18 || anon32 != 128 && *anon4 != 1840 && *anon6 != phi18 && phi19 == 1840 || phi19 != 1840 && *anon6 != phi18));
	if (phi52 == 1)
	{
		int64_t anon58 = (__sext int64_t)phi18;
		uint8_t* anon57 = (uint8_t*)(anon58 + 6296384);
		if (*anon57 == 32)
		{
			void(** anon64)(uint64_t, uint64_t, uint64_t);
			uint64_t anon65;
			uint32_t* anon59 = (uint32_t*)phi54;
			*anon59 = 1;
			*anon57 = 46;
			(*anon55)(*anon56, *(uint64_t*)0x601290);
			void(** anon60)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon61 = (uint64_t*)0x601260;
			int64_t anon62 = anon58 / 80 + 1 & 0xffffffff;
			int64_t anon63 = anon58 % 80 + 1 & 0xffffffff;
			(*anon60)(*anon61, anon62, anon63, 46);
			if (phi18 == 1676)
			{
				anon64 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon65 = (__zext uint64_t)*anon59;
				(*anon64)(*anon56, *(uint64_t*)0x601288, anon65);
				(*anon17)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon67)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon66 = (*anon67)((__zext uint64_t)(phi18 + 1), anon65);
				if ((uint32_t)anon66 == 0)
				{
					uint64_t anon68 = (*anon67)((__zext uint64_t)(phi18 + 80), (__zext uint64_t)*anon59);
					if ((uint32_t)anon68 == 0)
					{
						uint64_t anon69 = (*anon67)((__zext uint64_t)(phi18 - 80), (__zext uint64_t)*anon59);
						if ((uint32_t)anon69 == 0)
						{
							uint64_t anon70 = (*anon67)((__zext uint64_t)(phi18 - 1), (__zext uint64_t)*anon59);
							if ((uint32_t)anon70 == 0)
							{
								*anon57 = 32;
								(*anon64)(*anon56, *(uint64_t*)0x601280, (__zext uint64_t)*anon59);
								(*anon60)(*anon61, anon62, anon63, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon17)(*anon56);
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

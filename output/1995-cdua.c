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
	uint64_t phi36;
	uint32_t phi52;
	uint64_t phi53;
	uint32_t phi54;
	void(** anon56)(uint64_t, uint64_t);
	uint64_t* anon57;
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
		phi_in15 = phi2;
		phi_in16 = phi3;
		phi14 = phi_in15;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in16 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in16 == 1839)
	{
		phi_in15 = phi14;
		*anon4 = 1840;
		anon17 = (void(**)(uint64_t))0x601aa0;
		(*anon17)(4197348);
		phi_in16 = *anon4;
	}
	do
	{
		uint64_t phi_in20;
		uint64_t phi31;
		uint64_t phi_in35;
		uint64_t anon48;
		phi18 = phi_in15;
		phi19 = phi_in16;
		uint64_t anon21 = (uint64_t)&alloca1;
		phi_in20 = anon21;
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
				uint32_t* anon39;
				uint64_t phi40;
				uint32_t phi43;
				uint64_t anon34 = (__zext uint64_t)phi18;
				uint32_t anon33 = (uint32_t)(anon34 * 1717986919 >> 37) - (phi18 >> 31);
				alloca1.field1 = anon33 + 1;
				alloca1.field2 = (__sext int64_t)phi18;
				alloca1.field0 = phi18 + anon33 * 4294967216 + 1;
				phi_in35 = anon21;
				do
				{
					phi36 = phi_in35;
					uint64_t anon37 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon38 = (uint32_t)anon37 & 3;
					*(uint32_t*)0x601a98 = anon38;
					anon39 = (uint32_t*)0x601a90;
					*anon39 = 80;
					phi40 = 80;
					uint32_t phi_in41 = anon28;
					uint2_t anon42 = (uint2_t)anon37;
					if (anon42 == 1)
					{
						*anon39 = 4294967216;
						phi40 = 4294967216;
						phi_in41 = anon30;
					}
					if (!(anon42 == 0 || anon42 == 1))
					{
						*anon39 = anon38 == 2 ? 1 : 4294967295;
						phi40 = anon38 == 2 ? 1 : 4294967295;
						phi_in41 = anon38 == 2 ? anon24 : anon26;
					}
					phi43 = phi_in41;
					phi_in35 = phi36;
				}
				while (*(uint8_t*)((__sext int64_t)phi43 + 6296384) != 35);
				uint32_t anon45 = *anon39 + (uint32_t)(anon34 + phi40);
				int64_t anon44 = (__sext int64_t)anon45;
				*(uint8_t*)(anon44 + 6296384) = 32;
				uint32_t anon46 = phi18 + (uint32_t)phi40;
				*(uint8_t*)((__sext int64_t)anon46 + 6296384) = 32;
				*(uint8_t*)(phi36 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi36 + 8) + 6296384) = 32;
				uint32_t anon47 = (uint32_t)((__zext uint64_t)anon45 * 1717986919 >> 37) - (uint32_t)(anon44 >> 31);
				*(uint64_t*)(phi36 - 9) = (__zext uint64_t)(anon45 + anon47 * 4294967216 + 1);
				*(uint64_t*)(phi36 - 17) = (__zext uint64_t)(anon47 + 1);
				*(uint8_t*)(phi36 - 18) = 32;
				anon48 = phi36 + 14;
				uint64_t anon50 = (__zext uint64_t)anon46;
				uint32_t anon49 = (uint32_t)(anon50 * 1717986919 >> 37) - (uint32_t)(anon50 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi36 + 18), (__zext uint64_t)*(uint32_t*)anon48, (__zext uint64_t)(anon49 + 1), (__zext uint64_t)(anon46 + anon49 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi18 + (*anon39 << 1)));
				phi_in20 = anon48;
				phi22 = *anon4;
			}
		}
		if (phi19 != 1840 || *anon4 != 1840 && phi19 == 1840 && anon32 != 128)
		{
			uint32_t phi_in51 = phi22;
			phi52 = phi18;
			phi53 = phi_in20;
			phi54 = phi_in51;
		}
		if (phi19 == 1840)
		{
			if (anon32 != 128 && *anon4 == 1840)
			{
				phi31 = anon48;
				phi_in35 = anon48;
			}
			if (anon32 == 128 || anon32 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 46) + 6296384) == 128)
			{
				uint64_t phi_in55 = phi31;
				phi_in20 = phi_in55;
				if (*anon6 != phi18)
				{
					break;
				}
			}
		}
		if (*anon6 == phi18 && (phi19 != 1840 || phi19 == 1840 && anon32 == 128 || phi19 == 1840 && anon32 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 46) + 6296384) == 128 || *anon4 != 1840 && phi19 == 1840 && anon32 != 128))
		{
			*anon4 = 1;
			anon56 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon57 = (uint64_t*)0x601258;
			(*anon56)(*anon57, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi52 = 162;
			phi53 = phi_in20;
			phi54 = *anon4;
		}
	}
	while (!(phi19 == 1840 && anon32 == 128 && *anon6 == phi18 || anon32 != 128 && phi19 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi36 + 46) + 6296384) == 128 && *anon6 == phi18 || anon32 != 128 && *anon4 != 1840 && phi19 == 1840 && *anon6 == phi18 || phi19 != 1840 && *anon6 == phi18 || anon32 != 128 && *anon4 != 1840 && *anon6 != phi18 && phi19 == 1840 || phi19 != 1840 && *anon6 != phi18));
	if (phi54 == 1)
	{
		int64_t anon59 = (__sext int64_t)phi52;
		uint8_t* anon58 = (uint8_t*)(anon59 + 6296384);
		if (*anon58 == 32)
		{
			void(** anon65)(uint64_t, uint64_t, uint64_t);
			uint64_t anon66;
			uint32_t* anon60 = (uint32_t*)phi53;
			*anon60 = 1;
			*anon58 = 46;
			(*anon56)(*anon57, *(uint64_t*)0x601290);
			void(** anon61)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon62 = (uint64_t*)0x601260;
			int64_t anon63 = anon59 / 80 + 1 & 0xffffffff;
			int64_t anon64 = anon59 % 80 + 1 & 0xffffffff;
			(*anon61)(*anon62, anon63, anon64, 46);
			if (phi52 == 1676)
			{
				anon65 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon66 = (__zext uint64_t)*anon60;
				(*anon65)(*anon57, *(uint64_t*)0x601288, anon66);
				(*anon17)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon68)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon67 = (*anon68)((__zext uint64_t)(phi52 + 1), anon66);
				if ((uint32_t)anon67 == 0)
				{
					uint64_t anon69 = (*anon68)((__zext uint64_t)(phi52 + 80), (__zext uint64_t)*anon60);
					if ((uint32_t)anon69 == 0)
					{
						uint64_t anon70 = (*anon68)((__zext uint64_t)(phi52 - 80), (__zext uint64_t)*anon60);
						if ((uint32_t)anon70 == 0)
						{
							uint64_t anon71 = (*anon68)((__zext uint64_t)(phi52 - 1), (__zext uint64_t)*anon60);
							if ((uint32_t)anon71 == 0)
							{
								*anon58 = 32;
								(*anon65)(*anon57, *(uint64_t*)0x601280, (__zext uint64_t)*anon60);
								(*anon61)(*anon62, anon63, anon64, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon17)(*anon57);
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

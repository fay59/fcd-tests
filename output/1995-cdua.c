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
	uint32_t* anon4;
	uint32_t* anon6;
	uint32_t phi7;
	uint32_t phi8;
	uint32_t phi_in14;
	uint32_t phi_in15;
	void(** anon16)(uint64_t);
	uint32_t phi17;
	uint32_t phi18;
	int32_t anon31;
	uint64_t phi34;
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
	uint32_t* anon2 = (uint32_t*)0x601a9c;
	if (*anon2 == 0)
	{
		uint32_t phi_in5;
		uint64_t anon3 = time(null);
		srand((uint32_t)anon3);
		anon4 = (uint32_t*)0x601a94;
		*anon4 = 1000;
		anon6 = (uint32_t*)0x601300;
		phi_in5 = *anon6;
		phi7 = 1000;
		phi8 = 1000;
		if (*anon6 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in5;
				uint8_t phi10 = 10;
				uint32_t anon12 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon11 = phi9 == 79 | phi9 + 79 < 158 | anon12 == 78;
				bool anon13 = !(anon12 == 79 || anon12 == 0);
				if (!anon11 && anon13)
				{
					phi10 = 35;
				}
				if (anon12 == 0 || anon13 && anon11 || !anon11 && anon13 && phi9 == 1839 | phi9 - 1760 < 79)
				{
					phi10 = 32;
				}
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = phi10;
				phi_in5 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon6 = 1840;
			phi_in14 = 1000;
		}
	}
	else 
	{
		phi7 = (uint32_t)arg1;
		phi8 = *anon2;
	}
	if (*anon2 != 0 || *anon6 >= 1840 && *anon2 == 0)
	{
		phi_in14 = phi7;
		phi_in15 = phi8;
	}
	if (*anon2 == 0 && *anon6 < 1840 || *anon2 != 0 && phi_in15 == 1839 || *anon6 >= 1840 && *anon2 == 0 && phi_in15 == 1839)
	{
		*anon2 = 1840;
		anon16 = (void(**)(uint64_t))0x601aa0;
		(*anon16)(4197348);
		phi_in15 = *anon2;
	}
	do
	{
		uint64_t phi_in19;
		uint64_t phi_in30;
		uint64_t phi_in33;
		uint64_t anon46;
		uint64_t phi50;
		phi17 = phi_in14;
		phi18 = phi_in15;
		uint64_t anon20 = (uint64_t)&alloca1;
		phi_in19 = anon20;
		uint32_t phi21 = phi18;
		if (phi18 == 1840)
		{
			uint32_t anon23 = phi17 + 2;
			int64_t anon22 = (__sext int64_t)anon23;
			alloca1.field6 = anon22;
			uint32_t anon25 = phi17 - 2;
			int64_t anon24 = (__sext int64_t)anon25;
			alloca1.field3 = anon24;
			uint32_t anon27 = phi17 + 160;
			int64_t anon26 = (__sext int64_t)anon27;
			alloca1.field5 = anon26;
			uint64_t anon29 = (__zext uint64_t)phi17;
			uint64_t anon28 = (anon29 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon28;
			phi_in30 = anon20;
			anon31 = (__sext int32_t)*(uint8_t*)(anon28 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384) + (__sext int32_t)*(uint8_t*)(anon26 + 6296384);
			if (anon31 != 128)
			{
				uint64_t phi38;
				uint32_t* anon41;
				uint32_t phi42;
				uint32_t anon32 = (uint32_t)(anon29 * 1717986919 >> 37) - (phi17 >> 31);
				alloca1.field1 = anon32 + 1;
				alloca1.field2 = (__sext int64_t)phi17;
				alloca1.field0 = phi17 + anon32 * 4294967216 + 1;
				phi_in33 = anon20;
				do
				{
					phi34 = phi_in33;
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon36 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon36;
					uint32_t phi37 = 80;
					phi38 = 80;
					uint32_t phi_in39 = anon27;
					uint2_t anon40 = (uint2_t)anon35;
					if (!(anon40 == 0 || anon40 == 1))
					{
						phi37 = anon36 == 2 ? 1 : 4294967295;
						phi38 = anon36 == 2 ? 1 : 4294967295;
						phi_in39 = anon36 == 2 ? anon23 : anon25;
					}
					if (anon40 == 1)
					{
						phi37 = 4294967216;
						phi38 = 4294967216;
						phi_in39 = phi17 - 160;
					}
					anon41 = (uint32_t*)0x601a90;
					*anon41 = phi37;
					phi42 = phi_in39;
					phi_in33 = phi34;
				}
				while (*(uint8_t*)((__sext int64_t)phi42 + 6296384) != 35);
				uint32_t anon43 = *anon41 + (uint32_t)(anon29 + phi38);
				*(uint8_t*)((__sext int64_t)anon43 + 6296384) = 32;
				uint32_t anon44 = phi17 + (uint32_t)phi38;
				*(uint8_t*)((__sext int64_t)anon44 + 6296384) = 32;
				*(uint8_t*)(phi34 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi34 + 8) + 6296384) = 32;
				uint32_t anon45 = (uint32_t)((__zext uint64_t)anon43 * 1717986919 >> 37) - (anon43 >> 31);
				*(uint64_t*)(phi34 - 9) = (__zext uint64_t)(anon43 + anon45 * 4294967216 + 1);
				*(uint64_t*)(phi34 - 17) = (__zext uint64_t)(anon45 + 1);
				*(uint8_t*)(phi34 - 18) = 32;
				anon46 = phi34 + 14;
				uint64_t anon48 = (__zext uint64_t)anon44;
				uint32_t anon47 = (uint32_t)(anon48 * 1717986919 >> 37) - (uint32_t)(anon48 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi34 + 18), (__zext uint64_t)*(uint32_t*)anon46, (__zext uint64_t)(anon47 + 1), (__zext uint64_t)(anon44 + anon47 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi17 + (*anon41 << 1)));
				phi_in19 = anon46;
				phi21 = *anon2;
			}
		}
		if (phi18 != 1840 || *anon2 != 1840 && phi18 == 1840 && anon31 != 128)
		{
			uint32_t phi_in49 = phi21;
			phi50 = phi_in19;
			phi51 = phi_in19;
			phi52 = phi_in49;
		}
		if (phi18 == 1840)
		{
			if (anon31 != 128 && *anon2 == 1840)
			{
				phi_in30 = anon46;
				phi_in33 = anon46;
			}
			if (anon31 == 128 || anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128)
			{
				phi50 = phi_in30;
				if (*anon4 != phi17)
				{
					break;
				}
			}
		}
		if (*anon4 == phi17 && (phi18 != 1840 || phi18 == 1840 && anon31 == 128 || phi18 == 1840 && anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 || *anon2 != 1840 && phi18 == 1840 && anon31 != 128))
		{
			phi_in19 = phi50;
			*anon2 = 1;
			anon53 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon54 = (uint64_t*)0x601258;
			(*anon53)(*anon54, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi17 = 162;
			phi51 = phi_in19;
			phi52 = *anon2;
		}
	}
	while (!(phi18 == 1840 && anon31 == 128 && *anon4 == phi17 || anon31 != 128 && phi18 == 1840 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 && *anon4 == phi17 || phi18 != 1840 && *anon4 == phi17 || anon31 != 128 && *anon2 != 1840 && phi18 == 1840 && *anon4 == phi17 || phi18 != 1840 && *anon4 != phi17 || anon31 != 128 && *anon2 != 1840 && *anon4 != phi17 && phi18 == 1840));
	if (phi52 == 1)
	{
		int64_t anon56 = (__sext int64_t)phi17;
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
			if (phi17 == 1676)
			{
				anon62 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon63 = (__zext uint64_t)*anon57;
				(*anon62)(*anon54, *(uint64_t*)0x601288, anon63);
				(*anon16)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon65)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon64 = (*anon65)((__zext uint64_t)(phi17 + 1), anon63);
				if ((uint32_t)anon64 == 0)
				{
					uint64_t anon66 = (*anon65)((__zext uint64_t)(phi17 + 80), (__zext uint64_t)*anon57);
					if ((uint32_t)anon66 == 0)
					{
						uint64_t anon67 = (*anon65)((__zext uint64_t)(phi17 - 80), (__zext uint64_t)*anon57);
						if ((uint32_t)anon67 == 0)
						{
							uint64_t anon68 = (*anon65)((__zext uint64_t)(phi17 - 1), (__zext uint64_t)*anon57);
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
			(*anon16)(*anon54);
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

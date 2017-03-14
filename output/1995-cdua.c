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
	uint32_t phi_in14;
	void(** anon15)(uint64_t);
	uint32_t phi16;
	uint32_t phi17;
	int32_t anon30;
	uint64_t phi34;
	uint32_t phi51;
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
			phi_in14 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi_in14 = phi2;
		phi_in14 = phi_in14;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in3 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in3 == 1839)
	{
		*anon4 = 1840;
		anon15 = (void(**)(uint64_t))0x601aa0;
		(*anon15)(4197348);
		phi_in3 = *anon4;
	}
	do
	{
		uint64_t phi18;
		uint64_t phi29;
		uint64_t phi_in33;
		uint64_t anon47;
		uint64_t phi52;
		phi16 = phi_in14;
		phi17 = phi_in3;
		uint64_t anon19 = (uint64_t)&alloca1;
		phi18 = anon19;
		uint32_t phi20 = phi17;
		if (phi17 == 1840)
		{
			uint32_t anon22 = phi16 + 2;
			int64_t anon21 = (__sext int64_t)anon22;
			alloca1.field6 = anon21;
			uint32_t anon24 = phi16 - 2;
			int64_t anon23 = (__sext int64_t)anon24;
			alloca1.field3 = anon23;
			uint32_t anon26 = phi16 + 160;
			int64_t anon25 = (__sext int64_t)anon26;
			alloca1.field5 = anon25;
			uint32_t anon28 = phi16 - 160;
			int64_t anon27 = (__sext int64_t)anon28;
			alloca1.field4 = anon27;
			phi29 = anon19;
			anon30 = (__sext int32_t)*(uint8_t*)(anon27 + 6296384) + (__sext int32_t)*(uint8_t*)(anon21 + 6296384) + (__sext int32_t)*(uint8_t*)(anon23 + 6296384) + (__sext int32_t)*(uint8_t*)(anon25 + 6296384);
			if (anon30 != 128)
			{
				uint64_t phi38;
				uint32_t* anon41;
				uint32_t phi42;
				uint64_t anon32 = (__zext uint64_t)phi16;
				uint32_t anon31 = (uint32_t)(anon32 * 1717986919 >> 37) - (phi16 >> 31);
				alloca1.field1 = anon31 + 1;
				alloca1.field2 = (__sext int64_t)phi16;
				alloca1.field0 = phi16 + anon31 * 4294967216 + 1;
				phi_in33 = anon19;
				do
				{
					phi34 = phi_in33;
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon36 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon36;
					uint32_t phi37 = 80;
					phi38 = 80;
					uint32_t phi_in39 = anon26;
					uint2_t anon40 = (uint2_t)anon35;
					if (anon40 == 1)
					{
						phi37 = 4294967216;
						phi38 = 4294967216;
						phi_in39 = anon28;
					}
					if (!(anon40 == 0 || anon40 == 1))
					{
						phi37 = anon36 == 2 ? 1 : 4294967295;
						phi38 = anon36 == 2 ? 1 : 4294967295;
						phi_in39 = anon36 == 2 ? anon22 : anon24;
					}
					anon41 = (uint32_t*)0x601a90;
					*anon41 = phi37;
					phi42 = phi_in39;
					phi_in33 = phi34;
				}
				while (*(uint8_t*)((__sext int64_t)phi42 + 6296384) != 35);
				uint32_t anon44 = *anon41 + (uint32_t)(anon32 + phi38);
				int64_t anon43 = (__sext int64_t)anon44;
				*(uint8_t*)(anon43 + 6296384) = 32;
				uint32_t anon45 = phi16 + (uint32_t)phi38;
				*(uint8_t*)((__sext int64_t)anon45 + 6296384) = 32;
				*(uint8_t*)(phi34 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi34 + 8) + 6296384) = 32;
				uint32_t anon46 = (uint32_t)((__zext uint64_t)anon44 * 1717986919 >> 37) - (uint32_t)(anon43 >> 31);
				*(uint64_t*)(phi34 - 9) = (__zext uint64_t)(anon44 + anon46 * 4294967216 + 1);
				*(uint64_t*)(phi34 - 17) = (__zext uint64_t)(anon46 + 1);
				*(uint8_t*)(phi34 - 18) = 32;
				anon47 = phi34 + 14;
				uint64_t anon49 = (__zext uint64_t)anon45;
				uint32_t anon48 = (uint32_t)(anon49 * 1717986919 >> 37) - (uint32_t)(anon49 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi34 + 18), (__zext uint64_t)*(uint32_t*)anon47, (__zext uint64_t)(anon48 + 1), (__zext uint64_t)(anon45 + anon48 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi16 + (*anon41 << 1)));
				phi18 = anon47;
				phi20 = *anon4;
			}
		}
		if (phi17 != 1840 || *anon4 != 1840 && phi17 == 1840 && anon30 != 128)
		{
			uint64_t phi_in50 = phi18;
			phi51 = phi20;
			phi52 = phi_in50;
			phi53 = phi_in50;
		}
		if (phi17 == 1840)
		{
			if (anon30 != 128 && *anon4 == 1840)
			{
				phi29 = anon47;
				phi_in33 = anon47;
			}
			if (anon30 == 128 || anon30 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128)
			{
				phi52 = phi29;
				if (*anon6 != phi16)
				{
					break;
				}
			}
		}
		if (*anon6 == phi16 && (phi17 != 1840 || phi17 == 1840 && anon30 == 128 || phi17 == 1840 && anon30 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 || *anon4 != 1840 && phi17 == 1840 && anon30 != 128))
		{
			phi53 = phi52;
			*anon4 = 1;
			anon54 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon55 = (uint64_t*)0x601258;
			(*anon54)(*anon55, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi16 = 162;
			phi51 = *anon4;
		}
	}
	while (!(phi17 == 1840 && anon30 == 128 && *anon6 == phi16 || anon30 != 128 && phi17 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 && *anon6 == phi16 || anon30 != 128 && *anon4 != 1840 && phi17 == 1840 && *anon6 == phi16 || phi17 != 1840 && *anon6 == phi16 || anon30 != 128 && *anon4 != 1840 && *anon6 != phi16 && phi17 == 1840 || phi17 != 1840 && *anon6 != phi16));
	if (phi51 == 1)
	{
		int64_t anon57 = (__sext int64_t)phi16;
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
			if (phi16 == 1676)
			{
				anon63 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon64 = (__zext uint64_t)*anon58;
				(*anon63)(*anon55, *(uint64_t*)0x601288, anon64);
				(*anon15)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon66)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon65 = (*anon66)((__zext uint64_t)(phi16 + 1), anon64);
				if ((uint32_t)anon65 == 0)
				{
					uint64_t anon67 = (*anon66)((__zext uint64_t)(phi16 + 80), (__zext uint64_t)*anon58);
					if ((uint32_t)anon67 == 0)
					{
						uint64_t anon68 = (*anon66)((__zext uint64_t)(phi16 - 80), (__zext uint64_t)*anon58);
						if ((uint32_t)anon68 == 0)
						{
							uint64_t anon69 = (*anon66)((__zext uint64_t)(phi16 - 1), (__zext uint64_t)*anon58);
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
			(*anon15)(*anon55);
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

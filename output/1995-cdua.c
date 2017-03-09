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
	uint32_t phi_in14;
	void(** anon15)(uint64_t);
	uint32_t phi16;
	uint32_t phi17;
	int32_t anon30;
	uint64_t phi35;
	uint32_t phi53;
	uint64_t phi54;
	uint32_t phi55;
	void(** anon56)(uint64_t, uint64_t);
	uint64_t* anon57;
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
			phi_in2 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi_in14 = phi3;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in14 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in14 == 1839)
	{
		*anon4 = 1840;
		anon15 = (void(**)(uint64_t))0x601aa0;
		(*anon15)(4197348);
		phi_in14 = *anon4;
	}
	do
	{
		uint64_t phi18;
		uint64_t phi29;
		uint64_t phi_in34;
		uint64_t anon48;
		uint64_t phi_in50;
		uint64_t phi52;
		phi16 = phi_in2;
		phi17 = phi_in14;
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
				uint64_t phi39;
				uint32_t* anon42;
				uint32_t phi43;
				uint64_t anon32 = (__zext uint64_t)phi16;
				int64_t anon33 = (__sext int64_t)phi16;
				uint32_t anon31 = (uint32_t)(anon32 * 1717986919 >> 37) - (uint32_t)(anon33 >> 31);
				alloca1.field1 = anon31 + 1;
				alloca1.field2 = anon33;
				alloca1.field0 = phi16 + anon31 * 4294967216 + 1;
				phi_in34 = anon19;
				do
				{
					phi35 = phi_in34;
					uint64_t anon36 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon37 = (uint32_t)anon36 & 3;
					*(uint32_t*)0x601a98 = anon37;
					uint32_t phi38 = 80;
					phi39 = 80;
					uint32_t phi_in40 = anon26;
					uint2_t anon41 = (uint2_t)anon36;
					if (anon41 == 1)
					{
						phi38 = 4294967216;
						phi39 = 4294967216;
						phi_in40 = anon28;
					}
					if (!(anon41 == 0 || anon41 == 1))
					{
						phi38 = anon37 == 2 ? 1 : 4294967295;
						phi39 = anon37 == 2 ? 1 : 4294967295;
						phi_in40 = anon37 == 2 ? anon22 : anon24;
					}
					anon42 = (uint32_t*)0x601a90;
					*anon42 = phi38;
					phi43 = phi_in40;
					phi_in34 = phi35;
				}
				while (*(uint8_t*)((__sext int64_t)phi43 + 6296384) != 35);
				uint64_t anon45 = anon32 + phi39;
				uint32_t anon44 = *anon42 + (uint32_t)anon45;
				*(uint8_t*)((__sext int64_t)anon44 + 6296384) = 32;
				uint32_t anon46 = phi16 + (uint32_t)phi39;
				*(uint8_t*)((__sext int64_t)anon46 + 6296384) = 32;
				*(uint8_t*)(phi35 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi35 + 8) + 6296384) = 32;
				uint32_t anon47 = (uint32_t)((__zext uint64_t)anon44 * 1717986919 >> 37) - (anon44 >> 31);
				*(uint64_t*)(phi35 - 9) = (__zext uint64_t)(anon44 + anon47 * 4294967216 + 1);
				*(uint64_t*)(phi35 - 17) = (__zext uint64_t)(anon47 + 1);
				*(uint8_t*)(phi35 - 18) = 32;
				anon48 = phi35 + 14;
				uint32_t anon49 = (uint32_t)((anon45 & 0xffffffff) / 80) - (uint32_t)((__zext uint64_t)anon46 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi35 + 18), (__zext uint64_t)*(uint32_t*)anon48, (__zext uint64_t)(anon49 + 1), (__zext uint64_t)(anon46 + anon49 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi16 + (*anon42 << 1)));
				phi18 = anon48;
				phi20 = *anon4;
			}
		}
		if (phi17 != 1840 || *anon4 != 1840 && phi17 == 1840 && anon30 != 128)
		{
			phi_in50 = phi18;
			uint32_t phi_in51 = phi20;
			phi52 = phi_in50;
			phi53 = phi16;
			phi54 = phi_in50;
			phi55 = phi_in51;
		}
		if (phi17 == 1840)
		{
			if (anon30 != 128 && *anon4 == 1840)
			{
				phi29 = anon48;
				phi_in34 = anon48;
			}
			if (anon30 == 128 || anon30 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 46) + 6296384) == 128)
			{
				phi52 = phi29;
				if (*anon6 != phi16)
				{
					break;
				}
			}
		}
		if (*anon6 == phi16 && (phi17 != 1840 || phi17 == 1840 && anon30 == 128 || phi17 == 1840 && anon30 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 46) + 6296384) == 128 || *anon4 != 1840 && phi17 == 1840 && anon30 != 128))
		{
			phi_in50 = phi52;
			*anon4 = 1;
			anon56 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon57 = (uint64_t*)0x601258;
			(*anon56)(*anon57, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi53 = 162;
			phi54 = phi_in50;
			phi55 = *anon4;
		}
	}
	while (!(phi17 == 1840 && anon30 == 128 && *anon6 == phi16 || anon30 != 128 && phi17 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi35 + 46) + 6296384) == 128 && *anon6 == phi16 || anon30 != 128 && *anon4 != 1840 && phi17 == 1840 && *anon6 == phi16 || phi17 != 1840 && *anon6 == phi16 || anon30 != 128 && *anon4 != 1840 && *anon6 != phi16 && phi17 == 1840 || phi17 != 1840 && *anon6 != phi16));
	if (phi55 == 1)
	{
		int64_t anon59 = (__sext int64_t)phi53;
		uint8_t* anon58 = (uint8_t*)(anon59 + 6296384);
		if (*anon58 == 32)
		{
			void(** anon65)(uint64_t, uint64_t, uint64_t);
			uint64_t anon66;
			uint32_t* anon60 = (uint32_t*)phi54;
			*anon60 = 1;
			*anon58 = 46;
			(*anon56)(*anon57, *(uint64_t*)0x601290);
			void(** anon61)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon62 = (uint64_t*)0x601260;
			int64_t anon63 = anon59 / 80 + 1 & 0xffffffff;
			int64_t anon64 = anon59 % 80 + 1 & 0xffffffff;
			(*anon61)(*anon62, anon63, anon64, 46);
			if (phi53 == 1676)
			{
				anon65 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon66 = (__zext uint64_t)*anon60;
				(*anon65)(*anon57, *(uint64_t*)0x601288, anon66);
				(*anon15)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon68)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon67 = (*anon68)((__zext uint64_t)(phi53 + 1), anon66);
				if ((uint32_t)anon67 == 0)
				{
					uint64_t anon69 = (*anon68)((__zext uint64_t)(phi53 + 80), (__zext uint64_t)*anon60);
					if ((uint32_t)anon69 == 0)
					{
						uint64_t anon70 = (*anon68)((__zext uint64_t)(phi53 - 80), (__zext uint64_t)*anon60);
						if ((uint32_t)anon70 == 0)
						{
							uint64_t anon71 = (*anon68)((__zext uint64_t)(phi53 - 1), (__zext uint64_t)*anon60);
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
			(*anon15)(*anon57);
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

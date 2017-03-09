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
	uint32_t phi_in13;
	void(** anon14)(uint64_t);
	uint32_t phi15;
	uint32_t phi16;
	int32_t anon29;
	uint64_t phi33;
	uint64_t phi49;
	uint32_t phi50;
	uint32_t phi51;
	void(** anon52)(uint64_t, uint64_t);
	uint64_t* anon53;
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
			phi_in2 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		phi_in13 = phi3;
		phi_in2 = phi_in2;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi_in13 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi_in13 == 1839)
	{
		*anon4 = 1840;
		anon14 = (void(**)(uint64_t))0x601aa0;
		(*anon14)(4197348);
		phi_in13 = *anon4;
	}
	do
	{
		uint64_t phi17;
		uint64_t phi28;
		uint64_t phi_in32;
		uint64_t anon46;
		phi15 = phi_in2;
		phi16 = phi_in13;
		uint64_t anon18 = (uint64_t)&alloca1;
		phi17 = anon18;
		uint32_t phi19 = phi16;
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
			phi28 = anon18;
			anon29 = (__sext int32_t)*(uint8_t*)(anon26 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384);
			if (anon29 != 128)
			{
				uint64_t phi37;
				uint32_t* anon40;
				uint32_t phi41;
				uint64_t anon31 = (__zext uint64_t)phi15;
				uint32_t anon30 = (uint32_t)(anon31 * 1717986919 >> 37) - (phi15 >> 31);
				alloca1.field1 = anon30 + 1;
				alloca1.field2 = (__sext int64_t)phi15;
				alloca1.field0 = phi15 + anon30 * 4294967216 + 1;
				phi_in32 = anon18;
				do
				{
					phi33 = phi_in32;
					uint64_t anon34 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon35 = (uint32_t)anon34 & 3;
					*(uint32_t*)0x601a98 = anon35;
					uint32_t phi36 = 80;
					phi37 = 80;
					uint32_t phi_in38 = anon25;
					uint2_t anon39 = (uint2_t)anon34;
					if (anon39 == 1)
					{
						phi36 = 4294967216;
						phi37 = 4294967216;
						phi_in38 = anon27;
					}
					if (!(anon39 == 0 || anon39 == 1))
					{
						phi36 = anon35 == 2 ? 1 : 4294967295;
						phi37 = anon35 == 2 ? 1 : 4294967295;
						phi_in38 = anon35 == 2 ? anon21 : anon23;
					}
					anon40 = (uint32_t*)0x601a90;
					*anon40 = phi36;
					phi41 = phi_in38;
					phi_in32 = phi33;
				}
				while (*(uint8_t*)((__sext int64_t)phi41 + 6296384) != 35);
				uint32_t anon43 = *anon40 + (uint32_t)(anon31 + phi37);
				int64_t anon42 = (__sext int64_t)anon43;
				*(uint8_t*)(anon42 + 6296384) = 32;
				uint32_t anon44 = phi15 + (uint32_t)phi37;
				*(uint8_t*)((__sext int64_t)anon44 + 6296384) = 32;
				*(uint8_t*)(phi33 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi33 + 8) + 6296384) = 32;
				uint32_t anon45 = (uint32_t)((__zext uint64_t)anon43 * 1717986919 >> 37) - (uint32_t)(anon42 >> 31);
				*(uint64_t*)(phi33 - 9) = (__zext uint64_t)(anon43 + anon45 * 4294967216 + 1);
				*(uint64_t*)(phi33 - 17) = (__zext uint64_t)(anon45 + 1);
				*(uint8_t*)(phi33 - 18) = 32;
				anon46 = phi33 + 14;
				uint64_t anon48 = (__zext uint64_t)anon44;
				uint32_t anon47 = (uint32_t)(anon48 * 1717986919 >> 37) - (uint32_t)(anon48 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi33 + 18), (__zext uint64_t)*(uint32_t*)anon46, (__zext uint64_t)(anon47 + 1), (__zext uint64_t)(anon44 + anon47 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi15 + (*anon40 << 1)));
				phi17 = anon46;
				phi19 = *anon4;
			}
		}
		if (phi16 != 1840 || *anon4 != 1840 && phi16 == 1840 && anon29 != 128)
		{
			phi49 = phi17;
			phi50 = phi19;
			phi28 = phi49;
			phi51 = phi15;
		}
		if (phi16 == 1840)
		{
			if (anon29 != 128 && *anon4 == 1840)
			{
				phi28 = anon46;
				phi_in32 = anon46;
			}
			if ((anon29 == 128 || anon29 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128) && *anon6 != phi15)
			{
				break;
			}
		}
		if (*anon6 == phi15 && (phi16 != 1840 || phi16 == 1840 && anon29 == 128 || phi16 == 1840 && anon29 != 128 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128 || *anon4 != 1840 && phi16 == 1840 && anon29 != 128))
		{
			phi49 = phi28;
			*anon4 = 1;
			anon52 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon53 = (uint64_t*)0x601258;
			(*anon52)(*anon53, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi51 = 162;
			phi50 = *anon4;
		}
	}
	while (!(phi16 == 1840 && anon29 == 128 && *anon6 == phi15 || anon29 != 128 && phi16 == 1840 && *anon4 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128 && *anon6 == phi15 || anon29 != 128 && *anon4 != 1840 && phi16 == 1840 && *anon6 == phi15 || phi16 != 1840 && *anon6 == phi15 || anon29 != 128 && *anon4 != 1840 && *anon6 != phi15 && phi16 == 1840 || phi16 != 1840 && *anon6 != phi15));
	if (phi50 == 1)
	{
		int64_t anon55 = (__sext int64_t)phi51;
		uint8_t* anon54 = (uint8_t*)(anon55 + 6296384);
		if (*anon54 == 32)
		{
			void(** anon61)(uint64_t, uint64_t, uint64_t);
			uint64_t anon62;
			uint32_t* anon56 = (uint32_t*)phi49;
			*anon56 = 1;
			*anon54 = 46;
			(*anon52)(*anon53, *(uint64_t*)0x601290);
			void(** anon57)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon58 = (uint64_t*)0x601260;
			int64_t anon59 = anon55 / 80 + 1 & 0xffffffff;
			int64_t anon60 = anon55 % 80 + 1 & 0xffffffff;
			(*anon57)(*anon58, anon59, anon60, 46);
			if (phi51 == 1676)
			{
				anon61 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon62 = (__zext uint64_t)*anon56;
				(*anon61)(*anon53, *(uint64_t*)0x601288, anon62);
				(*anon14)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon64)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon63 = (*anon64)((__zext uint64_t)(phi51 + 1), anon62);
				if ((uint32_t)anon63 == 0)
				{
					uint64_t anon65 = (*anon64)((__zext uint64_t)(phi51 + 80), (__zext uint64_t)*anon56);
					if ((uint32_t)anon65 == 0)
					{
						uint64_t anon66 = (*anon64)((__zext uint64_t)(phi51 - 80), (__zext uint64_t)*anon56);
						if ((uint32_t)anon66 == 0)
						{
							uint64_t anon67 = (*anon64)((__zext uint64_t)(phi51 - 1), (__zext uint64_t)*anon56);
							if ((uint32_t)anon67 == 0)
							{
								*anon54 = 32;
								(*anon61)(*anon53, *(uint64_t*)0x601280, (__zext uint64_t)*anon56);
								(*anon57)(*anon58, anon59, anon60, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon14)(*anon53);
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

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
	uint32_t phi7;
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi16;
	void(** anon18)(uint64_t);
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
		uint32_t phi_in4;
		srand((uint32_t)time(null));
		anon3 = (uint32_t*)0x601a94;
		*anon3 = 1000;
		anon5 = (uint32_t*)0x601300;
		phi_in4 = *anon5;
		phi6 = 1000;
		phi7 = 1000;
		if (*anon5 < 1840)
		{
			uint32_t phi8;
			do
			{
				phi8 = phi_in4;
				uint8_t phi9 = 10;
				uint32_t anon11 = phi8 + ((uint32_t)((__zext uint64_t)phi8 * 1717986919 >> 37) - (phi8 >> 31)) * 4294967216;
				bool anon10 = phi8 == 79 | phi8 + 79 < 158 | anon11 == 78;
				bool anon12 = !(anon11 == 79 || anon11 == 0);
				if (!anon10 && anon12)
				{
					phi9 = 35;
				}
				bool anon13 = phi8 == 1839 | phi8 - 1760 < 79;
				if (anon11 == 0 || anon12 && anon10 || !anon10 && anon12 && anon13)
				{
					phi9 = 32;
				}
				*(uint8_t*)((__sext int64_t)phi8 + 6296384) = phi9;
				phi_in4 = phi8 + 1;
			}
			while (phi8 != 1839);
			*anon5 = 1840;
			phi14 = 1000;
		}
	}
	else 
	{
		phi6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840 && *anon2 == 0)
	{
		phi14 = phi6;
		phi15 = phi14;
		phi16 = phi7;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi7 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi7 == 1839)
	{
		uint32_t phi_in17 = phi14;
		*anon2 = 1840;
		anon18 = (void(**)(uint64_t))0x601aa0;
		(*anon18)(4197348);
		phi15 = phi_in17;
		phi16 = *anon2;
	}
	while (true)
	{
		uint64_t phi19;
		uint64_t phi30;
		int32_t anon31;
		uint64_t phi_in33;
		uint64_t phi34;
		uint64_t anon46;
		uint32_t phi49;
		uint32_t phi50;
		void(** anon51)(uint64_t, uint64_t);
		uint64_t* anon52;
		uint64_t anon20 = (uint64_t)&alloca1;
		phi19 = anon20;
		uint32_t phi21 = phi16;
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
			uint64_t anon29 = (__zext uint64_t)phi15;
			uint64_t anon28 = (anon29 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon28;
			phi30 = anon20;
			anon31 = (__sext int32_t)*(uint8_t*)(anon28 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384) + (__sext int32_t)*(uint8_t*)(anon26 + 6296384);
			if (anon31 != 128)
			{
				uint64_t phi38;
				uint32_t* anon41;
				uint32_t phi42;
				uint32_t anon32 = (uint32_t)(anon29 * 1717986919 >> 37) - (phi15 >> 31);
				alloca1.field1 = anon32 + 1;
				alloca1.field2 = (__sext int64_t)phi15;
				alloca1.field0 = phi15 + anon32 * 4294967216 + 1;
				phi_in33 = anon20;
				do
				{
					phi34 = phi_in33;
					uint64_t anon36 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon35 = (uint32_t)anon36 & 3;
					*(uint32_t*)0x601a98 = anon35;
					uint32_t phi37 = 80;
					phi38 = 80;
					uint32_t phi_in39 = anon27;
					uint2_t anon40 = (uint2_t)anon36;
					if (!(anon40 == 0 || anon40 == 1))
					{
						phi37 = anon35 == 2 ? 1 : 4294967295;
						phi38 = anon35 == 2 ? 1 : 4294967295;
						phi_in39 = anon35 == 2 ? anon23 : anon25;
					}
					if (anon40 == 1)
					{
						phi37 = 4294967216;
						phi38 = 4294967216;
						phi_in39 = phi15 - 160;
					}
					anon41 = (uint32_t*)0x601a90;
					*anon41 = phi37;
					phi42 = phi_in39;
					phi_in33 = phi34;
				}
				while (*(uint8_t*)((__sext int64_t)phi42 + 6296384) != 35);
				uint32_t anon43 = *anon41 + (uint32_t)(anon29 + phi38);
				*(uint8_t*)((__sext int64_t)anon43 + 6296384) = 32;
				uint32_t anon44 = phi15 + (uint32_t)phi38;
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
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi15 + (*anon41 << 1)));
				phi19 = anon46;
				phi21 = *anon2;
			}
		}
		if (phi16 != 1840 || *anon2 != 1840 && phi16 == 1840 && anon31 != 128)
		{
			phi49 = phi21;
			phi50 = phi15;
		}
		if (phi16 == 1840)
		{
			if (anon31 != 128 && *anon2 == 1840)
			{
				phi30 = anon46;
				phi_in33 = anon46;
			}
			if (anon31 == 128 || anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128)
			{
				phi19 = phi30;
				if (*anon3 != phi15)
				{
					break;
				}
			}
		}
		if (*anon3 == phi15 && (phi16 != 1840 || phi16 == 1840 && anon31 == 128 || phi16 == 1840 && anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 || *anon2 != 1840 && phi16 == 1840 && anon31 != 128))
		{
			*anon2 = 1;
			anon51 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon52 = (uint64_t*)0x601258;
			(*anon51)(*anon52, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi50 = 162;
			phi49 = *anon2;
		}
		if (phi16 == 1840 && anon31 == 128 && *anon3 == phi15 || phi16 == 1840 && anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi34 + 46) + 6296384) == 128 && *anon3 == phi15 || phi16 != 1840 && *anon3 == phi15 || *anon2 != 1840 && phi16 == 1840 && anon31 != 128 && *anon3 == phi15 || phi16 != 1840 && *anon3 != phi15 || *anon2 != 1840 && *anon3 != phi15 && phi16 == 1840 && anon31 != 128)
		{
			if (phi49 == 1)
			{
				int64_t anon54 = (__sext int64_t)phi50;
				uint8_t* anon53 = (uint8_t*)(anon54 + 6296384);
				if (*anon53 == 32)
				{
					void(** anon60)(uint64_t, uint64_t, uint64_t);
					uint64_t anon61;
					uint32_t* anon55 = (uint32_t*)phi19;
					*anon55 = 1;
					*anon53 = 46;
					(*anon51)(*anon52, *(uint64_t*)0x601290);
					void(** anon56)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon57 = (uint64_t*)0x601260;
					int64_t anon58 = anon54 / 80 + 1 & 0xffffffff;
					int64_t anon59 = anon54 % 80 + 1 & 0xffffffff;
					(*anon56)(*anon57, anon58, anon59, 46);
					if (phi50 == 1676)
					{
						anon60 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon61 = (__zext uint64_t)*anon55;
						(*anon60)(*anon52, *(uint64_t*)0x601288, anon61);
						(*anon18)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon62)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon62)((__zext uint64_t)(phi50 + 1), anon61) == 0 && (uint32_t)(*anon62)((__zext uint64_t)(phi50 + 80), (__zext uint64_t)*anon55) == 0 && (uint32_t)(*anon62)((__zext uint64_t)(phi50 - 80), (__zext uint64_t)*anon55) == 0 && (uint32_t)(*anon62)((__zext uint64_t)(phi50 - 1), (__zext uint64_t)*anon55) == 0)
					{
						*anon53 = 32;
						(*anon60)(*anon52, *(uint64_t*)0x601280, (__zext uint64_t)*anon55);
						(*anon56)(*anon57, anon58, anon59, 32);
					}
				}
				else 
				{
					(*anon18)(*anon52);
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

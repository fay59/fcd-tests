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
	uint32_t phi_in6;
	uint32_t phi7;
	uint32_t phi_in13;
	uint32_t phi14;
	void(** anon15)(uint64_t);
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
		phi_in6 = 1000;
		phi7 = 1000;
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
			phi_in6 = 1000;
		}
	}
	else 
	{
		phi_in6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840 && *anon2 == 0)
	{
		uint32_t phi_in12 = phi_in6;
		phi_in13 = phi7;
		phi_in6 = phi_in12;
		phi14 = phi_in12;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in13 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in13 == 1839)
	{
		*anon2 = 1840;
		anon15 = (void(**)(uint64_t))0x601aa0;
		(*anon15)(4197348);
		phi14 = phi_in6;
		phi_in13 = *anon2;
	}
	while (true)
	{
		uint64_t phi_in16;
		uint64_t phi27;
		int32_t anon28;
		uint64_t phi30;
		uint64_t anon42;
		uint32_t phi45;
		uint64_t phi46;
		void(** anon48)(uint64_t, uint64_t);
		uint64_t* anon49;
		uint64_t anon17 = (uint64_t)&alloca1;
		phi_in16 = anon17;
		uint32_t phi18 = phi_in13;
		if (phi_in13 == 1840)
		{
			uint32_t anon20 = phi14 + 2;
			int64_t anon19 = (__sext int64_t)anon20;
			alloca1.field6 = anon19;
			uint32_t anon22 = phi14 - 2;
			int64_t anon21 = (__sext int64_t)anon22;
			alloca1.field3 = anon21;
			uint32_t anon24 = phi14 + 160;
			int64_t anon23 = (__sext int64_t)anon24;
			alloca1.field5 = anon23;
			uint64_t anon26 = (__zext uint64_t)phi14;
			uint64_t anon25 = (anon26 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon25;
			phi27 = anon17;
			anon28 = (__sext int32_t)*(uint8_t*)(anon25 + 6296384) + (__sext int32_t)*(uint8_t*)(anon19 + 6296384) + (__sext int32_t)*(uint8_t*)(anon21 + 6296384) + (__sext int32_t)*(uint8_t*)(anon23 + 6296384);
			if (anon28 != 128)
			{
				uint64_t phi34;
				uint32_t* anon37;
				uint32_t phi38;
				uint32_t anon29 = (uint32_t)(anon26 * 1717986919 >> 37) - (phi14 >> 31);
				alloca1.field1 = anon29 + 1;
				alloca1.field2 = (__sext int64_t)phi14;
				alloca1.field0 = phi14 + anon29 * 4294967216 + 1;
				phi30 = anon17;
				do
				{
					uint64_t anon32 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon31 = (uint32_t)anon32 & 3;
					*(uint32_t*)0x601a98 = anon31;
					uint32_t phi33 = 80;
					phi34 = 80;
					uint32_t phi_in35 = anon24;
					uint2_t anon36 = (uint2_t)anon32;
					if (!(anon36 == 0 || anon36 == 1))
					{
						phi33 = anon31 == 2 ? 1 : 4294967295;
						phi34 = anon31 == 2 ? 1 : 4294967295;
						phi_in35 = anon31 == 2 ? anon20 : anon22;
					}
					if (anon36 == 1)
					{
						phi33 = 4294967216;
						phi34 = 4294967216;
						phi_in35 = phi14 - 160;
					}
					anon37 = (uint32_t*)0x601a90;
					*anon37 = phi33;
					phi38 = phi_in35;
					phi30 = phi30;
				}
				while (*(uint8_t*)((__sext int64_t)phi38 + 6296384) != 35);
				uint32_t anon39 = *anon37 + (uint32_t)(anon26 + phi34);
				*(uint8_t*)((__sext int64_t)anon39 + 6296384) = 32;
				uint32_t anon40 = phi14 + (uint32_t)phi34;
				*(uint8_t*)((__sext int64_t)anon40 + 6296384) = 32;
				*(uint8_t*)(phi30 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi30 + 8) + 6296384) = 32;
				uint32_t anon41 = (uint32_t)((__zext uint64_t)anon39 * 1717986919 >> 37) - (anon39 >> 31);
				*(uint64_t*)(phi30 - 9) = (__zext uint64_t)(anon39 + anon41 * 4294967216 + 1);
				*(uint64_t*)(phi30 - 17) = (__zext uint64_t)(anon41 + 1);
				*(uint8_t*)(phi30 - 18) = 32;
				anon42 = phi30 + 14;
				uint64_t anon44 = (__zext uint64_t)anon40;
				uint32_t anon43 = (uint32_t)(anon44 * 1717986919 >> 37) - (uint32_t)(anon44 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi30 + 18), (__zext uint64_t)*(uint32_t*)anon42, (__zext uint64_t)(anon43 + 1), (__zext uint64_t)(anon40 + anon43 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi14 + (*anon37 << 1)));
				phi_in16 = anon42;
				phi18 = *anon2;
			}
		}
		if (phi_in13 != 1840 || *anon2 != 1840 && phi_in13 == 1840 && anon28 != 128)
		{
			phi_in16 = phi_in16;
			phi45 = phi14;
			phi46 = phi_in16;
		}
		if (phi_in13 == 1840)
		{
			if (anon28 != 128)
			{
				if (*anon2 == 1840)
				{
					phi27 = anon42;
					phi30 = anon42;
				}
			}
			if (anon28 == 128 || anon28 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 46) + 6296384) == 128)
			{
				uint64_t phi_in47 = phi27;
				phi_in16 = phi_in47;
				if (*anon3 != phi14)
				{
					break;
				}
			}
		}
		if (*anon3 == phi14)
		{
			if (phi_in13 != 1840 || phi_in13 == 1840 && anon28 == 128 || phi_in13 == 1840 && anon28 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 46) + 6296384) == 128 || *anon2 != 1840 && phi_in13 == 1840 && anon28 != 128)
			{
				*anon2 = 1;
				anon48 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon49 = (uint64_t*)0x601258;
				(*anon48)(*anon49, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi45 = 162;
				phi46 = phi_in16;
				phi18 = *anon2;
			}
		}
		if (phi_in13 == 1840 && anon28 == 128 && *anon3 == phi14 || phi_in13 == 1840 && anon28 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi30 + 46) + 6296384) == 128 && *anon3 == phi14 || phi_in13 != 1840 && *anon3 == phi14 || *anon2 != 1840 && phi_in13 == 1840 && anon28 != 128 && *anon3 == phi14 || phi_in13 != 1840 && *anon3 != phi14 || *anon2 != 1840 && *anon3 != phi14 && phi_in13 == 1840 && anon28 != 128)
		{
			if (phi18 == 1)
			{
				int64_t anon51 = (__sext int64_t)phi45;
				uint8_t* anon50 = (uint8_t*)(anon51 + 6296384);
				if (*anon50 == 32)
				{
					void(** anon57)(uint64_t, uint64_t, uint64_t);
					uint64_t anon58;
					uint32_t* anon52 = (uint32_t*)phi46;
					*anon52 = 1;
					*anon50 = 46;
					(*anon48)(*anon49, *(uint64_t*)0x601290);
					void(** anon53)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon54 = (uint64_t*)0x601260;
					int64_t anon55 = anon51 / 80 + 1 & 0xffffffff;
					int64_t anon56 = anon51 % 80 + 1 & 0xffffffff;
					(*anon53)(*anon54, anon55, anon56, 46);
					if (phi45 == 1676)
					{
						anon57 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon58 = (__zext uint64_t)*anon52;
						(*anon57)(*anon49, *(uint64_t*)0x601288, anon58);
						(*anon15)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon59)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon59)((__zext uint64_t)(phi45 + 1), anon58) == 0)
					{
						if ((uint32_t)(*anon59)((__zext uint64_t)(phi45 + 80), (__zext uint64_t)*anon52) == 0)
						{
							if ((uint32_t)(*anon59)((__zext uint64_t)(phi45 - 80), (__zext uint64_t)*anon52) == 0)
							{
								if ((uint32_t)(*anon59)((__zext uint64_t)(phi45 - 1), (__zext uint64_t)*anon52) == 0)
								{
									*anon50 = 32;
									(*anon57)(*anon49, *(uint64_t*)0x601280, (__zext uint64_t)*anon52);
									(*anon53)(*anon54, anon55, anon56, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon15)(*anon49);
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

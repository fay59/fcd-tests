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
	uint32_t phi_in7;
	void(** anon13)(uint64_t);
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
		phi_in6 = 1000;
		phi_in7 = 1000;
		if (*anon5 < 1840)
		{
			do
			{
				uint8_t phi_in8 = 10;
				uint32_t anon10 = phi_in4 + ((uint32_t)((__zext uint64_t)phi_in4 * 1717986919 >> 37) - (phi_in4 >> 31)) * 4294967216;
				bool anon9 = phi_in4 == 79 | phi_in4 + 79 < 158 | anon10 == 78;
				bool anon11 = !(anon10 == 79 || anon10 == 0);
				if (!anon9 && anon11)
				{
					phi_in8 = 35;
				}
				bool anon12 = phi_in4 == 1839 | phi_in4 - 1760 < 79;
				if (anon11 && (anon9 || anon12) || anon10 == 0)
				{
					phi_in8 = 32;
				}
				phi_in4 = phi_in4 + 1;
			}
			while (phi_in4 != 1839);
			*anon5 = 1840;
			phi_in6 = 1000;
		}
	}
	else 
	{
		phi_in6 = (uint32_t)arg1;
		phi_in7 = *anon2;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in7 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in7 == 1839)
	{
		*anon2 = 1840;
		anon13 = (void(**)(uint64_t))0x601aa0;
		(*anon13)(4197348);
		phi_in7 = *anon2;
	}
	while (true)
	{
		uint64_t phi_in14;
		int32_t anon24;
		uint64_t phi_in26;
		uint64_t anon37;
		uint32_t phi_in41;
		void(** anon42)(uint64_t, uint64_t);
		uint64_t* anon43;
		uint64_t anon15 = (uint64_t)&alloca1;
		phi_in14 = anon15;
		if (phi_in7 == 1840)
		{
			uint32_t anon17 = phi_in6 + 2;
			int64_t anon16 = (__sext int64_t)anon17;
			alloca1.field6 = anon16;
			uint32_t anon19 = phi_in6 - 2;
			int64_t anon18 = (__sext int64_t)anon19;
			alloca1.field3 = anon18;
			uint32_t anon21 = phi_in6 + 160;
			int64_t anon20 = (__sext int64_t)anon21;
			alloca1.field5 = anon20;
			uint64_t anon23 = (__zext uint64_t)phi_in6;
			uint64_t anon22 = (anon23 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon22;
			phi_in14 = anon15;
			anon24 = (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon16 + 6296384) + (__sext int32_t)*(uint8_t*)(anon18 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384);
			if (anon24 != 128)
			{
				uint32_t phi_in29;
				uint64_t phi_in30;
				uint32_t phi33;
				uint32_t anon25 = (uint32_t)(anon23 * 1717986919 >> 37) - (phi_in6 >> 31);
				alloca1.field1 = anon25 + 1;
				alloca1.field2 = (__sext int64_t)phi_in6;
				alloca1.field0 = phi_in6 + anon25 * 4294967216 + 1;
				phi_in26 = anon15;
				do
				{
					uint64_t anon28 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon27 = (uint32_t)anon28 & 3;
					*(uint32_t*)0x601a98 = anon27;
					phi_in29 = 80;
					phi_in30 = 80;
					uint32_t phi_in31 = anon21;
					uint2_t anon32 = (uint2_t)anon28;
					if (!(anon32 == 0 || anon32 == 1))
					{
						phi_in29 = anon27 == 2 ? 1 : 4294967295;
						phi_in30 = anon27 == 2 ? 1 : 4294967295;
						phi_in31 = anon27 == 2 ? anon17 : anon19;
					}
					if (anon32 == 1)
					{
						phi_in29 = 4294967216;
						phi_in30 = 4294967216;
						phi_in31 = phi_in6 - 160;
					}
					phi33 = phi_in31;
				}
				while (*(uint8_t*)((__sext int64_t)phi33 + 6296384) != 35);
				uint32_t anon34 = phi_in29 + (uint32_t)(anon23 + phi_in30);
				*(uint8_t*)((__sext int64_t)anon34 + 6296384) = 32;
				uint32_t anon35 = phi_in6 + (uint32_t)phi_in30;
				*(uint8_t*)((__sext int64_t)anon35 + 6296384) = 32;
				*(uint8_t*)(phi_in26 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi_in26 + 8) + 6296384) = 32;
				uint32_t anon36 = (uint32_t)((__zext uint64_t)anon34 * 1717986919 >> 37) - (anon34 >> 31);
				*(uint64_t*)(phi_in26 - 9) = (__zext uint64_t)(anon34 + anon36 * 4294967216 + 1);
				*(uint64_t*)(phi_in26 - 17) = (__zext uint64_t)(anon36 + 1);
				*(uint8_t*)(phi_in26 - 18) = 32;
				anon37 = phi_in26 + 14;
				uint64_t anon39 = (__zext uint64_t)anon35;
				uint32_t anon38 = (uint32_t)(anon39 * 1717986919 >> 37) - (uint32_t)(anon39 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi_in26 + 18), (__zext uint64_t)*(uint32_t*)anon37, (__zext uint64_t)(anon38 + 1), (__zext uint64_t)(anon35 + anon38 * 4294967216 + 1));
				uint32_t* anon40 = (uint32_t*)0x601a90;
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi_in6 + (*anon40 << 1)));
				phi_in14 = anon37;
				phi_in7 = *anon2;
			}
		}
		if (phi_in7 != 1840 || *anon2 != 1840 && anon24 != 128)
		{
			phi_in41 = phi_in6;
		}
		if (phi_in7 == 1840)
		{
			if (anon24 != 128)
			{
				if (*anon2 == 1840)
				{
					phi_in14 = anon37;
					phi_in26 = anon37;
				}
			}
			if (anon24 == 128 || *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 46) + 6296384) == 128)
			{
				if (*anon3 != phi_in6)
				{
					break;
				}
			}
		}
		if (*anon3 == phi_in6)
		{
			if (phi_in7 != 1840 || anon24 != 128 && (*anon2 != 1840 || (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 46) + 6296384) == 128) || anon24 == 128)
			{
				*anon2 = 1;
				anon42 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon43 = (uint64_t*)0x601258;
				(*anon42)(*anon43, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi_in41 = 162;
				phi_in7 = *anon2;
			}
		}
		if (phi_in7 == 1840 && anon24 == 128 && *anon3 == phi_in6 || phi_in7 == 1840 && anon24 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi_in26 + 46) + 6296384) == 128 && *anon3 == phi_in6 || phi_in7 != 1840 && *anon3 == phi_in6 || *anon2 != 1840 && phi_in7 == 1840 && anon24 != 128 && *anon3 == phi_in6 || phi_in7 != 1840 && *anon3 != phi_in6 || *anon2 != 1840 && *anon3 != phi_in6 && phi_in7 == 1840 && anon24 != 128)
		{
			if (phi_in7 == 1)
			{
				int64_t anon45 = (__sext int64_t)phi_in41;
				uint8_t* anon44 = (uint8_t*)(anon45 + 6296384);
				if (*anon44 == 32)
				{
					void(** anon51)(uint64_t, uint64_t, uint64_t);
					uint64_t anon52;
					uint32_t* anon46 = (uint32_t*)phi_in14;
					*anon46 = 1;
					*anon44 = 46;
					(*anon42)(*anon43, *(uint64_t*)0x601290);
					void(** anon47)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon48 = (uint64_t*)0x601260;
					int64_t anon49 = anon45 / 80 + 1 & 0xffffffff;
					int64_t anon50 = anon45 % 80 + 1 & 0xffffffff;
					(*anon47)(*anon48, anon49, anon50, 46);
					if (phi_in41 == 1676)
					{
						anon51 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon52 = (__zext uint64_t)*anon46;
						(*anon51)(*anon43, *(uint64_t*)0x601288, anon52);
						(*anon13)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon53)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon53)((__zext uint64_t)(phi_in41 + 1), anon52) == 0)
					{
						if ((uint32_t)(*anon53)((__zext uint64_t)(phi_in41 + 80), (__zext uint64_t)*anon46) == 0)
						{
							if ((uint32_t)(*anon53)((__zext uint64_t)(phi_in41 - 80), (__zext uint64_t)*anon46) == 0)
							{
								if ((uint32_t)(*anon53)((__zext uint64_t)(phi_in41 - 1), (__zext uint64_t)*anon46) == 0)
								{
									*anon44 = 32;
									(*anon51)(*anon43, *(uint64_t*)0x601280, (__zext uint64_t)*anon46);
									(*anon47)(*anon48, anon49, anon50, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon13)(*anon43);
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

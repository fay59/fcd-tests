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
	uint32_t phi_in12;
	uint32_t phi13;
	void(** anon14)(uint64_t);
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
				if (anon10 && (anon8 || anon11) || anon9 == 0)
				{
					*(uint8_t*)((__sext int64_t)phi4 + 6296384) = 32;
				}
				phi4 = phi4 + 1;
			}
			while (phi4 != 1839);
			*anon5 = 1840;
			phi6 = 1000;
		}
	}
	else 
	{
		phi6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840)
	{
		phi_in12 = phi7;
		phi13 = phi6;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in12 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in12 == 1839)
	{
		phi13 = phi6;
		*anon2 = 1840;
		anon14 = (void(**)(uint64_t))0x601aa0;
		(*anon14)(4197348);
		phi_in12 = *anon2;
	}
	while (true)
	{
		uint64_t phi_in15;
		uint64_t phi26;
		int32_t anon27;
		uint64_t phi29;
		uint64_t anon40;
		uint32_t phi43;
		uint64_t phi44;
		uint32_t phi45;
		uint64_t phi46;
		void(** anon47)(uint64_t, uint64_t);
		uint64_t* anon48;
		uint64_t anon16 = (uint64_t)&alloca1;
		phi_in15 = anon16;
		uint32_t phi17 = phi_in12;
		if (phi_in12 == 1840)
		{
			uint32_t anon19 = phi13 + 2;
			int64_t anon18 = (__sext int64_t)anon19;
			alloca1.field6 = anon18;
			uint32_t anon21 = phi13 - 2;
			int64_t anon20 = (__sext int64_t)anon21;
			alloca1.field3 = anon20;
			uint32_t anon23 = phi13 + 160;
			int64_t anon22 = (__sext int64_t)anon23;
			alloca1.field5 = anon22;
			uint64_t anon25 = (__zext uint64_t)phi13;
			uint64_t anon24 = (anon25 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon24;
			phi26 = anon16;
			anon27 = (__sext int32_t)*(uint8_t*)(anon24 + 6296384) + (__sext int32_t)*(uint8_t*)(anon18 + 6296384) + (__sext int32_t)*(uint8_t*)(anon20 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384);
			if (anon27 != 128)
			{
				uint32_t* anon32;
				uint64_t phi33;
				uint32_t phi36;
				uint32_t anon28 = (uint32_t)(anon25 * 1717986919 >> 37) - (phi13 >> 31);
				alloca1.field1 = anon28 + 1;
				alloca1.field2 = (__sext int64_t)phi13;
				alloca1.field0 = phi13 + anon28 * 4294967216 + 1;
				phi29 = anon16;
				do
				{
					uint64_t anon31 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon30 = (uint32_t)anon31 & 3;
					*(uint32_t*)0x601a98 = anon30;
					anon32 = (uint32_t*)0x601a90;
					*anon32 = 80;
					phi33 = 80;
					uint32_t phi_in34 = anon23;
					uint2_t anon35 = (uint2_t)anon31;
					if (!(anon35 == 0 || anon35 == 1))
					{
						*anon32 = anon30 == 2 ? 1 : 4294967295;
						phi33 = anon30 == 2 ? 1 : 4294967295;
						phi_in34 = anon30 == 2 ? anon19 : anon21;
					}
					if (anon35 == 1)
					{
						*anon32 = 4294967216;
						phi33 = 4294967216;
						phi_in34 = phi13 - 160;
					}
					phi36 = phi_in34;
					phi29 = phi29;
				}
				while (*(uint8_t*)((__sext int64_t)phi36 + 6296384) != 35);
				uint32_t anon37 = *anon32 + (uint32_t)(anon25 + phi33);
				*(uint8_t*)((__sext int64_t)anon37 + 6296384) = 32;
				uint32_t anon38 = phi13 + (uint32_t)phi33;
				*(uint8_t*)((__sext int64_t)anon38 + 6296384) = 32;
				*(uint8_t*)(phi29 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi29 + 8) + 6296384) = 32;
				uint32_t anon39 = (uint32_t)((__zext uint64_t)anon37 * 1717986919 >> 37) - (anon37 >> 31);
				*(uint64_t*)(phi29 - 9) = (__zext uint64_t)(anon37 + anon39 * 4294967216 + 1);
				*(uint64_t*)(phi29 - 17) = (__zext uint64_t)(anon39 + 1);
				*(uint8_t*)(phi29 - 18) = 32;
				anon40 = phi29 + 14;
				uint64_t anon42 = (__zext uint64_t)anon38;
				uint32_t anon41 = (uint32_t)(anon42 * 1717986919 >> 37) - (uint32_t)(anon42 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi29 + 18), (__zext uint64_t)*(uint32_t*)anon40, (__zext uint64_t)(anon41 + 1), (__zext uint64_t)(anon38 + anon41 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi13 + (*anon32 << 1)));
				phi_in15 = anon40;
				phi17 = *anon2;
			}
		}
		if (phi_in12 != 1840 || *anon2 != 1840 && anon27 != 128)
		{
			phi43 = phi17;
			phi44 = phi_in15;
			phi45 = phi13;
			phi46 = phi_in15;
		}
		if (phi_in12 == 1840)
		{
			if (anon27 != 128)
			{
				if (*anon2 == 1840)
				{
					phi26 = anon40;
					phi29 = anon40;
				}
			}
			if (anon27 == 128 || *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 46) + 6296384) == 128)
			{
				phi44 = phi26;
				if (*anon3 != phi13)
				{
					break;
				}
			}
		}
		if (*anon3 == phi13)
		{
			if (phi_in12 != 1840 || anon27 != 128 && (*anon2 != 1840 || (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 46) + 6296384) == 128) || anon27 == 128)
			{
				phi46 = phi44;
				*anon2 = 1;
				anon47 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon48 = (uint64_t*)0x601258;
				(*anon47)(*anon48, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi45 = 162;
				phi43 = *anon2;
			}
		}
		if (phi_in12 == 1840 && anon27 == 128 && *anon3 == phi13 || phi_in12 == 1840 && anon27 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi29 + 46) + 6296384) == 128 && *anon3 == phi13 || phi_in12 != 1840 && *anon3 == phi13 || *anon2 != 1840 && phi_in12 == 1840 && anon27 != 128 && *anon3 == phi13 || phi_in12 != 1840 && *anon3 != phi13 || *anon2 != 1840 && *anon3 != phi13 && phi_in12 == 1840 && anon27 != 128)
		{
			if (phi43 == 1)
			{
				int64_t anon50 = (__sext int64_t)phi45;
				uint8_t* anon49 = (uint8_t*)(anon50 + 6296384);
				if (*anon49 == 32)
				{
					void(** anon56)(uint64_t, uint64_t, uint64_t);
					uint64_t anon57;
					uint32_t* anon51 = (uint32_t*)phi46;
					*anon51 = 1;
					*anon49 = 46;
					(*anon47)(*anon48, *(uint64_t*)0x601290);
					void(** anon52)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon53 = (uint64_t*)0x601260;
					int64_t anon54 = anon50 / 80 + 1 & 0xffffffff;
					int64_t anon55 = anon50 % 80 + 1 & 0xffffffff;
					(*anon52)(*anon53, anon54, anon55, 46);
					if (phi45 == 1676)
					{
						anon56 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon57 = (__zext uint64_t)*anon51;
						(*anon56)(*anon48, *(uint64_t*)0x601288, anon57);
						(*anon14)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon58)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon58)((__zext uint64_t)(phi45 + 1), anon57) == 0)
					{
						if ((uint32_t)(*anon58)((__zext uint64_t)(phi45 + 80), (__zext uint64_t)*anon51) == 0)
						{
							if ((uint32_t)(*anon58)((__zext uint64_t)(phi45 - 80), (__zext uint64_t)*anon51) == 0)
							{
								if ((uint32_t)(*anon58)((__zext uint64_t)(phi45 - 1), (__zext uint64_t)*anon51) == 0)
								{
									*anon49 = 32;
									(*anon56)(*anon48, *(uint64_t*)0x601280, (__zext uint64_t)*anon51);
									(*anon52)(*anon53, anon54, anon55, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon14)(*anon48);
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

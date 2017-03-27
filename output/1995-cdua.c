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
	uint32_t phi13;
	uint32_t phi_in15;
	uint32_t phi16;
	uint32_t phi17;
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
				uint8_t phi8 = 10;
				uint32_t anon10 = phi4 + ((uint32_t)((__zext uint64_t)phi4 * 1717986919 >> 37) - (phi4 >> 31)) * 4294967216;
				bool anon9 = phi4 == 79 | phi4 + 79 < 158 | anon10 == 78;
				bool anon11 = !(anon10 == 79 || anon10 == 0);
				if (!anon9 && anon11)
				{
					phi8 = 35;
				}
				bool anon12 = phi4 == 1839 | phi4 - 1760 < 79;
				if (anon11 && (anon9 || anon12) || anon10 == 0)
				{
					phi8 = 32;
				}
				*(uint8_t*)((__sext int64_t)phi4 + 6296384) = phi8;
				phi4 = phi4 + 1;
			}
			while (phi4 != 1839);
			*anon5 = 1840;
			phi13 = 1000;
		}
	}
	else 
	{
		phi6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840)
	{
		uint32_t phi_in14 = phi6;
		phi_in15 = phi7;
		phi13 = phi_in14;
		phi16 = phi_in14;
		phi17 = phi_in15;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in15 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in15 == 1839)
	{
		phi16 = phi13;
		*anon2 = 1840;
		anon18 = (void(**)(uint64_t))0x601aa0;
		(*anon18)(4197348);
		phi17 = *anon2;
	}
	while (true)
	{
		uint64_t phi20;
		uint64_t phi30;
		int32_t anon31;
		uint64_t phi33;
		uint64_t anon45;
		uint64_t phi_in48;
		uint32_t phi49;
		uint64_t phi50;
		uint32_t phi51;
		uint64_t phi52;
		void(** anon53)(uint64_t, uint64_t);
		uint64_t* anon54;
		uint32_t phi19 = phi17;
		uint64_t anon21 = (uint64_t)&alloca1;
		phi20 = anon21;
		if (phi19 == 1840)
		{
			uint32_t anon23 = phi16 + 2;
			int64_t anon22 = (__sext int64_t)anon23;
			alloca1.field6 = anon22;
			uint32_t anon25 = phi16 - 2;
			int64_t anon24 = (__sext int64_t)anon25;
			alloca1.field3 = anon24;
			uint32_t anon27 = phi16 + 160;
			int64_t anon26 = (__sext int64_t)anon27;
			alloca1.field5 = anon26;
			uint64_t anon29 = (__zext uint64_t)phi16;
			uint64_t anon28 = (anon29 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon28;
			phi30 = anon21;
			anon31 = (__sext int32_t)*(uint8_t*)(anon28 + 6296384) + (__sext int32_t)*(uint8_t*)(anon22 + 6296384) + (__sext int32_t)*(uint8_t*)(anon24 + 6296384) + (__sext int32_t)*(uint8_t*)(anon26 + 6296384);
			if (anon31 != 128)
			{
				uint64_t phi37;
				uint32_t* anon40;
				uint32_t phi41;
				uint32_t anon32 = (uint32_t)(anon29 * 1717986919 >> 37) - (phi16 >> 31);
				alloca1.field1 = anon32 + 1;
				alloca1.field2 = (__sext int64_t)phi16;
				alloca1.field0 = phi16 + anon32 * 4294967216 + 1;
				phi33 = anon21;
				do
				{
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon34 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon34;
					uint32_t phi36 = 80;
					phi37 = 80;
					uint32_t phi_in38 = anon27;
					uint2_t anon39 = (uint2_t)anon35;
					if (!(anon39 == 0 || anon39 == 1))
					{
						phi36 = anon34 == 2 ? 1 : 4294967295;
						phi37 = anon34 == 2 ? 1 : 4294967295;
						phi_in38 = anon34 == 2 ? anon23 : anon25;
					}
					if (anon39 == 1)
					{
						phi36 = 4294967216;
						phi37 = 4294967216;
						phi_in38 = phi16 - 160;
					}
					anon40 = (uint32_t*)0x601a90;
					*anon40 = phi36;
					phi41 = phi_in38;
					phi33 = phi33;
				}
				while (*(uint8_t*)((__sext int64_t)phi41 + 6296384) != 35);
				uint32_t anon42 = *anon40 + (uint32_t)(anon29 + phi37);
				*(uint8_t*)((__sext int64_t)anon42 + 6296384) = 32;
				uint32_t anon43 = phi16 + (uint32_t)phi37;
				*(uint8_t*)((__sext int64_t)anon43 + 6296384) = 32;
				*(uint8_t*)(phi33 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi33 + 8) + 6296384) = 32;
				uint32_t anon44 = (uint32_t)((__zext uint64_t)anon42 * 1717986919 >> 37) - (anon42 >> 31);
				*(uint64_t*)(phi33 - 9) = (__zext uint64_t)(anon42 + anon44 * 4294967216 + 1);
				*(uint64_t*)(phi33 - 17) = (__zext uint64_t)(anon44 + 1);
				*(uint8_t*)(phi33 - 18) = 32;
				anon45 = phi33 + 14;
				uint64_t anon47 = (__zext uint64_t)anon43;
				uint32_t anon46 = (uint32_t)(anon47 * 1717986919 >> 37) - (uint32_t)(anon47 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi33 + 18), (__zext uint64_t)*(uint32_t*)anon45, (__zext uint64_t)(anon46 + 1), (__zext uint64_t)(anon43 + anon46 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi16 + (*anon40 << 1)));
				phi20 = anon45;
				phi19 = *anon2;
			}
		}
		if (phi19 != 1840 || *anon2 != 1840 && anon31 != 128)
		{
			phi_in48 = phi20;
			phi49 = phi19;
			phi50 = phi_in48;
			phi51 = phi16;
			phi52 = phi_in48;
		}
		if (phi19 == 1840)
		{
			if (anon31 != 128)
			{
				if (*anon2 == 1840)
				{
					phi30 = anon45;
					phi33 = anon45;
				}
			}
			if (anon31 == 128 || *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128)
			{
				phi_in48 = phi30;
				phi50 = phi_in48;
				if (*anon3 != phi16)
				{
					break;
				}
			}
		}
		if (*anon3 == phi16)
		{
			if (phi19 != 1840 || anon31 != 128 && (*anon2 != 1840 || (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128) || anon31 == 128)
			{
				phi52 = phi50;
				*anon2 = 1;
				anon53 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon54 = (uint64_t*)0x601258;
				(*anon53)(*anon54, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi51 = 162;
				phi49 = *anon2;
			}
		}
		if (phi19 == 1840 && anon31 == 128 && *anon3 == phi16 || phi19 == 1840 && anon31 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128 && *anon3 == phi16 || phi19 != 1840 && *anon3 == phi16 || *anon2 != 1840 && phi19 == 1840 && anon31 != 128 && *anon3 == phi16 || phi19 != 1840 && *anon3 != phi16 || *anon2 != 1840 && *anon3 != phi16 && phi19 == 1840 && anon31 != 128)
		{
			if (phi49 == 1)
			{
				int64_t anon56 = (__sext int64_t)phi51;
				uint8_t* anon55 = (uint8_t*)(anon56 + 6296384);
				if (*anon55 == 32)
				{
					void(** anon62)(uint64_t, uint64_t, uint64_t);
					uint64_t anon63;
					uint32_t* anon57 = (uint32_t*)phi52;
					*anon57 = 1;
					*anon55 = 46;
					(*anon53)(*anon54, *(uint64_t*)0x601290);
					void(** anon58)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon59 = (uint64_t*)0x601260;
					int64_t anon60 = anon56 / 80 + 1 & 0xffffffff;
					int64_t anon61 = anon56 % 80 + 1 & 0xffffffff;
					(*anon58)(*anon59, anon60, anon61, 46);
					if (phi51 == 1676)
					{
						anon62 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon63 = (__zext uint64_t)*anon57;
						(*anon62)(*anon54, *(uint64_t*)0x601288, anon63);
						(*anon18)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon64)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon64)((__zext uint64_t)(phi51 + 1), anon63) == 0)
					{
						if ((uint32_t)(*anon64)((__zext uint64_t)(phi51 + 80), (__zext uint64_t)*anon57) == 0)
						{
							if ((uint32_t)(*anon64)((__zext uint64_t)(phi51 - 80), (__zext uint64_t)*anon57) == 0)
							{
								if ((uint32_t)(*anon64)((__zext uint64_t)(phi51 - 1), (__zext uint64_t)*anon57) == 0)
								{
									*anon55 = 32;
									(*anon62)(*anon54, *(uint64_t*)0x601280, (__zext uint64_t)*anon57);
									(*anon58)(*anon59, anon60, anon61, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon18)(*anon54);
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

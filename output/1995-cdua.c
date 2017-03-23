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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi16;
	void(** anon17)(uint64_t);
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
		phi_in6 = (uint32_t)arg1;
		phi7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840 && *anon2 == 0)
	{
		phi15 = phi7;
		phi14 = phi_in6;
		phi16 = phi_in6;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi15 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi15 == 1839)
	{
		phi_in6 = phi14;
		*anon2 = 1840;
		anon17 = (void(**)(uint64_t))0x601aa0;
		(*anon17)(4197348);
		phi16 = phi_in6;
		phi15 = *anon2;
	}
	while (true)
	{
		uint64_t phi18;
		uint64_t phi29;
		int32_t anon30;
		uint64_t phi_in32;
		uint64_t phi33;
		uint64_t anon45;
		uint64_t phi_in48;
		uint64_t phi49;
		uint32_t phi50;
		uint64_t phi51;
		uint32_t phi52;
		void(** anon54)(uint64_t, uint64_t);
		uint64_t* anon55;
		uint64_t anon19 = (uint64_t)&alloca1;
		phi18 = anon19;
		uint32_t phi_in20 = phi15;
		if (phi15 == 1840)
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
			uint64_t anon28 = (__zext uint64_t)phi16;
			uint64_t anon27 = (anon28 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon27;
			phi29 = anon19;
			anon30 = (__sext int32_t)*(uint8_t*)(anon27 + 6296384) + (__sext int32_t)*(uint8_t*)(anon21 + 6296384) + (__sext int32_t)*(uint8_t*)(anon23 + 6296384) + (__sext int32_t)*(uint8_t*)(anon25 + 6296384);
			if (anon30 != 128)
			{
				uint64_t phi37;
				uint32_t* anon40;
				uint32_t phi41;
				uint32_t anon31 = (uint32_t)(anon28 * 1717986919 >> 37) - (phi16 >> 31);
				alloca1.field1 = anon31 + 1;
				alloca1.field2 = (__sext int64_t)phi16;
				alloca1.field0 = phi16 + anon31 * 4294967216 + 1;
				phi_in32 = anon19;
				do
				{
					phi33 = phi_in32;
					uint64_t anon35 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon34 = (uint32_t)anon35 & 3;
					*(uint32_t*)0x601a98 = anon34;
					uint32_t phi36 = 80;
					phi37 = 80;
					uint32_t phi_in38 = anon26;
					uint2_t anon39 = (uint2_t)anon35;
					if (!(anon39 == 0 || anon39 == 1))
					{
						phi36 = anon34 == 2 ? 1 : 4294967295;
						phi37 = anon34 == 2 ? 1 : 4294967295;
						phi_in38 = anon34 == 2 ? anon22 : anon24;
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
					phi_in32 = phi33;
				}
				while (*(uint8_t*)((__sext int64_t)phi41 + 6296384) != 35);
				uint32_t anon42 = *anon40 + (uint32_t)(anon28 + phi37);
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
				phi18 = anon45;
				phi_in20 = *anon2;
			}
		}
		if (phi15 != 1840 || *anon2 != 1840 && phi15 == 1840 && anon30 != 128)
		{
			phi_in48 = phi18;
			phi49 = phi_in48;
			phi50 = phi16;
			phi51 = phi_in48;
			phi52 = phi_in20;
		}
		if (phi15 == 1840)
		{
			if (anon30 != 128)
			{
				if (*anon2 == 1840)
				{
					phi29 = anon45;
					phi_in32 = anon45;
				}
			}
			if (anon30 == 128 || anon30 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128)
			{
				uint64_t phi_in53 = phi29;
				phi49 = phi_in53;
				if (*anon3 != phi16)
				{
					break;
				}
			}
		}
		if (*anon3 == phi16)
		{
			if (phi15 != 1840 || phi15 == 1840 && anon30 == 128 || phi15 == 1840 && anon30 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128 || *anon2 != 1840 && phi15 == 1840 && anon30 != 128)
			{
				phi_in48 = phi49;
				*anon2 = 1;
				anon54 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon55 = (uint64_t*)0x601258;
				(*anon54)(*anon55, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi50 = 162;
				phi51 = phi_in48;
				phi52 = *anon2;
			}
		}
		if (phi15 == 1840 && anon30 == 128 && *anon3 == phi16 || phi15 == 1840 && anon30 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi33 + 46) + 6296384) == 128 && *anon3 == phi16 || phi15 != 1840 && *anon3 == phi16 || *anon2 != 1840 && phi15 == 1840 && anon30 != 128 && *anon3 == phi16 || phi15 != 1840 && *anon3 != phi16 || *anon2 != 1840 && *anon3 != phi16 && phi15 == 1840 && anon30 != 128)
		{
			if (phi52 == 1)
			{
				int64_t anon57 = (__sext int64_t)phi50;
				uint8_t* anon56 = (uint8_t*)(anon57 + 6296384);
				if (*anon56 == 32)
				{
					void(** anon63)(uint64_t, uint64_t, uint64_t);
					uint64_t anon64;
					uint32_t* anon58 = (uint32_t*)phi51;
					*anon58 = 1;
					*anon56 = 46;
					(*anon54)(*anon55, *(uint64_t*)0x601290);
					void(** anon59)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon60 = (uint64_t*)0x601260;
					int64_t anon61 = anon57 / 80 + 1 & 0xffffffff;
					int64_t anon62 = anon57 % 80 + 1 & 0xffffffff;
					(*anon59)(*anon60, anon61, anon62, 46);
					if (phi50 == 1676)
					{
						anon63 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon64 = (__zext uint64_t)*anon58;
						(*anon63)(*anon55, *(uint64_t*)0x601288, anon64);
						(*anon17)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon65)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon65)((__zext uint64_t)(phi50 + 1), anon64) == 0)
					{
						if ((uint32_t)(*anon65)((__zext uint64_t)(phi50 + 80), (__zext uint64_t)*anon58) == 0)
						{
							if ((uint32_t)(*anon65)((__zext uint64_t)(phi50 - 80), (__zext uint64_t)*anon58) == 0)
							{
								if ((uint32_t)(*anon65)((__zext uint64_t)(phi50 - 1), (__zext uint64_t)*anon58) == 0)
								{
									*anon56 = 32;
									(*anon63)(*anon55, *(uint64_t*)0x601280, (__zext uint64_t)*anon58);
									(*anon59)(*anon60, anon61, anon62, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon17)(*anon55);
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

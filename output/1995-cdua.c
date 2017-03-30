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
	uint32_t phi_in7;
	uint32_t phi13;
	uint32_t phi14;
	uint32_t phi_in15;
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
		uint32_t phi4;
		srand((uint32_t)time(null));
		anon3 = (uint32_t*)0x601a94;
		*anon3 = 1000;
		anon5 = (uint32_t*)0x601300;
		phi4 = *anon5;
		phi6 = 1000;
		phi_in7 = 1000;
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
		phi_in7 = *anon2;
	}
	if (*anon2 != 0 || *anon5 >= 1840)
	{
		phi14 = phi6;
		phi13 = phi14;
		phi_in15 = phi_in7;
	}
	if (*anon2 == 0 && *anon5 < 1840 || *anon2 != 0 && phi_in7 == 1839 || *anon5 >= 1840 && *anon2 == 0 && phi_in7 == 1839)
	{
		uint32_t phi_in16 = phi13;
		*anon2 = 1840;
		anon17 = (void(**)(uint64_t))0x601aa0;
		(*anon17)(4197348);
		phi14 = phi_in16;
		phi_in15 = *anon2;
	}
	while (true)
	{
		uint64_t phi_in18;
		uint64_t phi29;
		int32_t anon30;
		uint64_t phi32;
		uint64_t anon44;
		uint64_t phi47;
		uint32_t phi49;
		uint64_t phi50;
		uint32_t phi51;
		void(** anon52)(uint64_t, uint64_t);
		uint64_t* anon53;
		uint64_t anon19 = (uint64_t)&alloca1;
		phi_in18 = anon19;
		uint32_t phi20 = phi_in15;
		if (phi_in15 == 1840)
		{
			uint32_t anon22 = phi14 + 2;
			int64_t anon21 = (__sext int64_t)anon22;
			alloca1.field6 = anon21;
			uint32_t anon24 = phi14 - 2;
			int64_t anon23 = (__sext int64_t)anon24;
			alloca1.field3 = anon23;
			uint32_t anon26 = phi14 + 160;
			int64_t anon25 = (__sext int64_t)anon26;
			alloca1.field5 = anon25;
			uint64_t anon28 = (__zext uint64_t)phi14;
			uint64_t anon27 = (anon28 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon27;
			phi29 = anon19;
			anon30 = (__sext int32_t)*(uint8_t*)(anon27 + 6296384) + (__sext int32_t)*(uint8_t*)(anon21 + 6296384) + (__sext int32_t)*(uint8_t*)(anon23 + 6296384) + (__sext int32_t)*(uint8_t*)(anon25 + 6296384);
			if (anon30 != 128)
			{
				uint64_t phi36;
				uint32_t* anon39;
				uint32_t phi40;
				uint32_t anon31 = (uint32_t)(anon28 * 1717986919 >> 37) - (phi14 >> 31);
				alloca1.field1 = anon31 + 1;
				alloca1.field2 = (__sext int64_t)phi14;
				alloca1.field0 = phi14 + anon31 * 4294967216 + 1;
				phi32 = anon19;
				do
				{
					uint64_t anon34 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon33 = (uint32_t)anon34 & 3;
					*(uint32_t*)0x601a98 = anon33;
					uint32_t phi35 = 80;
					phi36 = 80;
					uint32_t phi_in37 = anon26;
					uint2_t anon38 = (uint2_t)anon34;
					if (!(anon38 == 0 || anon38 == 1))
					{
						phi35 = anon33 == 2 ? 1 : 4294967295;
						phi36 = anon33 == 2 ? 1 : 4294967295;
						phi_in37 = anon33 == 2 ? anon22 : anon24;
					}
					if (anon38 == 1)
					{
						phi35 = 4294967216;
						phi36 = 4294967216;
						phi_in37 = phi14 - 160;
					}
					anon39 = (uint32_t*)0x601a90;
					*anon39 = phi35;
					phi40 = phi_in37;
					phi32 = phi32;
				}
				while (*(uint8_t*)((__sext int64_t)phi40 + 6296384) != 35);
				uint32_t anon41 = *anon39 + (uint32_t)(anon28 + phi36);
				*(uint8_t*)((__sext int64_t)anon41 + 6296384) = 32;
				uint32_t anon42 = phi14 + (uint32_t)phi36;
				*(uint8_t*)((__sext int64_t)anon42 + 6296384) = 32;
				*(uint8_t*)(phi32 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi32 + 8) + 6296384) = 32;
				uint32_t anon43 = (uint32_t)((__zext uint64_t)anon41 * 1717986919 >> 37) - (anon41 >> 31);
				*(uint64_t*)(phi32 - 9) = (__zext uint64_t)(anon41 + anon43 * 4294967216 + 1);
				*(uint64_t*)(phi32 - 17) = (__zext uint64_t)(anon43 + 1);
				*(uint8_t*)(phi32 - 18) = 32;
				anon44 = phi32 + 14;
				uint64_t anon46 = (__zext uint64_t)anon42;
				uint32_t anon45 = (uint32_t)(anon46 * 1717986919 >> 37) - (uint32_t)(anon46 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi32 + 18), (__zext uint64_t)*(uint32_t*)anon44, (__zext uint64_t)(anon45 + 1), (__zext uint64_t)(anon42 + anon45 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi14 + (*anon39 << 1)));
				phi_in18 = anon44;
				phi20 = *anon2;
			}
		}
		if (phi_in15 != 1840 || *anon2 != 1840 && anon30 != 128)
		{
			phi47 = phi_in18;
			uint32_t phi_in48 = phi20;
			phi49 = phi14;
			phi50 = phi47;
			phi51 = phi_in48;
		}
		if (phi_in15 == 1840)
		{
			if (anon30 != 128)
			{
				if (*anon2 == 1840)
				{
					phi29 = anon44;
					phi32 = anon44;
				}
			}
			if (anon30 == 128 || *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128)
			{
				phi47 = phi29;
				if (*anon3 != phi14)
				{
					break;
				}
			}
		}
		if (*anon3 == phi14)
		{
			if (phi_in15 != 1840 || anon30 != 128 && (*anon2 != 1840 || (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128) || anon30 == 128)
			{
				phi_in18 = phi47;
				*anon2 = 1;
				anon52 = (void(**)(uint64_t, uint64_t))0x601aa0;
				anon53 = (uint64_t*)0x601258;
				(*anon52)(*anon53, *(uint64_t*)0x6012a8);
				(*(void(**)())0x601aa8)();
				phi49 = 162;
				phi50 = phi_in18;
				phi51 = *anon2;
			}
		}
		if (phi_in15 == 1840 && anon30 == 128 && *anon3 == phi14 || phi_in15 == 1840 && anon30 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi32 + 46) + 6296384) == 128 && *anon3 == phi14 || phi_in15 != 1840 && *anon3 == phi14 || *anon2 != 1840 && phi_in15 == 1840 && anon30 != 128 && *anon3 == phi14 || phi_in15 != 1840 && *anon3 != phi14 || *anon2 != 1840 && *anon3 != phi14 && phi_in15 == 1840 && anon30 != 128)
		{
			if (phi51 == 1)
			{
				int64_t anon55 = (__sext int64_t)phi49;
				uint8_t* anon54 = (uint8_t*)(anon55 + 6296384);
				if (*anon54 == 32)
				{
					void(** anon61)(uint64_t, uint64_t, uint64_t);
					uint64_t anon62;
					uint32_t* anon56 = (uint32_t*)phi50;
					*anon56 = 1;
					*anon54 = 46;
					(*anon52)(*anon53, *(uint64_t*)0x601290);
					void(** anon57)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
					uint64_t* anon58 = (uint64_t*)0x601260;
					int64_t anon59 = anon55 / 80 + 1 & 0xffffffff;
					int64_t anon60 = anon55 % 80 + 1 & 0xffffffff;
					(*anon57)(*anon58, anon59, anon60, 46);
					if (phi49 == 1676)
					{
						anon61 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
						anon62 = (__zext uint64_t)*anon56;
						(*anon61)(*anon53, *(uint64_t*)0x601288, anon62);
						(*anon17)(*(uint64_t*)0x601278);
					}
					uint64_t(** anon63)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					else if ((uint32_t)(*anon63)((__zext uint64_t)(phi49 + 1), anon62) == 0)
					{
						if ((uint32_t)(*anon63)((__zext uint64_t)(phi49 + 80), (__zext uint64_t)*anon56) == 0)
						{
							if ((uint32_t)(*anon63)((__zext uint64_t)(phi49 - 80), (__zext uint64_t)*anon56) == 0)
							{
								if ((uint32_t)(*anon63)((__zext uint64_t)(phi49 - 1), (__zext uint64_t)*anon56) == 0)
								{
									*anon54 = 32;
									(*anon61)(*anon53, *(uint64_t*)0x601280, (__zext uint64_t)*anon56);
									(*anon57)(*anon58, anon59, anon60, 32);
								}
							}
						}
					}
				}
				else 
				{
					(*anon17)(*anon53);
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

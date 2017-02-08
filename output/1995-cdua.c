#include "tests/bin/1995-cdua.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195509);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601228);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in61;
	uint64_t phi_in60;
	uint32_t dispatch57;
	int32_t anon36;
	uint64_t phi_in62;
	uint64_t phi_in35;
	uint64_t phi_in24;
	void(** anon66)(uint64_t, uint64_t);
	uint32_t phi17;
	uint64_t* anon67;
	uint32_t phi_in15;
	uint32_t phi_in19;
	uint32_t phi_in18;
	uint32_t phi_in63;
	void(** anon21)(uint64_t);
	uint32_t* anon8;
	uint32_t* anon6;
	uint32_t phi_in3;
	struct { uint32_t field0; uint32_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint64_t field6; uint8_t field7[56]; uint64_t field8; } alloca1;
	alloca1.field8 = arg0;
	*(uint64_t*)0x601aa0 = 4195536;
	*(uint64_t*)0x601a88 = 4195568;
	*(uint64_t*)0x601ab0 = 4195632;
	*(uint64_t*)0x601a78 = 4195616;
	*(uint64_t*)0x601aa8 = 4195584;
	*(uint64_t*)0x601a80 = 4195648;
	uint32_t phi_in2 = (uint32_t)arg1;
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
		phi_in2 = 1000;
		phi_in3 = 1000;
		if (*anon8 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in7;
				uint8_t phi_in10 = 10;
				uint32_t anon12 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon11 = phi9 == 79 | phi9 + 79 < 158 | anon12 == 78;
				bool anon13 = !(anon12 == 79 || anon12 == 0);
				if (!anon11 && anon13)
				{
					phi_in10 = 35;
				}
				if (anon13 && anon11 || !anon11 && anon13 && phi9 == 1839 | phi9 - 1760 < 79 || anon12 == 0)
				{
					phi_in10 = 32;
				}
				uint8_t phi14 = phi_in10;
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = phi14;
				phi_in7 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon8 = 1840;
			phi_in15 = 1000;
		}
	}
	if (*anon4 != 0 || *anon8 >= 1840 && *anon4 == 0)
	{
		uint32_t phi16 = phi_in2;
		phi17 = phi_in3;
		phi_in15 = phi16;
		phi_in18 = phi16;
		phi_in19 = phi17;
	}
	if (*anon4 == 0 && *anon8 < 1840 || *anon4 != 0 && phi17 == 1839 || *anon8 >= 1840 && *anon4 == 0 && phi17 == 1839)
	{
		uint32_t phi20 = phi_in15;
		*anon4 = 1840;
		anon21 = (void(**)(uint64_t))0x601aa0;
		(*anon21)(4197348);
		phi_in18 = phi20;
		phi_in19 = *anon4;
	}
	uint32_t phi22 = phi_in18;
	uint32_t phi23 = phi_in19;
	uint64_t anon25 = (uint64_t)&alloca1;
	phi_in24 = anon25;
	uint32_t phi_in26 = phi23;
	if (phi23 == 1840)
	{
		uint64_t anon29 = (__zext uint64_t)phi22;
		uint64_t anon28 = anon29 << 32;
		uint64_t anon27 = anon28 + 8589934592 >> 32;
		alloca1.field6 = anon27;
		uint64_t anon30 = anon28 - 8589934592 >> 32;
		alloca1.field3 = anon30;
		uint32_t anon32 = phi22 + 160;
		int64_t anon31 = (__sext int64_t)anon32;
		alloca1.field5 = anon31;
		uint32_t anon34 = phi22 - 160;
		int64_t anon33 = (__sext int64_t)anon34;
		alloca1.field4 = anon33;
		phi_in35 = anon25;
		anon36 = (__sext int32_t)*(uint8_t*)(anon33 + 6296384) + (__sext int32_t)*(uint8_t*)(anon27 + 6296384) + (__sext int32_t)*(uint8_t*)(anon30 + 6296384) + (__sext int32_t)*(uint8_t*)(anon31 + 6296384);
		if (anon36 != 128)
		{
			int64_t anon38 = (__sext int64_t)phi22;
			uint32_t anon37 = (uint32_t)(anon29 * 1717986919 >> 37) - (uint32_t)(anon38 >> 31);
			alloca1.field1 = anon37 + 1;
			alloca1.field2 = anon38;
			alloca1.field0 = phi22 + anon37 * 4294967216 + 1;
			uint64_t phi_in39 = anon25;
			do
			{
				uint32_t* anon50;
				uint32_t phi49;
				uint32_t phi47;
				uint64_t phi40;
				uint64_t phi48;
				do
				{
					phi40 = phi_in39;
					uint64_t anon41 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon42 = (uint32_t)anon41 & 3;
					*(uint32_t*)0x601a98 = anon42;
					uint32_t phi_in43 = 4294967216;
					uint64_t phi_in44 = 4294967216;
					uint32_t phi_in45 = anon34;
					uint2_t anon46 = (uint2_t)anon41;
					if (anon46 == 0)
					{
						phi_in43 = 80;
						phi_in44 = 80;
						phi_in45 = anon32;
					}
					if (!(anon46 == 0 || anon46 == 1))
					{
						phi_in43 = anon42 == 2 ? 1 : 4294967295;
						phi_in44 = anon42 == 2 ? 1 : 4294967295;
						phi_in45 = phi22 + (anon42 == 2 ? 2 : 4294967294);
					}
					phi47 = phi_in43;
					phi48 = phi_in44;
					phi49 = phi_in45;
					anon50 = (uint32_t*)0x601a90;
					*anon50 = phi47;
					phi_in39 = phi40;
				}
				while (*(uint8_t*)((__sext int64_t)phi49 + 6296384) != 35);
				uint32_t anon51 = phi47 + (uint32_t)(anon29 + phi48);
				*(uint8_t*)((__sext int64_t)anon51 + 6296384) = 32;
				uint32_t anon52 = phi22 + (uint32_t)phi48;
				*(uint8_t*)((__sext int64_t)anon52 + 6296384) = 32;
				*(uint8_t*)(phi40 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi40 + 8) + 6296384) = 32;
				uint32_t anon53 = (uint32_t)((__zext uint64_t)anon51 * 1717986919 >> 37) - (anon51 >> 31);
				*(uint64_t*)(phi40 - 9) = (__zext uint64_t)(anon51 + anon53 * 4294967216 + 1);
				*(uint64_t*)(phi40 - 17) = (__zext uint64_t)(anon53 + 1);
				*(uint8_t*)(phi40 - 18) = 32;
				uint64_t anon54 = phi40 + 14;
				uint64_t anon56 = (__zext uint64_t)anon52;
				uint32_t anon55 = (uint32_t)(anon56 * 1717986919 >> 37) - (uint32_t)(anon56 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi40 + 18), (__zext uint64_t)*(uint32_t*)anon54, (__zext uint64_t)(anon55 + 1), (__zext uint64_t)(anon52 + anon55 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi22 + (*anon50 << 1)));
				phi_in24 = anon54;
				phi_in26 = *anon4;
				dispatch57 = 1;
				if (*anon4 == 1840)
				{
					phi_in35 = anon54;
					phi_in39 = anon54;
					dispatch57 = 0;
					if ((__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 46) + 6296384) == 128)
					{
						break;
					}
				}
			}
			while (*anon4 == 1840);
		}
	}
	if (phi23 != 1840 || phi23 == 1840 && anon36 != 128 && dispatch57 == 1)
	{
		uint64_t phi58 = phi_in24;
		uint32_t phi59 = phi_in26;
		phi_in60 = phi58;
		phi_in61 = phi22;
		phi_in62 = phi58;
		phi_in63 = phi59;
	}
	if (phi23 == 1840 && (anon36 != 128 && dispatch57 == 0 || anon36 == 128))
	{
		uint64_t phi64 = phi_in35;
		phi_in60 = phi64;
	}
	if (*anon6 == phi22 && (phi23 != 1840 || phi23 == 1840 && anon36 != 128 && dispatch57 == 0 || phi23 == 1840 && anon36 == 128 || phi23 == 1840 && anon36 != 128 && dispatch57 == 1))
	{
		uint64_t phi65 = phi_in60;
		*anon4 = 1;
		anon66 = (void(**)(uint64_t, uint64_t))0x601aa0;
		anon67 = (uint64_t*)0x601258;
		(*anon66)(*anon67, *(uint64_t*)0x6012a8);
		(*(void(**)())0x601aa8)();
		phi_in61 = 162;
		phi_in62 = phi65;
		phi_in63 = *anon4;
	}
	if (phi23 == 1840 && anon36 != 128 && dispatch57 == 0 && *anon6 == phi22 || phi23 == 1840 && anon36 == 128 && *anon6 == phi22 || phi23 == 1840 && anon36 != 128 && dispatch57 == 1 && *anon6 == phi22 || phi23 != 1840 && *anon6 == phi22 || *anon6 != phi22 && phi23 == 1840 && anon36 != 128 && dispatch57 == 1 || phi23 != 1840 && *anon6 != phi22)
	{
		uint32_t phi68 = phi_in61;
		uint64_t phi69 = phi_in62;
		uint32_t phi70 = phi_in63;
		if (phi70 == 1)
		{
			int64_t anon72 = (__sext int64_t)phi68;
			uint8_t* anon71 = (uint8_t*)(anon72 + 6296384);
			if (*anon71 == 32)
			{
				void(** anon78)(uint64_t, uint64_t, uint64_t);
				uint64_t anon79;
				uint32_t* anon73 = (uint32_t*)phi69;
				*anon73 = 1;
				*anon71 = 46;
				(*anon66)(*anon67, *(uint64_t*)0x601290);
				void(** anon74)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
				uint64_t* anon75 = (uint64_t*)0x601260;
				int64_t anon76 = anon72 / 80 + 1 & 0xffffffff;
				int64_t anon77 = anon72 % 80 + 1 & 0xffffffff;
				(*anon74)(*anon75, anon76, anon77, 46);
				if (phi68 == 1676)
				{
					anon78 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
					anon79 = (__zext uint64_t)*anon73;
					(*anon78)(*anon67, *(uint64_t*)0x601288, anon79);
					(*anon21)(*(uint64_t*)0x601278);
				}
				else 
				{
					uint64_t(** anon81)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
					uint64_t anon80 = (*anon81)((__zext uint64_t)(phi68 + 1), anon79);
					if ((uint32_t)anon80 == 0)
					{
						uint64_t anon82 = (*anon81)((__zext uint64_t)(phi68 + 80), (__zext uint64_t)*anon73);
						if ((uint32_t)anon82 == 0)
						{
							uint64_t anon83 = (*anon81)((__zext uint64_t)(phi68 - 80), (__zext uint64_t)*anon73);
							if ((uint32_t)anon83 == 0)
							{
								uint64_t anon84 = (*anon81)((__zext uint64_t)(phi68 - 1), (__zext uint64_t)*anon73);
								if ((uint32_t)anon84 == 0)
								{
									*anon71 = 32;
									(*anon78)(*anon67, *(uint64_t*)0x601280, (__zext uint64_t)*anon73);
									(*anon74)(*anon75, anon76, anon77, 32);
								}
							}
						}
					}
				}
			}
			else 
			{
				(*anon21)(*anon67);
			}
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
	llvm.trap();
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

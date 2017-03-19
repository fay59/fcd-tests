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
	uint32_t* anon4;
	uint32_t* anon6;
	uint32_t phi_in7;
	uint32_t phi_in8;
	uint32_t phi_in16;
	uint32_t phi18;
	uint32_t phi_in19;
	uint32_t phi_in20;
	void(** anon22)(uint64_t);
	uint32_t phi23;
	uint32_t phi24;
	int32_t anon37;
	uint64_t phi40;
	uint32_t phi_in60;
	uint64_t phi_in61;
	uint32_t phi_in62;
	void(** anon65)(uint64_t, uint64_t);
	uint64_t* anon66;
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
		uint32_t phi_in5;
		uint64_t anon3 = time(null);
		srand((uint32_t)anon3);
		anon4 = (uint32_t*)0x601a94;
		*anon4 = 1000;
		anon6 = (uint32_t*)0x601300;
		phi_in5 = *anon6;
		phi_in7 = 1000;
		phi_in8 = 1000;
		if (*anon6 < 1840)
		{
			uint32_t phi9;
			do
			{
				phi9 = phi_in5;
				uint8_t phi_in10 = 10;
				uint32_t anon12 = phi9 + ((uint32_t)((__zext uint64_t)phi9 * 1717986919 >> 37) - (phi9 >> 31)) * 4294967216;
				bool anon11 = phi9 == 79 | phi9 + 79 < 158 | anon12 == 78;
				bool anon13 = !(anon12 == 79 || anon12 == 0);
				if (!anon11 && anon13)
				{
					phi_in10 = 35;
				}
				bool anon14 = phi9 == 1839 | phi9 - 1760 < 79;
				if (anon12 == 0 || anon13 && anon11 || !anon11 && anon13 && anon14)
				{
					phi_in10 = 32;
				}
				uint8_t phi15 = phi_in10;
				*(uint8_t*)((__sext int64_t)phi9 + 6296384) = phi15;
				phi_in5 = phi9 + 1;
			}
			while (phi9 != 1839);
			*anon6 = 1840;
			phi_in16 = 1000;
		}
	}
	else 
	{
		phi_in7 = (uint32_t)arg1;
		phi_in8 = *anon2;
	}
	if (*anon2 != 0 || *anon6 >= 1840 && *anon2 == 0)
	{
		uint32_t phi17 = phi_in7;
		phi18 = phi_in8;
		phi_in16 = phi17;
		phi_in19 = phi17;
		phi_in20 = phi18;
	}
	if (*anon2 == 0 && *anon6 < 1840 || *anon2 != 0 && phi18 == 1839 || *anon6 >= 1840 && *anon2 == 0 && phi18 == 1839)
	{
		uint32_t phi21 = phi_in16;
		*anon2 = 1840;
		anon22 = (void(**)(uint64_t))0x601aa0;
		(*anon22)(4197348);
		phi_in19 = phi21;
		phi_in20 = *anon2;
	}
	do
	{
		uint64_t phi_in25;
		uint64_t phi_in36;
		uint64_t phi_in39;
		uint64_t anon54;
		uint64_t phi_in59;
		phi23 = phi_in19;
		phi24 = phi_in20;
		uint64_t anon26 = (uint64_t)&alloca1;
		phi_in25 = anon26;
		uint32_t phi_in27 = phi24;
		if (phi24 == 1840)
		{
			uint32_t anon29 = phi23 + 2;
			int64_t anon28 = (__sext int64_t)anon29;
			alloca1.field6 = anon28;
			uint32_t anon31 = phi23 - 2;
			int64_t anon30 = (__sext int64_t)anon31;
			alloca1.field3 = anon30;
			uint32_t anon33 = phi23 + 160;
			int64_t anon32 = (__sext int64_t)anon33;
			alloca1.field5 = anon32;
			uint64_t anon35 = (__zext uint64_t)phi23;
			uint64_t anon34 = (anon35 << 32) - 687194767360 >> 32;
			alloca1.field4 = anon34;
			phi_in36 = anon26;
			anon37 = (__sext int32_t)*(uint8_t*)(anon34 + 6296384) + (__sext int32_t)*(uint8_t*)(anon28 + 6296384) + (__sext int32_t)*(uint8_t*)(anon30 + 6296384) + (__sext int32_t)*(uint8_t*)(anon32 + 6296384);
			if (anon37 != 128)
			{
				uint32_t phi47;
				uint64_t phi48;
				uint32_t phi49;
				uint32_t* anon50;
				uint32_t anon38 = (uint32_t)(anon35 * 1717986919 >> 37) - (phi23 >> 31);
				alloca1.field1 = anon38 + 1;
				alloca1.field2 = (__sext int64_t)phi23;
				alloca1.field0 = phi23 + anon38 * 4294967216 + 1;
				phi_in39 = anon26;
				do
				{
					phi40 = phi_in39;
					uint64_t anon41 = (*(uint64_t(**)())0x601ab0)();
					uint32_t anon42 = (uint32_t)anon41 & 3;
					*(uint32_t*)0x601a98 = anon42;
					uint32_t phi_in43 = 80;
					uint64_t phi_in44 = 80;
					uint32_t phi_in45 = anon33;
					uint2_t anon46 = (uint2_t)anon41;
					if (!(anon46 == 0 || anon46 == 1))
					{
						phi_in43 = anon42 == 2 ? 1 : 4294967295;
						phi_in44 = anon42 == 2 ? 1 : 4294967295;
						phi_in45 = anon42 == 2 ? anon29 : anon31;
					}
					if (anon46 == 1)
					{
						phi_in43 = 4294967216;
						phi_in44 = 4294967216;
						phi_in45 = phi23 - 160;
					}
					phi47 = phi_in43;
					phi48 = phi_in44;
					phi49 = phi_in45;
					anon50 = (uint32_t*)0x601a90;
					*anon50 = phi47;
					phi_in39 = phi40;
				}
				while (*(uint8_t*)((__sext int64_t)phi49 + 6296384) != 35);
				uint32_t anon51 = phi47 + (uint32_t)(anon35 + phi48);
				*(uint8_t*)((__sext int64_t)anon51 + 6296384) = 32;
				uint32_t anon52 = phi23 + (uint32_t)phi48;
				*(uint8_t*)((__sext int64_t)anon52 + 6296384) = 32;
				*(uint8_t*)(phi40 - 1) = 32;
				*(uint8_t*)(*(uint64_t*)(phi40 + 8) + 6296384) = 32;
				uint32_t anon53 = (uint32_t)((__zext uint64_t)anon51 * 1717986919 >> 37) - (anon51 >> 31);
				*(uint64_t*)(phi40 - 9) = (__zext uint64_t)(anon51 + anon53 * 4294967216 + 1);
				*(uint64_t*)(phi40 - 17) = (__zext uint64_t)(anon53 + 1);
				*(uint8_t*)(phi40 - 18) = 32;
				anon54 = phi40 + 14;
				uint64_t anon56 = (__zext uint64_t)anon52;
				uint32_t anon55 = (uint32_t)(anon56 * 1717986919 >> 37) - (uint32_t)(anon56 << 32 >> 63);
				(*(void(**)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0)(*(uint64_t*)0x601250, (__zext uint64_t)*(uint32_t*)(phi40 + 18), (__zext uint64_t)*(uint32_t*)anon54, (__zext uint64_t)(anon55 + 1), (__zext uint64_t)(anon52 + anon55 * 4294967216 + 1));
				(*(void(**)(uint64_t))0x601a80)((__zext uint64_t)(phi23 + (*anon50 << 1)));
				phi_in25 = anon54;
				phi_in27 = *anon2;
			}
		}
		if (phi24 != 1840 || *anon2 != 1840 && phi24 == 1840 && anon37 != 128)
		{
			uint64_t phi57 = phi_in25;
			uint32_t phi58 = phi_in27;
			phi_in59 = phi57;
			phi_in60 = phi23;
			phi_in61 = phi57;
			phi_in62 = phi58;
		}
		if (phi24 == 1840)
		{
			if (anon37 != 128 && *anon2 == 1840)
			{
				phi_in36 = anon54;
				phi_in39 = anon54;
			}
			if (anon37 == 128 || anon37 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 46) + 6296384) == 128)
			{
				uint64_t phi63 = phi_in36;
				phi_in59 = phi63;
				if (*anon4 != phi23)
				{
					break;
				}
			}
		}
		if (*anon4 == phi23 && (phi24 != 1840 || phi24 == 1840 && anon37 == 128 || phi24 == 1840 && anon37 != 128 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 46) + 6296384) == 128 || *anon2 != 1840 && phi24 == 1840 && anon37 != 128))
		{
			uint64_t phi64 = phi_in59;
			*anon2 = 1;
			anon65 = (void(**)(uint64_t, uint64_t))0x601aa0;
			anon66 = (uint64_t*)0x601258;
			(*anon65)(*anon66, *(uint64_t*)0x6012a8);
			(*(void(**)())0x601aa8)();
			phi_in60 = 162;
			phi_in61 = phi64;
			phi_in62 = *anon2;
		}
	}
	while (!(phi24 == 1840 && anon37 == 128 && *anon4 == phi23 || anon37 != 128 && phi24 == 1840 && *anon2 == 1840 && (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 38) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 54) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 30) + 6296384) + (__sext int32_t)*(uint8_t*)(*(uint64_t*)(phi40 + 46) + 6296384) == 128 && *anon4 == phi23 || phi24 != 1840 && *anon4 == phi23 || anon37 != 128 && *anon2 != 1840 && phi24 == 1840 && *anon4 == phi23 || phi24 != 1840 && *anon4 != phi23 || anon37 != 128 && *anon2 != 1840 && *anon4 != phi23 && phi24 == 1840));
	uint32_t phi67 = phi_in60;
	uint64_t phi68 = phi_in61;
	uint32_t phi69 = phi_in62;
	if (phi69 == 1)
	{
		int64_t anon71 = (__sext int64_t)phi67;
		uint8_t* anon70 = (uint8_t*)(anon71 + 6296384);
		if (*anon70 == 32)
		{
			void(** anon77)(uint64_t, uint64_t, uint64_t);
			uint64_t anon78;
			uint32_t* anon72 = (uint32_t*)phi68;
			*anon72 = 1;
			*anon70 = 46;
			(*anon65)(*anon66, *(uint64_t*)0x601290);
			void(** anon73)(uint64_t, uint64_t, uint64_t, uint64_t) = (void(**)(uint64_t, uint64_t, uint64_t, uint64_t))0x601aa0;
			uint64_t* anon74 = (uint64_t*)0x601260;
			int64_t anon75 = anon71 / 80 + 1 & 0xffffffff;
			int64_t anon76 = anon71 % 80 + 1 & 0xffffffff;
			(*anon73)(*anon74, anon75, anon76, 46);
			if (phi67 == 1676)
			{
				anon77 = (void(**)(uint64_t, uint64_t, uint64_t))0x601aa0;
				anon78 = (__zext uint64_t)*anon72;
				(*anon77)(*anon66, *(uint64_t*)0x601288, anon78);
				(*anon22)(*(uint64_t*)0x601278);
			}
			else 
			{
				uint64_t(** anon80)(uint64_t, uint64_t) = (uint64_t(**)(uint64_t, uint64_t))0x601a80;
				uint64_t anon79 = (*anon80)((__zext uint64_t)(phi67 + 1), anon78);
				if ((uint32_t)anon79 == 0)
				{
					uint64_t anon81 = (*anon80)((__zext uint64_t)(phi67 + 80), (__zext uint64_t)*anon72);
					if ((uint32_t)anon81 == 0)
					{
						uint64_t anon82 = (*anon80)((__zext uint64_t)(phi67 - 80), (__zext uint64_t)*anon72);
						if ((uint32_t)anon82 == 0)
						{
							uint64_t anon83 = (*anon80)((__zext uint64_t)(phi67 - 1), (__zext uint64_t)*anon72);
							if ((uint32_t)anon83 == 0)
							{
								*anon70 = 32;
								(*anon77)(*anon66, *(uint64_t*)0x601280, (__zext uint64_t)*anon72);
								(*anon73)(*anon74, anon75, anon76, 32);
							}
						}
					}
				}
			}
		}
		else 
		{
			(*anon22)(*anon66);
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

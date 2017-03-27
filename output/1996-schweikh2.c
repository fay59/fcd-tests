#include "tests/bin/1996-schweikh2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t* phi4;
	uint32_t* anon11;
	uint8_t* anon12;
	uint64_t anon21;
	uint64_t phi_in41;
	uint64_t phi1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi4 = anon5;
	uint32_t phi6 = 1;
	do
	{
		uint64_t phi7 = phi_in2;
		uint64_t phi8 = phi_in3;
		uint64_t* phi_in9 = phi4;
		uint64_t* phi10 = phi_in9;
		if ((uint32_t)arg1 > phi6)
		{
			anon11 = (uint32_t*)0x601300;
			anon12 = (uint8_t*)0x400b54;
			*anon11 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon12);
			phi10 = (uint64_t*)phi8;
		}
		uint64_t* anon13 = (uint64_t*)(phi8 | 8);
		if (*anon13 != 0)
		{
			uint64_t phi14 = *anon13;
			uint64_t phi_in15 = *phi10;
			uint64_t phi16 = *anon13;
			if (*phi10 != 0)
			{
				uint64_t anon18;
				do
				{
					uint64_t phi_in17 = phi_in15;
					phi14 = phi_in17;
					anon18 = (uint64_t)((__sext int128_t)phi16 % (__sext int128_t)phi_in17);
					phi_in15 = anon18;
					phi16 = phi_in17;
				}
				while (anon18 != 0);
			}
			uint64_t anon20 = phi14 >> 63;
			int128_t anon19 = (__sext int128_t)((anon20 ^ phi14) - anon20);
			*phi10 = (uint64_t)((__sext int128_t)*phi10 / anon19);
			*anon13 = (uint64_t)((__sext int128_t)*anon13 / anon19);
		}
		anon21 = phi1 | phi7 & 0xffffffff;
		if (anon21 != 4)
		{
			uint64_t anon22 = anon21 + 1;
			phi1 = anon22 & 0xffffffff00000000;
			phi_in2 = anon22;
			uint64_t anon23 = phi8 + 16;
			phi_in3 = anon23;
			phi4 = (uint64_t*)anon23;
			phi6 = (uint32_t)anon22;
		}
	}
	while (anon21 != 4);
	uint64_t* anon24 = (uint64_t*)0x601480;
	*anon24 = *(uint64_t*)0x601290;
	uint64_t* anon25 = (uint64_t*)0x601488;
	*anon25 = *(uint64_t*)0x601298;
	uint64_t phi26 = 0;
	uint64_t phi27 = 6296720;
	if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
	{
		uint64_t anon38;
		do
		{
			uint64_t* anon28 = (uint64_t*)phi27;
			uint64_t anon29 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi27 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi27 - 8);
			*anon28 = anon29;
			uint64_t* anon30 = (uint64_t*)(phi27 | 8);
			uint64_t anon31 = *(uint64_t*)(phi27 - 8) * *(uint64_t*)0x6012a8;
			*anon30 = anon31;
			if (anon31 != 0)
			{
				uint64_t phi32 = anon31;
				uint64_t phi_in33 = anon29;
				uint64_t phi34 = anon31;
				if (anon29 != 0)
				{
					uint64_t anon35;
					do
					{
						phi32 = phi_in33;
						anon35 = (uint64_t)((__sext int128_t)phi34 % (__sext int128_t)phi32);
						phi_in33 = anon35;
						phi34 = phi32;
					}
					while (anon35 != 0);
				}
				uint64_t anon37 = phi32 >> 63;
				int128_t anon36 = (__sext int128_t)((anon37 ^ phi32) - anon37);
				*anon28 = (uint64_t)((__sext int128_t)anon29 / anon36);
				*anon30 = (uint64_t)((__sext int128_t)anon31 / anon36);
			}
			anon38 = phi26 + 1;
			phi26 = anon38;
			phi27 = phi27 + 16;
		}
		while (*anon5 > anon38);
	}
	uint64_t phi_in39 = *(uint64_t*)0x601298;
	uint64_t phi40 = *anon5;
	uint8_t anon43 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon42 = anon43 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon43 & 0x3fffffff ^ 0x3fffffff;
	phi_in41 = anon42;
	if (anon42 != 255)
	{
		while (true)
		{
			uint64_t phi_in44 = phi40;
			uint64_t phi45 = phi_in41;
			uint64_t* anon46 = (uint64_t*)0x601340;
			*anon46 = *anon24;
			uint64_t* anon47 = (uint64_t*)0x601348;
			*anon47 = phi_in39;
			uint64_t phi48 = phi_in44;
			uint64_t phi49 = *anon24;
			uint64_t phi50 = phi_in39;
			if (((uint32_t)(phi_in44 >> 63) | (__zext uint32_t)(phi_in44 == 0)) == 0)
			{
				uint64_t anon64;
				uint64_t phi_in51 = 0;
				uint64_t phi52 = 0;
				uint64_t phi53 = phi45;
				uint64_t phi54 = 0;
				uint64_t phi55 = 6296704;
				do
				{
					uint64_t phi57;
					uint64_t phi56 = phi_in51;
					if ((phi53 & 2 | 1) == 1)
					{
						if ((phi53 & 1) == 0)
						{
							(__asm "movdqa xmm2, xmmword ptr [rdx + 0x601340]")();
							(__asm "movdqa xmm1, xmmword ptr [rdi + 0x10]")();
							(__asm "movdqa xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm2")();
							(__asm "movdqa xmm4, xmm1")();
							(__asm "pmuludq xmm3, xmm1")();
							(__asm "psrlq xmm0, 0x20")();
							(__asm "pmuludq xmm0, xmm1")();
							(__asm "psrlq xmm4, 0x20")();
							(__asm "pmuludq xmm2, xmm4")();
							(__asm "paddq xmm0, xmm2")();
							(__asm "psllq xmm0, 0x20")();
							(__asm "paddq xmm0, xmm3")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm0")();
							phi57 = phi54;
						}
						else 
						{
							uint64_t anon59 = phi54 << 32 >> 28;
							uint64_t* anon58 = (uint64_t*)(anon59 + 6296392);
							uint64_t anon60 = *anon58 * *(uint64_t*)(phi55 + 16);
							*anon58 = anon60;
							uint64_t* anon61 = (uint64_t*)(anon59 + 6296384);
							*anon61 = *anon61 * *(uint64_t*)(phi55 + 24);
							phi57 = phi54;
							if (anon60 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
								phi57 = phi54;
							}
						}
					}
					else 
					{
						uint32_t anon63 = (uint32_t)phi54 + 1;
						int64_t anon62 = (__sext int64_t)anon63 << 4;
						*(uint64_t*)(anon62 + 6296384) = *(uint64_t*)(phi55 + 16);
						*(uint64_t*)(anon62 + 6296392) = *(uint64_t*)(phi55 + 24);
						phi57 = (__zext uint64_t)anon63;
					}
					uint64_t anon65 = phi52 | phi56 & 0xffffffff;
					anon64 = anon65 + 2;
					if (*anon24 >= anon64)
					{
						uint64_t anon66 = anon65 + 1;
						phi_in51 = anon66;
						phi52 = anon66 & 0xffffffff00000000;
						phi53 = phi53 >> 2;
						phi54 = phi57;
						phi55 = phi55 + 16;
					}
				}
				while (*anon24 >= anon64);
				if (((uint32_t)(*anon24 >> 63) | (__zext uint32_t)(*anon24 == 0)) == 0)
				{
					uint32_t anon85;
					uint32_t phi67 = *(uint32_t*)0x601348;
					uint32_t phi68 = *(uint32_t*)0x60134c;
					uint64_t phi69 = *anon46;
					uint64_t phi70 = 0;
					uint32_t phi71 = 0;
					uint64_t phi_in72 = *anon46;
					uint64_t phi73 = *anon47;
					do
					{
						uint64_t phi74 = phi73;
						uint32_t phi_in75 = phi68;
						uint64_t phi76 = phi69;
						uint64_t phi77 = phi70;
						uint64_t phi78 = phi_in72;
						if ((phi45 & 2 | 1) != 1)
						{
							uint32_t anon81 = (uint32_t)phi70 + 1;
							int64_t anon80 = (__sext int64_t)anon81 << 4;
							uint64_t anon82 = (__zext uint64_t)phi68 << 32 | (__zext uint64_t)phi67;
							uint64_t anon79 = ((phi45 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon80 + 6296384) * anon82 + phi69 * *(uint64_t*)(anon80 + 6296392);
							*anon46 = anon79;
							uint64_t anon83 = anon82 * *(uint64_t*)(anon80 + 6296392);
							*anon47 = anon83;
							phi67 = (uint32_t)anon83;
							phi_in75 = (uint32_t)(anon83 >> 32);
							phi76 = anon79;
							phi77 = (__zext uint64_t)anon81;
							phi78 = anon79;
							phi74 = anon83;
						}
						phi49 = phi78;
						phi50 = phi74;
						phi48 = *anon24;
						phi67 = phi67;
						phi68 = phi_in75;
						phi69 = phi76;
						phi70 = phi77;
						uint32_t anon84 = phi71 + 1;
						phi71 = anon84;
						phi45 = phi45 >> 2;
						phi_in72 = phi49;
						phi73 = phi50;
						anon85 = (uint32_t)*anon24;
					}
					while (anon84 != anon85);
				}
				else 
				{
					phi48 = *anon24 & 0xffffffff;
					phi49 = *anon46;
					phi50 = *anon47;
				}
			}
			uint64_t phi86 = phi49;
			uint64_t phi87 = 0;
			if (phi50 != 0)
			{
				uint64_t phi88 = phi50;
				uint64_t phi_in89 = phi86;
				uint64_t phi90 = phi50;
				if (phi86 != 0)
				{
					uint64_t anon92;
					do
					{
						uint64_t phi_in91 = phi_in89;
						phi88 = phi_in91;
						anon92 = (uint64_t)((__sext int128_t)phi90 % (__sext int128_t)phi_in91);
						phi_in89 = anon92;
						phi90 = phi_in91;
					}
					while (anon92 != 0);
				}
				uint64_t anon95 = phi88 >> 63;
				int128_t anon94 = (__sext int128_t)((anon95 ^ phi88) - anon95);
				uint64_t anon93 = (uint64_t)((__sext int128_t)phi86 / anon94);
				*anon46 = anon93;
				uint64_t anon96 = (uint64_t)((__sext int128_t)phi50 / anon94);
				*anon47 = anon96;
				phi87 = anon96;
				phi86 = anon93;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi86)
				{
					if (*(uint64_t*)0x6012b8 != phi87 && phi45 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == phi87)
			{
				uint8_t* anon103;
				uint64_t phi97 = 0;
				uint64_t phi_in98 = 0;
				uint32_t phi_in99 = 1;
				uint64_t phi100 = 6296704;
				if ((((uint32_t)(phi48 >> 63) ^ 1) & (__zext uint32_t)(phi48 != 0)) != 0)
				{
					uint32_t phi102;
					uint64_t anon104;
					do
					{
						uint64_t phi101 = phi_in98;
						phi102 = phi_in99;
						anon103 = (uint8_t*)0x400b58;
						*anon11 = printf(*(uint64_t*)(phi100 | 8) == 1 ? anon103 : anon12);
						*anon11 = printf((uint8_t*)0x400b5c);
						anon104 = phi101 | (__zext uint64_t)phi102;
						if (anon104 < *anon5)
						{
							uint64_t anon105 = anon104 + 1;
							phi_in98 = anon105 & 0xffffffff00000000;
							phi_in99 = (uint32_t)anon105;
							phi100 = phi100 + 16;
						}
					}
					while (anon104 < *anon5);
					phi97 = (__sext int64_t)phi102;
				}
				*anon11 = printf(*(uint64_t*)((phi97 << 4) + 6296712) == 1 ? anon103 : anon12);
				*anon11 = printf((uint8_t*)0x400b61);
				*anon11 = printf(*anon47 == 1 ? anon103 : anon12);
				*anon11 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b0 != phi86 || *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 == phi87) && phi45 == 256)
			{
				break;
			}
			if (phi45 != 256)
			{
				if (*(uint64_t*)0x6012b0 != phi86 || *(uint64_t*)0x6012b0 == phi86 || *(uint64_t*)0x6012b8 == 0)
				{
					phi_in39 = *anon25;
					phi40 = *anon5;
					phi_in41 = phi45 - 1;
				}
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400450, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ad0, (void(*)())0x400b40, (void(*)())arg2, *(uint8_t**)anon1);
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
		deregister_tm_clones(4197010);
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
	_init(4197123);
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

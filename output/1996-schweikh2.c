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
	uint32_t* anon10;
	uint8_t* anon11;
	uint64_t anon19;
	uint64_t phi40;
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
		uint64_t* phi9 = phi4;
		if ((uint32_t)arg1 > phi6)
		{
			anon10 = (uint32_t*)0x601300;
			anon11 = (uint8_t*)0x400b54;
			*anon10 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon11);
			phi9 = (uint64_t*)phi8;
		}
		uint64_t* anon12 = (uint64_t*)(phi8 | 8);
		if (*anon12 != 0)
		{
			uint64_t phi13 = *anon12;
			uint64_t phi_in14 = *phi9;
			uint64_t phi15 = *anon12;
			if (*phi9 != 0)
			{
				uint64_t anon16;
				do
				{
					phi15 = phi_in14;
					phi13 = phi15;
					anon16 = (uint64_t)((__sext int128_t)phi15 % (__sext int128_t)phi15);
					phi_in14 = anon16;
				}
				while (anon16 != 0);
			}
			uint64_t anon18 = phi13 >> 63;
			int128_t anon17 = (__sext int128_t)((anon18 ^ phi13) - anon18);
			*phi9 = (uint64_t)((__sext int128_t)*phi9 / anon17);
			*anon12 = (uint64_t)((__sext int128_t)*anon12 / anon17);
		}
		anon19 = phi1 | phi7 & 0xffffffff;
		if (anon19 != 4)
		{
			uint64_t anon20 = anon19 + 1;
			phi1 = anon20 & 0xffffffff00000000;
			phi_in2 = anon20;
			uint64_t anon21 = phi8 + 16;
			phi_in3 = anon21;
			phi4 = (uint64_t*)anon21;
			phi6 = (uint32_t)anon20;
		}
	}
	while (anon19 != 4);
	uint64_t* anon22 = (uint64_t*)0x601480;
	*anon22 = *(uint64_t*)0x601290;
	uint64_t* anon23 = (uint64_t*)0x601488;
	*anon23 = *(uint64_t*)0x601298;
	uint64_t phi24 = 0;
	uint64_t phi25 = 6296720;
	if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
	{
		uint64_t anon37;
		do
		{
			uint64_t* anon26 = (uint64_t*)phi25;
			uint64_t anon27 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi25 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi25 - 8);
			*anon26 = anon27;
			uint64_t* anon28 = (uint64_t*)(phi25 | 8);
			uint64_t anon29 = *(uint64_t*)(phi25 - 8) * *(uint64_t*)0x6012a8;
			*anon28 = anon29;
			if (anon29 != 0)
			{
				uint64_t phi30 = anon29;
				uint64_t phi_in31 = anon27;
				uint64_t phi32 = anon29;
				if (anon27 != 0)
				{
					uint64_t anon34;
					do
					{
						uint64_t phi_in33 = phi_in31;
						phi30 = phi_in33;
						anon34 = (uint64_t)((__sext int128_t)phi32 % (__sext int128_t)phi_in33);
						phi_in31 = anon34;
						phi32 = phi_in33;
					}
					while (anon34 != 0);
				}
				uint64_t anon36 = phi30 >> 63;
				int128_t anon35 = (__sext int128_t)((anon36 ^ phi30) - anon36);
				*anon26 = (uint64_t)((__sext int128_t)anon27 / anon35);
				*anon28 = (uint64_t)((__sext int128_t)anon29 / anon35);
			}
			anon37 = phi24 + 1;
			phi24 = anon37;
			phi25 = phi25 + 16;
		}
		while (*anon5 > anon37);
	}
	uint64_t phi38 = *(uint64_t*)0x601298;
	uint64_t phi_in39 = *anon5;
	uint8_t anon42 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon41 = anon42 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon42 & 0x3fffffff ^ 0x3fffffff;
	phi40 = anon41;
	if (anon41 != 255)
	{
		while (true)
		{
			uint64_t phi_in43 = phi38;
			uint64_t phi_in44 = phi40;
			uint64_t* anon45 = (uint64_t*)0x601340;
			*anon45 = *anon22;
			uint64_t* anon46 = (uint64_t*)0x601348;
			*anon46 = phi_in43;
			uint64_t phi47 = phi_in39;
			uint64_t phi_in48 = *anon22;
			uint64_t phi49 = phi_in43;
			if (((uint32_t)(phi_in39 >> 63) | (__zext uint32_t)(phi_in39 == 0)) == 0)
			{
				uint64_t anon63;
				uint64_t phi_in50 = 0;
				uint64_t phi51 = 0;
				uint64_t phi52 = phi_in44;
				uint64_t phi53 = 0;
				uint64_t phi54 = 6296704;
				do
				{
					uint64_t phi56;
					uint64_t phi55 = phi_in50;
					if ((phi52 & 2 | 1) == 1)
					{
						if ((phi52 & 1) == 0)
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
							phi56 = phi53;
						}
						else 
						{
							uint64_t anon58 = phi53 << 32 >> 28;
							uint64_t* anon57 = (uint64_t*)(anon58 + 6296392);
							uint64_t anon59 = *anon57 * *(uint64_t*)(phi54 + 16);
							*anon57 = anon59;
							uint64_t* anon60 = (uint64_t*)(anon58 + 6296384);
							*anon60 = *anon60 * *(uint64_t*)(phi54 + 24);
							phi56 = phi53;
							if (anon59 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
								phi56 = phi53;
							}
						}
					}
					else 
					{
						uint32_t anon62 = (uint32_t)phi53 + 1;
						int64_t anon61 = (__sext int64_t)anon62 << 4;
						*(uint64_t*)(anon61 + 6296384) = *(uint64_t*)(phi54 + 16);
						*(uint64_t*)(anon61 + 6296392) = *(uint64_t*)(phi54 + 24);
						phi56 = (__zext uint64_t)anon62;
					}
					uint64_t anon64 = phi51 | phi55 & 0xffffffff;
					anon63 = anon64 + 2;
					if (*anon22 >= anon63)
					{
						uint64_t anon65 = anon64 + 1;
						phi_in50 = anon65;
						phi51 = anon65 & 0xffffffff00000000;
						phi52 = phi52 >> 2;
						phi53 = phi56;
						phi54 = phi54 + 16;
					}
				}
				while (*anon22 >= anon63);
				if (((uint32_t)(*anon22 >> 63) | (__zext uint32_t)(*anon22 == 0)) == 0)
				{
					uint32_t anon86;
					uint32_t phi66 = *(uint32_t*)0x601348;
					uint32_t phi67 = *(uint32_t*)0x60134c;
					uint64_t phi68 = *anon45;
					uint64_t phi69 = 0;
					uint32_t phi70 = 0;
					uint64_t phi71 = phi_in44;
					uint64_t phi72 = *anon45;
					uint64_t phi73 = *anon46;
					do
					{
						uint32_t phi74 = phi66;
						uint64_t phi_in75 = phi72;
						uint64_t phi76 = phi73;
						uint32_t phi77 = phi67;
						uint64_t phi_in78 = phi68;
						uint64_t phi79 = phi69;
						if ((phi71 & 2 | 1) != 1)
						{
							uint32_t anon82 = (uint32_t)phi69 + 1;
							int64_t anon81 = (__sext int64_t)anon82 << 4;
							uint64_t anon83 = (__zext uint64_t)phi67 << 32 | (__zext uint64_t)phi74;
							uint64_t anon80 = ((phi71 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon81 + 6296384) * anon83 + phi68 * *(uint64_t*)(anon81 + 6296392);
							*anon45 = anon80;
							uint64_t anon84 = anon83 * *(uint64_t*)(anon81 + 6296392);
							*anon46 = anon84;
							phi74 = (uint32_t)anon84;
							phi77 = (uint32_t)(anon84 >> 32);
							phi_in78 = anon80;
							phi79 = (__zext uint64_t)anon82;
							phi_in75 = anon80;
							phi76 = anon84;
						}
						phi_in43 = phi76;
						phi47 = *anon22;
						phi_in48 = phi_in75;
						phi49 = phi_in43;
						phi66 = phi74;
						phi67 = phi77;
						phi68 = phi_in78;
						phi69 = phi79;
						uint32_t anon85 = phi70 + 1;
						phi70 = anon85;
						phi71 = phi71 >> 2;
						phi72 = phi_in75;
						phi73 = phi_in43;
						anon86 = (uint32_t)*anon22;
					}
					while (anon85 != anon86);
				}
				else 
				{
					phi47 = *anon22 & 0xffffffff;
					phi_in48 = *anon45;
					phi49 = *anon46;
				}
			}
			uint64_t phi87 = 0;
			uint64_t phi88 = phi_in48;
			if (phi49 != 0)
			{
				uint64_t phi89 = phi49;
				uint64_t phi_in90 = phi_in48;
				uint64_t phi91 = phi49;
				if (phi_in48 != 0)
				{
					uint64_t anon92;
					do
					{
						phi91 = phi_in90;
						phi89 = phi91;
						anon92 = (uint64_t)((__sext int128_t)phi91 % (__sext int128_t)phi91);
						phi_in90 = anon92;
					}
					while (anon92 != 0);
				}
				uint64_t anon95 = phi89 >> 63;
				int128_t anon94 = (__sext int128_t)((anon95 ^ phi89) - anon95);
				uint64_t anon93 = (uint64_t)((__sext int128_t)phi_in48 / anon94);
				*anon45 = anon93;
				uint64_t anon96 = (uint64_t)((__sext int128_t)phi49 / anon94);
				*anon46 = anon96;
				phi87 = anon96;
				phi88 = anon93;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi88)
				{
					if (*(uint64_t*)0x6012b8 != phi87 && phi_in44 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b0 == phi88 && *(uint64_t*)0x6012b8 == phi87)
			{
				uint8_t* anon103;
				uint64_t phi97 = 0;
				uint64_t phi_in98 = 0;
				uint32_t phi_in99 = 1;
				uint64_t phi100 = 6296704;
				if ((((uint32_t)(phi47 >> 63) ^ 1) & (__zext uint32_t)(phi47 != 0)) != 0)
				{
					uint32_t phi102;
					uint64_t anon104;
					do
					{
						uint64_t phi101 = phi_in98;
						phi102 = phi_in99;
						anon103 = (uint8_t*)0x400b58;
						*anon10 = printf(*(uint64_t*)(phi100 | 8) == 1 ? anon103 : anon11);
						*anon10 = printf((uint8_t*)0x400b5c);
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
				*anon10 = printf(*(uint64_t*)((phi97 << 4) + 6296712) == 1 ? anon103 : anon11);
				*anon10 = printf((uint8_t*)0x400b61);
				*anon10 = printf(*anon46 == 1 ? anon103 : anon11);
				*anon10 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b0 != phi88 || *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 == phi87) && phi_in44 == 256)
			{
				break;
			}
			if (phi_in44 != 256)
			{
				if (*(uint64_t*)0x6012b0 != phi88 || *(uint64_t*)0x6012b0 == phi88 || *(uint64_t*)0x6012b8 == 0)
				{
					phi38 = *anon23;
					phi_in39 = *anon5;
					phi40 = phi_in44 - 1;
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

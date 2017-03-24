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
	uint64_t phi1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi4 = anon5;
	uint32_t phi6 = 1;
	while (true)
	{
		uint32_t* anon10;
		uint8_t* anon11;
		uint64_t phi_in37;
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
		uint64_t* anon19 = (uint64_t*)0x601480;
		*anon19 = *(uint64_t*)0x601290;
		uint64_t* anon20 = (uint64_t*)0x601488;
		*anon20 = *(uint64_t*)0x601298;
		uint64_t phi21 = 0;
		uint64_t phi22 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon34;
			do
			{
				uint64_t* anon23 = (uint64_t*)phi22;
				uint64_t anon24 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi22 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi22 - 8);
				*anon23 = anon24;
				uint64_t* anon25 = (uint64_t*)(phi22 | 8);
				uint64_t anon26 = *(uint64_t*)(phi22 - 8) * *(uint64_t*)0x6012a8;
				*anon25 = anon26;
				if (anon26 != 0)
				{
					uint64_t phi27 = anon26;
					uint64_t phi_in28 = anon24;
					uint64_t phi29 = anon26;
					if (anon24 != 0)
					{
						uint64_t anon31;
						do
						{
							uint64_t phi_in30 = phi_in28;
							phi27 = phi_in30;
							anon31 = (uint64_t)((__sext int128_t)phi29 % (__sext int128_t)phi_in30);
							phi_in28 = anon31;
							phi29 = phi_in30;
						}
						while (anon31 != 0);
					}
					uint64_t anon33 = phi27 >> 63;
					int128_t anon32 = (__sext int128_t)((anon33 ^ phi27) - anon33);
					*anon23 = (uint64_t)((__sext int128_t)anon24 / anon32);
					*anon25 = (uint64_t)((__sext int128_t)anon26 / anon32);
				}
				anon34 = phi21 + 1;
				phi21 = anon34;
				phi22 = phi22 + 16;
			}
			while (*anon5 > anon34);
		}
		uint64_t phi35 = *(uint64_t*)0x601298;
		uint64_t phi36 = *anon5;
		uint8_t anon39 = (uint8_t)*anon5 << 1 & 0x1e;
		uint64_t anon38 = anon39 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon39 & 0x3fffffff ^ 0x3fffffff;
		phi_in37 = anon38;
		if (anon38 != 255)
		{
			while (true)
			{
				uint64_t phi_in40 = phi35;
				uint64_t phi_in41 = phi36;
				uint64_t phi_in42 = phi_in37;
				uint64_t* anon43 = (uint64_t*)0x601340;
				*anon43 = *anon19;
				uint64_t* anon44 = (uint64_t*)0x601348;
				*anon44 = phi_in40;
				uint64_t phi45 = phi_in41;
				uint64_t phi46 = *anon19;
				uint64_t phi47 = phi_in40;
				if (((uint32_t)(phi_in41 >> 63) | (__zext uint32_t)(phi_in41 == 0)) == 0)
				{
					uint64_t anon61;
					uint64_t phi_in48 = 0;
					uint64_t phi49 = 0;
					uint64_t phi50 = phi_in42;
					uint64_t phi51 = 0;
					uint64_t phi52 = 6296704;
					do
					{
						uint64_t phi54;
						uint64_t phi53 = phi_in48;
						if ((phi50 & 2 | 1) == 1)
						{
							if ((phi50 & 1) == 0)
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
								phi54 = phi51;
							}
							else 
							{
								uint64_t anon56 = phi51 << 32 >> 28;
								uint64_t* anon55 = (uint64_t*)(anon56 + 6296392);
								uint64_t anon57 = *anon55 * *(uint64_t*)(phi52 + 16);
								*anon55 = anon57;
								uint64_t* anon58 = (uint64_t*)(anon56 + 6296384);
								*anon58 = *anon58 * *(uint64_t*)(phi52 + 24);
								phi54 = phi51;
								if (anon57 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi54 = phi51;
								}
							}
						}
						else 
						{
							uint32_t anon60 = (uint32_t)phi51 + 1;
							int64_t anon59 = (__sext int64_t)anon60 << 4;
							*(uint64_t*)(anon59 + 6296384) = *(uint64_t*)(phi52 + 16);
							*(uint64_t*)(anon59 + 6296392) = *(uint64_t*)(phi52 + 24);
							phi54 = (__zext uint64_t)anon60;
						}
						uint64_t anon62 = phi49 | phi53 & 0xffffffff;
						anon61 = anon62 + 2;
						if (*anon19 >= anon61)
						{
							uint64_t anon63 = anon62 + 1;
							phi_in48 = anon63;
							phi49 = anon63 & 0xffffffff00000000;
							phi50 = phi50 >> 2;
							phi51 = phi54;
							phi52 = phi52 + 16;
						}
					}
					while (*anon19 >= anon61);
					if (((uint32_t)(*anon19 >> 63) | (__zext uint32_t)(*anon19 == 0)) == 0)
					{
						uint32_t anon84;
						uint32_t phi_in64 = *(uint32_t*)0x601348;
						uint32_t phi65 = *(uint32_t*)0x60134c;
						uint64_t phi66 = *anon43;
						uint64_t phi67 = 0;
						uint32_t phi68 = 0;
						uint64_t phi69 = phi_in42;
						uint64_t phi70 = *anon43;
						uint64_t phi71 = *anon44;
						do
						{
							uint64_t phi_in72 = phi70;
							uint64_t phi_in73 = phi71;
							uint32_t phi_in74 = phi_in64;
							uint32_t phi75 = phi65;
							uint64_t phi_in76 = phi66;
							uint64_t phi77 = phi67;
							phi70 = phi_in72;
							phi_in40 = phi_in73;
							if ((phi69 & 2 | 1) != 1)
							{
								uint32_t anon80 = (uint32_t)phi67 + 1;
								int64_t anon79 = (__sext int64_t)anon80 << 4;
								uint64_t anon81 = (__zext uint64_t)phi65 << 32 | (__zext uint64_t)phi_in64;
								uint64_t anon78 = ((phi69 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon79 + 6296384) * anon81 + phi66 * *(uint64_t*)(anon79 + 6296392);
								*anon43 = anon78;
								uint64_t anon82 = anon81 * *(uint64_t*)(anon79 + 6296392);
								*anon44 = anon82;
								phi_in74 = (uint32_t)anon82;
								phi75 = (uint32_t)(anon82 >> 32);
								phi_in76 = anon78;
								phi77 = (__zext uint64_t)anon80;
								phi70 = anon78;
								phi_in40 = anon82;
							}
							phi45 = *anon19;
							phi46 = phi70;
							phi47 = phi_in40;
							phi_in64 = phi_in74;
							phi65 = phi75;
							phi66 = phi_in76;
							phi67 = phi77;
							uint32_t anon83 = phi68 + 1;
							phi68 = anon83;
							phi69 = phi69 >> 2;
							phi71 = phi_in40;
							anon84 = (uint32_t)*anon19;
						}
						while (anon83 != anon84);
					}
					else 
					{
						phi45 = *anon19 & 0xffffffff;
						phi46 = *anon43;
						phi47 = *anon44;
					}
				}
				uint64_t phi85 = 0;
				if (phi47 != 0)
				{
					uint64_t phi86 = phi47;
					uint64_t phi_in87 = phi46;
					uint64_t phi88 = phi47;
					if (phi46 != 0)
					{
						uint64_t anon89;
						do
						{
							phi88 = phi_in87;
							phi86 = phi88;
							anon89 = (uint64_t)((__sext int128_t)phi88 % (__sext int128_t)phi88);
							phi_in87 = anon89;
						}
						while (anon89 != 0);
					}
					uint64_t anon92 = phi86 >> 63;
					int128_t anon91 = (__sext int128_t)((anon92 ^ phi86) - anon92);
					uint64_t anon90 = (uint64_t)((__sext int128_t)phi46 / anon91);
					*anon43 = anon90;
					uint64_t anon93 = (uint64_t)((__sext int128_t)phi47 / anon91);
					*anon44 = anon93;
					phi85 = anon93;
					phi46 = anon90;
				}
				if (*(uint64_t*)0x6012b8 != 0)
				{
					if (*(uint64_t*)0x6012b0 == phi46)
					{
						if (*(uint64_t*)0x6012b8 != phi85 && phi_in42 == 256)
						{
							break;
						}
					}
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi46 && *(uint64_t*)0x6012b8 == phi85)
				{
					uint8_t* anon100;
					uint64_t phi94 = 0;
					uint64_t phi_in95 = 0;
					uint32_t phi_in96 = 1;
					uint64_t phi97 = 6296704;
					if ((((uint32_t)(phi45 >> 63) ^ 1) & (__zext uint32_t)(phi45 != 0)) != 0)
					{
						uint32_t phi99;
						uint64_t anon101;
						do
						{
							uint64_t phi98 = phi_in95;
							phi99 = phi_in96;
							anon100 = (uint8_t*)0x400b58;
							*anon10 = printf(*(uint64_t*)(phi97 | 8) == 1 ? anon100 : anon11);
							*anon10 = printf((uint8_t*)0x400b5c);
							anon101 = phi98 | (__zext uint64_t)phi99;
							if (anon101 < *anon5)
							{
								uint64_t anon102 = anon101 + 1;
								phi_in95 = anon102 & 0xffffffff00000000;
								phi_in96 = (uint32_t)anon102;
								phi97 = phi97 + 16;
							}
						}
						while (anon101 < *anon5);
						phi94 = (__sext int64_t)phi99;
					}
					*anon10 = printf(*(uint64_t*)((phi94 << 4) + 6296712) == 1 ? anon100 : anon11);
					*anon10 = printf((uint8_t*)0x400b61);
					*anon10 = printf(*anon44 == 1 ? anon100 : anon11);
					*anon10 = printf((uint8_t*)0x400b65);
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi46 && *(uint64_t*)0x6012b8 == phi85 || *(uint64_t*)0x6012b0 != phi46 && *(uint64_t*)0x6012b8 != 0) && phi_in42 == 256)
				{
					break;
				}
				if (phi_in42 != 256)
				{
					if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi46 && *(uint64_t*)0x6012b8 == phi85 || *(uint64_t*)0x6012b0 != phi46 && *(uint64_t*)0x6012b8 != 0 || *(uint64_t*)0x6012b8 != phi85 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi46)
					{
						phi35 = *anon20;
						phi36 = *anon5;
						phi_in37 = phi_in42 - 1;
					}
				}
			}
		}
		break;
		uint64_t anon104 = phi1 | phi7 & 0xffffffff;
		uint64_t anon103 = anon104 + 1;
		phi1 = anon103 & 0xffffffff00000000;
		phi_in2 = anon103;
		uint64_t anon105 = phi8 + 16;
		phi_in3 = anon105;
		phi4 = (uint64_t*)anon105;
		phi6 = (uint32_t)anon103;
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

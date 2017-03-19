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
	uint64_t* phi_in4;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi_in4 = anon5;
	uint32_t phi6 = 1;
	while (true)
	{
		uint8_t* anon12;
		uint32_t* anon13;
		uint64_t phi43;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi_in4;
		if ((uint32_t)arg1 > phi6)
		{
			anon12 = (uint8_t*)0x400b54;
			uint32_t anon11 = sscanf(*(uint8_t**)((phi8 << 3) + arg2), anon12);
			anon13 = (uint32_t*)0x601300;
			*anon13 = anon11;
			phi10 = (uint64_t*)phi9;
		}
		uint64_t* anon14 = (uint64_t*)(phi9 | 8);
		if (*anon14 != 0)
		{
			uint64_t phi15 = *anon14;
			uint64_t phi_in16 = *phi10;
			uint64_t phi_in17 = *anon14;
			if (*phi10 != 0)
			{
				uint64_t anon20;
				do
				{
					uint64_t phi18 = phi_in16;
					uint64_t phi19 = phi_in17;
					phi15 = phi18;
					anon20 = (uint64_t)((__sext int128_t)phi19 % (__sext int128_t)phi18);
					phi_in16 = anon20;
					phi_in17 = phi18;
				}
				while (anon20 != 0);
			}
			uint64_t anon22 = phi15 >> 63;
			int128_t anon21 = (__sext int128_t)((anon22 ^ phi15) - anon22);
			*phi10 = (uint64_t)((__sext int128_t)*phi10 / anon21);
			*anon14 = (uint64_t)((__sext int128_t)*anon14 / anon21);
		}
		uint64_t* anon23 = (uint64_t*)0x601480;
		*anon23 = *(uint64_t*)0x601290;
		uint64_t* anon24 = (uint64_t*)0x601488;
		*anon24 = *(uint64_t*)0x601298;
		uint64_t phi_in25 = 0;
		uint64_t phi26 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon40;
			do
			{
				uint64_t phi27 = phi_in25;
				uint64_t* anon28 = (uint64_t*)phi26;
				uint64_t anon29 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi26 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi26 - 8);
				*anon28 = anon29;
				uint64_t* anon30 = (uint64_t*)(phi26 | 8);
				uint64_t anon31 = *(uint64_t*)(phi26 - 8) * *(uint64_t*)0x6012a8;
				*anon30 = anon31;
				if (anon31 != 0)
				{
					uint64_t phi32 = anon31;
					uint64_t phi_in33 = anon29;
					uint64_t phi_in34 = anon31;
					if (anon29 != 0)
					{
						uint64_t anon37;
						do
						{
							uint64_t phi35 = phi_in33;
							uint64_t phi36 = phi_in34;
							phi32 = phi35;
							anon37 = (uint64_t)((__sext int128_t)phi36 % (__sext int128_t)phi35);
							phi_in33 = anon37;
							phi_in34 = phi35;
						}
						while (anon37 != 0);
					}
					uint64_t anon39 = phi32 >> 63;
					int128_t anon38 = (__sext int128_t)((anon39 ^ phi32) - anon39);
					*anon28 = (uint64_t)((__sext int128_t)anon29 / anon38);
					*anon30 = (uint64_t)((__sext int128_t)anon31 / anon38);
				}
				anon40 = phi27 + 1;
				phi_in25 = anon40;
				phi26 = phi26 + 16;
			}
			while (*anon5 > anon40);
		}
		uint64_t phi41 = *(uint64_t*)0x601298;
		uint64_t phi42 = *anon5;
		uint8_t anon45 = (uint8_t)*anon5 << 1 & 0x1e;
		uint64_t anon44 = anon45 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon45 & 0x3fffffff ^ 0x3fffffff;
		phi43 = anon44;
		if (anon44 != 255)
		{
			while (true)
			{
				uint64_t phi_in46 = phi41;
				uint64_t* anon47 = (uint64_t*)0x601340;
				*anon47 = *anon23;
				uint64_t* anon48 = (uint64_t*)0x601348;
				*anon48 = phi_in46;
				uint64_t phi49 = phi42;
				uint64_t phi50 = *anon23;
				uint64_t phi51 = phi_in46;
				if (((uint32_t)(phi42 >> 63) | (__zext uint32_t)(phi42 == 0)) == 0)
				{
					uint64_t anon66;
					uint64_t phi_in52 = 0;
					uint64_t phi_in53 = 0;
					uint64_t phi54 = phi43;
					uint64_t phi55 = 0;
					uint64_t phi56 = 6296704;
					do
					{
						uint64_t phi59;
						uint64_t phi57 = phi_in52;
						uint64_t phi58 = phi_in53;
						if ((phi54 & 2 | 1) == 1)
						{
							if ((phi54 & 1) == 0)
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
								phi59 = phi55;
							}
							else 
							{
								uint64_t anon61 = phi55 << 32 >> 28;
								uint64_t* anon60 = (uint64_t*)(anon61 + 6296392);
								uint64_t anon62 = *anon60 * *(uint64_t*)(phi56 + 16);
								*anon60 = anon62;
								uint64_t* anon63 = (uint64_t*)(anon61 + 6296384);
								*anon63 = *anon63 * *(uint64_t*)(phi56 + 24);
								phi59 = phi55;
								if (anon62 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi59 = phi55;
								}
							}
						}
						else 
						{
							uint32_t anon65 = (uint32_t)phi55 + 1;
							int64_t anon64 = (__sext int64_t)anon65 << 4;
							*(uint64_t*)(anon64 + 6296384) = *(uint64_t*)(phi56 + 16);
							*(uint64_t*)(anon64 + 6296392) = *(uint64_t*)(phi56 + 24);
							phi59 = (__zext uint64_t)anon65;
						}
						uint64_t anon67 = phi58 | phi57 & 0xffffffff;
						anon66 = anon67 + 2;
						if (*anon23 >= anon66)
						{
							uint64_t anon68 = anon67 + 1;
							phi_in52 = anon68;
							phi_in53 = anon68 & 0xffffffff00000000;
							phi54 = phi54 >> 2;
							phi55 = phi59;
							phi56 = phi56 + 16;
						}
					}
					while (*anon23 >= anon66);
					if (((uint32_t)(*anon23 >> 63) | (__zext uint32_t)(*anon23 == 0)) == 0)
					{
						uint32_t anon91;
						uint32_t phi69 = *(uint32_t*)0x601348;
						uint32_t phi70 = *(uint32_t*)0x60134c;
						uint64_t phi71 = *anon47;
						uint64_t phi72 = 0;
						uint32_t phi_in73 = 0;
						uint64_t phi74 = phi43;
						uint64_t phi75 = *anon47;
						uint64_t phi76 = *anon48;
						do
						{
							uint32_t phi77 = phi_in73;
							uint64_t phi_in78 = phi75;
							uint64_t phi_in79 = phi76;
							uint32_t phi80 = phi69;
							uint32_t phi_in81 = phi70;
							uint64_t phi82 = phi71;
							phi72 = phi72;
							uint64_t phi83 = phi_in78;
							uint64_t phi84 = phi_in79;
							if ((phi74 & 2 | 1) != 1)
							{
								uint32_t anon87 = (uint32_t)phi72 + 1;
								int64_t anon86 = (__sext int64_t)anon87 << 4;
								uint64_t anon88 = (__zext uint64_t)phi70 << 32 | (__zext uint64_t)phi69;
								uint64_t anon85 = ((phi74 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon86 + 6296384) * anon88 + phi71 * *(uint64_t*)(anon86 + 6296392);
								*anon47 = anon85;
								uint64_t anon89 = anon88 * *(uint64_t*)(anon86 + 6296392);
								*anon48 = anon89;
								phi80 = (uint32_t)anon89;
								phi_in81 = (uint32_t)(anon89 >> 32);
								phi82 = anon85;
								phi72 = (__zext uint64_t)anon87;
								phi83 = anon85;
								phi84 = anon89;
							}
							phi49 = *anon23;
							phi50 = phi83;
							phi51 = phi84;
							phi69 = phi80;
							phi70 = phi_in81;
							phi71 = phi82;
							uint32_t anon90 = phi77 + 1;
							phi_in73 = anon90;
							phi74 = phi74 >> 2;
							phi75 = phi83;
							phi76 = phi84;
							anon91 = (uint32_t)*anon23;
						}
						while (anon90 != anon91);
					}
					else 
					{
						phi49 = *anon23 & 0xffffffff;
						phi50 = *anon47;
						phi51 = *anon48;
					}
				}
				uint64_t phi92 = 0;
				uint64_t phi93 = phi50;
				if (phi51 != 0)
				{
					uint64_t phi94 = phi51;
					uint64_t phi_in95 = phi50;
					uint64_t phi_in96 = phi51;
					if (phi50 != 0)
					{
						uint64_t anon99;
						do
						{
							uint64_t phi97 = phi_in95;
							uint64_t phi98 = phi_in96;
							phi94 = phi97;
							anon99 = (uint64_t)((__sext int128_t)phi98 % (__sext int128_t)phi97);
							phi_in95 = anon99;
							phi_in96 = phi97;
						}
						while (anon99 != 0);
					}
					uint64_t anon102 = phi94 >> 63;
					int128_t anon101 = (__sext int128_t)((anon102 ^ phi94) - anon102);
					uint64_t anon100 = (uint64_t)((__sext int128_t)phi50 / anon101);
					*anon47 = anon100;
					uint64_t anon103 = (uint64_t)((__sext int128_t)phi51 / anon101);
					*anon48 = anon103;
					phi92 = anon103;
					phi93 = anon100;
				}
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi92 && *(uint64_t*)0x6012b0 == phi93 && phi43 == 256)
				{
					break;
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi93 && *(uint64_t*)0x6012b8 == phi92)
				{
					uint8_t* anon111;
					uint64_t phi104 = 0;
					uint64_t phi_in105 = 0;
					uint32_t phi_in106 = 1;
					uint64_t phi107 = 6296704;
					if ((((uint32_t)(phi49 >> 63) ^ 1) & (__zext uint32_t)(phi49 != 0)) != 0)
					{
						uint32_t phi109;
						uint64_t anon113;
						do
						{
							uint64_t phi108 = phi_in105;
							phi109 = phi_in106;
							anon111 = (uint8_t*)0x400b58;
							uint32_t anon110 = printf(*(uint64_t*)(phi107 | 8) == 1 ? anon111 : anon12);
							*anon13 = anon110;
							uint32_t anon112 = printf((uint8_t*)0x400b5c);
							*anon13 = anon112;
							anon113 = phi108 | (__zext uint64_t)phi109;
							if (anon113 < *anon5)
							{
								uint64_t anon114 = anon113 + 1;
								phi_in105 = anon114 & 0xffffffff00000000;
								phi_in106 = (uint32_t)anon114;
								phi107 = phi107 + 16;
							}
						}
						while (anon113 < *anon5);
						phi104 = (__sext int64_t)phi109;
					}
					uint32_t anon115 = printf(*(uint64_t*)((phi104 << 4) + 6296712) == 1 ? anon111 : anon12);
					*anon13 = anon115;
					uint32_t anon116 = printf((uint8_t*)0x400b61);
					*anon13 = anon116;
					uint32_t anon117 = printf(*anon48 == 1 ? anon111 : anon12);
					*anon13 = anon117;
					uint32_t anon118 = printf((uint8_t*)0x400b65);
					*anon13 = anon118;
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi93 && *(uint64_t*)0x6012b8 == phi92 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi93) && phi43 == 256)
				{
					break;
				}
				if (phi43 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi93 && *(uint64_t*)0x6012b8 == phi92 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi93 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi92 && *(uint64_t*)0x6012b0 == phi93))
				{
					phi41 = *anon24;
					phi42 = *anon5;
					phi43 = phi43 - 1;
				}
			}
		}
		break;
		uint64_t anon120 = phi7 | phi8 & 0xffffffff;
		uint64_t anon119 = anon120 + 1;
		phi_in1 = anon119 & 0xffffffff00000000;
		phi_in2 = anon119;
		uint64_t anon121 = phi9 + 16;
		phi_in3 = anon121;
		phi_in4 = (uint64_t*)anon121;
		phi6 = (uint32_t)anon119;
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

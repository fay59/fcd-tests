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
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi4 = anon5;
	uint32_t phi6 = 1;
	while (true)
	{
		uint8_t* anon12;
		uint32_t* anon13;
		uint64_t phi43;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi4;
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
					uint64_t anon65;
					uint64_t phi_in52 = 0;
					uint64_t phi_in53 = 0;
					uint64_t phi54 = phi43;
					uint64_t phi55 = 0;
					uint64_t phi56 = 6296704;
					do
					{
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
								phi55 = phi55;
							}
							else 
							{
								uint64_t anon60 = phi55 << 32 >> 28;
								uint64_t* anon59 = (uint64_t*)(anon60 + 6296392);
								uint64_t anon61 = *anon59 * *(uint64_t*)(phi56 + 16);
								*anon59 = anon61;
								uint64_t* anon62 = (uint64_t*)(anon60 + 6296384);
								*anon62 = *anon62 * *(uint64_t*)(phi56 + 24);
								phi55 = phi55;
								if (anon61 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi55 = phi55;
								}
							}
						}
						else 
						{
							uint32_t anon64 = (uint32_t)phi55 + 1;
							int64_t anon63 = (__sext int64_t)anon64 << 4;
							*(uint64_t*)(anon63 + 6296384) = *(uint64_t*)(phi56 + 16);
							*(uint64_t*)(anon63 + 6296392) = *(uint64_t*)(phi56 + 24);
							phi55 = (__zext uint64_t)anon64;
						}
						uint64_t anon66 = phi58 | phi57 & 0xffffffff;
						anon65 = anon66 + 2;
						if (*anon23 >= anon65)
						{
							uint64_t anon67 = anon66 + 1;
							phi_in52 = anon67;
							phi_in53 = anon67 & 0xffffffff00000000;
							phi54 = phi54 >> 2;
							phi56 = phi56 + 16;
						}
					}
					while (*anon23 >= anon65);
					if (((uint32_t)(*anon23 >> 63) | (__zext uint32_t)(*anon23 == 0)) == 0)
					{
						uint32_t anon90;
						uint32_t phi68 = *(uint32_t*)0x601348;
						uint32_t phi69 = *(uint32_t*)0x60134c;
						uint64_t phi70 = *anon47;
						uint64_t phi71 = 0;
						uint32_t phi_in72 = 0;
						uint64_t phi73 = phi43;
						uint64_t phi74 = *anon47;
						uint64_t phi75 = *anon48;
						do
						{
							uint32_t phi76 = phi_in72;
							uint64_t phi_in77 = phi74;
							uint64_t phi78 = phi75;
							uint32_t phi_in79 = phi68;
							uint32_t phi_in80 = phi69;
							uint64_t phi81 = phi70;
							uint64_t phi82 = phi71;
							uint64_t phi83 = phi_in77;
							if ((phi73 & 2 | 1) != 1)
							{
								uint32_t anon86 = (uint32_t)phi71 + 1;
								int64_t anon85 = (__sext int64_t)anon86 << 4;
								uint64_t anon87 = (__zext uint64_t)phi69 << 32 | (__zext uint64_t)phi68;
								uint64_t anon84 = ((phi73 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon85 + 6296384) * anon87 + phi70 * *(uint64_t*)(anon85 + 6296392);
								*anon47 = anon84;
								uint64_t anon88 = anon87 * *(uint64_t*)(anon85 + 6296392);
								*anon48 = anon88;
								phi_in79 = (uint32_t)anon88;
								phi_in80 = (uint32_t)(anon88 >> 32);
								phi81 = anon84;
								phi82 = (__zext uint64_t)anon86;
								phi83 = anon84;
								phi78 = anon88;
							}
							phi51 = phi78;
							phi49 = *anon23;
							phi50 = phi83;
							phi68 = phi_in79;
							phi69 = phi_in80;
							phi70 = phi81;
							phi71 = phi82;
							uint32_t anon89 = phi76 + 1;
							phi_in72 = anon89;
							phi73 = phi73 >> 2;
							phi74 = phi83;
							phi75 = phi51;
							anon90 = (uint32_t)*anon23;
						}
						while (anon89 != anon90);
					}
					else 
					{
						phi49 = *anon23 & 0xffffffff;
						phi50 = *anon47;
						phi51 = *anon48;
					}
				}
				uint64_t phi91 = 0;
				uint64_t phi92 = phi50;
				if (phi51 != 0)
				{
					uint64_t phi93 = phi51;
					uint64_t phi_in94 = phi50;
					uint64_t phi_in95 = phi51;
					if (phi50 != 0)
					{
						uint64_t anon98;
						do
						{
							uint64_t phi96 = phi_in94;
							uint64_t phi97 = phi_in95;
							phi93 = phi96;
							anon98 = (uint64_t)((__sext int128_t)phi97 % (__sext int128_t)phi96);
							phi_in94 = anon98;
							phi_in95 = phi96;
						}
						while (anon98 != 0);
					}
					uint64_t anon101 = phi93 >> 63;
					int128_t anon100 = (__sext int128_t)((anon101 ^ phi93) - anon101);
					uint64_t anon99 = (uint64_t)((__sext int128_t)phi50 / anon100);
					*anon47 = anon99;
					uint64_t anon102 = (uint64_t)((__sext int128_t)phi51 / anon100);
					*anon48 = anon102;
					phi91 = anon102;
					phi92 = anon99;
				}
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi91 && *(uint64_t*)0x6012b0 == phi92 && phi43 == 256)
				{
					break;
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi92 && *(uint64_t*)0x6012b8 == phi91)
				{
					uint8_t* anon110;
					uint64_t phi103 = 0;
					uint64_t phi_in104 = 0;
					uint32_t phi_in105 = 1;
					uint64_t phi106 = 6296704;
					if ((((uint32_t)(phi49 >> 63) ^ 1) & (__zext uint32_t)(phi49 != 0)) != 0)
					{
						uint32_t phi108;
						uint64_t anon112;
						do
						{
							uint64_t phi107 = phi_in104;
							phi108 = phi_in105;
							anon110 = (uint8_t*)0x400b58;
							uint32_t anon109 = printf(*(uint64_t*)(phi106 | 8) == 1 ? anon110 : anon12);
							*anon13 = anon109;
							uint32_t anon111 = printf((uint8_t*)0x400b5c);
							*anon13 = anon111;
							anon112 = phi107 | (__zext uint64_t)phi108;
							if (anon112 < *anon5)
							{
								uint64_t anon113 = anon112 + 1;
								phi_in104 = anon113 & 0xffffffff00000000;
								phi_in105 = (uint32_t)anon113;
								phi106 = phi106 + 16;
							}
						}
						while (anon112 < *anon5);
						phi103 = (__sext int64_t)phi108;
					}
					uint32_t anon114 = printf(*(uint64_t*)((phi103 << 4) + 6296712) == 1 ? anon110 : anon12);
					*anon13 = anon114;
					uint32_t anon115 = printf((uint8_t*)0x400b61);
					*anon13 = anon115;
					uint32_t anon116 = printf(*anon48 == 1 ? anon110 : anon12);
					*anon13 = anon116;
					uint32_t anon117 = printf((uint8_t*)0x400b65);
					*anon13 = anon117;
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi92 && *(uint64_t*)0x6012b8 == phi91 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi92) && phi43 == 256)
				{
					break;
				}
				if (phi43 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi92 && *(uint64_t*)0x6012b8 == phi91 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi92 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi91 && *(uint64_t*)0x6012b0 == phi92))
				{
					phi41 = *anon24;
					phi42 = *anon5;
					phi43 = phi43 - 1;
				}
			}
		}
		break;
		uint64_t anon119 = phi7 | phi8 & 0xffffffff;
		uint64_t anon118 = anon119 + 1;
		phi_in1 = anon118 & 0xffffffff00000000;
		phi_in2 = anon118;
		uint64_t anon120 = phi9 + 16;
		phi_in3 = anon120;
		phi4 = (uint64_t*)anon120;
		phi6 = (uint32_t)anon118;
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

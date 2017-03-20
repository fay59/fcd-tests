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
				uint64_t* anon46 = (uint64_t*)0x601348;
				*anon46 = phi41;
				uint64_t phi47 = phi42;
				uint64_t* anon48 = (uint64_t*)0x601340;
				*anon48 = *anon23;
				uint64_t phi49 = *anon23;
				uint64_t phi50 = *anon46;
				if (((uint32_t)(phi47 >> 63) | (__zext uint32_t)(phi47 == 0)) == 0)
				{
					uint64_t anon64;
					uint64_t phi_in51 = 0;
					uint64_t phi_in52 = 0;
					uint64_t phi53 = phi43;
					uint64_t phi54 = 0;
					uint64_t phi55 = 6296704;
					do
					{
						uint64_t phi56 = phi_in51;
						uint64_t phi57 = phi_in52;
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
								phi54 = phi54;
							}
							else 
							{
								uint64_t anon59 = phi54 << 32 >> 28;
								uint64_t* anon58 = (uint64_t*)(anon59 + 6296392);
								uint64_t anon60 = *anon58 * *(uint64_t*)(phi55 + 16);
								*anon58 = anon60;
								uint64_t* anon61 = (uint64_t*)(anon59 + 6296384);
								*anon61 = *anon61 * *(uint64_t*)(phi55 + 24);
								phi54 = phi54;
								if (anon60 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi54 = phi54;
								}
							}
						}
						else 
						{
							uint32_t anon63 = (uint32_t)phi54 + 1;
							int64_t anon62 = (__sext int64_t)anon63 << 4;
							*(uint64_t*)(anon62 + 6296384) = *(uint64_t*)(phi55 + 16);
							*(uint64_t*)(anon62 + 6296392) = *(uint64_t*)(phi55 + 24);
							phi54 = (__zext uint64_t)anon63;
						}
						uint64_t anon65 = phi57 | phi56 & 0xffffffff;
						anon64 = anon65 + 2;
						if (*anon23 >= anon64)
						{
							uint64_t anon66 = anon65 + 1;
							phi_in51 = anon66;
							phi_in52 = anon66 & 0xffffffff00000000;
							phi53 = phi53 >> 2;
							phi55 = phi55 + 16;
						}
					}
					while (*anon23 >= anon64);
					if (((uint32_t)(*anon23 >> 63) | (__zext uint32_t)(*anon23 == 0)) == 0)
					{
						uint32_t anon88;
						uint32_t phi67 = *(uint32_t*)0x601348;
						uint32_t phi68 = *(uint32_t*)0x60134c;
						uint64_t phi69 = *anon48;
						uint64_t phi70 = 0;
						uint32_t phi_in71 = 0;
						uint64_t phi72 = phi43;
						uint64_t phi73 = *anon48;
						uint64_t phi74 = *anon46;
						do
						{
							uint32_t phi75 = phi_in71;
							uint64_t phi76 = phi73;
							uint64_t phi77 = phi74;
							uint32_t phi78 = phi67;
							uint32_t phi79 = phi68;
							uint64_t phi80 = phi69;
							uint64_t phi81 = phi70;
							if ((phi72 & 2 | 1) != 1)
							{
								uint32_t anon84 = (uint32_t)phi70 + 1;
								int64_t anon83 = (__sext int64_t)anon84 << 4;
								uint64_t anon85 = (__zext uint64_t)phi68 << 32 | (__zext uint64_t)phi67;
								uint64_t anon82 = ((phi72 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon83 + 6296384) * anon85 + phi69 * *(uint64_t*)(anon83 + 6296392);
								*anon48 = anon82;
								uint64_t anon86 = anon85 * *(uint64_t*)(anon83 + 6296392);
								*anon46 = anon86;
								phi78 = (uint32_t)anon86;
								phi79 = (uint32_t)(anon86 >> 32);
								phi80 = anon82;
								phi81 = (__zext uint64_t)anon84;
								phi76 = anon82;
								phi77 = anon86;
							}
							phi47 = *anon23;
							phi49 = phi76;
							phi50 = phi77;
							phi67 = phi78;
							phi68 = phi79;
							phi69 = phi80;
							phi70 = phi81;
							uint32_t anon87 = phi75 + 1;
							phi_in71 = anon87;
							phi72 = phi72 >> 2;
							phi73 = phi76;
							phi74 = phi77;
							anon88 = (uint32_t)*anon23;
						}
						while (anon87 != anon88);
					}
					else 
					{
						phi47 = *anon23 & 0xffffffff;
						phi49 = *anon48;
						phi50 = *anon46;
					}
				}
				uint64_t phi89 = 0;
				uint64_t phi90 = phi49;
				if (phi50 != 0)
				{
					uint64_t phi91 = phi50;
					uint64_t phi_in92 = phi49;
					uint64_t phi_in93 = phi50;
					if (phi49 != 0)
					{
						uint64_t anon96;
						do
						{
							uint64_t phi94 = phi_in92;
							uint64_t phi95 = phi_in93;
							phi91 = phi94;
							anon96 = (uint64_t)((__sext int128_t)phi95 % (__sext int128_t)phi94);
							phi_in92 = anon96;
							phi_in93 = phi94;
						}
						while (anon96 != 0);
					}
					uint64_t anon99 = phi91 >> 63;
					int128_t anon98 = (__sext int128_t)((anon99 ^ phi91) - anon99);
					uint64_t anon97 = (uint64_t)((__sext int128_t)phi49 / anon98);
					*anon48 = anon97;
					uint64_t anon100 = (uint64_t)((__sext int128_t)phi50 / anon98);
					*anon46 = anon100;
					phi89 = anon100;
					phi90 = anon97;
				}
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi89 && *(uint64_t*)0x6012b0 == phi90 && phi43 == 256)
				{
					break;
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi90 && *(uint64_t*)0x6012b8 == phi89)
				{
					uint8_t* anon108;
					uint64_t phi101 = 0;
					uint64_t phi_in102 = 0;
					uint32_t phi_in103 = 1;
					uint64_t phi104 = 6296704;
					if ((((uint32_t)(phi47 >> 63) ^ 1) & (__zext uint32_t)(phi47 != 0)) != 0)
					{
						uint32_t phi106;
						uint64_t anon110;
						do
						{
							uint64_t phi105 = phi_in102;
							phi106 = phi_in103;
							anon108 = (uint8_t*)0x400b58;
							uint32_t anon107 = printf(*(uint64_t*)(phi104 | 8) == 1 ? anon108 : anon12);
							*anon13 = anon107;
							uint32_t anon109 = printf((uint8_t*)0x400b5c);
							*anon13 = anon109;
							anon110 = phi105 | (__zext uint64_t)phi106;
							if (anon110 < *anon5)
							{
								uint64_t anon111 = anon110 + 1;
								phi_in102 = anon111 & 0xffffffff00000000;
								phi_in103 = (uint32_t)anon111;
								phi104 = phi104 + 16;
							}
						}
						while (anon110 < *anon5);
						phi101 = (__sext int64_t)phi106;
					}
					uint32_t anon112 = printf(*(uint64_t*)((phi101 << 4) + 6296712) == 1 ? anon108 : anon12);
					*anon13 = anon112;
					uint32_t anon113 = printf((uint8_t*)0x400b61);
					*anon13 = anon113;
					uint32_t anon114 = printf(*anon46 == 1 ? anon108 : anon12);
					*anon13 = anon114;
					uint32_t anon115 = printf((uint8_t*)0x400b65);
					*anon13 = anon115;
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi90 && *(uint64_t*)0x6012b8 == phi89 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi90) && phi43 == 256)
				{
					break;
				}
				if (phi43 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi90 && *(uint64_t*)0x6012b8 == phi89 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi90 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi89 && *(uint64_t*)0x6012b0 == phi90))
				{
					phi41 = *anon24;
					phi42 = *anon5;
					phi43 = phi43 - 1;
				}
			}
		}
		break;
		uint64_t anon117 = phi7 | phi8 & 0xffffffff;
		uint64_t anon116 = anon117 + 1;
		phi_in1 = anon116 & 0xffffffff00000000;
		phi_in2 = anon116;
		uint64_t anon118 = phi9 + 16;
		phi_in3 = anon118;
		phi4 = (uint64_t*)anon118;
		phi6 = (uint32_t)anon116;
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

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
		uint64_t phi31;
		uint64_t phi42;
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
		uint64_t phi25 = 0;
		uint64_t phi26 = 6296720;
		uint64_t* phi27 = (uint64_t*)0x601490;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon28 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi26 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi26 - 8);
			*phi27 = anon28;
			uint64_t anon29 = (uint64_t)phi27;
			uint64_t anon30 = *(uint64_t*)(phi26 - 8) * *(uint64_t*)0x6012a8;
			*(uint64_t*)(anon29 + 8) = anon30;
			phi31 = anon29;
			if (anon30 != 0)
			{
				uint64_t phi32 = anon30;
				uint64_t phi_in33 = anon28;
				uint64_t phi_in34 = anon30;
				if (anon28 != 0)
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
				*phi27 = (uint64_t)((__sext int128_t)anon28 / anon38);
				*(uint64_t*)(phi26 + 8) = (uint64_t)((__sext int128_t)anon30 / anon38);
				phi31 = phi26;
			}
		}
		uint64_t phi40 = *(uint64_t*)0x601298;
		uint64_t phi41 = *anon5;
		uint64_t anon44 = *anon5 << 1 & 0x1e;
		uint64_t anon43 = anon44 == 0 ? 0 : 4294967295 << anon44 & 0x3fffffff ^ 0x3fffffff;
		phi42 = anon43;
		if (anon43 != 255)
		{
			while (true)
			{
				uint64_t phi_in51;
				uint64_t phi52;
				uint64_t phi53;
				uint64_t phi54;
				uint64_t phi55;
				uint32_t phi56;
				uint64_t phi57;
				uint64_t phi_in101;
				uint32_t phi102;
				uint64_t phi103;
				uint64_t phi104;
				uint64_t phi_in45 = phi40;
				uint64_t* anon46 = (uint64_t*)0x601340;
				*anon46 = *anon23;
				uint64_t* anon47 = (uint64_t*)0x601348;
				*anon47 = phi_in45;
				uint64_t phi48 = phi_in45;
				uint64_t phi49 = phi41;
				uint64_t phi50 = *anon23;
				if (((uint32_t)(phi41 >> 63) | (__zext uint32_t)(phi41 == 0)) == 0)
				{
					uint64_t phi60;
					phi_in51 = 0;
					phi52 = 0;
					phi53 = 0;
					phi54 = 6296704;
					phi55 = phi42;
					phi56 = 0;
					phi57 = phi_in51;
					if ((phi55 & 2) > 1)
					{
						uint32_t anon59 = phi56 + 1;
						int64_t anon58 = (__sext int64_t)anon59 << 4;
						*(uint64_t*)(anon58 + 6296384) = *(uint64_t*)(phi54 + 16);
						*(uint64_t*)(anon58 + 6296392) = *(uint64_t*)(phi54 + 24);
						phi60 = (__zext uint64_t)anon59;
					}
					else if ((phi55 & 1) == 0)
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
						phi60 = phi53;
					}
					else 
					{
						int64_t anon62 = (__sext int64_t)phi56 << 4;
						uint64_t* anon61 = (uint64_t*)(anon62 + 6296392);
						uint64_t anon63 = *anon61 * *(uint64_t*)(phi54 + 16);
						*anon61 = anon63;
						uint64_t* anon64 = (uint64_t*)(anon62 + 6296384);
						*anon64 = *anon64 * *(uint64_t*)(phi54 + 24);
						phi60 = phi53;
						if (anon63 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi60 = phi53;
						}
					}
					phi53 = phi60;
					if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
					{
						uint32_t phi65;
						uint32_t phi67;
						uint32_t phi74;
						uint32_t phi75;
						uint32_t anon85;
						uint32_t* anon66 = (uint32_t*)0x601348;
						phi65 = *anon66;
						uint32_t* anon68 = (uint32_t*)0x60134c;
						phi67 = *anon68;
						uint64_t phi69 = 0;
						uint32_t phi_in70 = 0;
						uint64_t phi71 = phi42;
						uint64_t phi72 = *anon46;
						do
						{
							uint32_t phi73 = phi_in70;
							phi74 = phi65;
							phi75 = phi67;
							uint64_t phi76 = phi69;
							uint64_t phi77 = phi72;
							if ((phi71 & 2 | 1) != 1)
							{
								uint32_t anon80 = (uint32_t)phi69 + 1;
								int64_t anon79 = (__sext int64_t)anon80 << 4;
								uint64_t anon81 = (__zext uint64_t)phi67 << 32 | (__zext uint64_t)phi65;
								uint64_t anon78 = ((phi71 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon79 + 6296384) * anon81 + phi72 * *(uint64_t*)(anon79 + 6296392);
								*anon46 = anon78;
								uint64_t anon83 = anon81 * *(uint64_t*)(anon79 + 6296392);
								uint32_t anon82 = (uint32_t)anon83;
								*anon66 = anon82;
								uint32_t anon84 = (uint32_t)(anon83 >> 32);
								*anon68 = anon84;
								phi74 = anon82;
								phi75 = anon84;
								phi76 = (__zext uint64_t)anon80;
								phi77 = anon78;
							}
							phi50 = phi77;
							phi65 = phi74;
							phi67 = phi75;
							phi69 = phi76;
							anon85 = phi73 + 1;
							phi_in70 = anon85;
							phi71 = phi71 >> 2;
							phi72 = phi50;
						}
						while (anon85 != (uint32_t)*anon5);
						phi48 = (__zext uint64_t)phi75 << 32 | (__zext uint64_t)phi74;
						phi49 = *anon5;
					}
					else 
					{
						phi48 = *anon47;
						phi49 = *anon5 & 0xffffffff;
						phi50 = *anon46;
					}
				}
				uint64_t phi86 = 0;
				uint64_t phi87 = 0;
				uint64_t phi88 = phi50;
				if (phi48 != 0)
				{
					uint64_t phi89 = phi48;
					uint64_t phi_in90 = phi50;
					uint64_t phi_in91 = phi48;
					if (phi50 != 0)
					{
						uint64_t anon94;
						do
						{
							uint64_t phi92 = phi_in90;
							uint64_t phi93 = phi_in91;
							phi89 = phi92;
							anon94 = (uint64_t)((__sext int128_t)phi93 % (__sext int128_t)phi92);
							phi_in90 = anon94;
							phi_in91 = phi92;
						}
						while (anon94 != 0);
					}
					uint64_t anon97 = phi89 >> 63;
					int128_t anon96 = (__sext int128_t)((anon97 ^ phi89) - anon97);
					uint64_t anon95 = (uint64_t)((__sext int128_t)phi50 / anon96);
					*anon46 = anon95;
					uint64_t anon98 = (uint64_t)((__sext int128_t)phi48 / anon96);
					*anon47 = anon98;
					phi86 = anon98;
					phi87 = anon98 & 0xffffffff00000000;
					phi88 = anon95;
				}
				uint64_t anon99 = phi87 | phi86 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi88 && *(uint64_t*)0x6012b8 == anon99)
				{
					uint8_t* anon106;
					uint32_t phi111;
					uint64_t phi100 = 0;
					phi_in101 = 0;
					phi102 = 1;
					phi103 = 6296704;
					if ((((uint32_t)(phi49 >> 63) ^ 1) & (__zext uint32_t)(phi49 != 0)) != 0)
					{
						uint32_t phi107;
						phi104 = phi_in101;
						if (*(uint64_t*)(phi103 | 8) == 1)
						{
							anon106 = (uint8_t*)0x400b58;
							uint32_t anon105 = printf(anon106);
							phi107 = anon105;
						}
						else 
						{
							uint32_t anon108 = printf(anon12);
							phi107 = anon108;
						}
						*anon13 = phi107;
						uint32_t anon109 = printf((uint8_t*)0x400b5c);
						*anon13 = anon109;
						phi100 = (__sext int64_t)phi102;
					}
					if (*(uint64_t*)((phi100 << 4) + 6296712) == 1)
					{
						uint32_t anon110 = printf(anon106);
						phi111 = anon110;
					}
					else 
					{
						uint32_t anon112 = printf(anon12);
						phi111 = anon112;
					}
					*anon13 = phi111;
					uint32_t anon113 = printf((uint8_t*)0x400b61);
					*anon13 = anon113;
					if (*anon47 == 1)
					{
						uint32_t anon114 = printf(anon106);
						*anon13 = anon114;
					}
					else 
					{
						uint32_t anon115 = printf(anon12);
						*anon13 = anon115;
					}
					uint32_t anon116 = printf((uint8_t*)0x400b65);
					*anon13 = anon116;
				}
				if (phi42 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi88 && *(uint64_t*)0x6012b8 == anon99 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi88 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon99 && *(uint64_t*)0x6012b0 == phi88))
				{
					phi40 = *anon24;
					phi41 = *anon5;
					phi42 = phi42 - 1;
				}
				uint64_t anon117 = (phi104 | (__zext uint64_t)phi102) + 1;
				phi_in101 = anon117 & 0xffffffff00000000;
				phi102 = (uint32_t)anon117;
				phi103 = phi103 + 16;
				uint64_t anon118 = (phi52 | phi57 & 0xffffffff) + 1;
				phi_in51 = anon118;
				phi52 = anon118 & 0xffffffff00000000;
				phi54 = phi54 + 16;
				phi55 = phi55 >> 2;
				phi56 = (uint32_t)phi53;
				break;
			}
		}
		phi25 = phi25 + 1;
		uint64_t anon119 = phi31 + 16;
		phi26 = anon119;
		phi27 = (uint64_t*)anon119;
		break;
		uint64_t anon120 = (phi7 | phi8 & 0xffffffff) + 1;
		phi_in1 = anon120 & 0xffffffff00000000;
		phi_in2 = anon120;
		uint64_t anon121 = phi9 + 16;
		phi_in3 = anon121;
		phi4 = (uint64_t*)anon121;
		phi6 = (uint32_t)anon120;
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

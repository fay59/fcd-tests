#include "tests/bin/1996-schweikh2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195317);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601218);
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
	uint32_t dispatch7 = 0;
	while (true)
	{
		uint64_t phi8;
		uint64_t phi9;
		uint64_t phi10;
		uint8_t* anon13;
		uint32_t* anon14;
		uint64_t phi33;
		uint64_t phi44;
		while (true)
		{
			uint64_t* phi11;
			uint64_t* anon15;
			uint64_t phi16;
			uint64_t phi_in17;
			uint64_t phi_in18;
			uint64_t anon21;
			if (dispatch7 == 0)
			{
				phi8 = phi_in1;
				phi9 = phi_in2;
				phi10 = phi_in3;
				phi11 = phi4;
				if ((uint32_t)arg1 > phi6)
				{
					anon13 = (uint8_t*)0x400b54;
					uint32_t anon12 = sscanf(*(uint8_t**)((phi9 << 3) + arg2), anon13);
					anon14 = (uint32_t*)0x601300;
					*anon14 = anon12;
					phi11 = (uint64_t*)phi10;
				}
				anon15 = (uint64_t*)(phi10 | 8);
				if (*anon15 == 0)
				{
					break;
				}
				else 
				{
					phi16 = *anon15;
					phi_in17 = *phi11;
					phi_in18 = *anon15;
				}
			}
			if (dispatch7 == 1 || *anon15 != 0 && *phi11 != 0 && dispatch7 == 0)
			{
				uint64_t phi19 = phi_in17;
				uint64_t phi20 = phi_in18;
				phi16 = phi19;
				anon21 = (uint64_t)((__sext int128_t)phi20 % (__sext int128_t)phi19);
				phi_in17 = anon21;
				phi_in18 = phi19;
				dispatch7 = 1;
			}
			if (dispatch7 == 1 && anon21 == 0 || *anon15 != 0 && *phi11 != 0 && dispatch7 == 0 && anon21 == 0 || *anon15 != 0 && dispatch7 == 0 && *phi11 == 0)
			{
				uint64_t anon23 = phi16 >> 63;
				int128_t anon22 = (__sext int128_t)((anon23 ^ phi16) - anon23);
				*phi11 = (uint64_t)((__sext int128_t)*phi11 / anon22);
				*anon15 = (uint64_t)((__sext int128_t)*anon15 / anon22);
				break;
			}
		}
		uint64_t* anon24 = (uint64_t*)0x601480;
		*anon24 = *(uint64_t*)0x601290;
		uint64_t* anon25 = (uint64_t*)0x601488;
		*anon25 = *(uint64_t*)0x601298;
		uint64_t phi26 = 0;
		uint64_t phi27 = 6296720;
		uint64_t* phi28 = (uint64_t*)0x601490;
		uint32_t dispatch29 = 0;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			while (true)
			{
				uint64_t anon30;
				uint64_t anon32;
				uint64_t phi34;
				uint64_t phi_in35;
				uint64_t phi_in36;
				uint64_t anon39;
				if (dispatch29 == 0)
				{
					anon30 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi27 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi27 - 8);
					*phi28 = anon30;
					uint64_t anon31 = (uint64_t)phi28;
					anon32 = *(uint64_t*)(phi27 - 8) * *(uint64_t*)0x6012a8;
					*(uint64_t*)(anon31 + 8) = anon32;
					phi33 = anon31;
					if (anon32 == 0)
					{
						break;
					}
					else 
					{
						phi34 = anon32;
						phi_in35 = anon30;
						phi_in36 = anon32;
					}
				}
				if (dispatch29 == 1 || anon32 != 0 && anon30 != 0 && dispatch29 == 0)
				{
					uint64_t phi37 = phi_in35;
					uint64_t phi38 = phi_in36;
					phi34 = phi37;
					anon39 = (uint64_t)((__sext int128_t)phi38 % (__sext int128_t)phi37);
					phi_in35 = anon39;
					phi_in36 = phi37;
					dispatch29 = 1;
				}
				if (dispatch29 == 1 && anon39 == 0 || anon32 != 0 && anon30 != 0 && dispatch29 == 0 && anon39 == 0 || anon32 != 0 && dispatch29 == 0 && anon30 == 0)
				{
					uint64_t anon41 = phi34 >> 63;
					int128_t anon40 = (__sext int128_t)((anon41 ^ phi34) - anon41);
					*phi28 = (uint64_t)((__sext int128_t)anon30 / anon40);
					*(uint64_t*)(phi27 + 8) = (uint64_t)((__sext int128_t)anon32 / anon40);
					phi33 = phi27;
					break;
				}
			}
		}
		uint64_t phi42 = *(uint64_t*)0x601298;
		uint64_t phi_in43 = *anon5;
		uint64_t anon46 = *anon5 << 1 & 0x1e;
		uint64_t anon45 = anon46 == 0 ? 0 : 4294967295 << anon46 & 0x3fffffff ^ 0x3fffffff;
		phi44 = anon45;
		uint32_t dispatch47 = 0;
		if (anon45 != 255)
		{
			while (true)
			{
				uint64_t* anon50;
				uint64_t* anon51;
				uint64_t phi52;
				uint64_t phi53;
				uint64_t phi54;
				uint32_t anon55;
				uint64_t phi_in56;
				uint64_t phi57;
				uint64_t phi58;
				uint64_t phi59;
				uint64_t phi60;
				uint32_t phi61;
				uint64_t phi62;
				uint64_t phi65;
				uint32_t phi73;
				uint32_t* anon74;
				uint32_t phi75;
				uint32_t* anon76;
				uint64_t phi77;
				uint32_t phi_in78;
				uint64_t phi79;
				uint64_t phi80;
				uint32_t anon92;
				uint64_t phi93;
				uint64_t phi94;
				uint64_t phi95;
				uint64_t phi96;
				uint64_t phi_in97;
				uint64_t phi_in98;
				uint64_t anon101;
				uint64_t phi107;
				uint64_t phi_in108;
				uint32_t phi109;
				uint64_t phi110;
				uint64_t phi112;
				uint8_t* anon114;
				if (dispatch47 == 0)
				{
					uint64_t phi_in48 = phi42;
					uint64_t phi49 = phi_in43;
					anon50 = (uint64_t*)0x601340;
					*anon50 = *anon24;
					anon51 = (uint64_t*)0x601348;
					*anon51 = phi_in48;
					phi52 = phi_in48;
					phi53 = phi49;
					phi54 = *anon24;
					anon55 = (uint32_t)(phi49 >> 63) | (__zext uint32_t)(phi49 == 0);
					if (anon55 == 0)
					{
						phi_in56 = 0;
						phi57 = 0;
						phi58 = 0;
						phi59 = 6296704;
						phi60 = phi44;
						phi61 = 0;
					}
				}
				if (dispatch47 == 1 || dispatch47 == 0 && anon55 == 0)
				{
					phi62 = phi_in56;
					if ((phi60 & 2) > 1)
					{
						uint32_t anon64 = phi61 + 1;
						int64_t anon63 = (__sext int64_t)anon64 << 4;
						*(uint64_t*)(anon63 + 6296384) = *(uint64_t*)(phi59 + 16);
						*(uint64_t*)(anon63 + 6296392) = *(uint64_t*)(phi59 + 24);
						phi65 = (__zext uint64_t)anon64;
					}
					else if ((phi60 & 1) == 0)
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
						phi65 = phi58;
					}
					else 
					{
						int64_t anon67 = (__sext int64_t)phi61 << 4;
						uint64_t* anon66 = (uint64_t*)(anon67 + 6296392);
						uint64_t anon68 = *anon66 * *(uint64_t*)(phi59 + 16);
						*anon66 = anon68;
						uint64_t* anon69 = (uint64_t*)(anon67 + 6296384);
						*anon69 = *anon69 * *(uint64_t*)(phi59 + 24);
						phi65 = phi58;
						if (anon68 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi65 = phi58;
						}
					}
				}
				uint64_t anon71 = phi57 | phi62 & 0xffffffff;
				uint64_t anon70 = anon71 + 2;
				uint32_t anon72 = (uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0);
				if (*anon5 < anon70 && anon72 == 0 && (dispatch47 == 1 || dispatch47 == 0 && anon55 == 0))
				{
					anon74 = (uint32_t*)0x601348;
					phi73 = *anon74;
					anon76 = (uint32_t*)0x60134c;
					phi75 = *anon76;
					phi77 = 0;
					phi_in78 = 0;
					phi79 = phi44;
					phi80 = *anon50;
				}
				if (dispatch47 == 4 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0)
				{
					uint32_t phi81 = phi_in78;
					uint32_t phi82 = phi73;
					phi75 = phi75;
					uint64_t phi83 = phi77;
					uint64_t phi84 = phi80;
					if ((phi79 & 2 | 1) != 1)
					{
						uint32_t anon87 = (uint32_t)phi77 + 1;
						int64_t anon86 = (__sext int64_t)anon87 << 4;
						uint64_t anon88 = (__zext uint64_t)phi75 << 32 | (__zext uint64_t)phi73;
						uint64_t anon85 = ((phi79 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon86 + 6296384) * anon88 + phi80 * *(uint64_t*)(anon86 + 6296392);
						*anon50 = anon85;
						uint64_t anon90 = anon88 * *(uint64_t*)(anon86 + 6296392);
						uint32_t anon89 = (uint32_t)anon90;
						*anon74 = anon89;
						uint32_t anon91 = (uint32_t)(anon90 >> 32);
						*anon76 = anon91;
						phi82 = anon89;
						phi75 = anon91;
						phi83 = (__zext uint64_t)anon87;
						phi84 = anon85;
					}
					phi73 = phi82;
					phi77 = phi83;
					phi80 = phi84;
					anon92 = phi81 + 1;
					phi_in78 = anon92;
					phi79 = phi79 >> 2;
					dispatch47 = 4;
				}
				if (anon92 == (uint32_t)*anon5 && (dispatch47 == 4 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0))
				{
					phi52 = (__zext uint64_t)phi75 << 32 | (__zext uint64_t)phi73;
					phi53 = *anon5;
					phi54 = phi80;
				}
				if (anon72 != 0 && *anon5 < anon70 && (dispatch47 == 1 || dispatch47 == 0 && anon55 == 0))
				{
					phi52 = *anon51;
					phi53 = *anon5 & 0xffffffff;
					phi54 = *anon50;
				}
				if (dispatch47 == 4 && anon92 == (uint32_t)*anon5 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 || anon55 != 0 && dispatch47 == 0)
				{
					phi93 = 0;
					phi94 = 0;
					phi95 = phi54;
				}
				if (phi52 != 0 && (dispatch47 == 4 && anon92 == (uint32_t)*anon5 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 || anon55 != 0 && dispatch47 == 0))
				{
					phi96 = phi52;
					phi_in97 = phi54;
					phi_in98 = phi52;
				}
				if (dispatch47 == 2 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0)
				{
					uint64_t phi99 = phi_in97;
					uint64_t phi100 = phi_in98;
					phi96 = phi99;
					anon101 = (uint64_t)((__sext int128_t)phi100 % (__sext int128_t)phi99);
					phi_in97 = anon101;
					phi_in98 = phi99;
					dispatch47 = 2;
				}
				if (dispatch47 == 2 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0)
				{
					uint64_t anon104 = phi96 >> 63;
					int128_t anon103 = (__sext int128_t)((anon104 ^ phi96) - anon104);
					uint64_t anon102 = (uint64_t)((__sext int128_t)phi54 / anon103);
					*anon50 = anon102;
					uint64_t anon105 = (uint64_t)((__sext int128_t)phi52 / anon103);
					*anon51 = anon105;
					phi93 = anon105;
					phi94 = anon105 & 0xffffffff00000000;
					phi95 = anon102;
				}
				uint64_t anon106 = phi94 | phi93 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && *(uint64_t*)0x6012b0 == phi95 && (dispatch47 == 2 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0 || dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 || anon55 != 0 && dispatch47 == 0 && phi52 == 0) && phi44 == 256)
				{
					break;
				}
				if (dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106)
				{
					phi107 = 0;
					phi_in108 = 0;
					phi109 = 1;
					phi110 = 6296704;
				}
				uint32_t anon111 = ((uint32_t)(phi53 >> 63) ^ 1) & (__zext uint32_t)(phi53 != 0);
				if (dispatch47 == 3 || anon111 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && anon111 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106)
				{
					phi112 = phi_in108;
					if (*(uint64_t*)(phi110 | 8) == 1)
					{
						anon114 = (uint8_t*)0x400b58;
						uint32_t anon113 = printf(anon114);
						*anon14 = anon113;
					}
					else 
					{
						uint32_t anon115 = printf(anon13);
						*anon14 = anon115;
					}
					uint32_t anon116 = printf((uint8_t*)0x400b5c);
					*anon14 = anon116;
					phi107 = (__sext int64_t)phi109;
				}
				uint64_t anon117 = phi112 | (__zext uint64_t)phi109;
				if (anon117 >= *anon5 && dispatch47 == 3 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0)
				{
					uint32_t phi119;
					if (*(uint64_t*)((phi107 << 4) + 6296712) == 1)
					{
						uint32_t anon118 = printf(anon114);
						phi119 = anon118;
					}
					else 
					{
						uint32_t anon120 = printf(anon13);
						phi119 = anon120;
					}
					*anon14 = phi119;
					uint32_t anon121 = printf((uint8_t*)0x400b61);
					*anon14 = anon121;
					if (*anon51 == 1)
					{
						uint32_t anon122 = printf(anon114);
						*anon14 = anon122;
					}
					else 
					{
						uint32_t anon123 = printf(anon13);
						*anon14 = anon123;
					}
					uint32_t anon124 = printf((uint8_t*)0x400b65);
					*anon14 = anon124;
				}
				if ((anon117 >= *anon5 && dispatch47 == 3 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 2 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon101 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && phi54 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && phi52 == 0) && phi44 == 256)
				{
					break;
				}
				if (phi44 != 256 && (anon117 >= *anon5 && dispatch47 == 3 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && anon117 >= *anon5 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && phi52 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && phi52 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon72 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || anon55 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 && anon111 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 2 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon101 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && phi54 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi95 && dispatch47 == 0 && phi52 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon106 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95))
				{
					phi42 = *anon25;
					phi_in43 = *anon5;
					phi44 = phi44 - 1;
					dispatch47 = 0;
				}
				if (anon117 < *anon5 && (dispatch47 == 3 || anon111 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && phi54 != 0 && anon111 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || phi52 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && phi52 != 0 && anon111 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon72 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || anon55 != 0 && anon111 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 2 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && phi54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon101 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && phi52 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && phi54 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 4 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && anon72 == 0 && anon92 == (uint32_t)*anon5 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 1 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon72 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && anon55 == 0 && *anon5 < anon70 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106 || anon55 != 0 && *(uint64_t*)0x6012b8 != 0 && anon111 != 0 && dispatch47 == 0 && phi52 == 0 && *(uint64_t*)0x6012b0 == phi95 && *(uint64_t*)0x6012b8 == anon106))
				{
					uint64_t anon125 = anon117 + 1;
					phi_in108 = anon125 & 0xffffffff00000000;
					phi109 = (uint32_t)anon125;
					phi110 = phi110 + 16;
					dispatch47 = 3;
				}
				if (*anon5 >= anon70 && (dispatch47 == 1 || dispatch47 == 0 && anon55 == 0))
				{
					uint64_t anon126 = anon71 + 1;
					phi_in56 = anon126;
					phi57 = anon126 & 0xffffffff00000000;
					phi58 = phi65;
					phi59 = phi59 + 16;
					phi60 = phi60 >> 2;
					phi61 = (uint32_t)phi65;
					dispatch47 = 1;
				}
			}
		}
		phi26 = phi26 + 1;
		uint64_t anon127 = phi33 + 16;
		phi27 = anon127;
		phi28 = (uint64_t*)anon127;
		dispatch29 = 0;
		uint64_t anon128 = (phi8 | phi9 & 0xffffffff) + 1;
		phi_in1 = anon128 & 0xffffffff00000000;
		phi_in2 = anon128;
		uint64_t anon129 = phi10 + 16;
		phi_in3 = anon129;
		phi4 = (uint64_t*)anon129;
		phi6 = (uint32_t)anon128;
		dispatch7 = 0;
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

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
				phi11 = phi_in4;
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
				uint64_t* anon48;
				uint64_t* anon50;
				uint64_t phi51;
				uint64_t phi52;
				uint64_t phi53;
				uint32_t anon54;
				uint64_t phi_in55;
				uint64_t phi56;
				uint64_t phi57;
				uint64_t phi58;
				uint64_t phi59;
				uint32_t phi60;
				uint64_t phi61;
				uint64_t phi64;
				uint32_t phi72;
				uint32_t* anon73;
				uint32_t phi74;
				uint32_t* anon75;
				uint64_t phi76;
				uint32_t phi_in77;
				uint64_t phi78;
				uint64_t phi79;
				uint32_t phi83;
				uint64_t phi_in92;
				uint32_t anon93;
				uint64_t phi94;
				uint64_t phi95;
				uint64_t phi96;
				uint64_t phi97;
				uint64_t phi_in98;
				uint64_t phi_in99;
				uint64_t anon102;
				uint64_t phi108;
				uint64_t phi_in109;
				uint32_t phi110;
				uint64_t phi111;
				uint64_t phi113;
				uint8_t* anon115;
				if (dispatch47 == 0)
				{
					anon48 = (uint64_t*)0x601348;
					*anon48 = phi42;
					uint64_t phi49 = phi_in43;
					anon50 = (uint64_t*)0x601340;
					*anon50 = *anon24;
					phi51 = *anon48;
					phi52 = phi49;
					phi53 = *anon24;
					anon54 = (uint32_t)(phi49 >> 63) | (__zext uint32_t)(phi49 == 0);
					if (anon54 == 0)
					{
						phi_in55 = 0;
						phi56 = 0;
						phi57 = 0;
						phi58 = 6296704;
						phi59 = phi44;
						phi60 = 0;
					}
				}
				if (dispatch47 == 1 || dispatch47 == 0 && anon54 == 0)
				{
					phi61 = phi_in55;
					if ((phi59 & 2) > 1)
					{
						uint32_t anon63 = phi60 + 1;
						int64_t anon62 = (__sext int64_t)anon63 << 4;
						*(uint64_t*)(anon62 + 6296384) = *(uint64_t*)(phi58 + 16);
						*(uint64_t*)(anon62 + 6296392) = *(uint64_t*)(phi58 + 24);
						phi64 = (__zext uint64_t)anon63;
					}
					else if ((phi59 & 1) == 0)
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
						phi64 = phi57;
					}
					else 
					{
						int64_t anon66 = (__sext int64_t)phi60 << 4;
						uint64_t* anon65 = (uint64_t*)(anon66 + 6296392);
						uint64_t anon67 = *anon65 * *(uint64_t*)(phi58 + 16);
						*anon65 = anon67;
						uint64_t* anon68 = (uint64_t*)(anon66 + 6296384);
						*anon68 = *anon68 * *(uint64_t*)(phi58 + 24);
						phi64 = phi57;
						if (anon67 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi64 = phi57;
						}
					}
				}
				uint64_t anon70 = phi56 | phi61 & 0xffffffff;
				uint64_t anon69 = anon70 + 2;
				uint32_t anon71 = (uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0);
				if (*anon5 < anon69 && anon71 == 0 && (dispatch47 == 1 || dispatch47 == 0 && anon54 == 0))
				{
					anon73 = (uint32_t*)0x601348;
					phi72 = *anon73;
					anon75 = (uint32_t*)0x60134c;
					phi74 = *anon75;
					phi76 = 0;
					phi_in77 = 0;
					phi78 = phi44;
					phi79 = *anon50;
				}
				if (dispatch47 == 4 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0)
				{
					uint32_t phi80 = phi_in77;
					uint64_t phi81 = phi79;
					uint32_t phi82 = phi72;
					phi83 = phi74;
					uint64_t phi84 = phi76;
					if ((phi78 & 2 | 1) != 1)
					{
						uint32_t anon87 = (uint32_t)phi76 + 1;
						int64_t anon86 = (__sext int64_t)anon87 << 4;
						uint64_t anon88 = (__zext uint64_t)phi74 << 32 | (__zext uint64_t)phi72;
						uint64_t anon85 = ((phi78 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon86 + 6296384) * anon88 + phi81 * *(uint64_t*)(anon86 + 6296392);
						*anon50 = anon85;
						uint64_t anon90 = anon88 * *(uint64_t*)(anon86 + 6296392);
						uint32_t anon89 = (uint32_t)anon90;
						*anon73 = anon89;
						uint32_t anon91 = (uint32_t)(anon90 >> 32);
						*anon75 = anon91;
						phi82 = anon89;
						phi83 = anon91;
						phi84 = (__zext uint64_t)anon87;
						phi81 = anon85;
					}
					phi72 = phi82;
					phi76 = phi84;
					phi_in92 = phi81;
					phi74 = phi83;
					anon93 = phi80 + 1;
					phi_in77 = anon93;
					phi78 = phi78 >> 2;
					phi79 = phi_in92;
					dispatch47 = 4;
				}
				if (anon93 == (uint32_t)*anon5 && (dispatch47 == 4 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0))
				{
					phi51 = (__zext uint64_t)phi83 << 32 | (__zext uint64_t)phi72;
					phi52 = *anon5;
					phi53 = phi_in92;
				}
				if (anon71 != 0 && *anon5 < anon69 && (dispatch47 == 1 || dispatch47 == 0 && anon54 == 0))
				{
					phi51 = *anon48;
					phi52 = *anon5 & 0xffffffff;
					phi53 = *anon50;
				}
				if (dispatch47 == 4 && anon93 == (uint32_t)*anon5 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 || anon54 != 0 && dispatch47 == 0)
				{
					phi94 = 0;
					phi95 = 0;
					phi96 = phi53;
				}
				if (phi51 != 0 && (dispatch47 == 4 && anon93 == (uint32_t)*anon5 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 || anon54 != 0 && dispatch47 == 0))
				{
					phi97 = phi51;
					phi_in98 = phi53;
					phi_in99 = phi51;
				}
				if (dispatch47 == 2 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0)
				{
					uint64_t phi100 = phi_in98;
					uint64_t phi101 = phi_in99;
					phi97 = phi100;
					anon102 = (uint64_t)((__sext int128_t)phi101 % (__sext int128_t)phi100);
					phi_in98 = anon102;
					phi_in99 = phi100;
					dispatch47 = 2;
				}
				if (dispatch47 == 2 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0)
				{
					uint64_t anon105 = phi97 >> 63;
					int128_t anon104 = (__sext int128_t)((anon105 ^ phi97) - anon105);
					uint64_t anon103 = (uint64_t)((__sext int128_t)phi53 / anon104);
					*anon50 = anon103;
					uint64_t anon106 = (uint64_t)((__sext int128_t)phi51 / anon104);
					*anon48 = anon106;
					phi94 = anon106;
					phi95 = anon106 & 0xffffffff00000000;
					phi96 = anon103;
				}
				uint64_t anon107 = phi95 | phi94 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && *(uint64_t*)0x6012b0 == phi96 && (dispatch47 == 2 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0 || dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 || anon54 != 0 && dispatch47 == 0 && phi51 == 0) && phi44 == 256)
				{
					break;
				}
				if (dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107)
				{
					phi108 = 0;
					phi_in109 = 0;
					phi110 = 1;
					phi111 = 6296704;
				}
				uint32_t anon112 = ((uint32_t)(phi52 >> 63) ^ 1) & (__zext uint32_t)(phi52 != 0);
				if (dispatch47 == 3 || anon112 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && anon112 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107)
				{
					uint32_t phi116;
					phi113 = phi_in109;
					if (*(uint64_t*)(phi111 | 8) == 1)
					{
						anon115 = (uint8_t*)0x400b58;
						uint32_t anon114 = printf(anon115);
						phi116 = anon114;
					}
					else 
					{
						uint32_t anon117 = printf(anon13);
						phi116 = anon117;
					}
					*anon14 = phi116;
					uint32_t anon118 = printf((uint8_t*)0x400b5c);
					*anon14 = anon118;
					phi108 = (__sext int64_t)phi110;
				}
				uint64_t anon119 = phi113 | (__zext uint64_t)phi110;
				if (anon119 >= *anon5 && dispatch47 == 3 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0)
				{
					uint32_t phi121;
					if (*(uint64_t*)((phi108 << 4) + 6296712) == 1)
					{
						uint32_t anon120 = printf(anon115);
						phi121 = anon120;
					}
					else 
					{
						uint32_t anon122 = printf(anon13);
						phi121 = anon122;
					}
					*anon14 = phi121;
					uint32_t anon123 = printf((uint8_t*)0x400b61);
					*anon14 = anon123;
					if (*anon48 == 1)
					{
						uint32_t anon124 = printf(anon115);
						*anon14 = anon124;
					}
					else 
					{
						uint32_t anon125 = printf(anon13);
						*anon14 = anon125;
					}
					uint32_t anon126 = printf((uint8_t*)0x400b65);
					*anon14 = anon126;
				}
				if ((anon119 >= *anon5 && dispatch47 == 3 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 2 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon102 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && phi53 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && phi51 == 0) && phi44 == 256)
				{
					break;
				}
				if (phi44 != 256 && (anon119 >= *anon5 && dispatch47 == 3 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && anon119 >= *anon5 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && phi51 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && phi51 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon71 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || anon54 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 && anon112 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 2 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon102 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && phi53 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi96 && dispatch47 == 0 && phi51 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon107 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96))
				{
					phi42 = *anon25;
					phi_in43 = *anon5;
					phi44 = phi44 - 1;
					dispatch47 = 0;
				}
				if (anon119 < *anon5 && (dispatch47 == 3 || anon112 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && phi53 != 0 && anon112 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || phi51 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && phi51 != 0 && anon112 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon71 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || anon54 != 0 && anon112 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 2 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && phi53 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon102 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && phi51 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && phi53 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 4 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && anon71 == 0 && anon93 == (uint32_t)*anon5 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 1 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon71 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && anon54 == 0 && *anon5 < anon69 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107 || anon54 != 0 && *(uint64_t*)0x6012b8 != 0 && anon112 != 0 && dispatch47 == 0 && phi51 == 0 && *(uint64_t*)0x6012b0 == phi96 && *(uint64_t*)0x6012b8 == anon107))
				{
					uint64_t anon127 = anon119 + 1;
					phi_in109 = anon127 & 0xffffffff00000000;
					phi110 = (uint32_t)anon127;
					phi111 = phi111 + 16;
					dispatch47 = 3;
				}
				if (*anon5 >= anon69 && (dispatch47 == 1 || dispatch47 == 0 && anon54 == 0))
				{
					uint64_t anon128 = anon70 + 1;
					phi_in55 = anon128;
					phi56 = anon128 & 0xffffffff00000000;
					phi57 = phi64;
					phi58 = phi58 + 16;
					phi59 = phi59 >> 2;
					phi60 = (uint32_t)phi64;
					dispatch47 = 1;
				}
			}
		}
		phi26 = phi26 + 1;
		uint64_t anon129 = phi33 + 16;
		phi27 = anon129;
		phi28 = (uint64_t*)anon129;
		dispatch29 = 0;
		uint64_t anon130 = (phi8 | phi9 & 0xffffffff) + 1;
		phi_in1 = anon130 & 0xffffffff00000000;
		phi_in2 = anon130;
		uint64_t anon131 = phi10 + 16;
		phi_in3 = anon131;
		phi_in4 = (uint64_t*)anon131;
		phi6 = (uint32_t)anon130;
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

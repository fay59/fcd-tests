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
	uint64_t* phi_in4;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi_in4 = anon5;
	uint32_t phi_in6 = 1;
	uint32_t dispatch7 = 0;
	while (true)
	{
		uint64_t phi10;
		uint64_t phi50;
		uint32_t* anon16;
		uint64_t phi34;
		uint64_t phi_in53;
		uint8_t* anon15;
		uint64_t phi8;
		uint64_t phi9;
		while (true)
		{
			uint64_t phi_in19;
			uint64_t* phi17;
			uint64_t anon24;
			uint64_t phi_in21;
			uint64_t* anon18;
			uint64_t phi_in20;
			if (dispatch7 == 0)
			{
				phi8 = phi_in1;
				phi9 = phi_in2;
				phi10 = phi_in3;
				uint64_t* phi11 = phi_in4;
				uint32_t phi12 = phi_in6;
				uint64_t* phi_in13 = phi11;
				if ((uint32_t)arg1 > phi12)
				{
					anon15 = (uint8_t*)0x400b54;
					uint32_t anon14 = sscanf(*(uint8_t**)((phi9 << 3) + arg2), anon15);
					anon16 = (uint32_t*)0x601300;
					*anon16 = anon14;
					phi_in13 = (uint64_t*)phi10;
				}
				phi17 = phi_in13;
				anon18 = (uint64_t*)(phi10 | 8);
				if (*anon18 == 0)
				{
					break;
				}
				else 
				{
					phi_in19 = *anon18;
					phi_in20 = *phi17;
					phi_in21 = *anon18;
				}
			}
			if (dispatch7 == 1 || *anon18 != 0 && *phi17 != 0 && dispatch7 == 0)
			{
				uint64_t phi22 = phi_in20;
				uint64_t phi23 = phi_in21;
				phi_in19 = phi22;
				anon24 = (uint64_t)((__sext int128_t)phi23 % (__sext int128_t)phi22);
				phi_in20 = anon24;
				phi_in21 = phi22;
				dispatch7 = 1;
			}
			if (dispatch7 == 1 && anon24 == 0 || *anon18 != 0 && *phi17 != 0 && dispatch7 == 0 && anon24 == 0 || *anon18 != 0 && dispatch7 == 0 && *phi17 == 0)
			{
				uint64_t phi25 = phi_in19;
				uint64_t anon27 = phi25 >> 63;
				int128_t anon26 = (__sext int128_t)((anon27 ^ phi25) - anon27);
				*phi17 = (uint64_t)((__sext int128_t)*phi17 / anon26);
				*anon18 = (uint64_t)((__sext int128_t)*anon18 / anon26);
				break;
			}
		}
		uint64_t* anon28 = (uint64_t*)0x601480;
		*anon28 = *(uint64_t*)0x601290;
		uint64_t* anon29 = (uint64_t*)0x601488;
		*anon29 = *(uint64_t*)0x601298;
		uint64_t phi_in30 = 0;
		uint64_t phi_in31 = 6296720;
		uint64_t* phi_in32 = (uint64_t*)0x601490;
		uint32_t dispatch33 = 0;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t phi_in40;
			while (true)
			{
				uint64_t phi_in41;
				uint64_t phi_in43;
				uint64_t anon37;
				uint64_t* phi36;
				uint64_t anon39;
				uint64_t phi35;
				uint64_t phi_in42;
				uint64_t anon46;
				if (dispatch33 == 0)
				{
					phi34 = phi_in30;
					phi35 = phi_in31;
					phi36 = phi_in32;
					anon37 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi35 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi35 - 8);
					*phi36 = anon37;
					uint64_t anon38 = (uint64_t)phi36;
					anon39 = *(uint64_t*)(phi35 - 8) * *(uint64_t*)0x6012a8;
					*(uint64_t*)(anon38 + 8) = anon39;
					phi_in40 = anon38;
					if (anon39 == 0)
					{
						break;
					}
					else 
					{
						phi_in41 = anon39;
						phi_in42 = anon37;
						phi_in43 = anon39;
					}
				}
				if (dispatch33 == 1 || anon39 != 0 && anon37 != 0 && dispatch33 == 0)
				{
					uint64_t phi44 = phi_in42;
					uint64_t phi45 = phi_in43;
					phi_in41 = phi44;
					anon46 = (uint64_t)((__sext int128_t)phi45 % (__sext int128_t)phi44);
					phi_in42 = anon46;
					phi_in43 = phi44;
					dispatch33 = 1;
				}
				if (dispatch33 == 1 && anon46 == 0 || anon39 != 0 && anon37 != 0 && dispatch33 == 0 && anon46 == 0 || anon39 != 0 && dispatch33 == 0 && anon37 == 0)
				{
					uint64_t phi47 = phi_in41;
					uint64_t anon49 = phi47 >> 63;
					int128_t anon48 = (__sext int128_t)((anon49 ^ phi47) - anon49);
					*phi36 = (uint64_t)((__sext int128_t)anon37 / anon48);
					*(uint64_t*)(phi35 + 8) = (uint64_t)((__sext int128_t)anon39 / anon48);
					phi_in40 = phi35;
					break;
				}
			}
			phi50 = phi_in40;
		}
		uint64_t phi_in51 = *(uint64_t*)0x601298;
		uint64_t phi_in52 = *anon5;
		uint64_t anon55 = *anon5 << 1 & 0x1e;
		uint64_t anon54 = anon55 == 0 ? 0 : 4294967295 << anon55 & 0x3fffffff ^ 0x3fffffff;
		phi_in53 = anon54;
		uint32_t dispatch56 = 0;
		if (anon54 != 255)
		{
			while (true)
			{
				uint8_t* anon149;
				uint64_t phi147;
				uint32_t phi146;
				uint64_t phi145;
				uint32_t phi_in142;
				uint64_t phi_in140;
				uint64_t phi138;
				uint64_t phi136;
				uint64_t anon130;
				uint64_t phi_in125;
				uint64_t phi_in123;
				uint64_t phi_in122;
				uint64_t phi_in126;
				uint64_t phi120;
				uint64_t phi117;
				uint32_t phi115;
				uint64_t phi_in141;
				uint64_t phi_in93;
				uint32_t phi_in89;
				uint64_t phi_in69;
				uint64_t phi85;
				uint64_t phi73;
				uint32_t phi114;
				uint32_t phi_in71;
				uint64_t phi_in68;
				uint64_t phi119;
				uint64_t phi_in67;
				uint64_t phi_in66;
				uint32_t phi_in91;
				uint64_t phi_in64;
				uint64_t phi_in63;
				uint64_t phi76;
				uint64_t phi72;
				uint64_t phi_in62;
				uint64_t* anon61;
				uint64_t phi137;
				uint64_t phi_in127;
				uint32_t anon88;
				uint64_t* anon60;
				uint32_t* anon92;
				uint64_t phi59;
				uint32_t anon118;
				uint64_t phi_in95;
				uint32_t anon65;
				uint64_t phi121;
				uint32_t phi_in94;
				uint64_t phi75;
				uint64_t phi_in96;
				uint64_t phi_in124;
				uint32_t* anon90;
				uint64_t phi_in70;
				uint64_t phi_in143;
				if (dispatch56 == 0)
				{
					uint64_t phi57 = phi_in51;
					uint64_t phi58 = phi_in52;
					phi59 = phi_in53;
					anon60 = (uint64_t*)0x601340;
					*anon60 = *anon28;
					anon61 = (uint64_t*)0x601348;
					*anon61 = phi57;
					phi_in62 = phi57;
					phi_in63 = phi58;
					phi_in64 = *anon28;
					anon65 = (uint32_t)(phi58 >> 63) | (__zext uint32_t)(phi58 == 0);
					if (anon65 == 0)
					{
						phi_in66 = 0;
						phi_in67 = 0;
						phi_in68 = 0;
						phi_in69 = 6296704;
						phi_in70 = phi59;
						phi_in71 = 0;
					}
				}
				if (dispatch56 == 1 || dispatch56 == 0 && anon65 == 0)
				{
					uint64_t phi_in80;
					phi72 = phi_in66;
					phi73 = phi_in67;
					uint64_t phi74 = phi_in68;
					phi75 = phi_in69;
					phi76 = phi_in70;
					uint32_t phi77 = phi_in71;
					if ((phi76 & 2) > 1)
					{
						uint32_t anon79 = phi77 + 1;
						int64_t anon78 = (__sext int64_t)anon79 << 4;
						*(uint64_t*)(anon78 + 6296384) = *(uint64_t*)(phi75 + 16);
						*(uint64_t*)(anon78 + 6296392) = *(uint64_t*)(phi75 + 24);
						phi_in80 = (__zext uint64_t)anon79;
					}
					else if ((phi76 & 1) == 0)
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
						phi_in80 = phi74;
					}
					else 
					{
						int64_t anon82 = (__sext int64_t)phi77 << 4;
						uint64_t* anon81 = (uint64_t*)(anon82 + 6296392);
						uint64_t anon83 = *anon81 * *(uint64_t*)(phi75 + 16);
						*anon81 = anon83;
						uint64_t* anon84 = (uint64_t*)(anon82 + 6296384);
						*anon84 = *anon84 * *(uint64_t*)(phi75 + 24);
						phi_in80 = phi74;
						if (anon83 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi_in80 = phi74;
						}
					}
					phi85 = phi_in80;
				}
				uint64_t anon87 = phi73 | phi72 & 0xffffffff;
				uint64_t anon86 = anon87 + 2;
				if (*anon5 < anon86)
				{
					anon88 = (uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0);
					if (anon88 == 0)
					{
						if (dispatch56 == 1 || dispatch56 == 0 && anon65 == 0)
						{
							anon90 = (uint32_t*)0x601348;
							phi_in89 = *anon90;
							anon92 = (uint32_t*)0x60134c;
							phi_in91 = *anon92;
							phi_in93 = 0;
							phi_in94 = 0;
							phi_in95 = phi59;
							phi_in96 = *anon60;
						}
					}
					else if (dispatch56 == 1 || dispatch56 == 0 && anon65 == 0)
					{
						phi_in62 = *anon61;
						phi_in63 = *anon5;
						phi_in64 = *anon60;
					}
				}
				if (dispatch56 == 4 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0)
				{
					uint32_t phi97 = phi_in89;
					uint32_t phi98 = phi_in91;
					uint64_t phi99 = phi_in93;
					uint32_t phi100 = phi_in94;
					uint64_t phi101 = phi_in95;
					uint64_t phi102 = phi_in96;
					uint32_t phi_in103 = phi97;
					uint32_t phi_in104 = phi98;
					uint64_t phi_in105 = phi99;
					uint64_t phi_in106 = phi102;
					if ((phi101 & 2 | 1) != 1)
					{
						uint32_t anon109 = (uint32_t)phi99 + 1;
						int64_t anon108 = (__sext int64_t)anon109 << 4;
						uint64_t anon110 = (__zext uint64_t)phi98 << 32 | (__zext uint64_t)phi97;
						uint64_t anon107 = ((phi101 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon108 + 6296384) * anon110 + phi102 * *(uint64_t*)(anon108 + 6296392);
						*anon60 = anon107;
						uint64_t anon112 = anon110 * *(uint64_t*)(anon108 + 6296392);
						uint32_t anon111 = (uint32_t)anon112;
						*anon90 = anon111;
						uint32_t anon113 = (uint32_t)(anon112 >> 32);
						*anon92 = anon113;
						phi_in103 = anon111;
						phi_in104 = anon113;
						phi_in105 = (__zext uint64_t)anon109;
						phi_in106 = anon107;
					}
					phi114 = phi_in103;
					phi115 = phi_in104;
					uint64_t phi116 = phi_in105;
					phi117 = phi_in106;
					phi_in89 = phi114;
					phi_in91 = phi115;
					phi_in93 = phi116;
					anon118 = phi100 + 1;
					phi_in94 = anon118;
					phi_in95 = phi101 >> 2;
					phi_in96 = phi117;
					dispatch56 = 4;
				}
				if (anon118 == (uint32_t)*anon5 && (dispatch56 == 4 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0))
				{
					phi_in62 = (__zext uint64_t)phi115 << 32 | (__zext uint64_t)phi114;
					phi_in63 = *anon5;
					phi_in64 = phi117;
				}
				if (dispatch56 == 4 && anon118 == (uint32_t)*anon5 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 || anon65 != 0 && dispatch56 == 0)
				{
					phi119 = phi_in62;
					phi120 = phi_in63;
					phi121 = phi_in64;
					phi_in122 = 0;
					phi_in123 = 0;
					phi_in124 = phi121;
				}
				if (phi119 != 0 && (dispatch56 == 4 && anon118 == (uint32_t)*anon5 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 || anon65 != 0 && dispatch56 == 0))
				{
					phi_in125 = phi119;
					phi_in126 = phi121;
					phi_in127 = phi119;
				}
				if (dispatch56 == 3 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0)
				{
					uint64_t phi128 = phi_in126;
					uint64_t phi129 = phi_in127;
					phi_in125 = phi128;
					anon130 = (uint64_t)((__sext int128_t)phi129 % (__sext int128_t)phi128);
					phi_in126 = anon130;
					phi_in127 = phi128;
					dispatch56 = 3;
				}
				if (dispatch56 == 3 && anon130 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0)
				{
					uint64_t phi131 = phi_in125;
					uint64_t anon134 = phi131 >> 63;
					int128_t anon133 = (__sext int128_t)((anon134 ^ phi131) - anon134);
					uint64_t anon132 = (uint64_t)((__sext int128_t)phi121 / anon133);
					*anon60 = anon132;
					uint64_t anon135 = (uint64_t)((__sext int128_t)phi119 / anon133);
					*anon61 = anon135;
					phi_in122 = anon135;
					phi_in123 = anon135 & 0xffffffff00000000;
					phi_in124 = anon132;
				}
				if (phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 || dispatch56 == 3 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0)
				{
					phi136 = phi_in122;
					phi137 = phi_in123;
					phi138 = phi_in124;
				}
				uint64_t anon139 = phi137 | phi136 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && *(uint64_t*)0x6012b0 == phi138 && (phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 || dispatch56 == 3 && anon130 == 0 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0) && phi59 == 256)
				{
					break;
				}
				if (phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0)
				{
					phi_in140 = 0;
					phi_in141 = 0;
					phi_in142 = 1;
					phi_in143 = 6296704;
				}
				uint32_t anon144 = ((uint32_t)(phi120 >> 63) ^ 1) & (__zext uint32_t)(phi120 != 0);
				if (anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && anon144 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || dispatch56 == 2 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0)
				{
					uint32_t phi_in150;
					phi145 = phi_in141;
					phi146 = phi_in142;
					phi147 = phi_in143;
					if (*(uint64_t*)(phi147 | 8) == 1)
					{
						anon149 = (uint8_t*)0x400b58;
						uint32_t anon148 = printf(anon149);
						phi_in150 = anon148;
					}
					else 
					{
						uint32_t anon151 = printf(anon15);
						phi_in150 = anon151;
					}
					uint32_t phi152 = phi_in150;
					*anon16 = phi152;
					uint32_t anon153 = printf((uint8_t*)0x400b5c);
					*anon16 = anon153;
					phi_in140 = (__sext int64_t)phi146;
				}
				uint64_t anon154 = phi145 | (__zext uint64_t)phi146;
				if (anon154 < *anon5 && (anon65 != 0 && anon144 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch56 == 2 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && anon144 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139))
				{
					uint64_t anon155 = anon154 + 1;
					phi_in141 = anon155 & 0xffffffff00000000;
					phi_in142 = (uint32_t)anon155;
					phi_in143 = phi147 + 16;
					dispatch56 = 2;
				}
				if (dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon154 >= *anon5 && dispatch56 == 2 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0)
				{
					uint32_t phi_in158;
					uint32_t phi_in163;
					uint64_t phi156 = phi_in140;
					if (*(uint64_t*)((phi156 << 4) + 6296712) == 1)
					{
						uint32_t anon157 = printf(anon149);
						phi_in158 = anon157;
					}
					else 
					{
						uint32_t anon159 = printf(anon15);
						phi_in158 = anon159;
					}
					uint32_t phi160 = phi_in158;
					*anon16 = phi160;
					uint32_t anon161 = printf((uint8_t*)0x400b61);
					*anon16 = anon161;
					if (*anon61 == 1)
					{
						uint32_t anon162 = printf(anon149);
						phi_in163 = anon162;
					}
					else 
					{
						uint32_t anon164 = printf(anon15);
						phi_in163 = anon164;
					}
					uint32_t phi165 = phi_in163;
					*anon16 = phi165;
					uint32_t anon166 = printf((uint8_t*)0x400b65);
					*anon16 = anon166;
				}
				if ((phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 || anon65 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && phi121 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon154 >= *anon5 && dispatch56 == 2 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon130 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && phi119 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 3 && anon130 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0) && phi59 == 256)
				{
					break;
				}
				if (phi59 != 256 && (anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && phi119 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 || anon65 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 || dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 || anon88 != 0 && phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon130 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon65 != 0 && phi119 != 0 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 3 && anon130 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon65 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon65 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && phi121 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 || anon154 >= *anon5 && dispatch56 == 2 || phi119 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 || phi119 != 0 && phi121 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b8 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon65 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon65 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && dispatch56 == 3 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && phi121 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 4 && anon118 == (uint32_t)*anon5 && phi119 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 || anon88 != 0 && phi119 != 0 && phi121 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon130 == 0 && *(uint64_t*)0x6012b8 == 0 && anon144 == 0 || anon88 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && phi121 == 0 || anon88 != 0 && phi119 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && phi121 == 0 && *(uint64_t*)0x6012b8 == 0 || anon65 != 0 && phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi138 && dispatch56 == 0 && phi121 == 0 || phi119 != 0 && phi121 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && anon130 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || anon88 != 0 && *(uint64_t*)0x6012b8 != 0 && dispatch56 == 1 && *anon5 < anon86 && phi119 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 && anon144 == 0 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && anon144 != 0 && anon154 >= *anon5 && dispatch56 == 1 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138 && *(uint64_t*)0x6012b8 == anon139 || phi119 != 0 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon139 && dispatch56 == 0 && anon65 == 0 && *anon5 < anon86 && anon88 == 0 && anon118 == (uint32_t)*anon5 && phi121 == 0 && *(uint64_t*)0x6012b0 == phi138))
				{
					phi_in51 = *anon29;
					phi_in52 = *anon5;
					phi_in53 = phi59 - 1;
					dispatch56 = 0;
				}
				if (*anon5 >= anon86 && (dispatch56 == 1 || dispatch56 == 0 && anon65 == 0))
				{
					uint64_t anon167 = anon87 + 1;
					phi_in66 = anon167;
					phi_in67 = anon167 & 0xffffffff00000000;
					phi_in68 = phi85;
					phi_in69 = phi75 + 16;
					phi_in70 = phi76 >> 2;
					phi_in71 = (uint32_t)phi85;
					dispatch56 = 1;
				}
			}
		}
		phi_in30 = phi34 + 1;
		uint64_t anon168 = phi50 + 16;
		phi_in31 = anon168;
		phi_in32 = (uint64_t*)anon168;
		dispatch33 = 0;
		uint64_t anon169 = (phi8 | phi9 & 0xffffffff) + 1;
		phi_in1 = anon169 & 0xffffffff00000000;
		phi_in2 = anon169;
		uint64_t anon170 = phi10 + 16;
		phi_in3 = anon170;
		phi_in4 = (uint64_t*)anon170;
		phi_in6 = (uint32_t)anon169;
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

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
		uint64_t phi31;
		uint64_t phi42;
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
				uint64_t phi_in50;
				uint64_t phi51;
				uint64_t phi52;
				uint64_t phi53;
				uint64_t phi54;
				uint32_t phi55;
				uint64_t phi56;
				uint64_t phi_in100;
				uint32_t phi101;
				uint64_t phi102;
				uint64_t phi103;
				uint64_t phi45 = phi40;
				uint64_t phi46 = phi41;
				uint64_t* anon47 = (uint64_t*)0x601340;
				*anon47 = *anon23;
				uint64_t* anon48 = (uint64_t*)0x601348;
				*anon48 = phi45;
				uint64_t phi49 = *anon23;
				if (((uint32_t)(phi46 >> 63) | (__zext uint32_t)(phi46 == 0)) == 0)
				{
					uint64_t phi59;
					phi_in50 = 0;
					phi51 = 0;
					phi52 = 0;
					phi53 = 6296704;
					phi54 = phi42;
					phi55 = 0;
					phi56 = phi_in50;
					if ((phi54 & 2) > 1)
					{
						uint32_t anon58 = phi55 + 1;
						int64_t anon57 = (__sext int64_t)anon58 << 4;
						*(uint64_t*)(anon57 + 6296384) = *(uint64_t*)(phi53 + 16);
						*(uint64_t*)(anon57 + 6296392) = *(uint64_t*)(phi53 + 24);
						phi59 = (__zext uint64_t)anon58;
					}
					else if ((phi54 & 1) == 0)
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
						phi59 = phi52;
					}
					else 
					{
						int64_t anon61 = (__sext int64_t)phi55 << 4;
						uint64_t* anon60 = (uint64_t*)(anon61 + 6296392);
						uint64_t anon62 = *anon60 * *(uint64_t*)(phi53 + 16);
						*anon60 = anon62;
						uint64_t* anon63 = (uint64_t*)(anon61 + 6296384);
						*anon63 = *anon63 * *(uint64_t*)(phi53 + 24);
						phi59 = phi52;
						if (anon62 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi59 = phi52;
						}
					}
					phi52 = phi59;
					if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
					{
						uint32_t phi64;
						uint32_t phi66;
						uint32_t phi74;
						uint32_t phi75;
						uint32_t anon84;
						uint32_t* anon65 = (uint32_t*)0x601348;
						phi64 = *anon65;
						uint32_t* anon67 = (uint32_t*)0x60134c;
						phi66 = *anon67;
						uint64_t phi68 = 0;
						uint32_t phi_in69 = 0;
						uint64_t phi70 = phi42;
						uint64_t phi71 = *anon47;
						do
						{
							uint32_t phi72 = phi_in69;
							uint64_t phi73 = phi71;
							phi74 = phi64;
							phi75 = phi66;
							uint64_t phi76 = phi68;
							if ((phi70 & 2 | 1) != 1)
							{
								uint32_t anon79 = (uint32_t)phi68 + 1;
								int64_t anon78 = (__sext int64_t)anon79 << 4;
								uint64_t anon80 = (__zext uint64_t)phi66 << 32 | (__zext uint64_t)phi64;
								uint64_t anon77 = ((phi70 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon78 + 6296384) * anon80 + phi73 * *(uint64_t*)(anon78 + 6296392);
								*anon47 = anon77;
								uint64_t anon82 = anon80 * *(uint64_t*)(anon78 + 6296392);
								uint32_t anon81 = (uint32_t)anon82;
								*anon65 = anon81;
								uint32_t anon83 = (uint32_t)(anon82 >> 32);
								*anon67 = anon83;
								phi74 = anon81;
								phi75 = anon83;
								phi76 = (__zext uint64_t)anon79;
								phi73 = anon77;
							}
							phi49 = phi73;
							phi64 = phi74;
							phi66 = phi75;
							phi68 = phi76;
							anon84 = phi72 + 1;
							phi_in69 = anon84;
							phi70 = phi70 >> 2;
							phi71 = phi49;
						}
						while (anon84 != (uint32_t)*anon5);
						phi45 = (__zext uint64_t)phi75 << 32 | (__zext uint64_t)phi74;
						phi46 = *anon5;
					}
					else 
					{
						phi45 = *anon48;
						phi46 = *anon5 & 0xffffffff;
						phi49 = *anon47;
					}
				}
				uint64_t phi85 = 0;
				uint64_t phi86 = 0;
				uint64_t phi87 = phi49;
				if (phi45 != 0)
				{
					uint64_t phi88 = phi45;
					uint64_t phi_in89 = phi49;
					uint64_t phi_in90 = phi45;
					if (phi49 != 0)
					{
						uint64_t anon93;
						do
						{
							uint64_t phi91 = phi_in89;
							uint64_t phi92 = phi_in90;
							phi88 = phi91;
							anon93 = (uint64_t)((__sext int128_t)phi92 % (__sext int128_t)phi91);
							phi_in89 = anon93;
							phi_in90 = phi91;
						}
						while (anon93 != 0);
					}
					uint64_t anon96 = phi88 >> 63;
					int128_t anon95 = (__sext int128_t)((anon96 ^ phi88) - anon96);
					uint64_t anon94 = (uint64_t)((__sext int128_t)phi49 / anon95);
					*anon47 = anon94;
					uint64_t anon97 = (uint64_t)((__sext int128_t)phi45 / anon95);
					*anon48 = anon97;
					phi85 = anon97;
					phi86 = anon97 & 0xffffffff00000000;
					phi87 = anon94;
				}
				uint64_t anon98 = phi86 | phi85 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi87 && *(uint64_t*)0x6012b8 == anon98)
				{
					uint8_t* anon105;
					uint32_t phi110;
					uint32_t phi114;
					uint64_t phi99 = 0;
					phi_in100 = 0;
					phi101 = 1;
					phi102 = 6296704;
					if ((((uint32_t)(phi46 >> 63) ^ 1) & (__zext uint32_t)(phi46 != 0)) != 0)
					{
						uint32_t phi106;
						phi103 = phi_in100;
						if (*(uint64_t*)(phi102 | 8) == 1)
						{
							anon105 = (uint8_t*)0x400b58;
							uint32_t anon104 = printf(anon105);
							phi106 = anon104;
						}
						else 
						{
							uint32_t anon107 = printf(anon12);
							phi106 = anon107;
						}
						*anon13 = phi106;
						uint32_t anon108 = printf((uint8_t*)0x400b5c);
						*anon13 = anon108;
						phi99 = (__sext int64_t)phi101;
					}
					if (*(uint64_t*)((phi99 << 4) + 6296712) == 1)
					{
						uint32_t anon109 = printf(anon105);
						phi110 = anon109;
					}
					else 
					{
						uint32_t anon111 = printf(anon12);
						phi110 = anon111;
					}
					*anon13 = phi110;
					uint32_t anon112 = printf((uint8_t*)0x400b61);
					*anon13 = anon112;
					if (*anon48 == 1)
					{
						uint32_t anon113 = printf(anon105);
						phi114 = anon113;
					}
					else 
					{
						uint32_t anon115 = printf(anon12);
						phi114 = anon115;
					}
					*anon13 = phi114;
					uint32_t anon116 = printf((uint8_t*)0x400b65);
					*anon13 = anon116;
				}
				if (phi42 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi87 && *(uint64_t*)0x6012b8 == anon98 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi87 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon98 && *(uint64_t*)0x6012b0 == phi87))
				{
					phi40 = *anon24;
					phi41 = *anon5;
					phi42 = phi42 - 1;
				}
				uint64_t anon117 = (phi103 | (__zext uint64_t)phi101) + 1;
				phi_in100 = anon117 & 0xffffffff00000000;
				phi101 = (uint32_t)anon117;
				phi102 = phi102 + 16;
				uint64_t anon118 = (phi51 | phi56 & 0xffffffff) + 1;
				phi_in50 = anon118;
				phi51 = anon118 & 0xffffffff00000000;
				phi53 = phi53 + 16;
				phi54 = phi54 >> 2;
				phi55 = (uint32_t)phi52;
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
		phi_in4 = (uint64_t*)anon121;
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

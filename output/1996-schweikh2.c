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
		uint8_t* anon13;
		uint32_t* anon14;
		uint64_t phi32;
		uint64_t phi43;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi_in10 = phi4;
		uint64_t* phi11 = phi_in10;
		if ((uint32_t)arg1 > phi6)
		{
			anon13 = (uint8_t*)0x400b54;
			uint32_t anon12 = sscanf(*(uint8_t**)((phi8 << 3) + arg2), anon13);
			anon14 = (uint32_t*)0x601300;
			*anon14 = anon12;
			phi11 = (uint64_t*)phi9;
		}
		uint64_t* anon15 = (uint64_t*)(phi9 | 8);
		if (*anon15 != 0)
		{
			uint64_t phi16 = *anon15;
			uint64_t phi_in17 = *phi11;
			uint64_t phi_in18 = *anon15;
			if (*phi11 != 0)
			{
				uint64_t anon21;
				do
				{
					uint64_t phi19 = phi_in17;
					uint64_t phi20 = phi_in18;
					phi16 = phi19;
					anon21 = (uint64_t)((__sext int128_t)phi20 % (__sext int128_t)phi19);
					phi_in17 = anon21;
					phi_in18 = phi19;
				}
				while (anon21 != 0);
			}
			uint64_t anon23 = phi16 >> 63;
			int128_t anon22 = (__sext int128_t)((anon23 ^ phi16) - anon23);
			*phi11 = (uint64_t)((__sext int128_t)*phi11 / anon22);
			*anon15 = (uint64_t)((__sext int128_t)*anon15 / anon22);
		}
		uint64_t* anon24 = (uint64_t*)0x601480;
		*anon24 = *(uint64_t*)0x601290;
		uint64_t* anon25 = (uint64_t*)0x601488;
		*anon25 = *(uint64_t*)0x601298;
		uint64_t phi26 = 0;
		uint64_t phi27 = 6296720;
		uint64_t* phi28 = (uint64_t*)0x601490;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon29 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi27 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi27 - 8);
			*phi28 = anon29;
			uint64_t anon30 = (uint64_t)phi28;
			uint64_t anon31 = *(uint64_t*)(phi27 - 8) * *(uint64_t*)0x6012a8;
			*(uint64_t*)(anon30 + 8) = anon31;
			phi32 = anon30;
			if (anon31 != 0)
			{
				uint64_t phi33 = anon31;
				uint64_t phi_in34 = anon29;
				uint64_t phi_in35 = anon31;
				if (anon29 != 0)
				{
					uint64_t anon38;
					do
					{
						uint64_t phi36 = phi_in34;
						uint64_t phi37 = phi_in35;
						phi33 = phi36;
						anon38 = (uint64_t)((__sext int128_t)phi37 % (__sext int128_t)phi36);
						phi_in34 = anon38;
						phi_in35 = phi36;
					}
					while (anon38 != 0);
				}
				uint64_t anon40 = phi33 >> 63;
				int128_t anon39 = (__sext int128_t)((anon40 ^ phi33) - anon40);
				*phi28 = (uint64_t)((__sext int128_t)anon29 / anon39);
				*(uint64_t*)(phi27 + 8) = (uint64_t)((__sext int128_t)anon31 / anon39);
				phi32 = phi27;
			}
		}
		uint64_t phi41 = *(uint64_t*)0x601298;
		uint64_t phi42 = *anon5;
		uint64_t anon45 = *anon5 << 1 & 0x1e;
		uint64_t anon44 = anon45 == 0 ? 0 : 4294967295 << anon45 & 0x3fffffff ^ 0x3fffffff;
		phi43 = anon44;
		if (anon44 != 255)
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
				uint64_t* anon46 = (uint64_t*)0x601348;
				*anon46 = phi41;
				uint64_t* anon47 = (uint64_t*)0x601340;
				*anon47 = *anon24;
				uint64_t phi48 = *anon46;
				uint64_t phi49 = phi42;
				uint64_t phi50 = *anon24;
				if (((uint32_t)(phi42 >> 63) | (__zext uint32_t)(phi42 == 0)) == 0)
				{
					uint64_t phi60;
					phi_in51 = 0;
					phi52 = 0;
					phi53 = 0;
					phi54 = 6296704;
					phi55 = phi43;
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
						uint32_t phi75;
						uint32_t phi76;
						uint64_t phi_in84;
						uint32_t anon85;
						uint32_t* anon66 = (uint32_t*)0x601348;
						phi65 = *anon66;
						uint32_t* anon68 = (uint32_t*)0x60134c;
						phi67 = *anon68;
						uint64_t phi69 = 0;
						uint32_t phi_in70 = 0;
						uint64_t phi71 = phi43;
						uint64_t phi72 = *anon47;
						do
						{
							uint32_t phi73 = phi_in70;
							uint64_t phi74 = phi72;
							phi75 = phi65;
							phi76 = phi67;
							phi69 = phi69;
							if ((phi71 & 2 | 1) != 1)
							{
								uint32_t anon79 = (uint32_t)phi69 + 1;
								int64_t anon78 = (__sext int64_t)anon79 << 4;
								uint64_t anon80 = (__zext uint64_t)phi67 << 32 | (__zext uint64_t)phi65;
								uint64_t anon77 = ((phi71 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon78 + 6296384) * anon80 + phi74 * *(uint64_t*)(anon78 + 6296392);
								*anon47 = anon77;
								uint64_t anon82 = anon80 * *(uint64_t*)(anon78 + 6296392);
								uint32_t anon81 = (uint32_t)anon82;
								*anon66 = anon81;
								uint32_t anon83 = (uint32_t)(anon82 >> 32);
								*anon68 = anon83;
								phi75 = anon81;
								phi76 = anon83;
								phi69 = (__zext uint64_t)anon79;
								phi74 = anon77;
							}
							phi_in84 = phi74;
							phi65 = phi75;
							phi67 = phi76;
							anon85 = phi73 + 1;
							phi_in70 = anon85;
							phi71 = phi71 >> 2;
							phi72 = phi_in84;
						}
						while (anon85 != (uint32_t)*anon5);
						phi48 = (__zext uint64_t)phi76 << 32 | (__zext uint64_t)phi75;
						phi49 = *anon5;
						phi50 = phi_in84;
					}
					else 
					{
						phi48 = *anon46;
						phi49 = *anon5 & 0xffffffff;
						phi50 = *anon47;
					}
				}
				uint64_t phi86 = phi50;
				uint64_t phi87 = 0;
				uint64_t phi88 = 0;
				if (phi48 != 0)
				{
					uint64_t phi89 = phi48;
					uint64_t phi_in90 = phi86;
					uint64_t phi_in91 = phi48;
					if (phi86 != 0)
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
					uint64_t anon95 = (uint64_t)((__sext int128_t)phi86 / anon96);
					*anon47 = anon95;
					uint64_t anon98 = (uint64_t)((__sext int128_t)phi48 / anon96);
					*anon46 = anon98;
					phi87 = anon98;
					phi88 = anon98 & 0xffffffff00000000;
					phi86 = anon95;
				}
				uint64_t anon99 = phi88 | phi87 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == anon99)
				{
					uint8_t* anon106;
					uint32_t phi114;
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
							uint32_t anon108 = printf(anon13);
							phi107 = anon108;
						}
						*anon14 = phi107;
						uint32_t anon109 = printf((uint8_t*)0x400b5c);
						*anon14 = anon109;
						phi100 = (__sext int64_t)phi102;
					}
					if (*(uint64_t*)((phi100 << 4) + 6296712) == 1)
					{
						uint32_t anon110 = printf(anon106);
						*anon14 = anon110;
					}
					else 
					{
						uint32_t anon111 = printf(anon13);
						*anon14 = anon111;
					}
					uint32_t anon112 = printf((uint8_t*)0x400b61);
					*anon14 = anon112;
					if (*anon46 == 1)
					{
						uint32_t anon113 = printf(anon106);
						phi114 = anon113;
					}
					else 
					{
						uint32_t anon115 = printf(anon13);
						phi114 = anon115;
					}
					*anon14 = phi114;
					uint32_t anon116 = printf((uint8_t*)0x400b65);
					*anon14 = anon116;
				}
				if (phi43 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == anon99 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi86 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon99 && *(uint64_t*)0x6012b0 == phi86))
				{
					phi41 = *anon25;
					phi42 = *anon5;
					phi43 = phi43 - 1;
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
		phi26 = phi26 + 1;
		uint64_t anon119 = phi32 + 16;
		phi27 = anon119;
		phi28 = (uint64_t*)anon119;
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

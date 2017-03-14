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
				uint64_t phi_in100;
				uint32_t phi101;
				uint64_t phi102;
				uint64_t phi103;
				uint64_t* anon46 = (uint64_t*)0x601348;
				*anon46 = phi41;
				uint64_t* anon47 = (uint64_t*)0x601340;
				*anon47 = *anon24;
				uint64_t phi48 = *anon46;
				uint64_t phi49 = phi42;
				uint64_t phi50 = *anon24;
				if (((uint32_t)(phi42 >> 63) | (__zext uint32_t)(phi42 == 0)) == 0)
				{
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
						phi53 = (__zext uint64_t)anon59;
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
						phi53 = phi53;
					}
					else 
					{
						int64_t anon61 = (__sext int64_t)phi56 << 4;
						uint64_t* anon60 = (uint64_t*)(anon61 + 6296392);
						uint64_t anon62 = *anon60 * *(uint64_t*)(phi54 + 16);
						*anon60 = anon62;
						uint64_t* anon63 = (uint64_t*)(anon61 + 6296384);
						*anon63 = *anon63 * *(uint64_t*)(phi54 + 24);
						phi53 = phi53;
						if (anon62 <= -1)
						{
							(__asm "pxor xmm5, xmm5")();
							(__asm "movq xmm0, qword ptr [rsp + 8]")();
							(__asm "movhps xmm0, qword ptr [rsp + 8]")();
							(__asm "psubq xmm5, xmm0")();
							(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							phi53 = phi53;
						}
					}
					if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
					{
						uint32_t phi64;
						uint32_t phi66;
						uint32_t phi73;
						uint32_t phi74;
						uint32_t anon84;
						uint32_t* anon65 = (uint32_t*)0x601348;
						phi64 = *anon65;
						uint32_t* anon67 = (uint32_t*)0x60134c;
						phi66 = *anon67;
						uint64_t phi68 = 0;
						uint32_t phi_in69 = 0;
						uint64_t phi70 = phi43;
						uint64_t phi71 = *anon47;
						do
						{
							uint32_t phi72 = phi_in69;
							phi73 = phi64;
							phi74 = phi66;
							uint64_t phi75 = phi68;
							uint64_t phi76 = phi71;
							if ((phi70 & 2 | 1) != 1)
							{
								uint32_t anon79 = (uint32_t)phi68 + 1;
								int64_t anon78 = (__sext int64_t)anon79 << 4;
								uint64_t anon80 = (__zext uint64_t)phi66 << 32 | (__zext uint64_t)phi64;
								uint64_t anon77 = ((phi70 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon78 + 6296384) * anon80 + phi71 * *(uint64_t*)(anon78 + 6296392);
								*anon47 = anon77;
								uint64_t anon82 = anon80 * *(uint64_t*)(anon78 + 6296392);
								uint32_t anon81 = (uint32_t)anon82;
								*anon65 = anon81;
								uint32_t anon83 = (uint32_t)(anon82 >> 32);
								*anon67 = anon83;
								phi73 = anon81;
								phi74 = anon83;
								phi75 = (__zext uint64_t)anon79;
								phi76 = anon77;
							}
							phi50 = phi76;
							phi64 = phi73;
							phi66 = phi74;
							phi68 = phi75;
							anon84 = phi72 + 1;
							phi_in69 = anon84;
							phi70 = phi70 >> 2;
							phi71 = phi50;
						}
						while (anon84 != (uint32_t)*anon5);
						phi48 = (__zext uint64_t)phi74 << 32 | (__zext uint64_t)phi73;
						phi49 = *anon5;
					}
					else 
					{
						phi48 = *anon46;
						phi49 = *anon5 & 0xffffffff;
						phi50 = *anon47;
					}
				}
				uint64_t phi85 = phi50;
				uint64_t phi86 = 0;
				uint64_t phi87 = 0;
				if (phi48 != 0)
				{
					uint64_t phi88 = phi48;
					uint64_t phi_in89 = phi85;
					uint64_t phi_in90 = phi48;
					if (phi85 != 0)
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
					uint64_t anon94 = (uint64_t)((__sext int128_t)phi85 / anon95);
					*anon47 = anon94;
					uint64_t anon97 = (uint64_t)((__sext int128_t)phi48 / anon95);
					*anon46 = anon97;
					phi86 = anon97;
					phi87 = anon97 & 0xffffffff00000000;
					phi85 = anon94;
				}
				uint64_t anon98 = phi87 | phi86 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi85 && *(uint64_t*)0x6012b8 == anon98)
				{
					uint8_t* anon105;
					uint32_t phi113;
					uint64_t phi99 = 0;
					phi_in100 = 0;
					phi101 = 1;
					phi102 = 6296704;
					if ((((uint32_t)(phi49 >> 63) ^ 1) & (__zext uint32_t)(phi49 != 0)) != 0)
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
							uint32_t anon107 = printf(anon13);
							phi106 = anon107;
						}
						*anon14 = phi106;
						uint32_t anon108 = printf((uint8_t*)0x400b5c);
						*anon14 = anon108;
						phi99 = (__sext int64_t)phi101;
					}
					if (*(uint64_t*)((phi99 << 4) + 6296712) == 1)
					{
						uint32_t anon109 = printf(anon105);
						*anon14 = anon109;
					}
					else 
					{
						uint32_t anon110 = printf(anon13);
						*anon14 = anon110;
					}
					uint32_t anon111 = printf((uint8_t*)0x400b61);
					*anon14 = anon111;
					if (*anon46 == 1)
					{
						uint32_t anon112 = printf(anon105);
						phi113 = anon112;
					}
					else 
					{
						uint32_t anon114 = printf(anon13);
						phi113 = anon114;
					}
					*anon14 = phi113;
					uint32_t anon115 = printf((uint8_t*)0x400b65);
					*anon14 = anon115;
				}
				if (phi43 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi85 && *(uint64_t*)0x6012b8 == anon98 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi85 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon98 && *(uint64_t*)0x6012b0 == phi85))
				{
					phi41 = *anon25;
					phi42 = *anon5;
					phi43 = phi43 - 1;
				}
				uint64_t anon116 = (phi103 | (__zext uint64_t)phi101) + 1;
				phi_in100 = anon116 & 0xffffffff00000000;
				phi101 = (uint32_t)anon116;
				phi102 = phi102 + 16;
				uint64_t anon117 = (phi52 | phi57 & 0xffffffff) + 1;
				phi_in51 = anon117;
				phi52 = anon117 & 0xffffffff00000000;
				phi54 = phi54 + 16;
				phi55 = phi55 >> 2;
				phi56 = (uint32_t)phi53;
				break;
			}
		}
		phi26 = phi26 + 1;
		uint64_t anon118 = phi32 + 16;
		phi27 = anon118;
		phi28 = (uint64_t*)anon118;
		break;
		uint64_t anon119 = (phi7 | phi8 & 0xffffffff) + 1;
		phi_in1 = anon119 & 0xffffffff00000000;
		phi_in2 = anon119;
		uint64_t anon120 = phi9 + 16;
		phi_in3 = anon120;
		phi4 = (uint64_t*)anon120;
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

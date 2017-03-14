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
		uint64_t phi44;
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
		uint64_t phi40 = -1;
		uint8_t anon41 = (uint8_t)*anon5 << 1 & 0x1e;
		if (anon41 != 0)
		{
			phi40 = 4294967295 << (__zext uint64_t)anon41 & 0xffffffff;
		}
		uint64_t phi_in42 = *(uint64_t*)0x601298;
		uint64_t phi43 = *anon5;
		uint64_t anon45 = (phi40 << 32 ^ 0xffffffff00000000) >> 32;
		phi44 = anon45;
		if (anon45 != 255)
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
				uint64_t phi_in99;
				uint32_t phi100;
				uint64_t phi101;
				uint64_t phi102;
				uint64_t* anon46 = (uint64_t*)0x601348;
				*anon46 = phi_in42;
				uint64_t phi47 = phi43;
				uint64_t* anon48 = (uint64_t*)0x601340;
				*anon48 = *anon23;
				uint64_t phi49 = *anon46;
				uint64_t phi50 = *anon23;
				if (((uint32_t)(phi47 >> 63) | (__zext uint32_t)(phi47 == 0)) == 0)
				{
					phi_in51 = 0;
					phi52 = 0;
					phi53 = 0;
					phi54 = 6296704;
					phi55 = phi44;
					phi56 = 0;
					phi57 = phi_in51;
					uint64_t phi58 = phi53;
					if ((phi55 & 2 | 1) == 1)
					{
						if ((phi55 & 1) == 0)
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
						}
						else 
						{
							int64_t anon60 = (__sext int64_t)phi56 << 4;
							uint64_t* anon59 = (uint64_t*)(anon60 + 6296392);
							uint64_t anon61 = *anon59 * *(uint64_t*)(phi54 + 16);
							*anon59 = anon61;
							uint64_t* anon62 = (uint64_t*)(anon60 + 6296384);
							*anon62 = *anon62 * *(uint64_t*)(phi54 + 24);
							if (anon61 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
							}
						}
					}
					else 
					{
						uint32_t anon64 = phi56 + 1;
						int64_t anon63 = (__sext int64_t)anon64 << 4;
						*(uint64_t*)(anon63 + 6296384) = *(uint64_t*)(phi54 + 16);
						*(uint64_t*)(anon63 + 6296392) = *(uint64_t*)(phi54 + 24);
						phi58 = (__zext uint64_t)anon64;
					}
					phi53 = phi58;
					if (*anon5 < 1)
					{
						phi49 = *anon46;
						phi47 = *anon5;
						phi50 = *anon48;
					}
					else 
					{
						uint32_t anon83;
						uint32_t phi65 = *(uint32_t*)0x601348;
						uint32_t phi66 = *(uint32_t*)0x60134c;
						uint64_t phi67 = 0;
						uint32_t phi_in68 = 0;
						uint64_t phi69 = phi44;
						uint64_t phi70 = *anon48;
						uint64_t phi71 = *anon46;
						do
						{
							uint32_t phi72 = phi_in68;
							uint64_t phi73 = phi70;
							uint64_t phi74 = phi71;
							uint32_t phi_in75 = phi65;
							uint32_t phi76 = phi66;
							uint64_t phi77 = phi67;
							if ((phi69 & 2 | 1) != 1)
							{
								uint32_t anon80 = (uint32_t)phi67 + 1;
								int64_t anon79 = (__sext int64_t)anon80 << 4;
								uint64_t anon81 = (__zext uint64_t)phi66 << 32 | (__zext uint64_t)phi65;
								uint64_t anon78 = ((phi69 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon79 + 6296384) * anon81 + phi73 * *(uint64_t*)(anon79 + 6296392);
								*anon48 = anon78;
								uint64_t anon82 = anon81 * *(uint64_t*)(anon79 + 6296392);
								*anon46 = anon82;
								phi_in75 = (uint32_t)anon82;
								phi76 = (uint32_t)(anon82 >> 32);
								phi77 = (__zext uint64_t)anon80;
								phi73 = anon78;
								phi74 = anon82;
							}
							phi50 = phi73;
							phi49 = phi74;
							phi47 = *anon5 & 0xffffffff;
							phi65 = phi_in75;
							phi66 = phi76;
							phi67 = phi77;
							anon83 = phi72 + 1;
							phi_in68 = anon83;
							phi69 = phi69 >> 2;
							phi70 = phi50;
							phi71 = phi74;
						}
						while (anon83 != (uint32_t)*anon5);
					}
				}
				uint64_t phi84 = 0;
				uint64_t phi85 = 0;
				uint64_t phi86 = phi50;
				if (phi49 != 0)
				{
					uint64_t phi87 = phi49;
					uint64_t phi_in88 = phi50;
					uint64_t phi_in89 = phi49;
					if (phi50 != 0)
					{
						uint64_t anon92;
						do
						{
							uint64_t phi90 = phi_in88;
							uint64_t phi91 = phi_in89;
							phi87 = phi90;
							anon92 = (uint64_t)((__sext int128_t)phi91 % (__sext int128_t)phi90);
							phi_in88 = anon92;
							phi_in89 = phi90;
						}
						while (anon92 != 0);
					}
					uint64_t anon95 = phi87 >> 63;
					int128_t anon94 = (__sext int128_t)((anon95 ^ phi87) - anon95);
					uint64_t anon93 = (uint64_t)((__sext int128_t)phi50 / anon94);
					*anon48 = anon93;
					uint64_t anon96 = (uint64_t)((__sext int128_t)phi49 / anon94);
					*anon46 = anon96;
					phi84 = anon96;
					phi85 = anon96 & 0xffffffff00000000;
					phi86 = anon93;
				}
				uint64_t anon97 = phi85 | phi84 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == anon97)
				{
					uint8_t* anon104;
					uint64_t phi98 = 0;
					phi_in99 = 0;
					phi100 = 1;
					phi101 = 6296704;
					if ((((uint32_t)(phi47 >> 63) ^ 1) & (__zext uint32_t)(phi47 != 0)) != 0)
					{
						phi102 = phi_in99;
						anon104 = (uint8_t*)0x400b58;
						uint32_t anon103 = printf(*(uint64_t*)(phi101 | 8) == 1 ? anon104 : anon12);
						*anon13 = anon103;
						uint32_t anon105 = printf((uint8_t*)0x400b5c);
						*anon13 = anon105;
						phi98 = (__sext int64_t)phi100;
					}
					uint32_t anon106 = printf(*(uint64_t*)((phi98 << 4) + 6296712) == 1 ? anon104 : anon12);
					*anon13 = anon106;
					uint32_t anon107 = printf((uint8_t*)0x400b61);
					*anon13 = anon107;
					uint32_t anon108 = printf(*anon46 == 1 ? anon104 : anon12);
					*anon13 = anon108;
					uint32_t anon109 = printf((uint8_t*)0x400b65);
					*anon13 = anon109;
				}
				if (phi44 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == anon97 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi86 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon97 && *(uint64_t*)0x6012b0 == phi86))
				{
					phi_in42 = *anon24;
					phi43 = *anon5;
					phi44 = phi44 - 1;
				}
				uint64_t anon110 = (phi102 | (__zext uint64_t)phi100) + 1;
				phi_in99 = anon110 & 0xffffffff00000000;
				phi100 = (uint32_t)anon110;
				phi101 = phi101 + 16;
				uint64_t anon111 = (phi52 | phi57 & 0xffffffff) + 1;
				phi_in51 = anon111;
				phi52 = anon111 & 0xffffffff00000000;
				phi54 = phi54 + 16;
				phi55 = phi55 >> 2;
				phi56 = (uint32_t)phi53;
				break;
			}
		}
		phi25 = phi25 + 1;
		uint64_t anon112 = phi31 + 16;
		phi26 = anon112;
		phi27 = (uint64_t*)anon112;
		break;
		uint64_t anon113 = (phi7 | phi8 & 0xffffffff) + 1;
		phi_in1 = anon113 & 0xffffffff00000000;
		phi_in2 = anon113;
		uint64_t anon114 = phi9 + 16;
		phi_in3 = anon114;
		phi_in4 = (uint64_t*)anon114;
		phi6 = (uint32_t)anon113;
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

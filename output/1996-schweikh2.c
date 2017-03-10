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
		uint64_t* anon42 = (uint64_t*)0x601348;
		*anon42 = *(uint64_t*)0x601298;
		uint64_t phi43 = *anon5;
		uint64_t anon45 = (phi40 << 32 ^ 0xffffffff00000000) >> 32;
		phi44 = anon45;
		if (anon45 != 255)
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
				uint64_t phi_in97;
				uint32_t phi98;
				uint64_t phi99;
				uint64_t phi100;
				uint64_t* anon46 = (uint64_t*)0x601340;
				*anon46 = *anon23;
				uint64_t phi47 = *anon42;
				uint64_t phi48 = phi43;
				uint64_t phi49 = *anon23;
				if (((uint32_t)(phi43 >> 63) | (__zext uint32_t)(phi43 == 0)) == 0)
				{
					phi_in50 = 0;
					phi51 = 0;
					phi52 = 0;
					phi53 = 6296704;
					phi54 = phi44;
					phi55 = 0;
					phi56 = phi_in50;
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
							phi52 = phi52;
						}
						else 
						{
							int64_t anon58 = (__sext int64_t)phi55 << 4;
							uint64_t* anon57 = (uint64_t*)(anon58 + 6296392);
							uint64_t anon59 = *anon57 * *(uint64_t*)(phi53 + 16);
							*anon57 = anon59;
							uint64_t* anon60 = (uint64_t*)(anon58 + 6296384);
							*anon60 = *anon60 * *(uint64_t*)(phi53 + 24);
							phi52 = phi52;
							if (anon59 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
								phi52 = phi52;
							}
						}
					}
					else 
					{
						uint32_t anon62 = phi55 + 1;
						int64_t anon61 = (__sext int64_t)anon62 << 4;
						*(uint64_t*)(anon61 + 6296384) = *(uint64_t*)(phi53 + 16);
						*(uint64_t*)(anon61 + 6296392) = *(uint64_t*)(phi53 + 24);
						phi52 = (__zext uint64_t)anon62;
					}
					if (*anon5 < 1)
					{
						phi47 = *anon42;
						phi48 = *anon5;
						phi49 = *anon46;
					}
					else 
					{
						uint32_t anon81;
						uint32_t phi63 = *(uint32_t*)0x601348;
						uint32_t phi64 = *(uint32_t*)0x60134c;
						uint64_t phi65 = 0;
						uint32_t phi_in66 = 0;
						uint64_t phi67 = phi44;
						uint64_t phi68 = *anon46;
						uint64_t phi69 = *anon42;
						do
						{
							uint32_t phi70 = phi_in66;
							uint64_t phi71 = phi69;
							uint32_t phi_in72 = phi63;
							uint32_t phi73 = phi64;
							uint64_t phi74 = phi65;
							uint64_t phi_in75 = phi68;
							if ((phi67 & 2 | 1) != 1)
							{
								uint32_t anon78 = (uint32_t)phi65 + 1;
								int64_t anon77 = (__sext int64_t)anon78 << 4;
								uint64_t anon79 = (__zext uint64_t)phi64 << 32 | (__zext uint64_t)phi63;
								uint64_t anon76 = ((phi67 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon77 + 6296384) * anon79 + phi68 * *(uint64_t*)(anon77 + 6296392);
								*anon46 = anon76;
								uint64_t anon80 = anon79 * *(uint64_t*)(anon77 + 6296392);
								*anon42 = anon80;
								phi_in72 = (uint32_t)anon80;
								phi73 = (uint32_t)(anon80 >> 32);
								phi74 = (__zext uint64_t)anon78;
								phi_in75 = anon76;
								phi71 = anon80;
							}
							phi47 = phi71;
							phi48 = *anon5 & 0xffffffff;
							phi49 = phi_in75;
							phi63 = phi_in72;
							phi64 = phi73;
							phi65 = phi74;
							anon81 = phi70 + 1;
							phi_in66 = anon81;
							phi67 = phi67 >> 2;
							phi68 = phi_in75;
							phi69 = phi47;
						}
						while (anon81 != (uint32_t)*anon5);
					}
				}
				uint64_t phi82 = phi49;
				uint64_t phi83 = 0;
				uint64_t phi84 = 0;
				if (phi47 != 0)
				{
					uint64_t phi85 = phi47;
					uint64_t phi_in86 = phi82;
					uint64_t phi_in87 = phi47;
					if (phi82 != 0)
					{
						uint64_t anon90;
						do
						{
							uint64_t phi88 = phi_in86;
							uint64_t phi89 = phi_in87;
							phi85 = phi88;
							anon90 = (uint64_t)((__sext int128_t)phi89 % (__sext int128_t)phi88);
							phi_in86 = anon90;
							phi_in87 = phi88;
						}
						while (anon90 != 0);
					}
					uint64_t anon93 = phi85 >> 63;
					int128_t anon92 = (__sext int128_t)((anon93 ^ phi85) - anon93);
					uint64_t anon91 = (uint64_t)((__sext int128_t)phi82 / anon92);
					*anon46 = anon91;
					uint64_t anon94 = (uint64_t)((__sext int128_t)phi47 / anon92);
					*anon42 = anon94;
					phi83 = anon94;
					phi84 = anon94 & 0xffffffff00000000;
					phi82 = anon91;
				}
				uint64_t anon95 = phi84 | phi83 & 0xffffffff;
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi82 && *(uint64_t*)0x6012b8 == anon95)
				{
					uint8_t* anon102;
					uint64_t phi96 = 0;
					phi_in97 = 0;
					phi98 = 1;
					phi99 = 6296704;
					if ((((uint32_t)(phi48 >> 63) ^ 1) & (__zext uint32_t)(phi48 != 0)) != 0)
					{
						phi100 = phi_in97;
						anon102 = (uint8_t*)0x400b58;
						uint32_t anon101 = printf(*(uint64_t*)(phi99 | 8) == 1 ? anon102 : anon12);
						*anon13 = anon101;
						uint32_t anon103 = printf((uint8_t*)0x400b5c);
						*anon13 = anon103;
						phi96 = (__sext int64_t)phi98;
					}
					uint32_t anon104 = printf(*(uint64_t*)((phi96 << 4) + 6296712) == 1 ? anon102 : anon12);
					*anon13 = anon104;
					uint32_t anon105 = printf((uint8_t*)0x400b61);
					*anon13 = anon105;
					uint32_t anon106 = printf(*anon42 == 1 ? anon102 : anon12);
					*anon13 = anon106;
					uint32_t anon107 = printf((uint8_t*)0x400b65);
					*anon13 = anon107;
				}
				if (phi44 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi82 && *(uint64_t*)0x6012b8 == anon95 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi82 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != anon95 && *(uint64_t*)0x6012b0 == phi82))
				{
					*anon42 = *anon24;
					phi43 = *anon5;
					phi44 = phi44 - 1;
				}
				uint64_t anon108 = (phi100 | (__zext uint64_t)phi98) + 1;
				phi_in97 = anon108 & 0xffffffff00000000;
				phi98 = (uint32_t)anon108;
				phi99 = phi99 + 16;
				uint64_t anon109 = (phi51 | phi56 & 0xffffffff) + 1;
				phi_in50 = anon109;
				phi51 = anon109 & 0xffffffff00000000;
				phi53 = phi53 + 16;
				phi54 = phi54 >> 2;
				phi55 = (uint32_t)phi52;
				break;
			}
		}
		phi25 = phi25 + 1;
		uint64_t anon110 = phi31 + 16;
		phi26 = anon110;
		phi27 = (uint64_t*)anon110;
		break;
		uint64_t anon111 = (phi7 | phi8 & 0xffffffff) + 1;
		phi_in1 = anon111 & 0xffffffff00000000;
		phi_in2 = anon111;
		uint64_t anon112 = phi9 + 16;
		phi_in3 = anon112;
		phi_in4 = (uint64_t*)anon112;
		phi6 = (uint32_t)anon111;
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

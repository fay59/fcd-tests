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
		uint32_t* anon11;
		uint8_t* anon12;
		uint64_t phi42;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi_in4;
		if ((uint32_t)arg1 > phi6)
		{
			anon11 = (uint32_t*)0x601300;
			anon12 = (uint8_t*)0x400b54;
			*anon11 = sscanf(*(uint8_t**)((phi8 << 3) + arg2), anon12);
			phi10 = (uint64_t*)phi9;
		}
		uint64_t* anon13 = (uint64_t*)(phi9 | 8);
		if (*anon13 != 0)
		{
			uint64_t phi14 = *anon13;
			uint64_t phi_in15 = *phi10;
			uint64_t phi_in16 = *anon13;
			if (*phi10 != 0)
			{
				uint64_t anon19;
				do
				{
					uint64_t phi17 = phi_in15;
					uint64_t phi18 = phi_in16;
					phi14 = phi17;
					anon19 = (uint64_t)((__sext int128_t)phi18 % (__sext int128_t)phi17);
					phi_in15 = anon19;
					phi_in16 = phi17;
				}
				while (anon19 != 0);
			}
			uint64_t anon21 = phi14 >> 63;
			int128_t anon20 = (__sext int128_t)((anon21 ^ phi14) - anon21);
			*phi10 = (uint64_t)((__sext int128_t)*phi10 / anon20);
			*anon13 = (uint64_t)((__sext int128_t)*anon13 / anon20);
		}
		uint64_t* anon22 = (uint64_t*)0x601480;
		*anon22 = *(uint64_t*)0x601290;
		uint64_t* anon23 = (uint64_t*)0x601488;
		*anon23 = *(uint64_t*)0x601298;
		uint64_t phi_in24 = 0;
		uint64_t phi25 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon39;
			do
			{
				uint64_t phi26 = phi_in24;
				uint64_t* anon27 = (uint64_t*)phi25;
				uint64_t anon28 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi25 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi25 - 8);
				*anon27 = anon28;
				uint64_t* anon29 = (uint64_t*)(phi25 | 8);
				uint64_t anon30 = *(uint64_t*)(phi25 - 8) * *(uint64_t*)0x6012a8;
				*anon29 = anon30;
				if (anon30 != 0)
				{
					uint64_t phi31 = anon30;
					uint64_t phi_in32 = anon28;
					uint64_t phi_in33 = anon30;
					if (anon28 != 0)
					{
						uint64_t anon36;
						do
						{
							uint64_t phi34 = phi_in32;
							uint64_t phi35 = phi_in33;
							phi31 = phi34;
							anon36 = (uint64_t)((__sext int128_t)phi35 % (__sext int128_t)phi34);
							phi_in32 = anon36;
							phi_in33 = phi34;
						}
						while (anon36 != 0);
					}
					uint64_t anon38 = phi31 >> 63;
					int128_t anon37 = (__sext int128_t)((anon38 ^ phi31) - anon38);
					*anon27 = (uint64_t)((__sext int128_t)anon28 / anon37);
					*anon29 = (uint64_t)((__sext int128_t)anon30 / anon37);
				}
				anon39 = phi26 + 1;
				phi_in24 = anon39;
				phi25 = phi25 + 16;
			}
			while (*anon5 > anon39);
		}
		uint64_t* anon40 = (uint64_t*)0x601348;
		*anon40 = *(uint64_t*)0x601298;
		uint64_t phi41 = *anon5;
		uint8_t anon44 = (uint8_t)*anon5 << 1 & 0x1e;
		uint64_t anon43 = anon44 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon44 & 0x3fffffff ^ 0x3fffffff;
		phi42 = anon43;
		if (anon43 != 255)
		{
			while (true)
			{
				uint64_t* anon45 = (uint64_t*)0x601340;
				*anon45 = *anon22;
				uint64_t phi46 = phi41;
				uint64_t phi47 = *anon22;
				uint64_t phi48 = *anon40;
				if (((uint32_t)(phi41 >> 63) | (__zext uint32_t)(phi41 == 0)) == 0)
				{
					uint64_t anon63;
					uint64_t phi_in49 = 0;
					uint64_t phi_in50 = 0;
					uint64_t phi51 = phi42;
					uint64_t phi52 = 0;
					uint64_t phi53 = 6296704;
					do
					{
						uint64_t phi_in56;
						uint64_t phi54 = phi_in49;
						uint64_t phi55 = phi_in50;
						if ((phi51 & 2 | 1) == 1)
						{
							if ((phi51 & 1) == 0)
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
								phi_in56 = phi52;
							}
							else 
							{
								uint64_t anon58 = phi52 << 32 >> 28;
								uint64_t* anon57 = (uint64_t*)(anon58 + 6296392);
								uint64_t anon59 = *anon57 * *(uint64_t*)(phi53 + 16);
								*anon57 = anon59;
								uint64_t* anon60 = (uint64_t*)(anon58 + 6296384);
								*anon60 = *anon60 * *(uint64_t*)(phi53 + 24);
								phi_in56 = phi52;
								if (anon59 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi_in56 = phi52;
								}
							}
						}
						else 
						{
							uint32_t anon62 = (uint32_t)phi52 + 1;
							int64_t anon61 = (__sext int64_t)anon62 << 4;
							*(uint64_t*)(anon61 + 6296384) = *(uint64_t*)(phi53 + 16);
							*(uint64_t*)(anon61 + 6296392) = *(uint64_t*)(phi53 + 24);
							phi_in56 = (__zext uint64_t)anon62;
						}
						uint64_t anon64 = phi55 | phi54 & 0xffffffff;
						anon63 = anon64 + 2;
						if (*anon22 >= anon63)
						{
							uint64_t anon65 = anon64 + 1;
							phi_in49 = anon65;
							phi_in50 = anon65 & 0xffffffff00000000;
							phi51 = phi51 >> 2;
							phi52 = phi_in56;
							phi53 = phi53 + 16;
						}
					}
					while (*anon22 >= anon63);
					if (((uint32_t)(*anon22 >> 63) | (__zext uint32_t)(*anon22 == 0)) == 0)
					{
						uint32_t anon88;
						uint32_t phi66 = *(uint32_t*)0x601348;
						uint32_t phi67 = *(uint32_t*)0x60134c;
						uint64_t phi68 = *anon45;
						uint64_t phi69 = 0;
						uint32_t phi_in70 = 0;
						uint64_t phi71 = phi42;
						uint64_t phi72 = *anon45;
						uint64_t phi_in73 = *anon40;
						do
						{
							uint32_t phi74 = phi_in70;
							uint64_t phi_in75 = phi72;
							uint32_t phi76 = phi66;
							uint32_t phi77 = phi67;
							uint64_t phi_in78 = phi68;
							uint64_t phi_in79 = phi69;
							uint64_t phi_in80 = phi_in75;
							uint64_t phi81 = phi_in73;
							if ((phi71 & 2 | 1) != 1)
							{
								uint32_t anon84 = (uint32_t)phi69 + 1;
								int64_t anon83 = (__sext int64_t)anon84 << 4;
								uint64_t anon85 = (__zext uint64_t)phi67 << 32 | (__zext uint64_t)phi66;
								uint64_t anon82 = ((phi71 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon83 + 6296384) * anon85 + phi68 * *(uint64_t*)(anon83 + 6296392);
								*anon45 = anon82;
								uint64_t anon86 = anon85 * *(uint64_t*)(anon83 + 6296392);
								*anon40 = anon86;
								phi76 = (uint32_t)anon86;
								phi77 = (uint32_t)(anon86 >> 32);
								phi_in78 = anon82;
								phi_in79 = (__zext uint64_t)anon84;
								phi_in80 = anon82;
								phi81 = anon86;
							}
							phi46 = *anon22;
							phi47 = phi_in80;
							phi48 = phi81;
							phi66 = phi76;
							phi67 = phi77;
							phi68 = phi_in78;
							phi69 = phi_in79;
							uint32_t anon87 = phi74 + 1;
							phi_in70 = anon87;
							phi71 = phi71 >> 2;
							phi72 = phi_in80;
							phi_in73 = phi81;
							anon88 = (uint32_t)*anon22;
						}
						while (anon87 != anon88);
					}
					else 
					{
						phi46 = *anon22 & 0xffffffff;
						phi47 = *anon45;
						phi48 = *anon40;
					}
				}
				uint64_t phi89 = phi47;
				uint64_t phi90 = 0;
				if (phi48 != 0)
				{
					uint64_t phi91 = phi48;
					uint64_t phi_in92 = phi89;
					uint64_t phi_in93 = phi48;
					if (phi89 != 0)
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
					uint64_t anon97 = (uint64_t)((__sext int128_t)phi89 / anon98);
					*anon45 = anon97;
					uint64_t anon100 = (uint64_t)((__sext int128_t)phi48 / anon98);
					*anon40 = anon100;
					phi90 = anon100;
					phi89 = anon97;
				}
				if (*(uint64_t*)0x6012b8 != 0)
				{
					if (*(uint64_t*)0x6012b0 == phi89)
					{
						if (*(uint64_t*)0x6012b8 != phi90 && phi42 == 256)
						{
							break;
						}
					}
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi89 && *(uint64_t*)0x6012b8 == phi90)
				{
					uint8_t* anon107;
					uint64_t phi101 = 0;
					uint64_t phi_in102 = 0;
					uint32_t phi_in103 = 1;
					uint64_t phi104 = 6296704;
					if ((((uint32_t)(phi46 >> 63) ^ 1) & (__zext uint32_t)(phi46 != 0)) != 0)
					{
						uint32_t phi106;
						uint64_t anon108;
						do
						{
							uint64_t phi105 = phi_in102;
							phi106 = phi_in103;
							anon107 = (uint8_t*)0x400b58;
							*anon11 = printf(*(uint64_t*)(phi104 | 8) == 1 ? anon107 : anon12);
							*anon11 = printf((uint8_t*)0x400b5c);
							anon108 = phi105 | (__zext uint64_t)phi106;
							if (anon108 < *anon5)
							{
								uint64_t anon109 = anon108 + 1;
								phi_in102 = anon109 & 0xffffffff00000000;
								phi_in103 = (uint32_t)anon109;
								phi104 = phi104 + 16;
							}
						}
						while (anon108 < *anon5);
						phi101 = (__sext int64_t)phi106;
					}
					*anon11 = printf(*(uint64_t*)((phi101 << 4) + 6296712) == 1 ? anon107 : anon12);
					*anon11 = printf((uint8_t*)0x400b61);
					*anon11 = printf(*anon40 == 1 ? anon107 : anon12);
					*anon11 = printf((uint8_t*)0x400b65);
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi89 && *(uint64_t*)0x6012b8 == phi90 || *(uint64_t*)0x6012b0 != phi89 && *(uint64_t*)0x6012b8 != 0) && phi42 == 256)
				{
					break;
				}
				if (phi42 != 256)
				{
					if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi89 && *(uint64_t*)0x6012b8 == phi90 || *(uint64_t*)0x6012b0 != phi89 && *(uint64_t*)0x6012b8 != 0 || *(uint64_t*)0x6012b8 != phi90 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi89)
					{
						*anon40 = *anon23;
						phi41 = *anon5;
						phi42 = phi42 - 1;
					}
				}
			}
		}
		break;
		uint64_t anon111 = phi7 | phi8 & 0xffffffff;
		uint64_t anon110 = anon111 + 1;
		phi_in1 = anon110 & 0xffffffff00000000;
		phi_in2 = anon110;
		uint64_t anon112 = phi9 + 16;
		phi_in3 = anon112;
		phi_in4 = (uint64_t*)anon112;
		phi6 = (uint32_t)anon110;
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

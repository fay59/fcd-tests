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
		uint32_t* anon11;
		uint8_t* anon12;
		uint64_t phi42;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi4;
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
		uint64_t phi_in40 = *(uint64_t*)0x601298;
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
				uint64_t* anon46 = (uint64_t*)0x601348;
				*anon46 = phi_in40;
				uint64_t phi47 = phi41;
				uint64_t phi48 = *anon22;
				uint64_t phi49 = phi_in40;
				if (((uint32_t)(phi41 >> 63) | (__zext uint32_t)(phi41 == 0)) == 0)
				{
					uint64_t anon64;
					uint64_t phi_in50 = 0;
					uint64_t phi_in51 = 0;
					uint64_t phi52 = phi42;
					uint64_t phi53 = 0;
					uint64_t phi54 = 6296704;
					do
					{
						uint64_t phi57;
						uint64_t phi55 = phi_in50;
						uint64_t phi56 = phi_in51;
						if ((phi52 & 2 | 1) == 1)
						{
							if ((phi52 & 1) == 0)
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
								phi57 = phi53;
							}
							else 
							{
								uint64_t anon59 = phi53 << 32 >> 28;
								uint64_t* anon58 = (uint64_t*)(anon59 + 6296392);
								uint64_t anon60 = *anon58 * *(uint64_t*)(phi54 + 16);
								*anon58 = anon60;
								uint64_t* anon61 = (uint64_t*)(anon59 + 6296384);
								*anon61 = *anon61 * *(uint64_t*)(phi54 + 24);
								phi57 = phi53;
								if (anon60 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi57 = phi53;
								}
							}
						}
						else 
						{
							uint32_t anon63 = (uint32_t)phi53 + 1;
							int64_t anon62 = (__sext int64_t)anon63 << 4;
							*(uint64_t*)(anon62 + 6296384) = *(uint64_t*)(phi54 + 16);
							*(uint64_t*)(anon62 + 6296392) = *(uint64_t*)(phi54 + 24);
							phi57 = (__zext uint64_t)anon63;
						}
						uint64_t anon65 = phi56 | phi55 & 0xffffffff;
						anon64 = anon65 + 2;
						if (*anon22 >= anon64)
						{
							uint64_t anon66 = anon65 + 1;
							phi_in50 = anon66;
							phi_in51 = anon66 & 0xffffffff00000000;
							phi52 = phi52 >> 2;
							phi53 = phi57;
							phi54 = phi54 + 16;
						}
					}
					while (*anon22 >= anon64);
					if (((uint32_t)(*anon22 >> 63) | (__zext uint32_t)(*anon22 == 0)) == 0)
					{
						uint32_t anon89;
						uint32_t phi67 = *(uint32_t*)0x601348;
						uint32_t phi68 = *(uint32_t*)0x60134c;
						uint64_t phi69 = *anon45;
						uint64_t phi70 = 0;
						uint32_t phi_in71 = 0;
						uint64_t phi72 = phi42;
						uint64_t phi73 = *anon45;
						uint64_t phi_in74 = *anon46;
						do
						{
							uint32_t phi75 = phi_in71;
							uint64_t phi_in76 = phi73;
							uint32_t phi77 = phi67;
							uint32_t phi78 = phi68;
							uint64_t phi_in79 = phi69;
							uint64_t phi80 = phi70;
							uint64_t phi_in81 = phi_in76;
							uint64_t phi82 = phi_in74;
							if ((phi72 & 2 | 1) != 1)
							{
								uint32_t anon85 = (uint32_t)phi70 + 1;
								int64_t anon84 = (__sext int64_t)anon85 << 4;
								uint64_t anon86 = (__zext uint64_t)phi68 << 32 | (__zext uint64_t)phi67;
								uint64_t anon83 = ((phi72 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon84 + 6296384) * anon86 + phi69 * *(uint64_t*)(anon84 + 6296392);
								*anon45 = anon83;
								uint64_t anon87 = anon86 * *(uint64_t*)(anon84 + 6296392);
								*anon46 = anon87;
								phi77 = (uint32_t)anon87;
								phi78 = (uint32_t)(anon87 >> 32);
								phi_in79 = anon83;
								phi80 = (__zext uint64_t)anon85;
								phi_in81 = anon83;
								phi82 = anon87;
							}
							phi49 = phi82;
							phi47 = *anon22;
							phi48 = phi_in81;
							phi67 = phi77;
							phi68 = phi78;
							phi69 = phi_in79;
							phi70 = phi80;
							uint32_t anon88 = phi75 + 1;
							phi_in71 = anon88;
							phi72 = phi72 >> 2;
							phi73 = phi_in81;
							phi_in74 = phi49;
							anon89 = (uint32_t)*anon22;
						}
						while (anon88 != anon89);
					}
					else 
					{
						phi47 = *anon22 & 0xffffffff;
						phi48 = *anon45;
						phi49 = *anon46;
					}
				}
				uint64_t phi90 = 0;
				if (phi49 != 0)
				{
					uint64_t phi91 = phi49;
					uint64_t phi_in92 = phi48;
					uint64_t phi_in93 = phi49;
					if (phi48 != 0)
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
					uint64_t anon97 = (uint64_t)((__sext int128_t)phi48 / anon98);
					*anon45 = anon97;
					uint64_t anon100 = (uint64_t)((__sext int128_t)phi49 / anon98);
					*anon46 = anon100;
					phi90 = anon100;
					phi48 = anon97;
				}
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi90 && *(uint64_t*)0x6012b0 == phi48 && phi42 == 256)
				{
					break;
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi48 && *(uint64_t*)0x6012b8 == phi90)
				{
					uint8_t* anon107;
					uint64_t phi101 = 0;
					uint64_t phi_in102 = 0;
					uint32_t phi_in103 = 1;
					uint64_t phi104 = 6296704;
					if ((((uint32_t)(phi47 >> 63) ^ 1) & (__zext uint32_t)(phi47 != 0)) != 0)
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
					*anon11 = printf(*anon46 == 1 ? anon107 : anon12);
					*anon11 = printf((uint8_t*)0x400b65);
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi48 && *(uint64_t*)0x6012b8 == phi90 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi48) && phi42 == 256)
				{
					break;
				}
				if (phi42 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi48 && *(uint64_t*)0x6012b8 == phi90 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi48 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi90 && *(uint64_t*)0x6012b0 == phi48))
				{
					phi_in40 = *anon23;
					phi41 = *anon5;
					phi42 = phi42 - 1;
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
		phi4 = (uint64_t*)anon112;
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

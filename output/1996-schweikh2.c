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
	uint32_t* anon11;
	uint8_t* anon12;
	uint64_t anon20;
	uint64_t phi_in41;
	uint64_t phi1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi4 = anon5;
	uint32_t phi6 = 1;
	do
	{
		uint64_t phi7 = phi_in2;
		uint64_t phi8 = phi_in3;
		uint64_t* phi_in9 = phi4;
		uint64_t* phi10 = phi_in9;
		if ((uint32_t)arg1 > phi6)
		{
			anon11 = (uint32_t*)0x601300;
			anon12 = (uint8_t*)0x400b54;
			*anon11 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon12);
			phi10 = (uint64_t*)phi8;
		}
		uint64_t* anon13 = (uint64_t*)(phi8 | 8);
		if (*anon13 != 0)
		{
			uint64_t phi14 = *anon13;
			uint64_t phi_in15 = *phi10;
			uint64_t phi16 = *anon13;
			if (*phi10 != 0)
			{
				uint64_t anon17;
				do
				{
					phi16 = phi_in15;
					phi14 = phi16;
					anon17 = (uint64_t)((__sext int128_t)phi16 % (__sext int128_t)phi16);
					phi_in15 = anon17;
				}
				while (anon17 != 0);
			}
			uint64_t anon19 = phi14 >> 63;
			int128_t anon18 = (__sext int128_t)((anon19 ^ phi14) - anon19);
			*phi10 = (uint64_t)((__sext int128_t)*phi10 / anon18);
			*anon13 = (uint64_t)((__sext int128_t)*anon13 / anon18);
		}
		anon20 = phi1 | phi7 & 0xffffffff;
		if (anon20 != 4)
		{
			uint64_t anon21 = anon20 + 1;
			phi1 = anon21 & 0xffffffff00000000;
			phi_in2 = anon21;
			uint64_t anon22 = phi8 + 16;
			phi_in3 = anon22;
			phi4 = (uint64_t*)anon22;
			phi6 = (uint32_t)anon21;
		}
	}
	while (anon20 != 4);
	uint64_t* anon23 = (uint64_t*)0x601480;
	*anon23 = *(uint64_t*)0x601290;
	uint64_t* anon24 = (uint64_t*)0x601488;
	*anon24 = *(uint64_t*)0x601298;
	uint64_t phi25 = 0;
	uint64_t phi26 = 6296720;
	if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
	{
		uint64_t anon38;
		do
		{
			uint64_t* anon27 = (uint64_t*)phi26;
			uint64_t anon28 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi26 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi26 - 8);
			*anon27 = anon28;
			uint64_t* anon29 = (uint64_t*)(phi26 | 8);
			uint64_t anon30 = *(uint64_t*)(phi26 - 8) * *(uint64_t*)0x6012a8;
			*anon29 = anon30;
			if (anon30 != 0)
			{
				uint64_t phi31 = anon30;
				uint64_t phi_in32 = anon28;
				uint64_t phi33 = anon30;
				if (anon28 != 0)
				{
					uint64_t anon35;
					do
					{
						uint64_t phi_in34 = phi_in32;
						phi31 = phi_in34;
						anon35 = (uint64_t)((__sext int128_t)phi33 % (__sext int128_t)phi_in34);
						phi_in32 = anon35;
						phi33 = phi_in34;
					}
					while (anon35 != 0);
				}
				uint64_t anon37 = phi31 >> 63;
				int128_t anon36 = (__sext int128_t)((anon37 ^ phi31) - anon37);
				*anon27 = (uint64_t)((__sext int128_t)anon28 / anon36);
				*anon29 = (uint64_t)((__sext int128_t)anon30 / anon36);
			}
			anon38 = phi25 + 1;
			phi25 = anon38;
			phi26 = phi26 + 16;
		}
		while (*anon5 > anon38);
	}
	uint64_t phi39 = *(uint64_t*)0x601298;
	uint64_t phi40 = *anon5;
	uint8_t anon43 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon42 = anon43 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon43 & 0x3fffffff ^ 0x3fffffff;
	phi_in41 = anon42;
	if (anon42 != 255)
	{
		while (true)
		{
			uint64_t* anon44 = (uint64_t*)0x601348;
			*anon44 = phi39;
			uint64_t phi_in45 = phi40;
			uint64_t phi46 = phi_in41;
			uint64_t* anon47 = (uint64_t*)0x601340;
			*anon47 = *anon23;
			uint64_t phi48 = phi_in45;
			uint64_t phi49 = *anon23;
			uint64_t phi50 = *anon44;
			if (((uint32_t)(phi_in45 >> 63) | (__zext uint32_t)(phi_in45 == 0)) == 0)
			{
				uint64_t anon62;
				uint64_t phi_in51 = 0;
				uint64_t phi52 = 0;
				uint64_t phi53 = 0;
				uint64_t phi54 = 6296704;
				do
				{
					uint64_t phi55 = phi_in51;
					if ((phi46 & 2 | 1) == 1)
					{
						if ((phi46 & 1) == 0)
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
							uint64_t anon57 = phi53 << 32 >> 28;
							uint64_t* anon56 = (uint64_t*)(anon57 + 6296392);
							uint64_t anon58 = *anon56 * *(uint64_t*)(phi54 + 16);
							*anon56 = anon58;
							uint64_t* anon59 = (uint64_t*)(anon57 + 6296384);
							*anon59 = *anon59 * *(uint64_t*)(phi54 + 24);
							phi53 = phi53;
							if (anon58 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
								phi53 = phi53;
							}
						}
					}
					else 
					{
						uint32_t anon61 = (uint32_t)phi53 + 1;
						int64_t anon60 = (__sext int64_t)anon61 << 4;
						*(uint64_t*)(anon60 + 6296384) = *(uint64_t*)(phi54 + 16);
						*(uint64_t*)(anon60 + 6296392) = *(uint64_t*)(phi54 + 24);
						phi53 = (__zext uint64_t)anon61;
					}
					uint64_t anon63 = phi52 | phi55 & 0xffffffff;
					anon62 = anon63 + 2;
					if (*anon23 >= anon62)
					{
						uint64_t anon64 = anon63 + 1;
						phi_in51 = anon64;
						phi52 = anon64 & 0xffffffff00000000;
						phi46 = phi46 >> 2;
						phi54 = phi54 + 16;
					}
				}
				while (*anon23 >= anon62);
				if (((uint32_t)(*anon23 >> 63) | (__zext uint32_t)(*anon23 == 0)) == 0)
				{
					uint32_t anon90;
					uint32_t phi65 = *(uint32_t*)0x601348;
					uint32_t phi66 = *(uint32_t*)0x60134c;
					uint64_t phi67 = *anon47;
					uint64_t phi68 = 0;
					uint32_t phi69 = 0;
					uint64_t phi70 = phi46;
					uint64_t phi71 = *anon47;
					uint64_t phi72 = *anon44;
					do
					{
						uint32_t phi_in73 = phi65;
						uint64_t phi_in74 = phi71;
						uint64_t phi_in75 = phi72;
						uint32_t phi_in76 = phi_in73;
						uint32_t phi77 = phi66;
						uint64_t phi78 = phi67;
						uint64_t phi79 = phi68;
						uint64_t phi80 = phi_in74;
						uint64_t phi81 = phi_in75;
						if ((phi70 & 2 | 1) != 1)
						{
							uint32_t anon84 = (uint32_t)phi68 + 1;
							int64_t anon83 = (__sext int64_t)anon84 << 4;
							uint64_t anon85 = (__zext uint64_t)phi66 << 32 | (__zext uint64_t)phi_in73;
							uint64_t anon82 = ((phi70 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon83 + 6296384) * anon85 + phi67 * *(uint64_t*)(anon83 + 6296392);
							*anon47 = anon82;
							uint64_t anon86 = anon85 * *(uint64_t*)(anon83 + 6296392);
							*anon44 = anon86;
							phi_in76 = (uint32_t)anon86;
							phi77 = (uint32_t)(anon86 >> 32);
							phi78 = anon82;
							phi79 = (__zext uint64_t)anon84;
							phi80 = anon82;
							phi81 = anon86;
						}
						uint64_t phi_in87 = phi80;
						uint64_t phi_in88 = phi81;
						phi48 = *anon23;
						phi49 = phi_in87;
						phi50 = phi_in88;
						phi65 = phi_in76;
						phi66 = phi77;
						phi67 = phi78;
						phi68 = phi79;
						uint32_t anon89 = phi69 + 1;
						phi69 = anon89;
						phi70 = phi70 >> 2;
						phi71 = phi_in87;
						phi72 = phi_in88;
						anon90 = (uint32_t)*anon23;
					}
					while (anon89 != anon90);
				}
				else 
				{
					phi48 = *anon23 & 0xffffffff;
					phi49 = *anon47;
					phi50 = *anon44;
				}
			}
			uint64_t phi91 = phi49;
			uint64_t phi92 = 0;
			if (phi50 != 0)
			{
				uint64_t phi93 = phi50;
				uint64_t phi_in94 = phi91;
				uint64_t phi95 = phi50;
				if (phi91 != 0)
				{
					uint64_t anon96;
					do
					{
						phi95 = phi_in94;
						phi93 = phi95;
						anon96 = (uint64_t)((__sext int128_t)phi95 % (__sext int128_t)phi95);
						phi_in94 = anon96;
					}
					while (anon96 != 0);
				}
				uint64_t anon99 = phi93 >> 63;
				int128_t anon98 = (__sext int128_t)((anon99 ^ phi93) - anon99);
				uint64_t anon97 = (uint64_t)((__sext int128_t)phi91 / anon98);
				*anon47 = anon97;
				uint64_t anon100 = (uint64_t)((__sext int128_t)phi50 / anon98);
				*anon44 = anon100;
				phi92 = anon100;
				phi91 = anon97;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi91)
				{
					if (*(uint64_t*)0x6012b8 != phi92 && phi46 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b0 == phi91 && *(uint64_t*)0x6012b8 == phi92)
			{
				uint8_t* anon107;
				uint64_t phi101 = 0;
				uint64_t phi_in102 = 0;
				uint32_t phi_in103 = 1;
				uint64_t phi104 = 6296704;
				if ((((uint32_t)(phi48 >> 63) ^ 1) & (__zext uint32_t)(phi48 != 0)) != 0)
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
				*anon11 = printf(*anon44 == 1 ? anon107 : anon12);
				*anon11 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b0 != phi91 || *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 == phi92) && phi46 == 256)
			{
				break;
			}
			if (phi46 != 256)
			{
				if (*(uint64_t*)0x6012b0 != phi91 || *(uint64_t*)0x6012b0 == phi91 || *(uint64_t*)0x6012b8 == 0)
				{
					phi39 = *anon24;
					phi40 = *anon5;
					phi_in41 = phi46 - 1;
				}
			}
		}
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

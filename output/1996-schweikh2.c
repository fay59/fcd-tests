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
	uint32_t* anon9;
	uint8_t* anon10;
	uint64_t anon19;
	uint64_t phi39;
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
		if ((uint32_t)arg1 > phi6)
		{
			anon9 = (uint32_t*)0x601300;
			anon10 = (uint8_t*)0x400b54;
			*anon9 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon10);
			phi4 = (uint64_t*)phi8;
		}
		uint64_t* anon11 = (uint64_t*)(phi8 | 8);
		if (*anon11 != 0)
		{
			uint64_t phi12 = *anon11;
			uint64_t phi_in13 = *phi4;
			uint64_t phi14 = *anon11;
			if (*phi4 != 0)
			{
				uint64_t anon16;
				do
				{
					uint64_t phi_in15 = phi_in13;
					phi12 = phi_in15;
					anon16 = (uint64_t)((__sext int128_t)phi14 % (__sext int128_t)phi_in15);
					phi_in13 = anon16;
					phi14 = phi_in15;
				}
				while (anon16 != 0);
			}
			uint64_t anon18 = phi12 >> 63;
			int128_t anon17 = (__sext int128_t)((anon18 ^ phi12) - anon18);
			*phi4 = (uint64_t)((__sext int128_t)*phi4 / anon17);
			*anon11 = (uint64_t)((__sext int128_t)*anon11 / anon17);
		}
		anon19 = phi1 | phi7 & 0xffffffff;
		if (anon19 != 4)
		{
			uint64_t anon20 = anon19 + 1;
			phi1 = anon20 & 0xffffffff00000000;
			phi_in2 = anon20;
			uint64_t anon21 = phi8 + 16;
			phi_in3 = anon21;
			phi4 = (uint64_t*)anon21;
			phi6 = (uint32_t)anon20;
		}
	}
	while (anon19 != 4);
	uint64_t* anon22 = (uint64_t*)0x601480;
	*anon22 = *(uint64_t*)0x601290;
	uint64_t* anon23 = (uint64_t*)0x601488;
	*anon23 = *(uint64_t*)0x601298;
	uint64_t phi24 = 0;
	uint64_t phi25 = 6296720;
	if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
	{
		uint64_t anon36;
		do
		{
			uint64_t* anon26 = (uint64_t*)phi25;
			uint64_t anon27 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi25 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi25 - 8);
			*anon26 = anon27;
			uint64_t* anon28 = (uint64_t*)(phi25 | 8);
			uint64_t anon29 = *(uint64_t*)(phi25 - 8) * *(uint64_t*)0x6012a8;
			*anon28 = anon29;
			if (anon29 != 0)
			{
				uint64_t phi30 = anon29;
				uint64_t phi_in31 = anon27;
				uint64_t phi32 = anon29;
				if (anon27 != 0)
				{
					uint64_t anon33;
					do
					{
						phi32 = phi_in31;
						phi30 = phi32;
						anon33 = (uint64_t)((__sext int128_t)phi32 % (__sext int128_t)phi32);
						phi_in31 = anon33;
					}
					while (anon33 != 0);
				}
				uint64_t anon35 = phi30 >> 63;
				int128_t anon34 = (__sext int128_t)((anon35 ^ phi30) - anon35);
				*anon26 = (uint64_t)((__sext int128_t)anon27 / anon34);
				*anon28 = (uint64_t)((__sext int128_t)anon29 / anon34);
			}
			anon36 = phi24 + 1;
			phi24 = anon36;
			phi25 = phi25 + 16;
		}
		while (*anon5 > anon36);
	}
	uint64_t* anon37 = (uint64_t*)0x601348;
	*anon37 = *(uint64_t*)0x601298;
	uint64_t phi38 = *anon5;
	uint8_t anon41 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon40 = anon41 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon41 & 0x3fffffff ^ 0x3fffffff;
	phi39 = anon40;
	if (anon40 != 255)
	{
		while (true)
		{
			uint64_t phi_in42 = *anon37;
			uint64_t phi43 = phi38;
			uint64_t phi_in44 = phi39;
			uint64_t* anon45 = (uint64_t*)0x601340;
			*anon45 = *anon22;
			*anon37 = phi_in42;
			uint64_t phi46 = *anon22;
			uint64_t phi47 = phi_in42;
			if (((uint32_t)(phi43 >> 63) | (__zext uint32_t)(phi43 == 0)) == 0)
			{
				uint64_t anon61;
				uint64_t phi_in48 = 0;
				uint64_t phi49 = 0;
				uint64_t phi50 = phi_in44;
				uint64_t phi51 = 0;
				uint64_t phi52 = 6296704;
				do
				{
					uint64_t phi53 = phi_in48;
					uint64_t phi54 = phi51;
					if ((phi50 & 2 | 1) == 1)
					{
						if ((phi50 & 1) == 0)
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
							uint64_t anon56 = phi54 << 32 >> 28;
							uint64_t* anon55 = (uint64_t*)(anon56 + 6296392);
							uint64_t anon57 = *anon55 * *(uint64_t*)(phi52 + 16);
							*anon55 = anon57;
							uint64_t* anon58 = (uint64_t*)(anon56 + 6296384);
							*anon58 = *anon58 * *(uint64_t*)(phi52 + 24);
							if (anon57 <= -1)
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
						uint32_t anon60 = (uint32_t)phi54 + 1;
						int64_t anon59 = (__sext int64_t)anon60 << 4;
						*(uint64_t*)(anon59 + 6296384) = *(uint64_t*)(phi52 + 16);
						*(uint64_t*)(anon59 + 6296392) = *(uint64_t*)(phi52 + 24);
						phi54 = (__zext uint64_t)anon60;
					}
					uint64_t anon62 = phi49 | phi53 & 0xffffffff;
					anon61 = anon62 + 2;
					if (*anon22 >= anon61)
					{
						uint64_t anon63 = anon62 + 1;
						phi_in48 = anon63;
						phi49 = anon63 & 0xffffffff00000000;
						phi50 = phi50 >> 2;
						phi51 = phi54;
						phi52 = phi52 + 16;
					}
				}
				while (*anon22 >= anon61);
				if (((uint32_t)(*anon22 >> 63) | (__zext uint32_t)(*anon22 == 0)) == 0)
				{
					uint32_t anon82;
					uint32_t phi64 = *(uint32_t*)0x601348;
					uint32_t phi65 = *(uint32_t*)0x60134c;
					uint64_t phi66 = *anon45;
					uint64_t phi67 = 0;
					uint32_t phi68 = 0;
					uint64_t phi69 = phi_in44;
					uint64_t phi_in70 = *anon45;
					uint64_t phi71 = *anon37;
					do
					{
						uint32_t phi72 = phi64;
						phi65 = phi65;
						uint64_t phi_in73 = phi66;
						uint64_t phi74 = phi67;
						uint64_t phi75 = phi_in70;
						if ((phi69 & 2 | 1) != 1)
						{
							uint32_t anon78 = (uint32_t)phi67 + 1;
							int64_t anon77 = (__sext int64_t)anon78 << 4;
							uint64_t anon79 = (__zext uint64_t)phi65 << 32 | (__zext uint64_t)phi72;
							uint64_t anon76 = ((phi69 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon77 + 6296384) * anon79 + phi66 * *(uint64_t*)(anon77 + 6296392);
							*anon45 = anon76;
							uint64_t anon80 = anon79 * *(uint64_t*)(anon77 + 6296392);
							*anon37 = anon80;
							phi72 = (uint32_t)anon80;
							phi65 = (uint32_t)(anon80 >> 32);
							phi_in73 = anon76;
							phi74 = (__zext uint64_t)anon78;
							phi75 = anon76;
							phi71 = anon80;
						}
						phi46 = phi75;
						phi_in42 = phi71;
						phi43 = *anon22;
						phi47 = phi_in42;
						phi64 = phi72;
						phi66 = phi_in73;
						phi67 = phi74;
						uint32_t anon81 = phi68 + 1;
						phi68 = anon81;
						phi69 = phi69 >> 2;
						phi_in70 = phi46;
						phi71 = phi_in42;
						anon82 = (uint32_t)*anon22;
					}
					while (anon81 != anon82);
				}
				else 
				{
					phi43 = *anon22 & 0xffffffff;
					phi46 = *anon45;
					phi47 = *anon37;
				}
			}
			uint64_t phi83 = phi46;
			uint64_t phi84 = 0;
			if (phi47 != 0)
			{
				uint64_t phi85 = phi47;
				uint64_t phi_in86 = phi83;
				uint64_t phi87 = phi47;
				if (phi83 != 0)
				{
					uint64_t anon88;
					do
					{
						phi87 = phi_in86;
						phi85 = phi87;
						anon88 = (uint64_t)((__sext int128_t)phi87 % (__sext int128_t)phi87);
						phi_in86 = anon88;
					}
					while (anon88 != 0);
				}
				uint64_t anon91 = phi85 >> 63;
				int128_t anon90 = (__sext int128_t)((anon91 ^ phi85) - anon91);
				uint64_t anon89 = (uint64_t)((__sext int128_t)phi83 / anon90);
				*anon45 = anon89;
				uint64_t anon92 = (uint64_t)((__sext int128_t)phi47 / anon90);
				*anon37 = anon92;
				phi84 = anon92;
				phi83 = anon89;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi83)
				{
					if (*(uint64_t*)0x6012b8 != phi84 && phi_in44 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi83 && *(uint64_t*)0x6012b8 == phi84)
			{
				uint8_t* anon99;
				uint64_t phi93 = 0;
				uint64_t phi_in94 = 0;
				uint32_t phi_in95 = 1;
				uint64_t phi96 = 6296704;
				if ((((uint32_t)(phi43 >> 63) ^ 1) & (__zext uint32_t)(phi43 != 0)) != 0)
				{
					uint32_t phi98;
					uint64_t anon100;
					do
					{
						uint64_t phi97 = phi_in94;
						phi98 = phi_in95;
						anon99 = (uint8_t*)0x400b58;
						*anon9 = printf(*(uint64_t*)(phi96 | 8) == 1 ? anon99 : anon10);
						*anon9 = printf((uint8_t*)0x400b5c);
						anon100 = phi97 | (__zext uint64_t)phi98;
						if (anon100 < *anon5)
						{
							uint64_t anon101 = anon100 + 1;
							phi_in94 = anon101 & 0xffffffff00000000;
							phi_in95 = (uint32_t)anon101;
							phi96 = phi96 + 16;
						}
					}
					while (anon100 < *anon5);
					phi93 = (__sext int64_t)phi98;
				}
				*anon9 = printf(*(uint64_t*)((phi93 << 4) + 6296712) == 1 ? anon99 : anon10);
				*anon9 = printf((uint8_t*)0x400b61);
				*anon9 = printf(*anon37 == 1 ? anon99 : anon10);
				*anon9 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi83 && *(uint64_t*)0x6012b8 == phi84 || *(uint64_t*)0x6012b0 != phi83 && *(uint64_t*)0x6012b8 != 0) && phi_in44 == 256)
			{
				break;
			}
			if (phi_in44 != 256)
			{
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi83 && *(uint64_t*)0x6012b8 == phi84 || *(uint64_t*)0x6012b0 != phi83 && *(uint64_t*)0x6012b8 != 0 || *(uint64_t*)0x6012b8 != phi84 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi83)
				{
					*anon37 = *anon23;
					phi38 = *anon5;
					phi39 = phi_in44 - 1;
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

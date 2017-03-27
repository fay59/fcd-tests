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
	uint32_t* anon10;
	uint8_t* anon11;
	uint64_t anon19;
	uint64_t phi_in39;
	uint64_t phi1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi_in4 = anon5;
	uint32_t phi6 = 1;
	do
	{
		uint64_t phi7 = phi_in2;
		uint64_t phi8 = phi_in3;
		uint64_t* phi9 = phi_in4;
		if ((uint32_t)arg1 > phi6)
		{
			anon10 = (uint32_t*)0x601300;
			anon11 = (uint8_t*)0x400b54;
			*anon10 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon11);
			phi9 = (uint64_t*)phi8;
		}
		uint64_t* anon12 = (uint64_t*)(phi8 | 8);
		if (*anon12 != 0)
		{
			uint64_t phi13 = *anon12;
			uint64_t phi_in14 = *phi9;
			uint64_t phi15 = *anon12;
			if (*phi9 != 0)
			{
				uint64_t anon16;
				do
				{
					phi13 = phi_in14;
					anon16 = (uint64_t)((__sext int128_t)phi15 % (__sext int128_t)phi13);
					phi_in14 = anon16;
					phi15 = phi13;
				}
				while (anon16 != 0);
			}
			uint64_t anon18 = phi13 >> 63;
			int128_t anon17 = (__sext int128_t)((anon18 ^ phi13) - anon18);
			*phi9 = (uint64_t)((__sext int128_t)*phi9 / anon17);
			*anon12 = (uint64_t)((__sext int128_t)*anon12 / anon17);
		}
		anon19 = phi1 | phi7 & 0xffffffff;
		if (anon19 != 4)
		{
			uint64_t anon20 = anon19 + 1;
			phi1 = anon20 & 0xffffffff00000000;
			phi_in2 = anon20;
			uint64_t anon21 = phi8 + 16;
			phi_in3 = anon21;
			phi_in4 = (uint64_t*)anon21;
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
	uint64_t phi37 = *(uint64_t*)0x601298;
	uint64_t phi38 = *anon5;
	uint8_t anon41 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon40 = anon41 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon41 & 0x3fffffff ^ 0x3fffffff;
	phi_in39 = anon40;
	if (anon40 != 255)
	{
		while (true)
		{
			uint64_t phi_in42 = phi37;
			uint64_t phi43 = phi38;
			uint64_t* anon44 = (uint64_t*)0x601340;
			*anon44 = *anon22;
			uint64_t* anon45 = (uint64_t*)0x601348;
			*anon45 = phi_in42;
			uint64_t phi46 = *anon22;
			uint64_t phi47 = phi_in42;
			if (((uint32_t)(phi43 >> 63) | (__zext uint32_t)(phi43 == 0)) == 0)
			{
				uint64_t anon60;
				uint64_t phi_in48 = 0;
				uint64_t phi49 = 0;
				uint64_t phi50 = phi_in39;
				uint64_t phi51 = 0;
				uint64_t phi52 = 6296704;
				do
				{
					uint64_t phi53 = phi_in48;
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
							phi51 = phi51;
						}
						else 
						{
							uint64_t anon55 = phi51 << 32 >> 28;
							uint64_t* anon54 = (uint64_t*)(anon55 + 6296392);
							uint64_t anon56 = *anon54 * *(uint64_t*)(phi52 + 16);
							*anon54 = anon56;
							uint64_t* anon57 = (uint64_t*)(anon55 + 6296384);
							*anon57 = *anon57 * *(uint64_t*)(phi52 + 24);
							phi51 = phi51;
							if (anon56 <= -1)
							{
								(__asm "pxor xmm5, xmm5")();
								(__asm "movq xmm0, qword ptr [rsp + 8]")();
								(__asm "movhps xmm0, qword ptr [rsp + 8]")();
								(__asm "psubq xmm5, xmm0")();
								(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
								phi51 = phi51;
							}
						}
					}
					else 
					{
						uint32_t anon59 = (uint32_t)phi51 + 1;
						int64_t anon58 = (__sext int64_t)anon59 << 4;
						*(uint64_t*)(anon58 + 6296384) = *(uint64_t*)(phi52 + 16);
						*(uint64_t*)(anon58 + 6296392) = *(uint64_t*)(phi52 + 24);
						phi51 = (__zext uint64_t)anon59;
					}
					uint64_t anon61 = phi49 | phi53 & 0xffffffff;
					anon60 = anon61 + 2;
					if (*anon22 >= anon60)
					{
						uint64_t anon62 = anon61 + 1;
						phi_in48 = anon62;
						phi49 = anon62 & 0xffffffff00000000;
						phi50 = phi50 >> 2;
						phi52 = phi52 + 16;
					}
				}
				while (*anon22 >= anon60);
				if (((uint32_t)(*anon22 >> 63) | (__zext uint32_t)(*anon22 == 0)) == 0)
				{
					uint32_t anon85;
					uint32_t phi63 = *(uint32_t*)0x601348;
					uint32_t phi64 = *(uint32_t*)0x60134c;
					uint64_t phi65 = *anon44;
					uint64_t phi66 = 0;
					uint32_t phi67 = 0;
					uint64_t phi68 = phi_in39;
					uint64_t phi69 = *anon44;
					uint64_t phi70 = *anon45;
					do
					{
						uint32_t phi_in71 = phi63;
						uint64_t phi_in72 = phi69;
						uint64_t phi_in73 = phi70;
						uint32_t phi74 = phi_in71;
						uint32_t phi_in75 = phi64;
						uint64_t phi76 = phi65;
						uint64_t phi77 = phi66;
						uint64_t phi78 = phi_in72;
						phi_in42 = phi_in73;
						if ((phi68 & 2 | 1) != 1)
						{
							uint32_t anon81 = (uint32_t)phi66 + 1;
							int64_t anon80 = (__sext int64_t)anon81 << 4;
							uint64_t anon82 = (__zext uint64_t)phi64 << 32 | (__zext uint64_t)phi_in71;
							uint64_t anon79 = ((phi68 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon80 + 6296384) * anon82 + phi65 * *(uint64_t*)(anon80 + 6296392);
							*anon44 = anon79;
							uint64_t anon83 = anon82 * *(uint64_t*)(anon80 + 6296392);
							*anon45 = anon83;
							phi74 = (uint32_t)anon83;
							phi_in75 = (uint32_t)(anon83 >> 32);
							phi76 = anon79;
							phi77 = (__zext uint64_t)anon81;
							phi78 = anon79;
							phi_in42 = anon83;
						}
						phi46 = phi78;
						phi43 = *anon22;
						phi47 = phi_in42;
						phi63 = phi74;
						phi64 = phi_in75;
						phi65 = phi76;
						phi66 = phi77;
						uint32_t anon84 = phi67 + 1;
						phi67 = anon84;
						phi68 = phi68 >> 2;
						phi69 = phi46;
						phi70 = phi_in42;
						anon85 = (uint32_t)*anon22;
					}
					while (anon84 != anon85);
				}
				else 
				{
					phi43 = *anon22 & 0xffffffff;
					phi46 = *anon44;
					phi47 = *anon45;
				}
			}
			uint64_t phi86 = phi46;
			uint64_t phi87 = 0;
			if (phi47 != 0)
			{
				uint64_t phi88 = phi47;
				uint64_t phi_in89 = phi86;
				uint64_t phi90 = phi47;
				if (phi86 != 0)
				{
					uint64_t anon91;
					do
					{
						phi88 = phi_in89;
						anon91 = (uint64_t)((__sext int128_t)phi90 % (__sext int128_t)phi88);
						phi_in89 = anon91;
						phi90 = phi88;
					}
					while (anon91 != 0);
				}
				uint64_t anon94 = phi88 >> 63;
				int128_t anon93 = (__sext int128_t)((anon94 ^ phi88) - anon94);
				uint64_t anon92 = (uint64_t)((__sext int128_t)phi86 / anon93);
				*anon44 = anon92;
				uint64_t anon95 = (uint64_t)((__sext int128_t)phi47 / anon93);
				*anon45 = anon95;
				phi87 = anon95;
				phi86 = anon92;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi86)
				{
					if (*(uint64_t*)0x6012b8 != phi87 && phi_in39 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == phi87)
			{
				uint8_t* anon102;
				uint64_t phi96 = 0;
				uint64_t phi_in97 = 0;
				uint32_t phi_in98 = 1;
				uint64_t phi99 = 6296704;
				if ((((uint32_t)(phi43 >> 63) ^ 1) & (__zext uint32_t)(phi43 != 0)) != 0)
				{
					uint32_t phi101;
					uint64_t anon103;
					do
					{
						uint64_t phi100 = phi_in97;
						phi101 = phi_in98;
						anon102 = (uint8_t*)0x400b58;
						*anon10 = printf(*(uint64_t*)(phi99 | 8) == 1 ? anon102 : anon11);
						*anon10 = printf((uint8_t*)0x400b5c);
						anon103 = phi100 | (__zext uint64_t)phi101;
						if (anon103 < *anon5)
						{
							uint64_t anon104 = anon103 + 1;
							phi_in97 = anon104 & 0xffffffff00000000;
							phi_in98 = (uint32_t)anon104;
							phi99 = phi99 + 16;
						}
					}
					while (anon103 < *anon5);
					phi96 = (__sext int64_t)phi101;
				}
				*anon10 = printf(*(uint64_t*)((phi96 << 4) + 6296712) == 1 ? anon102 : anon11);
				*anon10 = printf((uint8_t*)0x400b61);
				*anon10 = printf(*anon45 == 1 ? anon102 : anon11);
				*anon10 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b0 != phi86 || *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 == phi87) && phi_in39 == 256)
			{
				break;
			}
			if (phi_in39 != 256)
			{
				phi37 = *anon23;
				phi38 = *anon5;
				phi_in39 = phi_in39 - 1;
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

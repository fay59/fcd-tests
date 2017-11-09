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
	uint32_t* anon9;
	uint8_t* anon10;
	uint64_t anon17;
	uint64_t phi_in36;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi_in4 = anon5;
	uint32_t phi_in6 = 1;
	do
	{
		uint64_t phi7 = phi_in2;
		uint64_t phi8 = phi_in3;
		if ((uint32_t)arg1 > phi_in6)
		{
			anon9 = (uint32_t*)0x601300;
			anon10 = (uint8_t*)0x400b54;
			*anon9 = sscanf(*(uint8_t**)((phi7 << 3) + arg2), anon10);
			phi_in4 = (uint64_t*)phi8;
		}
		uint64_t* anon11 = (uint64_t*)(phi8 | 8);
		if (*anon11 != 0)
		{
			uint64_t phi12 = *anon11;
			uint64_t phi_in13 = *phi_in4;
			phi12 = *anon11;
			if (*phi_in4 != 0)
			{
				uint64_t anon14;
				do
				{
					phi12 = phi_in13;
					anon14 = (uint64_t)((__sext int128_t)phi12 % (__sext int128_t)phi12);
					phi_in13 = anon14;
				}
				while (anon14 != 0);
			}
			uint64_t anon16 = phi12 >> 63;
			int128_t anon15 = (__sext int128_t)((anon16 ^ phi12) - anon16);
			*phi_in4 = (uint64_t)((__sext int128_t)*phi_in4 / anon15);
			*anon11 = (uint64_t)((__sext int128_t)*anon11 / anon15);
		}
		anon17 = phi_in1 | phi7 & 0xffffffff;
		if (anon17 != 4)
		{
			uint64_t anon18 = anon17 + 1;
			phi_in1 = anon18 & 0xffffffff00000000;
			phi_in2 = anon18;
			uint64_t anon19 = phi8 + 16;
			phi_in3 = anon19;
			phi_in4 = (uint64_t*)anon19;
			phi_in6 = (uint32_t)anon18;
		}
	}
	while (anon17 != 4);
	uint64_t* anon20 = (uint64_t*)0x601480;
	*anon20 = *(uint64_t*)0x601290;
	uint64_t* anon21 = (uint64_t*)0x601488;
	*anon21 = *(uint64_t*)0x601298;
	uint64_t phi_in22 = 0;
	uint64_t phi_in23 = 6296720;
	if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
	{
		uint64_t anon33;
		do
		{
			uint64_t* anon24 = (uint64_t*)phi_in23;
			uint64_t anon25 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi_in23 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi_in23 - 8);
			*anon24 = anon25;
			uint64_t* anon26 = (uint64_t*)(phi_in23 | 8);
			uint64_t anon27 = *(uint64_t*)(phi_in23 - 8) * *(uint64_t*)0x6012a8;
			*anon26 = anon27;
			if (anon27 != 0)
			{
				uint64_t phi28 = anon27;
				uint64_t phi_in29 = anon25;
				phi28 = anon27;
				if (anon25 != 0)
				{
					uint64_t anon30;
					do
					{
						phi28 = phi_in29;
						anon30 = (uint64_t)((__sext int128_t)phi28 % (__sext int128_t)phi28);
						phi_in29 = anon30;
					}
					while (anon30 != 0);
				}
				uint64_t anon32 = phi28 >> 63;
				int128_t anon31 = (__sext int128_t)((anon32 ^ phi28) - anon32);
				*anon24 = (uint64_t)((__sext int128_t)anon25 / anon31);
				*anon26 = (uint64_t)((__sext int128_t)anon27 / anon31);
			}
			anon33 = phi_in22 + 1;
			phi_in22 = anon33;
			phi_in23 = phi_in23 + 16;
		}
		while (*anon5 > anon33);
	}
	uint64_t phi_in34 = *(uint64_t*)0x601298;
	uint64_t phi_in35 = *anon5;
	uint8_t anon38 = (uint8_t)*anon5 << 1 & 0x1e;
	uint64_t anon37 = anon38 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon38 & 0x3fffffff ^ 0x3fffffff;
	phi_in36 = anon37;
	if (anon37 != 255)
	{
		while (true)
		{
			uint64_t* anon60;
			uint64_t* anon39 = (uint64_t*)0x601340;
			*anon39 = *anon20;
			uint64_t phi_in40 = *anon20;
			if (((uint32_t)(phi_in35 >> 63) | (__zext uint32_t)(phi_in35 == 0)) == 0)
			{
				uint64_t anon52;
				uint64_t phi_in41 = 0;
				uint64_t phi_in42 = 0;
				uint64_t phi_in43 = 0;
				uint64_t phi_in44 = 6296704;
				do
				{
					uint64_t phi45 = phi_in41;
					if ((phi_in36 & 2 | 1) == 1)
					{
						if ((phi_in36 & 1) == 0)
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
							uint64_t anon47 = phi_in43 << 32 >> 28;
							uint64_t* anon46 = (uint64_t*)(anon47 + 6296392);
							uint64_t anon48 = *anon46 * *(uint64_t*)(phi_in44 + 16);
							*anon46 = anon48;
							uint64_t* anon49 = (uint64_t*)(anon47 + 6296384);
							*anon49 = *anon49 * *(uint64_t*)(phi_in44 + 24);
							if (anon48 <= -1)
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
						uint32_t anon51 = (uint32_t)phi_in43 + 1;
						int64_t anon50 = (__sext int64_t)anon51 << 4;
						*(uint64_t*)(anon50 + 6296384) = *(uint64_t*)(phi_in44 + 16);
						*(uint64_t*)(anon50 + 6296392) = *(uint64_t*)(phi_in44 + 24);
						phi_in43 = (__zext uint64_t)anon51;
					}
					uint64_t anon53 = phi_in42 | phi45 & 0xffffffff;
					anon52 = anon53 + 2;
					if (*anon20 >= anon52)
					{
						uint64_t anon54 = anon53 + 1;
						phi_in41 = anon54;
						phi_in42 = anon54 & 0xffffffff00000000;
						phi_in36 = phi_in36 >> 2;
						phi_in44 = phi_in44 + 16;
					}
				}
				while (*anon20 >= anon52);
				if (((uint32_t)(*anon20 >> 63) | (__zext uint32_t)(*anon20 == 0)) == 0)
				{
					uint32_t anon70;
					uint32_t phi_in55 = *(uint32_t*)0x601348;
					uint32_t phi_in56 = *(uint32_t*)0x60134c;
					uint64_t phi_in57 = *anon39;
					uint64_t phi_in58 = 0;
					uint32_t phi_in59 = 0;
					phi_in40 = *anon39;
					anon60 = (uint64_t*)0x601348;
					phi_in34 = *anon60;
					do
					{
						uint32_t phi_in61 = phi_in56;
						uint64_t phi_in62 = phi_in57;
						uint64_t phi_in63 = phi_in58;
						if ((phi_in36 & 2 | 1) != 1)
						{
							uint32_t anon66 = (uint32_t)phi_in58 + 1;
							int64_t anon65 = (__sext int64_t)anon66 << 4;
							uint64_t anon67 = (__zext uint64_t)phi_in56 << 32 | (__zext uint64_t)phi_in55;
							uint64_t anon64 = ((phi_in36 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon65 + 6296384) * anon67 + phi_in57 * *(uint64_t*)(anon65 + 6296392);
							*anon39 = anon64;
							uint64_t anon68 = anon67 * *(uint64_t*)(anon65 + 6296392);
							*anon60 = anon68;
							phi_in55 = (uint32_t)anon68;
							phi_in61 = (uint32_t)(anon68 >> 32);
							phi_in62 = anon64;
							phi_in63 = (__zext uint64_t)anon66;
							phi_in40 = anon64;
							phi_in34 = anon68;
						}
						phi_in35 = *anon20;
						phi_in56 = phi_in61;
						phi_in57 = phi_in62;
						phi_in58 = phi_in63;
						uint32_t anon69 = phi_in59 + 1;
						phi_in59 = anon69;
						phi_in36 = phi_in36 >> 2;
						anon70 = (uint32_t)*anon20;
					}
					while (anon69 != anon70);
				}
				else 
				{
					phi_in35 = *anon20 & 0xffffffff;
					phi_in40 = *anon39;
					phi_in34 = *anon60;
				}
			}
			uint64_t phi_in71 = 0;
			if (phi_in34 != 0)
			{
				uint64_t phi72 = phi_in34;
				uint64_t phi_in73 = phi_in40;
				phi72 = phi_in34;
				if (phi_in40 != 0)
				{
					uint64_t anon74;
					do
					{
						phi72 = phi_in73;
						anon74 = (uint64_t)((__sext int128_t)phi72 % (__sext int128_t)phi72);
						phi_in73 = anon74;
					}
					while (anon74 != 0);
				}
				uint64_t anon77 = phi72 >> 63;
				int128_t anon76 = (__sext int128_t)((anon77 ^ phi72) - anon77);
				uint64_t anon75 = (uint64_t)((__sext int128_t)phi_in40 / anon76);
				*anon39 = anon75;
				uint64_t anon78 = (uint64_t)((__sext int128_t)phi_in34 / anon76);
				*anon60 = anon78;
				phi_in71 = anon78;
				phi_in40 = anon75;
			}
			if (*(uint64_t*)0x6012b8 != 0)
			{
				if (*(uint64_t*)0x6012b0 == phi_in40)
				{
					if (*(uint64_t*)0x6012b8 != phi_in71 && phi_in36 == 256)
					{
						break;
					}
				}
			}
			if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b0 == phi_in40 && *(uint64_t*)0x6012b8 == phi_in71)
			{
				uint8_t* anon85;
				uint64_t phi_in79 = 0;
				uint64_t phi_in80 = 0;
				uint32_t phi_in81 = 1;
				uint64_t phi_in82 = 6296704;
				if ((((uint32_t)(phi_in35 >> 63) ^ 1) & (__zext uint32_t)(phi_in35 != 0)) != 0)
				{
					uint32_t phi84;
					uint64_t anon86;
					do
					{
						uint64_t phi83 = phi_in80;
						phi84 = phi_in81;
						anon85 = (uint8_t*)0x400b58;
						*anon9 = printf(*(uint64_t*)(phi_in82 | 8) == 1 ? anon85 : anon10);
						*anon9 = printf((uint8_t*)0x400b5c);
						anon86 = phi83 | (__zext uint64_t)phi84;
						if (anon86 < *anon5)
						{
							uint64_t anon87 = anon86 + 1;
							phi_in80 = anon87 & 0xffffffff00000000;
							phi_in81 = (uint32_t)anon87;
							phi_in82 = phi_in82 + 16;
						}
					}
					while (anon86 < *anon5);
					phi_in79 = (__sext int64_t)phi84;
				}
				*anon9 = printf(*(uint64_t*)((phi_in79 << 4) + 6296712) == 1 ? anon85 : anon10);
				*anon9 = printf((uint8_t*)0x400b61);
				*anon9 = printf(*anon60 == 1 ? anon85 : anon10);
				*anon9 = printf((uint8_t*)0x400b65);
			}
			if ((*(uint64_t*)0x6012b0 != phi_in40 || *(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 == phi_in71) && phi_in36 == 256)
			{
				break;
			}
			if (phi_in36 != 256)
			{
				if (*(uint64_t*)0x6012b0 != phi_in40 || *(uint64_t*)0x6012b0 == phi_in40 || *(uint64_t*)0x6012b8 == 0)
				{
					phi_in34 = *anon21;
					phi_in35 = *anon5;
					phi_in36 = phi_in36 - 1;
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

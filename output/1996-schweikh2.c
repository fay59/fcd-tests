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
	uint64_t phi1 = 0;
	uint64_t phi_in2 = 1;
	uint64_t phi_in3 = 6296192;
	uint64_t* anon5 = (uint64_t*)0x601280;
	phi_in4 = anon5;
	uint32_t phi6 = 1;
	while (true)
	{
		uint32_t* anon10;
		uint8_t* anon11;
		uint64_t phi36;
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
					phi15 = phi_in14;
					phi13 = phi15;
					anon16 = (uint64_t)((__sext int128_t)phi15 % (__sext int128_t)phi15);
					phi_in14 = anon16;
				}
				while (anon16 != 0);
			}
			uint64_t anon18 = phi13 >> 63;
			int128_t anon17 = (__sext int128_t)((anon18 ^ phi13) - anon18);
			*phi9 = (uint64_t)((__sext int128_t)*phi9 / anon17);
			*anon12 = (uint64_t)((__sext int128_t)*anon12 / anon17);
		}
		uint64_t* anon19 = (uint64_t*)0x601480;
		*anon19 = *(uint64_t*)0x601290;
		uint64_t* anon20 = (uint64_t*)0x601488;
		*anon20 = *(uint64_t*)0x601298;
		uint64_t phi21 = 0;
		uint64_t phi22 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon33;
			do
			{
				uint64_t* anon23 = (uint64_t*)phi22;
				uint64_t anon24 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi22 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi22 - 8);
				*anon23 = anon24;
				uint64_t* anon25 = (uint64_t*)(phi22 | 8);
				uint64_t anon26 = *(uint64_t*)(phi22 - 8) * *(uint64_t*)0x6012a8;
				*anon25 = anon26;
				if (anon26 != 0)
				{
					uint64_t phi27 = anon26;
					uint64_t phi_in28 = anon24;
					uint64_t phi29 = anon26;
					if (anon24 != 0)
					{
						uint64_t anon30;
						do
						{
							phi29 = phi_in28;
							phi27 = phi29;
							anon30 = (uint64_t)((__sext int128_t)phi29 % (__sext int128_t)phi29);
							phi_in28 = anon30;
						}
						while (anon30 != 0);
					}
					uint64_t anon32 = phi27 >> 63;
					int128_t anon31 = (__sext int128_t)((anon32 ^ phi27) - anon32);
					*anon23 = (uint64_t)((__sext int128_t)anon24 / anon31);
					*anon25 = (uint64_t)((__sext int128_t)anon26 / anon31);
				}
				anon33 = phi21 + 1;
				phi21 = anon33;
				phi22 = phi22 + 16;
			}
			while (*anon5 > anon33);
		}
		uint64_t phi34 = *(uint64_t*)0x601298;
		uint64_t phi35 = *anon5;
		uint8_t anon38 = (uint8_t)*anon5 << 1 & 0x1e;
		uint64_t anon37 = anon38 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon38 & 0x3fffffff ^ 0x3fffffff;
		phi36 = anon37;
		if (anon37 != 255)
		{
			while (true)
			{
				uint64_t phi39 = phi34;
				uint64_t phi_in40 = phi35;
				uint64_t phi_in41 = phi36;
				uint64_t* anon42 = (uint64_t*)0x601340;
				*anon42 = *anon19;
				uint64_t* anon43 = (uint64_t*)0x601348;
				*anon43 = phi39;
				uint64_t phi44 = phi_in40;
				uint64_t phi_in45 = *anon19;
				if (((uint32_t)(phi_in40 >> 63) | (__zext uint32_t)(phi_in40 == 0)) == 0)
				{
					uint64_t anon59;
					uint64_t phi_in46 = 0;
					uint64_t phi47 = 0;
					uint64_t phi48 = phi_in41;
					uint64_t phi49 = 0;
					uint64_t phi50 = 6296704;
					do
					{
						uint64_t phi52;
						uint64_t phi51 = phi_in46;
						if ((phi48 & 2 | 1) == 1)
						{
							if ((phi48 & 1) == 0)
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
								phi52 = phi49;
							}
							else 
							{
								uint64_t anon54 = phi49 << 32 >> 28;
								uint64_t* anon53 = (uint64_t*)(anon54 + 6296392);
								uint64_t anon55 = *anon53 * *(uint64_t*)(phi50 + 16);
								*anon53 = anon55;
								uint64_t* anon56 = (uint64_t*)(anon54 + 6296384);
								*anon56 = *anon56 * *(uint64_t*)(phi50 + 24);
								phi52 = phi49;
								if (anon55 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi52 = phi49;
								}
							}
						}
						else 
						{
							uint32_t anon58 = (uint32_t)phi49 + 1;
							int64_t anon57 = (__sext int64_t)anon58 << 4;
							*(uint64_t*)(anon57 + 6296384) = *(uint64_t*)(phi50 + 16);
							*(uint64_t*)(anon57 + 6296392) = *(uint64_t*)(phi50 + 24);
							phi52 = (__zext uint64_t)anon58;
						}
						uint64_t anon60 = phi47 | phi51 & 0xffffffff;
						anon59 = anon60 + 2;
						if (*anon19 >= anon59)
						{
							uint64_t anon61 = anon60 + 1;
							phi_in46 = anon61;
							phi47 = anon61 & 0xffffffff00000000;
							phi48 = phi48 >> 2;
							phi49 = phi52;
							phi50 = phi50 + 16;
						}
					}
					while (*anon19 >= anon59);
					if (((uint32_t)(*anon19 >> 63) | (__zext uint32_t)(*anon19 == 0)) == 0)
					{
						uint32_t anon84;
						uint32_t phi62 = *(uint32_t*)0x601348;
						uint32_t phi63 = *(uint32_t*)0x60134c;
						uint64_t phi64 = *anon42;
						uint64_t phi65 = 0;
						uint32_t phi66 = 0;
						uint64_t phi67 = phi_in41;
						uint64_t phi68 = *anon42;
						uint64_t phi_in69 = *anon43;
						do
						{
							uint32_t phi70 = phi62;
							uint64_t phi_in71 = phi68;
							uint32_t phi_in72 = phi63;
							uint64_t phi73 = phi64;
							uint64_t phi74 = phi65;
							uint64_t phi75 = phi_in71;
							uint64_t phi76 = phi_in69;
							if ((phi67 & 2 | 1) != 1)
							{
								uint32_t anon79 = (uint32_t)phi65 + 1;
								int64_t anon78 = (__sext int64_t)anon79 << 4;
								uint64_t anon80 = (__zext uint64_t)phi63 << 32 | (__zext uint64_t)phi70;
								uint64_t anon77 = ((phi67 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon78 + 6296384) * anon80 + phi64 * *(uint64_t*)(anon78 + 6296392);
								*anon42 = anon77;
								uint64_t anon81 = anon80 * *(uint64_t*)(anon78 + 6296392);
								*anon43 = anon81;
								phi70 = (uint32_t)anon81;
								phi_in72 = (uint32_t)(anon81 >> 32);
								phi73 = anon77;
								phi74 = (__zext uint64_t)anon79;
								phi75 = anon77;
								phi76 = anon81;
							}
							uint64_t phi_in82 = phi75;
							phi39 = phi76;
							phi44 = *anon19;
							phi_in45 = phi_in82;
							phi62 = phi70;
							phi63 = phi_in72;
							phi64 = phi73;
							phi65 = phi74;
							uint32_t anon83 = phi66 + 1;
							phi66 = anon83;
							phi67 = phi67 >> 2;
							phi68 = phi_in82;
							phi_in69 = phi39;
							anon84 = (uint32_t)*anon19;
						}
						while (anon83 != anon84);
					}
					else 
					{
						phi44 = *anon19 & 0xffffffff;
						phi_in45 = *anon42;
						phi39 = *anon43;
					}
				}
				uint64_t phi85 = 0;
				uint64_t phi86 = phi_in45;
				if (phi39 != 0)
				{
					uint64_t phi87 = phi39;
					uint64_t phi_in88 = phi_in45;
					uint64_t phi89 = phi39;
					if (phi_in45 != 0)
					{
						uint64_t anon90;
						do
						{
							phi87 = phi_in88;
							anon90 = (uint64_t)((__sext int128_t)phi89 % (__sext int128_t)phi87);
							phi_in88 = anon90;
							phi89 = phi87;
						}
						while (anon90 != 0);
					}
					uint64_t anon93 = phi87 >> 63;
					int128_t anon92 = (__sext int128_t)((anon93 ^ phi87) - anon93);
					uint64_t anon91 = (uint64_t)((__sext int128_t)phi_in45 / anon92);
					*anon42 = anon91;
					uint64_t anon94 = (uint64_t)((__sext int128_t)phi39 / anon92);
					*anon43 = anon94;
					phi85 = anon94;
					phi86 = anon91;
				}
				if (*(uint64_t*)0x6012b8 != 0)
				{
					if (*(uint64_t*)0x6012b0 == phi86)
					{
						if (*(uint64_t*)0x6012b8 != phi85 && phi_in41 == 256)
						{
							break;
						}
					}
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == phi85)
				{
					uint8_t* anon101;
					uint64_t phi95 = 0;
					uint64_t phi_in96 = 0;
					uint32_t phi_in97 = 1;
					uint64_t phi98 = 6296704;
					if ((((uint32_t)(phi44 >> 63) ^ 1) & (__zext uint32_t)(phi44 != 0)) != 0)
					{
						uint32_t phi100;
						uint64_t anon102;
						do
						{
							uint64_t phi99 = phi_in96;
							phi100 = phi_in97;
							anon101 = (uint8_t*)0x400b58;
							*anon10 = printf(*(uint64_t*)(phi98 | 8) == 1 ? anon101 : anon11);
							*anon10 = printf((uint8_t*)0x400b5c);
							anon102 = phi99 | (__zext uint64_t)phi100;
							if (anon102 < *anon5)
							{
								uint64_t anon103 = anon102 + 1;
								phi_in96 = anon103 & 0xffffffff00000000;
								phi_in97 = (uint32_t)anon103;
								phi98 = phi98 + 16;
							}
						}
						while (anon102 < *anon5);
						phi95 = (__sext int64_t)phi100;
					}
					*anon10 = printf(*(uint64_t*)((phi95 << 4) + 6296712) == 1 ? anon101 : anon11);
					*anon10 = printf((uint8_t*)0x400b61);
					*anon10 = printf(*anon43 == 1 ? anon101 : anon11);
					*anon10 = printf((uint8_t*)0x400b65);
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == phi85 || *(uint64_t*)0x6012b0 != phi86 && *(uint64_t*)0x6012b8 != 0) && phi_in41 == 256)
				{
					break;
				}
				if (phi_in41 != 256)
				{
					if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86 && *(uint64_t*)0x6012b8 == phi85 || *(uint64_t*)0x6012b0 != phi86 && *(uint64_t*)0x6012b8 != 0 || *(uint64_t*)0x6012b8 != phi85 && *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi86)
					{
						phi34 = *anon20;
						phi35 = *anon5;
						phi36 = phi_in41 - 1;
					}
				}
			}
		}
		break;
		uint64_t anon105 = phi1 | phi7 & 0xffffffff;
		uint64_t anon104 = anon105 + 1;
		phi1 = anon104 & 0xffffffff00000000;
		phi_in2 = anon104;
		uint64_t anon106 = phi8 + 16;
		phi_in3 = anon106;
		phi_in4 = (uint64_t*)anon106;
		phi6 = (uint32_t)anon104;
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

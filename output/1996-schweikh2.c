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
	uint32_t phi_in6 = 1;
	while (true)
	{
		uint8_t* anon14;
		uint32_t* anon15;
		uint64_t phi_in49;
		uint64_t phi7 = phi_in1;
		uint64_t phi8 = phi_in2;
		uint64_t phi9 = phi_in3;
		uint64_t* phi10 = phi_in4;
		uint32_t phi11 = phi_in6;
		uint64_t* phi_in12 = phi10;
		if ((uint32_t)arg1 > phi11)
		{
			anon14 = (uint8_t*)0x400b54;
			uint32_t anon13 = sscanf(*(uint8_t**)((phi8 << 3) + arg2), anon14);
			anon15 = (uint32_t*)0x601300;
			*anon15 = anon13;
			phi_in12 = (uint64_t*)phi9;
		}
		uint64_t* phi16 = phi_in12;
		uint64_t* anon17 = (uint64_t*)(phi9 | 8);
		if (*anon17 != 0)
		{
			uint64_t phi_in18 = *anon17;
			uint64_t phi_in19 = *phi16;
			uint64_t phi_in20 = *anon17;
			if (*phi16 != 0)
			{
				uint64_t anon23;
				do
				{
					uint64_t phi21 = phi_in19;
					uint64_t phi22 = phi_in20;
					phi_in18 = phi21;
					anon23 = (uint64_t)((__sext int128_t)phi22 % (__sext int128_t)phi21);
					phi_in19 = anon23;
					phi_in20 = phi21;
				}
				while (anon23 != 0);
			}
			uint64_t phi24 = phi_in18;
			uint64_t anon26 = phi24 >> 63;
			int128_t anon25 = (__sext int128_t)((anon26 ^ phi24) - anon26);
			*phi16 = (uint64_t)((__sext int128_t)*phi16 / anon25);
			*anon17 = (uint64_t)((__sext int128_t)*anon17 / anon25);
		}
		uint64_t* anon27 = (uint64_t*)0x601480;
		*anon27 = *(uint64_t*)0x601290;
		uint64_t* anon28 = (uint64_t*)0x601488;
		*anon28 = *(uint64_t*)0x601298;
		uint64_t phi_in29 = 0;
		uint64_t phi_in30 = 6296720;
		if (((uint32_t)(*anon5 >> 63) | (__zext uint32_t)(*anon5 == 0)) == 0)
		{
			uint64_t anon46;
			do
			{
				uint64_t phi31 = phi_in29;
				uint64_t phi32 = phi_in30;
				uint64_t* anon33 = (uint64_t*)phi32;
				uint64_t anon34 = *(uint64_t*)0x6012a8 * *(uint64_t*)(phi32 - 16) + *(uint64_t*)0x6012a0 * *(uint64_t*)(phi32 - 8);
				*anon33 = anon34;
				uint64_t* anon35 = (uint64_t*)(phi32 | 8);
				uint64_t anon36 = *(uint64_t*)(phi32 - 8) * *(uint64_t*)0x6012a8;
				*anon35 = anon36;
				if (anon36 != 0)
				{
					uint64_t phi_in37 = anon36;
					uint64_t phi_in38 = anon34;
					uint64_t phi_in39 = anon36;
					if (anon34 != 0)
					{
						uint64_t anon42;
						do
						{
							uint64_t phi40 = phi_in38;
							uint64_t phi41 = phi_in39;
							phi_in37 = phi40;
							anon42 = (uint64_t)((__sext int128_t)phi41 % (__sext int128_t)phi40);
							phi_in38 = anon42;
							phi_in39 = phi40;
						}
						while (anon42 != 0);
					}
					uint64_t phi43 = phi_in37;
					uint64_t anon45 = phi43 >> 63;
					int128_t anon44 = (__sext int128_t)((anon45 ^ phi43) - anon45);
					*anon33 = (uint64_t)((__sext int128_t)anon34 / anon44);
					*anon35 = (uint64_t)((__sext int128_t)anon36 / anon44);
				}
				anon46 = phi31 + 1;
				phi_in29 = anon46;
				phi_in30 = phi32 + 16;
			}
			while (*anon5 > anon46);
		}
		uint64_t phi_in47 = *(uint64_t*)0x601298;
		uint64_t phi_in48 = *anon5;
		uint8_t anon51 = (uint8_t)*anon5 << 1 & 0x1e;
		uint64_t anon50 = anon51 == 0 ? 0 : 4294967295 << (__zext uint64_t)anon51 & 0x3fffffff ^ 0x3fffffff;
		phi_in49 = anon50;
		if (anon50 != 255)
		{
			while (true)
			{
				uint64_t phi52 = phi_in47;
				uint64_t phi53 = phi_in48;
				uint64_t phi54 = phi_in49;
				uint64_t* anon55 = (uint64_t*)0x601340;
				*anon55 = *anon27;
				uint64_t* anon56 = (uint64_t*)0x601348;
				*anon56 = phi52;
				uint64_t phi_in57 = phi53;
				uint64_t phi_in58 = *anon27;
				uint64_t phi_in59 = phi52;
				if (((uint32_t)(phi53 >> 63) | (__zext uint32_t)(phi53 == 0)) == 0)
				{
					uint64_t anon78;
					uint64_t phi_in60 = 0;
					uint64_t phi_in61 = 0;
					uint64_t phi_in62 = phi54;
					uint64_t phi_in63 = 0;
					uint64_t phi_in64 = 6296704;
					do
					{
						uint64_t phi_in70;
						uint64_t phi65 = phi_in60;
						uint64_t phi66 = phi_in61;
						uint64_t phi67 = phi_in62;
						uint64_t phi68 = phi_in63;
						uint64_t phi69 = phi_in64;
						if ((phi67 & 2 | 1) == 1)
						{
							if ((phi67 & 1) == 0)
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
								phi_in70 = phi68;
							}
							else 
							{
								uint64_t anon72 = phi68 << 32 >> 28;
								uint64_t* anon71 = (uint64_t*)(anon72 + 6296392);
								uint64_t anon73 = *anon71 * *(uint64_t*)(phi69 + 16);
								*anon71 = anon73;
								uint64_t* anon74 = (uint64_t*)(anon72 + 6296384);
								*anon74 = *anon74 * *(uint64_t*)(phi69 + 24);
								phi_in70 = phi68;
								if (anon73 <= -1)
								{
									(__asm "pxor xmm5, xmm5")();
									(__asm "movq xmm0, qword ptr [rsp + 8]")();
									(__asm "movhps xmm0, qword ptr [rsp + 8]")();
									(__asm "psubq xmm5, xmm0")();
									(__asm "movaps xmmword ptr [rdx + 0x601340], xmm5")();
									phi_in70 = phi68;
								}
							}
						}
						else 
						{
							uint32_t anon76 = (uint32_t)phi68 + 1;
							int64_t anon75 = (__sext int64_t)anon76 << 4;
							*(uint64_t*)(anon75 + 6296384) = *(uint64_t*)(phi69 + 16);
							*(uint64_t*)(anon75 + 6296392) = *(uint64_t*)(phi69 + 24);
							phi_in70 = (__zext uint64_t)anon76;
						}
						uint64_t phi77 = phi_in70;
						uint64_t anon79 = phi66 | phi65 & 0xffffffff;
						anon78 = anon79 + 2;
						if (*anon27 >= anon78)
						{
							uint64_t anon80 = anon79 + 1;
							phi_in60 = anon80;
							phi_in61 = anon80 & 0xffffffff00000000;
							phi_in62 = phi67 >> 2;
							phi_in63 = phi77;
							phi_in64 = phi69 + 16;
						}
					}
					while (*anon27 >= anon78);
					if (((uint32_t)(*anon27 >> 63) | (__zext uint32_t)(*anon27 == 0)) == 0)
					{
						uint32_t anon115;
						uint32_t phi_in81 = *(uint32_t*)0x601348;
						uint32_t phi_in82 = *(uint32_t*)0x60134c;
						uint64_t phi_in83 = *anon55;
						uint64_t phi_in84 = 0;
						uint32_t phi_in85 = 0;
						uint64_t phi_in86 = phi54;
						uint64_t phi_in87 = *anon55;
						uint64_t phi_in88 = *anon56;
						do
						{
							uint32_t phi89 = phi_in81;
							uint32_t phi90 = phi_in82;
							uint64_t phi91 = phi_in83;
							uint64_t phi92 = phi_in84;
							uint32_t phi93 = phi_in85;
							uint64_t phi94 = phi_in86;
							uint64_t phi95 = phi_in87;
							uint64_t phi96 = phi_in88;
							uint32_t phi_in97 = phi89;
							uint32_t phi_in98 = phi90;
							uint64_t phi_in99 = phi91;
							uint64_t phi_in100 = phi92;
							uint64_t phi_in101 = phi95;
							uint64_t phi_in102 = phi96;
							if ((phi94 & 2 | 1) != 1)
							{
								uint32_t anon105 = (uint32_t)phi92 + 1;
								int64_t anon104 = (__sext int64_t)anon105 << 4;
								uint64_t anon106 = (__zext uint64_t)phi90 << 32 | (__zext uint64_t)phi89;
								uint64_t anon103 = ((phi94 << 1 & 2 ^ 2) - 1) * *(uint64_t*)(anon104 + 6296384) * anon106 + phi91 * *(uint64_t*)(anon104 + 6296392);
								*anon55 = anon103;
								uint64_t anon107 = anon106 * *(uint64_t*)(anon104 + 6296392);
								*anon56 = anon107;
								phi_in97 = (uint32_t)anon107;
								phi_in98 = (uint32_t)(anon107 >> 32);
								phi_in99 = anon103;
								phi_in100 = (__zext uint64_t)anon105;
								phi_in101 = anon103;
								phi_in102 = anon107;
							}
							uint32_t phi108 = phi_in97;
							uint32_t phi109 = phi_in98;
							uint64_t phi110 = phi_in99;
							uint64_t phi111 = phi_in100;
							uint64_t phi112 = phi_in101;
							uint64_t phi113 = phi_in102;
							phi_in57 = *anon27;
							phi_in58 = phi112;
							phi_in59 = phi113;
							phi_in81 = phi108;
							phi_in82 = phi109;
							phi_in83 = phi110;
							phi_in84 = phi111;
							uint32_t anon114 = phi93 + 1;
							phi_in85 = anon114;
							phi_in86 = phi94 >> 2;
							phi_in87 = phi112;
							phi_in88 = phi113;
							anon115 = (uint32_t)*anon27;
						}
						while (anon114 != anon115);
					}
					else 
					{
						phi_in57 = *anon27 & 0xffffffff;
						phi_in58 = *anon55;
						phi_in59 = *anon56;
					}
				}
				uint64_t phi116 = phi_in57;
				uint64_t phi117 = phi_in58;
				uint64_t phi118 = phi_in59;
				uint64_t phi_in119 = 0;
				uint64_t phi_in120 = phi117;
				if (phi118 != 0)
				{
					uint64_t phi_in121 = phi118;
					uint64_t phi_in122 = phi117;
					uint64_t phi_in123 = phi118;
					if (phi117 != 0)
					{
						uint64_t anon126;
						do
						{
							uint64_t phi124 = phi_in122;
							uint64_t phi125 = phi_in123;
							phi_in121 = phi124;
							anon126 = (uint64_t)((__sext int128_t)phi125 % (__sext int128_t)phi124);
							phi_in122 = anon126;
							phi_in123 = phi124;
						}
						while (anon126 != 0);
					}
					uint64_t phi127 = phi_in121;
					uint64_t anon130 = phi127 >> 63;
					int128_t anon129 = (__sext int128_t)((anon130 ^ phi127) - anon130);
					uint64_t anon128 = (uint64_t)((__sext int128_t)phi117 / anon129);
					*anon55 = anon128;
					uint64_t anon131 = (uint64_t)((__sext int128_t)phi118 / anon129);
					*anon56 = anon131;
					phi_in119 = anon131;
					phi_in120 = anon128;
				}
				uint64_t phi132 = phi_in119;
				uint64_t phi133 = phi_in120;
				if (*(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi132 && *(uint64_t*)0x6012b0 == phi133 && phi54 == 256)
				{
					break;
				}
				if (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi133 && *(uint64_t*)0x6012b8 == phi132)
				{
					uint8_t* anon142;
					uint64_t phi_in134 = 0;
					uint64_t phi_in135 = 0;
					uint32_t phi_in136 = 1;
					uint64_t phi_in137 = 6296704;
					if ((((uint32_t)(phi116 >> 63) ^ 1) & (__zext uint32_t)(phi116 != 0)) != 0)
					{
						uint32_t phi139;
						uint64_t anon144;
						do
						{
							uint64_t phi138 = phi_in135;
							phi139 = phi_in136;
							uint64_t phi140 = phi_in137;
							anon142 = (uint8_t*)0x400b58;
							uint32_t anon141 = printf(*(uint64_t*)(phi140 | 8) == 1 ? anon142 : anon14);
							*anon15 = anon141;
							uint32_t anon143 = printf((uint8_t*)0x400b5c);
							*anon15 = anon143;
							anon144 = phi138 | (__zext uint64_t)phi139;
							if (anon144 < *anon5)
							{
								uint64_t anon145 = anon144 + 1;
								phi_in135 = anon145 & 0xffffffff00000000;
								phi_in136 = (uint32_t)anon145;
								phi_in137 = phi140 + 16;
							}
						}
						while (anon144 < *anon5);
						phi_in134 = (__sext int64_t)phi139;
					}
					uint64_t phi146 = phi_in134;
					uint32_t anon147 = printf(*(uint64_t*)((phi146 << 4) + 6296712) == 1 ? anon142 : anon14);
					*anon15 = anon147;
					uint32_t anon148 = printf((uint8_t*)0x400b61);
					*anon15 = anon148;
					uint32_t anon149 = printf(*anon56 == 1 ? anon142 : anon14);
					*anon15 = anon149;
					uint32_t anon150 = printf((uint8_t*)0x400b65);
					*anon15 = anon150;
				}
				if ((*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi133 && *(uint64_t*)0x6012b8 == phi132 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi133) && phi54 == 256)
				{
					break;
				}
				if (phi54 != 256 && (*(uint64_t*)0x6012b8 == 0 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 == phi133 && *(uint64_t*)0x6012b8 == phi132 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b0 != phi133 || *(uint64_t*)0x6012b8 != 0 && *(uint64_t*)0x6012b8 != phi132 && *(uint64_t*)0x6012b0 == phi133))
				{
					phi_in47 = *anon28;
					phi_in48 = *anon5;
					phi_in49 = phi54 - 1;
				}
			}
		}
		break;
		uint64_t anon152 = phi7 | phi8 & 0xffffffff;
		uint64_t anon151 = anon152 + 1;
		phi_in1 = anon151 & 0xffffffff00000000;
		phi_in2 = anon151;
		uint64_t anon153 = phi9 + 16;
		phi_in3 = anon153;
		phi_in4 = (uint64_t*)anon153;
		phi_in6 = (uint32_t)anon151;
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

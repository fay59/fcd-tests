#include "tests/bin/1994-imc.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601d68 != 0)
	{
		__gmon_start__();
	}
	return;
}
void getpid(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601d88);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint32_t anon2;
	uint64_t phi3;
	uint8_t* anon5;
	uint32_t* anon6;
	getpid(4195794);
	srand(0);
	uint32_t anon1 = (uint32_t)arg2;
	if (anon1 >= 2)
	{
		anon2 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x401894);
		phi3 = 0;
	}
	if (anon1 < 2 || anon2 != 1 && anon1 >= 2)
	{
		*(uint32_t*)(arg1 - 36) = 5;
		phi3 = 100;
	}
	uint8_t* anon4 = malloc(phi3);
	if (anon4 != null)
	{
		anon6 = (uint32_t*)(arg1 - 36);
		anon5 = malloc((__sext int64_t)*anon6 << 2);
	}
	if (anon4 != null && anon5 == null || anon4 == null)
	{
		perror((uint8_t*)0x401897);
	}
	if (anon5 != null && anon4 != null)
	{
		((*anon6 & 1) == 0 ? (void(*)(uint64_t, uint64_t))0x400a80 : (void(*)(uint64_t, uint64_t))0x401420)((uint64_t)anon4, (uint64_t)anon5);
		uint32_t* anon7 = (uint32_t*)0x601e00;
		*anon7 = 0;
		if (*anon6 * *anon6 != 0)
		{
			uint32_t anon8;
			do
			{
				printf((uint8_t*)0x40189e);
				anon8 = *anon7 + 1;
				*anon7 = anon8;
			}
			while (*anon6 * *anon6 > anon8);
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4005c0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x401810, (void(*)())0x401880, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601de0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196290);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void s(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint32_t* anon20;
	uint32_t anon1 = rand();
	uint32_t* anon2 = (uint32_t*)arg3;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint32_t anon3 = (uint32_t)(((__zext uint64_t)(anon1 > 4294967295 ? anon1 : anon1 + 255) << 32 >> 40) % anon4);
	*anon2 = anon3;
	uint32_t* anon5 = (uint32_t*)(arg3 + 4);
	*anon5 = 3 - anon3;
	uint32_t anon6 = rand();
	uint64_t* anon7 = (uint64_t*)0x601df0;
	*anon7 = arg2;
	uint32_t* anon8 = (uint32_t*)0x601e00;
	uint32_t anon9 = (uint32_t)arg1;
	*anon8 = anon9;
	uint32_t* anon10 = (uint32_t*)(arg3 + 8);
	uint64_t anon12 = (__zext uint64_t)(anon6 > 4294967295 ? anon6 : anon6 + 255);
	uint64_t anon13 = anon12 >> 31;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)((anon12 & 0x100) != 0 ^ anon13 != 0) - anon13 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t anon15 = rand();
	uint32_t* anon16 = (uint32_t*)0x601e04;
	uint32_t anon17 = anon15 > 4294967295 ? anon15 : anon15 + 255;
	uint32_t anon18 = anon17 >> 31;
	*anon16 = (((anon17 >> 8) + anon18 & 1) - anon18) * 3;
	uint32_t anon19 = *anon8 - 1;
	*anon8 = anon19;
	if (*anon8 == 0)
	{
		anon20 = (uint32_t*)0x601dec;
		*anon20 = anon9 - 1;
	}
	else 
	{
		uint32_t anon24;
		uint32_t phi25;
		uint64_t anon32;
		uint32_t phi21 = anon19;
		uint64_t phi_in22 = *anon7;
		do
		{
			uint32_t phi23 = phi21;
			anon24 = anon9 - 1;
			*anon20 = anon24;
			phi25 = phi23;
			uint64_t phi26 = phi_in22;
			uint32_t phi27 = anon24;
			uint64_t phi28 = phi_in22;
			if (anon9 != 0)
			{
				do
				{
					*(uint32_t*)phi28 = *(uint32_t*)(((__sext int64_t)(phi27 ^ *anon16 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
					uint32_t anon29 = *anon20 - 1;
					*anon20 = anon29;
					phi25 = *anon8;
					uint64_t anon30 = phi28 + 4;
					phi26 = anon30;
					phi27 = anon29;
					phi23 = *anon8;
					phi28 = anon30;
				}
				while (*anon20 != 0);
			}
			uint32_t anon31 = phi25 - 1;
			*anon8 = anon31;
			phi21 = anon31;
			anon32 = phi26 + (arg4 << 32 >> 30);
			phi_in22 = anon32;
		}
		while (phi25 != 0);
		*anon7 = anon32;
		*anon20 = anon24;
	}
	uint32_t anon33 = rand();
	uint32_t anon34 = (uint32_t)(((__zext uint64_t)(anon33 > 4294967295 ? anon33 : anon33 + 255) << 32 >> 40) % anon4);
	*anon2 = anon34;
	*anon5 = 3 - anon34;
	uint32_t anon35 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon20;
	uint64_t anon37 = (__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255);
	uint64_t anon38 = anon37 >> 31;
	uint32_t anon36 = *(uint32_t*)(((__zext uint64_t)((anon37 & 0x100) != 0 ^ anon38 != 0) - anon38 << 2) + arg3) ^ 1;
	*anon10 = anon36;
	*anon14 = 3 - anon36;
	if (anon9 != 0)
	{
		uint64_t anon49;
		uint32_t phi39 = *anon20;
		uint64_t phi_in40 = arg2;
		do
		{
			uint64_t anon47;
			uint32_t phi_in41 = phi39;
			uint32_t phi42 = *anon20;
			uint32_t phi43 = phi_in41;
			do
			{
				uint64_t phi44 = phi_in40;
				uint32_t* anon45 = (uint32_t*)phi44;
				*anon45 = *anon45 + (*(uint32_t*)(((__sext int64_t)(phi42 ^ (phi43 >> 31) + phi43 >> 1 ^ *anon16 & phi43) << 2) + arg3) << 2);
				uint32_t anon46 = *anon20 - 1;
				*anon20 = anon46;
				phi42 = anon46;
				phi43 = *anon8;
				anon47 = phi44 + 4;
				phi_in40 = anon47;
			}
			while (*anon20 != 0);
			uint32_t anon48 = *anon8 - 1;
			*anon8 = anon48;
			phi39 = anon48;
			anon49 = anon47 + (arg4 << 32 >> 30);
			phi_in40 = anon49;
		}
		while (*anon8 != 0);
		*anon7 = anon49;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon5;
	uint64_t anon6;
	uint64_t anon7;
	uint64_t* anon8;
	uint64_t phi9;
	uint64_t phi10;
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi14;
	uint32_t phi15;
	uint64_t phi16;
	int64_t anon20;
	uint64_t phi23;
	uint64_t phi24;
	uint32_t* anon34;
	uint64_t phi_in61;
	uint64_t phi_in133;
	uint32_t anon3 = (uint32_t)arg2;
	int64_t anon2 = (__sext int64_t)((anon3 >> 31) + anon3) >> 1;
	uint32_t anon1 = (uint32_t)anon2;
	if (anon1 == 4)
	{
		anon7 = arg5 << 32;
		anon6 = anon7 >> 32;
		anon5 = (uint32_t)anon6;
		uint32_t anon4 = anon5 + 4;
		*(uint32_t*)(arg1 - 248) = anon4;
		s(4199368, 4, arg3, arg4, anon6 + 4 & 0xffffffff);
		s(4199396, 4, arg3 + 16, arg4, (__zext uint64_t)anon4);
		anon8 = (uint64_t*)0x601e10;
		*anon8 = arg3;
		phi9 = 3;
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		uint64_t anon11 = anon12 + anon6 << 2;
		phi10 = anon11;
		phi14 = 4;
		phi15 = 3;
		phi16 = anon11 & 0xfffffffc;
	}
	else 
	{
		uint32_t* anon17 = (uint32_t*)(arg1 - 248);
		uint32_t anon18 = anon1 + anon5;
		*anon17 = anon18;
		uint64_t anon19 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		anon20 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon19)(anon20, arg4, (__zext uint64_t)anon18);
		int64_t anon22 = anon2 << 32;
		int64_t anon21 = anon22 >> 30;
		*(uint64_t*)(arg1 - 168) = anon21;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon19)(anon20, anon21 + arg3, arg4, (__zext uint64_t)*anon17);
		*anon8 = arg3;
		phi23 = 4294967295;
		int64_t anon26 = (anon22 >> 32) * (anon12 + anon6 << 32 >> 32);
		int64_t anon25 = anon26 & 0xffffffff;
		phi24 = anon25;
		if (anon1 != 0)
		{
			phi9 = anon2 + 4294967295 & 0xffffffff;
			phi10 = anon26;
			phi14 = anon1;
			phi15 = anon1 - 1;
			phi16 = anon25;
		}
	}
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi31;
		uint64_t anon49;
		uint32_t phi50;
		uint32_t anon58;
		uint64_t anon83;
		uint32_t phi_in27 = phi15;
		uint32_t* phi28 = (uint32_t*)arg3;
		uint64_t phi_in29 = arg3;
		uint32_t* phi30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in27;
			uint32_t* phi_in32 = phi28;
			uint32_t* phi33 = phi30;
			anon34 = (uint32_t*)0x601dec;
			uint32_t anon36 = (uint32_t)anon12;
			uint32_t anon35 = anon36 - 1;
			*anon34 = anon35;
			uint64_t phi37 = phi_in29;
			uint32_t phi38 = anon35;
			if (anon36 != 0)
			{
				do
				{
					uint32_t* phi39 = phi_in32;
					uint32_t phi40 = 3;
					if (phi14 > phi38)
					{
						uint32_t anon41 = *phi33 + (phi14 * phi14 << 1);
						*phi33 = anon41;
						struct { uint32_t field0; bool field1; } anon42 = llvm.ssub.with.overflow.i32(phi14, anon41);
						uint32_t anon43 = (phi14 & 0x7fffffff) - anon41;
						phi40 = ((anon43 >> 31 ^ (__zext uint32_t)anon42.field1 | (__zext uint32_t)(anon43 == 0)) << 2) - 1;
					}
					uint64_t anon44 = (uint64_t)phi39;
					*(uint32_t*)(anon44 + (phi16 << 32 >> 30)) = phi14 * phi14 * phi40 + *phi39;
					uint32_t anon45 = *anon34 - 1;
					*anon34 = anon45;
					uint64_t anon46 = anon44 + 4;
					phi37 = anon46;
					uint32_t* anon47 = (uint32_t*)anon46;
					phi_in32 = anon47;
					phi33 = anon47;
					phi38 = anon45;
				}
				while (*anon34 != 0);
			}
			phi_in27 = phi31 - 1;
			anon49 = phi37 + (anon7 >> 30);
			uint32_t* anon48 = (uint32_t*)anon49;
			phi28 = anon48;
			phi_in29 = anon49;
			phi30 = anon48;
		}
		while (phi31 != 256);
		*anon8 = anon49;
		uint32_t anon51 = (uint32_t)phi9;
		phi50 = anon51;
		uint64_t phi_in52 = phi9;
		uint32_t phi53 = anon51;
		uint32_t anon55 = anon51 + 1;
		int64_t anon57 = (__sext int64_t)phi15 << 2;
		uint32_t anon56 = (uint32_t)(anon57 + 4 + arg4 >> 2) & 3;
		uint32_t anon54 = anon51 == 4 | anon55 < 5 | anon55 < anon56 ? anon55 : anon56;
		if (anon54 != 0)
		{
			uint32_t phi_in59;
			anon58 = (phi14 >> 31) + phi14 >> 1;
			*(uint32_t*)((anon57 & 0xc) + arg4) = (__zext uint32_t)(anon51 < anon58);
			uint32_t anon60 = anon51 - 1;
			phi_in59 = anon60;
			uint64_t anon62 = phi9 + 4294967295;
			phi_in61 = anon62 & 0xffffffff;
			uint64_t phi63 = (__zext uint64_t)anon60;
			if (anon54 != 1)
			{
				uint32_t anon65 = (uint32_t)anon62;
				struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon58, anon65);
				uint32_t anon66 = anon58 - anon65;
				*(uint32_t*)((anon62 << 32 >> 30) + arg4) = (__zext uint32_t)(anon66 != 0 & !(anon66 < 0 ^ anon64.field1));
				uint32_t anon67 = anon51 - 2;
				phi_in59 = anon67;
				uint64_t anon68 = phi9 + 4294967294;
				phi_in61 = anon68 & 0xffffffff;
				phi63 = (__zext uint64_t)anon67;
				if (anon54 != 2)
				{
					uint32_t anon70 = (uint32_t)anon68;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon58, anon70);
					uint32_t anon71 = anon58 - anon70;
					*(uint32_t*)((anon68 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					uint32_t anon72 = anon51 - 3;
					phi_in59 = anon72;
					uint64_t anon73 = phi9 + 4294967293;
					phi_in61 = anon73 & 0xffffffff;
					phi63 = (__zext uint64_t)anon72;
					if (anon54 != 3)
					{
						uint32_t anon75 = (uint32_t)anon73;
						struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon58, anon75);
						uint32_t anon76 = anon58 - anon75;
						*(uint32_t*)((anon73 << 32 >> 30) + arg4) = (__zext uint32_t)(anon76 != 0 & !(anon76 < 0 ^ anon74.field1));
						uint32_t anon77 = anon51 - 4;
						phi_in59 = anon77;
						uint64_t anon78 = phi9 + 4294967292;
						phi_in61 = anon78 & 0xffffffff;
						phi63 = (__zext uint64_t)anon77;
						if (anon54 == 5)
						{
							uint32_t anon80 = (uint32_t)anon78;
							struct { uint32_t field0; bool field1; } anon79 = llvm.ssub.with.overflow.i32(anon58, anon80);
							uint32_t anon81 = anon58 - anon80;
							*(uint32_t*)((anon78 << 32 >> 30) + arg4) = (__zext uint32_t)(anon81 != 0 & !(anon81 < 0 ^ anon79.field1));
							phi_in59 = anon51 - 5;
							uint64_t anon82 = phi9 + 4294967291 & 0xffffffff;
							phi_in61 = anon82;
							phi63 = anon82;
						}
					}
				}
			}
			phi23 = phi9;
			anon83 = phi10 & 0xffffffff;
			phi24 = anon83;
			phi50 = phi_in59;
			phi_in52 = phi_in61;
			phi53 = (uint32_t)phi63;
		}
		if (anon55 != anon54 && anon54 != 0 || anon54 == 0)
		{
			uint64_t phi86;
			uint32_t phi87;
			uint64_t phi88;
			uint32_t phi89;
			uint32_t anon94;
			uint32_t anon95;
			uint32_t* anon84 = (uint32_t*)(arg1 - 240);
			*anon84 = phi53;
			uint32_t anon85 = anon51 - anon54;
			if (anon85 < 3)
			{
				phi86 = arg4 & 0xf;
				phi87 = (uint32_t)phi_in52;
				phi88 = phi_in52;
				phi89 = *anon84;
			}
			else 
			{
				uint32_t anon93;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon84 = anon58;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in90 = 0;
				do
				{
					uint32_t phi91 = phi_in90;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon92 = phi91 + 1;
					phi_in90 = anon92;
					anon94 = anon55 - anon54;
					anon93 = (uint32_t)(((__zext uint64_t)anon94 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon92 < anon93);
				phi23 = phi9;
				phi24 = anon83;
				anon95 = anon93 << 2;
				if (anon94 != anon95)
				{
					phi86 = arg4;
					uint32_t anon96 = phi50 - anon95;
					phi87 = anon96;
					phi88 = (__zext uint64_t)anon96;
					phi89 = anon96;
				}
			}
			if (anon85 < 3 || anon85 >= 3 && anon94 != anon95)
			{
				struct { uint32_t field0; bool field1; } anon97 = llvm.ssub.with.overflow.i32(anon58, phi89);
				uint32_t anon98 = anon58 - phi89;
				*(uint32_t*)(phi86 + ((__sext int64_t)phi89 << 2)) = (__zext uint32_t)(anon98 != 0 & !(anon98 < 0 ^ anon97.field1));
				phi23 = phi9;
				phi24 = anon83;
				if (phi89 != 0)
				{
					uint32_t anon100 = (uint32_t)(phi88 + 4294967295);
					struct { uint32_t field0; bool field1; } anon99 = llvm.ssub.with.overflow.i32(anon58, anon100);
					uint32_t anon101 = anon58 - anon100;
					*(uint32_t*)(phi86 + ((phi88 << 32) - 4294967296 >> 30)) = (__zext uint32_t)(anon101 != 0 & !(anon101 < 0 ^ anon99.field1));
					phi23 = phi9;
					phi24 = anon83;
					if (anon100 != 0)
					{
						uint32_t anon103 = phi87 - 2;
						struct { uint32_t field0; bool field1; } anon102 = llvm.ssub.with.overflow.i32(anon58, anon103);
						uint32_t anon104 = anon58 - anon103;
						*(uint32_t*)(phi86 + ((__sext int64_t)anon103 << 2)) = (__zext uint32_t)(anon104 != 0 & !(anon104 < 0 ^ anon102.field1));
						phi23 = phi9;
						phi24 = anon83;
					}
				}
			}
		}
	}
	uint64_t* anon105 = (uint64_t*)0x601df8;
	*anon105 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi_in106;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon107 = anon2 + 1;
		phi_in106 = (uint32_t)(anon107 + (anon107 >> 31 & 1) << 32 >> 33);
		*anon8 = arg3;
		while (true)
		{
			uint64_t phi111;
			uint64_t phi_in116;
			uint64_t phi117;
			uint32_t phi118;
			uint64_t phi119;
			uint64_t anon171;
			uint32_t anon178;
			uint64_t phi108 = *anon8;
			if (anon1 != 0)
			{
				uint32_t anon132;
				int64_t anon135;
				uint32_t phi_in136;
				uint32_t phi140;
				uint32_t phi142;
				uint32_t anon148;
				uint32_t* anon151;
				uint64_t phi163;
				uint32_t phi168;
				uint64_t anon170;
				uint32_t phi109 = phi_in106;
				uint32_t phi110 = phi_in106;
				phi111 = (anon2 - phi23 << 32 >> 30) - 4 + arg4;
				uint64_t anon115 = phi23 << 32;
				uint64_t anon114 = anon115 >> 30;
				uint64_t anon113 = (anon114 & 0xc) + arg4;
				phi112 = anon113;
				phi_in116 = 0;
				phi117 = *anon8;
				phi118 = 0;
				phi119 = phi_in116;
				uint64_t phi120 = phi117;
				uint32_t* anon121 = (uint32_t*)0x601e00;
				uint32_t anon122 = (uint32_t)phi23;
				*anon121 = anon122;
				uint32_t phi123 = anon1;
				if (anon122 != 0)
				{
					uint32_t anon128;
					do
					{
						uint32_t anon124 = rand();
						uint64_t anon125 = ((__zext uint64_t)(anon124 > 4294967295 ? anon124 : anon124 + 255) << 32 >> 40) % (__sext int64_t)phi123;
						*anon34 = (uint32_t)anon125;
						uint32_t* anon126 = (uint32_t*)0x601e08;
						uint32_t* anon127 = (uint32_t*)(((__sext int64_t)*anon121 << 2) + arg4);
						*anon126 = *anon127;
						*anon127 = *(uint32_t*)((anon125 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = *anon126;
						anon128 = *anon121 - 1;
						*anon121 = anon128;
						phi123 = *anon121;
					}
					while (anon128 != 0);
					phi120 = *anon8;
				}
				uint64_t phi_in129 = phi120;
				uint32_t* anon130 = (uint32_t*)phi111;
				if (*anon130 == 0)
				{
					uint32_t phi131;
					bool anon143;
					uint64_t anon145;
					uint32_t phi_in146;
					uint64_t phi_in147;
					anon132 = anon1 - 1;
					phi131 = anon132;
					anon135 = anon2 << 32 >> 30;
					int64_t anon134 = anon135 + arg4;
					phi_in133 = anon134;
					phi_in136 = phi109;
					uint32_t anon137 = anon122 - phi118;
					if (phi109 > anon137)
					{
						uint64_t anon139;
						do
						{
							*anon34 = phi131;
							uint64_t phi138 = phi_in133;
							phi131 = *anon34 - 1;
							anon139 = phi138 - 4;
							phi_in133 = anon139;
						}
						while (*(uint32_t*)anon139 == 0);
						*anon130 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in136 = phi109 - 1;
					}
					else 
					{
						phi140 = phi141;
						phi142 = phi110;
						anon143 = anon1 != 3 | phi110 == 0;
						if (!anon143)
						{
							anon145 = (__zext uint64_t)anon137;
							phi144 = anon145;
							phi_in146 = anon132;
							phi_in147 = anon134;
							phi140 = phi141;
							phi142 = phi110;
						}
					}
					uint64_t phi144 = anon145;
					phi_in146 = anon132;
					phi_in147 = anon134;
					anon148 = phi118 + anon132 - anon122;
					if (phi110 <= anon137 && !anon143 && phi141 == 2 | anon137 == anon148 || phi110 > anon137)
					{
						uint64_t anon150;
						do
						{
							*anon34 = phi_in146;
							uint64_t phi149 = phi_in147;
							phi144 = phi144 & 0xffffffffffffff00 | (__zext uint64_t)(*anon34 == anon148);
							phi_in146 = *anon34 - 1;
							anon150 = phi149 - 4;
							phi_in147 = anon150;
						}
						while (*anon34 == anon148 | *(uint32_t*)anon150 == 0);
						anon151 = (uint32_t*)phi112;
						*anon151 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi140 = phi141 - (__zext uint32_t)(anon137 == anon148);
						phi142 = phi110 - 1;
					}
				}
				else 
				{
					uint64_t phi_in152;
					uint32_t phi_in156;
					uint64_t phi_in158;
					*anon34 = anon132;
					uint64_t anon153 = (arg4 & 0xf) + anon135 - 4;
					phi_in152 = anon153;
					if (phi109 == 0)
					{
						uint32_t* anon155;
						uint32_t* anon159;
						do
						{
							uint64_t phi154 = phi_in152;
							*anon34 = *anon34 - 1;
							phi_in152 = phi154 - 4;
							anon155 = (uint32_t*)phi154;
						}
						while (*anon155 != 0);
						*anon155 = 1;
						*anon130 = 0;
						phi_in136 = phi109;
						do
						{
							*anon34 = phi_in156;
							uint64_t phi157 = phi_in158;
							phi_in156 = *anon34 - 1;
							phi_in158 = phi157 - 4;
							anon159 = (uint32_t*)phi157;
						}
						while (*anon159 != 0 | *anon34 == anon148);
						*anon159 = 1;
						*anon151 = 0;
						phi140 = phi141;
						phi142 = phi110;
					}
					else 
					{
						phi_in136 = phi109 - 1;
						phi140 = phi141;
						phi142 = phi110 - 1;
					}
					phi_in156 = anon132;
					phi_in158 = anon153;
				}
				uint32_t phi141 = phi_in136;
				phi109 = phi140;
				phi110 = phi142;
				uint64_t* anon160 = (uint64_t*)0x601df0;
				*anon160 = arg4;
				*anon34 = anon122;
				uint32_t phi161 = anon122;
				uint64_t phi_in162 = arg4;
				do
				{
					phi163 = phi_in129;
					uint32_t phi_in164 = phi161;
					uint64_t phi165 = phi_in162;
					if (*(uint32_t*)phi165 != 0)
					{
						uint32_t* anon166 = (uint32_t*)phi163;
						uint32_t* anon167 = (uint32_t*)(phi163 + (phi24 << 32 >> 30));
						*anon166 = *anon167;
						*anon167 = *anon166;
						phi_in164 = *anon166;
					}
					phi168 = phi_in164;
					uint32_t anon169 = phi168 - 1;
					*anon34 = anon169;
					phi_in129 = phi163 + 4;
					phi161 = anon169;
					anon170 = phi165 + 4;
					phi_in162 = anon170;
				}
				while (phi168 != 0);
				*anon160 = anon170;
				anon171 = phi163 + 4;
				*anon8 = anon171;
				uint32_t phi172 = anon122;
				uint64_t phi173 = phi23 & 0xffffffff;
				uint32_t phi174 = anon122;
				uint32_t anon176 = anon122 + 1;
				uint32_t anon177 = (uint32_t)(anon114 + 4 + arg4 >> 2) & 3;
				uint32_t anon175 = anon176 < 6 ? anon176 : anon176 < anon177 ? anon176 : anon177;
				if (anon175 != 0)
				{
					uint32_t phi_in181;
					int64_t anon180 = anon20 >> 31;
					int64_t anon179 = anon2 + anon180;
					anon178 = (uint32_t)(anon179 << 32 >> 33) + (uint32_t)anon180 - ((uint32_t)anon179 & 1);
					*(uint32_t*)anon113 = (__zext uint32_t)(anon122 < anon178);
					uint64_t anon183 = phi23 + 4294967295;
					uint32_t anon182 = (uint32_t)anon183;
					phi_in181 = anon182;
					uint64_t phi184 = anon183;
					uint32_t phi185 = anon182;
					if (anon175 != 1)
					{
						*(uint32_t*)((anon115 - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon182 < anon178);
						uint64_t anon187 = phi23 + 4294967294;
						uint32_t anon186 = (uint32_t)anon187;
						phi_in181 = anon186;
						phi184 = anon187;
						phi185 = anon186;
						if (anon175 != 2)
						{
							struct { uint32_t field0; bool field1; } anon188 = llvm.ssub.with.overflow.i32(anon178, anon186);
							uint32_t anon189 = anon178 - anon186;
							*(uint32_t*)((anon115 - 8589934592 >> 30) + arg4) = (__zext uint32_t)(anon189 != 0 & !(anon189 < 0 ^ anon188.field1));
							uint64_t anon191 = phi23 + 4294967293;
							uint32_t anon190 = (uint32_t)anon191;
							phi_in181 = anon190;
							phi184 = anon191;
							phi185 = anon190;
							if (anon175 != 3)
							{
								struct { uint32_t field0; bool field1; } anon192 = llvm.ssub.with.overflow.i32(anon178, anon190);
								uint32_t anon193 = anon178 - anon190;
								*(uint32_t*)((anon115 - 12884901888 >> 30) + arg4) = (__zext uint32_t)(anon193 != 0 & !(anon193 < 0 ^ anon192.field1));
								uint64_t anon195 = phi23 + 4294967292;
								uint32_t anon194 = (uint32_t)anon195;
								phi_in181 = anon194;
								phi184 = anon195;
								phi185 = anon194;
								if (anon175 == 5)
								{
									struct { uint32_t field0; bool field1; } anon196 = llvm.ssub.with.overflow.i32(anon178, anon194);
									uint32_t anon197 = anon178 - anon194;
									*(uint32_t*)((anon115 - 17179869184 >> 30) + arg4) = (__zext uint32_t)(anon197 != 0 & !(anon197 < 0 ^ anon196.field1));
									phi_in181 = (uint32_t)(phi23 + 4294967291);
									phi184 = phi23 + 4294967291;
									phi185 = anon194 - 1;
								}
							}
						}
					}
					phi174 = phi185;
					phi172 = phi_in181;
					phi173 = phi184 & 0xffffffff;
				}
				if (anon176 != anon175 && anon175 != 0 || anon175 == 0)
				{
					uint32_t phi201;
					uint32_t phi202;
					uint32_t anon203;
					uint32_t anon204;
					uint64_t phi198 = phi173;
					uint32_t phi199 = phi174;
					uint32_t anon200 = anon122 - anon175;
					if (anon200 < 3)
					{
						phi201 = (uint32_t)phi198;
					}
					else 
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi202 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon204 = anon176 - anon175;
						anon203 = (uint32_t)(((__zext uint64_t)anon204 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						if (anon203 != anon204)
						{
							uint32_t anon205 = phi172 - anon203;
							phi201 = anon205;
							phi198 = (__zext uint64_t)anon205;
							phi199 = anon205;
						}
					}
					(__asm "movdqa xmm0, xmm3")();
					phi202 = phi202 + 1;
					if (anon200 < 3 || anon200 >= 3 && anon203 != anon204)
					{
						*(uint32_t*)(((__sext int64_t)phi199 << 2) + arg4) = (__zext uint32_t)(phi199 < anon178);
						if (phi199 != 0)
						{
							uint32_t anon207 = (uint32_t)(phi198 + 4294967295);
							struct { uint32_t field0; bool field1; } anon206 = llvm.ssub.with.overflow.i32(anon178, anon207);
							uint32_t anon208 = anon178 - anon207;
							*(uint32_t*)(((phi198 << 32) - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon208 != 0 & !(anon208 < 0 ^ anon206.field1));
							if (anon207 != 0)
							{
								uint32_t anon209 = phi201 - 2;
								*(uint32_t*)(((__sext int64_t)anon209 << 2) + arg4) = (__zext uint32_t)(anon209 < anon178);
							}
						}
					}
				}
				phi108 = *anon105;
			}
			uint64_t anon210 = phi108 + *(uint64_t*)(arg1 - 168);
			*anon105 = anon210;
			phi_in106 = anon178;
			*anon8 = anon210;
			phi111 = phi111 + 4;
			uint64_t phi112 = phi112 - 4;
			uint64_t anon211 = phi119 + 1;
			phi_in116 = anon211;
			phi117 = anon171;
			phi118 = (uint32_t)anon211;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct x86_regsalloca1;
	struct { uint64_t field0; uint8_t field1[64]; uint64_t field2; } alloca2;
	uint64_t phi18;
	uint64_t phi22;
	uint32_t phi23;
	uint32_t phi24;
	uint32_t phi25;
	uint64_t anon29;
	uint32_t anon30;
	uint32_t anon31;
	uint32_t anon32;
	uint32_t* anon38;
	uint32_t* anon40;
	uint32_t phi43;
	uint64_t phi44;
	uint64_t** phi46;
	uint64_t* phi47;
	uint64_t phi48;
	uint32_t phi86;
	alloca1.field6.field0 = arg2;
	alloca1.field5.field0 = arg3;
	alloca1.field4.field0 = arg4;
	alloca1.field3.field0 = arg5;
	alloca2.field2 = arg0;
	alloca1.field17.field0 = arg4;
	alloca1.field14.field0 = arg5 << 32 >> 32;
	alloca1.field2.field0 = arg2 & 0xffffffff;
	alloca1.field15.field0 = arg2 + 4294967295 & 0xffffffff;
	alloca1.field8.field0 = (uint64_t)&alloca2;
	alloca2.field0 = arg3;
	alloca1.field9.field0 = 4199491;
	uint32_t anon3 = rand();
	uint64_t anon4 = (__zext uint64_t)anon3;
	alloca1.field1.field0 = anon4;
	alloca1.field4.field0 = anon4 + 255 & 0xffffffff;
	uint32_t* anon6 = (uint32_t*)&alloca1.field2.field0;
	uint64_t anon5 = (__zext uint64_t)*anon6;
	alloca1.field5.field0 = anon5;
	uint64_t* anon7 = (uint64_t*)0x601df0;
	*anon7 = alloca1.field17.field0;
	uint32_t* anon8 = (uint32_t*)0x601e00;
	uint32_t* anon9 = (uint32_t*)&alloca1.field15.field0;
	*anon8 = *anon9;
	alloca1.field9.field0 = 4199518;
	uint32_t phi10 = anon3;
	if (anon3 <= 4294967295)
	{
		uint32_t anon11 = anon3 + 255;
		alloca1.field1.field0 = (__zext uint64_t)anon11;
		phi10 = anon11;
	}
	uint32_t anon12 = phi10 >> 8;
	uint32_t anon13 = phi10 >> 31;
	alloca1.field4.field0 = (__zext uint64_t)(anon12 + anon13 & 1);
	alloca1.field1.field0 = 1;
	alloca1.field9.field0 = 4199541;
	uint32_t phi14 = 1;
	if ((__zext uint32_t)((anon12 & 1) != 0 ^ anon13 != 0) != anon13)
	{
		alloca1.field1.field0 = anon5;
		phi14 = *anon6;
	}
	uint32_t* anon15 = (uint32_t*)0x601e04;
	*anon15 = phi14;
	uint32_t anon16 = (*anon6 >> 31) + *anon6 >> 1;
	alloca1.field5.field0 = (__zext uint64_t)anon16;
	uint32_t* anon17 = (uint32_t*)0x601de8;
	*anon17 = anon16;
	alloca1.field9.field0 = 4199568;
	if (*anon6 == 0)
	{
		*anon8 = 4294967294;
		*(uint32_t*)(alloca1.field8.field0 + 12) = 4294967294;
		alloca1.field9.field0 = 4200273;
		phi18 = (__zext uint64_t)*anon9;
	}
	else 
	{
		alloca1.field6.field0 = alloca1.field17.field0;
		uint64_t anon19 = alloca1.field17.field0 + 4;
		alloca1.field3.field0 = anon19;
		uint64_t anon20 = (__zext uint64_t)*anon9;
		alloca1.field1.field0 = anon20;
		alloca1.field4.field0 = anon5;
		alloca1.field9.field0 = 4199582;
		uint64_t phi_in21 = alloca1.field17.field0;
		phi22 = anon19;
		phi23 = *anon9;
		phi24 = *anon6;
		phi25 = anon16;
		phi_in21 = phi22;
		alloca1.field9.field0 = 4199623;
		uint32_t phi26 = phi23;
		if (phi23 == phi25)
		{
			uint32_t anon28 = phi24 - 2;
			uint64_t anon27 = (__zext uint64_t)anon28;
			alloca1.field4.field0 = anon27;
			*anon8 = anon28;
			alloca1.field9.field0 = 4199636;
			*anon7 = phi_in21;
			if (phi23 != 0)
			{
				alloca1.field1.field0 = anon27;
				alloca1.field9.field0 = 4199640;
				phi26 = anon28;
			}
		}
		if (phi23 != phi25 || phi23 == phi25 && phi23 != 0)
		{
			*(uint32_t*)(phi_in21 - 4) = phi26;
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = phi_in21;
			anon29 = phi_in21 + 4;
			alloca1.field3.field0 = anon29;
			anon30 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon30;
			*anon8 = anon30;
			alloca1.field9.field0 = 4199613;
			*anon7 = phi_in21;
		}
		anon32 = (uint32_t)alloca1.field2.field0;
		anon31 = anon32 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon31;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon31;
		*anon8 = anon31;
		alloca1.field9.field0 = 4199672;
		phi18 = anon20;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon31 != 0)
	{
		uint32_t anon42;
		alloca1.field7.field0 = phi18;
		alloca1.field9.field0 = 4199680;
		do
		{
			alloca1.field9.field0 = 4199685;
			uint32_t anon33 = rand();
			uint64_t anon34 = (__zext uint64_t)anon33;
			alloca1.field1.field0 = anon34;
			alloca1.field4.field0 = anon34 + 255 & 0xffffffff;
			alloca1.field9.field0 = 4199696;
			uint32_t phi35 = anon33;
			if (anon33 <= 4294967295)
			{
				uint32_t anon36 = anon33 + 255;
				alloca1.field1.field0 = (__zext uint64_t)anon36;
				phi35 = anon36;
			}
			uint64_t anon37 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
			alloca1.field3.field0 = anon37;
			anon38 = (uint32_t*)0x601dec;
			uint64_t anon39 = ((__zext uint64_t)phi35 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
			*anon38 = (uint32_t)anon39;
			anon40 = (uint32_t*)0x601e08;
			uint32_t* anon41 = (uint32_t*)anon37;
			*anon40 = *anon41;
			*anon41 = *(uint32_t*)(alloca1.field17.field0 + (anon39 << 32 >> 30));
			alloca1.field4.field0 = (__zext uint64_t)*anon40;
			*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon38 << 2)) = *anon40;
			alloca1.field7.field0 = (__zext uint64_t)*anon8;
			anon42 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon42;
			*anon8 = anon42;
			alloca1.field9.field0 = 4199772;
		}
		while (anon42 != 0);
		phi43 = *anon6;
		uint64_t** anon45 = (uint64_t**)&alloca1.field8.field0;
		phi44 = (uint64_t)*anon45;
		phi46 = anon45;
		phi47 = *anon45;
		phi48 = alloca1.field17.field0;
	}
	if (*anon6 != 0 && anon31 == 0)
	{
		phi43 = anon32;
		phi44 = alloca1.field8.field0;
		phi46 = (uint64_t**)&alloca1.field8.field0;
		phi47 = (uint64_t*)alloca1.field8.field0;
		phi48 = alloca1.field17.field0;
	}
	alloca1.field4.field0 = (__zext uint64_t)*anon17;
	int64_t anon49 = (__sext int64_t)phi43;
	alloca1.field1.field0 = anon49;
	alloca1.field16.field0 = (__zext uint64_t)(phi43 * phi43);
	uint64_t anon50 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon50;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi48 + ((__zext uint64_t)phi43 << 2) - 4) = *anon17;
	alloca1.field9.field0 = 4199804;
	alloca1.field1.field0 = *phi47;
	*anon38 = 0;
	*anon8 = 0;
	uint64_t* anon51 = (uint64_t*)0x601e10;
	*anon51 = *phi47;
	alloca1.field9.field0 = 4199834;
	alloca1.field6.field0 = *phi47;
	uint64_t phi_in52 = *phi47;
	uint32_t phi_in53 = 0;
	alloca1.field9.field0 = 4199836;
	do
	{
		uint32_t phi71;
		uint64_t phi54 = phi_in52;
		uint32_t phi55 = phi_in53;
		uint64_t phi56 = phi54;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi44 + 12);
		*anon51 = phi56;
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi44 + 12);
		alloca1.field9.field0 = 4199959;
		*anon38 = *anon9;
		uint64_t* phi57 = (uint64_t*)phi44;
		if (*(uint32_t*)(phi44 + 12) != 0)
		{
			uint32_t anon65;
			alloca1.field9.field0 = 4199968;
			do
			{
				alloca1.field9.field0 = 4199973;
				uint32_t anon58 = rand();
				uint64_t anon59 = (__zext uint64_t)anon58;
				alloca1.field1.field0 = anon59;
				alloca1.field4.field0 = anon59 + 255 & 0xffffffff;
				alloca1.field9.field0 = 4199984;
				uint32_t phi60 = anon58;
				if (anon58 <= 4294967295)
				{
					uint32_t anon61 = anon58 + 255;
					alloca1.field1.field0 = (__zext uint64_t)anon61;
					phi60 = anon61;
				}
				uint64_t anon62 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
				alloca1.field3.field0 = anon62;
				uint64_t anon63 = ((__zext uint64_t)phi60 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
				*anon38 = (uint32_t)anon63;
				uint32_t* anon64 = (uint32_t*)anon62;
				*anon40 = *anon64;
				*anon64 = *(uint32_t*)(alloca1.field17.field0 + (anon63 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon40;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon38 << 2)) = *anon40;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon65 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon65;
				*anon8 = anon65;
				alloca1.field9.field0 = 4200060;
			}
			while (anon65 != 0);
			*anon38 = *anon9;
			phi57 = *phi46;
		}
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon15);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi57;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon51 = *phi57;
		uint64_t phi66 = 4200106;
		uint64_t phi67 = 8;
		uint64_t phi68 = 2099034;
		uint64_t phi69 = 4200108;
		do
		{
			alloca1.field9.field0 = phi66;
			*(uint32_t*)(alloca1.field9.field0 + phi68) = *(uint32_t*)&((uint8_t*)&alloca1)[phi67];
			alloca1.field9.field0 = phi69;
			uint32_t phi_in70 = *(uint32_t*)&alloca1.field10.field0;
			phi71 = phi_in70;
			alloca1.field9.field0 = 4200200;
			if (*(uint32_t*)&alloca1.field16.field0 > phi71)
			{
				uint32_t* anon72 = (uint32_t*)(alloca1.field7.field0 + ((__sext int64_t)phi71 << 2));
				uint32_t anon73 = *anon72 + *anon15 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon38 << 2));
				*anon72 = anon73;
				uint64_t anon74 = (__zext uint64_t)anon73;
				alloca1.field6.field0 = anon74;
				alloca1.field10.field0 = (__zext uint64_t)anon73 + 1 & 0xffffffff;
				uint32_t anon75 = anon73 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon75;
				*anon38 = anon75;
				uint32_t anon76 = anon73 + 1;
				*anon8 = anon76;
				int64_t anon77 = (__sext int64_t)anon76;
				int64_t anon78 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi67];
				alloca1.field1.field0 = anon77 / anon78 & 0xffffffff;
				int64_t anon79 = anon77 % anon78;
				alloca1.field4.field0 = anon79 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi80 = anon75;
				if ((uint32_t)anon79 == 0)
				{
					*anon38 = anon73;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon74;
					phi80 = anon73;
				}
				alloca1.field9.field0 = 4200195;
				phi_in70 = anon76;
				if (phi80 >= *(uint32_t*)&((uint8_t*)&alloca1)[phi67])
				{
					alloca1.field9.field0 = 4200242;
					alloca1.field3.field0 = (__zext uint64_t)(phi80 - *(uint32_t*)&((uint8_t*)&alloca1)[phi67]);
					phi66 = 4200248;
					phi67 = 24;
					phi68 = 2098868;
					phi69 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi71);
		uint32_t anon81 = *anon15 * *(uint32_t*)(phi48 + ((__sext int64_t)*anon38 << 2));
		*(uint32_t*)(phi56 + ((__sext int64_t)phi55 << 2)) = anon81;
		alloca1.field11.field0 = (__zext uint64_t)anon81;
		alloca1.field10.field0 = (__zext uint64_t)anon81 + 1 & 0xffffffff;
		uint32_t anon82 = anon81 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon82;
		uint32_t anon83 = anon81 + 1;
		*anon8 = anon83;
		*anon38 = anon82;
		int64_t anon84 = (__sext int64_t)anon83;
		alloca1.field1.field0 = anon84 / anon49 & 0xffffffff;
		int64_t anon85 = anon84 % anon49;
		alloca1.field4.field0 = anon85 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		phi86 = anon82;
		if ((uint32_t)anon85 == 0)
		{
			uint32_t anon87 = anon81 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon87;
			uint64_t anon88 = phi56 + anon50;
			alloca1.field6.field0 = anon88;
			alloca1.field9.field0 = 4199922;
			*anon38 = anon87;
			phi56 = anon88;
			phi86 = anon87;
		}
		phi54 = phi56;
		alloca1.field9.field0 = 4199930;
		phi55 = anon83;
		if (phi86 >= phi43)
		{
			uint32_t anon89 = phi86 - phi43;
			alloca1.field3.field0 = (__zext uint64_t)anon89;
			alloca1.field9.field0 = 4200232;
			*anon38 = anon89;
			phi_in52 = phi54;
			phi_in53 = anon83;
			alloca1.field9.field0 = 4200237;
		}
	}
	while (phi86 >= phi43);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon30;
	phi22 = anon29;
	phi23 = anon30;
	phi24 = *anon8;
	phi25 = anon30;
	*anon51 = alloca1.field7.field0;
	return;
}
void r(uint64_t arg0, uint64_t arg1)
{
	rand();
	return;
}
void p(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t* anon1 = (uint32_t*)0x601e00;
	uint32_t anon2 = (uint32_t)arg2 - 1;
	*anon1 = anon2;
	if (anon2 != 0)
	{
		uint32_t anon9;
		uint64_t phi3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon4 = rand();
			uint32_t* anon5 = (uint32_t*)0x601dec;
			uint64_t anon6 = ((__zext uint64_t)(anon4 > 4294967295 ? anon4 : anon4 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*anon5 = (uint32_t)anon6;
			uint32_t* anon7 = (uint32_t*)0x601e08;
			uint32_t* anon8 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon7 = *anon8;
			*anon8 = *(uint32_t*)((anon6 << 32 >> 30) + arg1);
			*(uint32_t*)(((__sext int64_t)*anon5 << 2) + arg1) = *anon7;
			anon9 = *anon1 - 1;
			*anon1 = anon9;
			phi3 = (__zext uint64_t)*anon1;
		}
		while (anon9 != 0);
	}
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4200515);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601b80)(arg1 & 0xffffffff, arg2, arg3);
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

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
	if (anon2 != 1 && anon1 >= 2 || anon1 < 2)
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
	llvm.trap();
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
	uint32_t phi21;
	uint32_t* anon27;
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
	uint64_t anon13 = (__zext uint64_t)(anon6 > 4294967295 ? anon6 : anon6 + 255);
	uint64_t anon12 = anon13 >> 31;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)(anon12 != 0 ^ (anon13 & 0x100) != 0) - anon12 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t anon15 = rand();
	uint32_t* anon16 = (uint32_t*)0x601e04;
	uint32_t anon17 = anon15 > 4294967295 ? anon15 : anon15 + 255;
	uint32_t anon18 = anon17 >> 31;
	*anon16 = (((anon17 >> 8) + anon18 & 1) - anon18) * 3;
	uint64_t anon20 = (__zext uint64_t)*anon8 + 4294967295;
	uint32_t anon19 = (uint32_t)anon20;
	*anon8 = anon19;
	if (*anon8 == 0)
	{
		phi21 = anon9 - 1;
	}
	else 
	{
		uint64_t phi28;
		uint32_t anon30;
		uint64_t anon39;
		uint32_t phi22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi24 = *anon7;
		uint64_t phi25 = anon20;
		do
		{
			uint32_t phi_in26 = phi22;
			anon27 = (uint32_t*)0x601dec;
			*anon27 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi28 = phi25 & 0xffffffff;
			}
			else 
			{
				uint32_t phi29;
				uint64_t anon36;
				anon30 = anon9 - 1;
				phi29 = anon30;
				uint32_t phi31 = phi_in26;
				uint32_t phi32 = phi23 - 1;
				uint64_t phi_in33 = phi24;
				do
				{
					uint64_t phi34 = phi_in33;
					*(uint32_t*)phi34 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi31 ^ (uint32_t)((__zext uint64_t)((phi32 >> 31) + phi32) << 32 >> 33)) << 2) + arg3);
					uint32_t anon35 = *anon27 - 1;
					*anon27 = anon35;
					phi29 = anon35;
					phi31 = *anon8;
					phi32 = *anon8;
					anon36 = phi34 + 4;
					phi_in33 = anon36;
				}
				while (*anon27 != 0);
				phi28 = (__zext uint64_t)*anon8;
				phi24 = anon36;
			}
			uint64_t anon38 = phi28 + 4294967295;
			uint32_t anon37 = (uint32_t)anon38;
			*anon8 = anon37;
			phi22 = anon37;
			phi23 = (uint32_t)phi28;
			anon39 = phi24 + (arg4 << 32 >> 30);
			phi24 = anon39;
			phi25 = anon38 & 0xffffffff;
		}
		while (phi28 != 0);
		*anon7 = anon39;
		phi21 = anon30;
	}
	*anon8 = phi21;
	uint32_t anon40 = rand();
	uint32_t anon41 = (uint32_t)(((__zext uint64_t)(anon40 > 4294967295 ? anon40 : anon40 + 255) << 32 >> 40) % anon4);
	*anon2 = anon41;
	*anon5 = 3 - anon41;
	uint32_t anon42 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint64_t anon45 = (__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255);
	uint64_t anon44 = anon45 >> 31;
	uint32_t anon43 = *(uint32_t*)(((__zext uint64_t)(anon44 != 0 ^ (anon45 & 0x100) != 0) - anon44 << 2) + arg3) ^ 1;
	*anon10 = anon43;
	*anon14 = 3 - anon43;
	if (anon9 != 0)
	{
		uint64_t anon55;
		uint32_t phi46 = *anon8;
		uint64_t phi47 = arg2;
		do
		{
			uint64_t anon53;
			uint64_t phi_in48 = phi47;
			*anon27 = *anon8;
			uint32_t phi49 = *anon8;
			do
			{
				uint64_t phi50 = phi_in48;
				uint32_t* anon51 = (uint32_t*)phi50;
				*anon51 = *anon51 + (*(uint32_t*)(((__sext int64_t)(phi49 ^ (phi46 >> 31) + phi46 >> 1 ^ *anon16 & phi46) << 2) + arg3) << 2);
				uint32_t anon52 = *anon27 - 1;
				*anon27 = anon52;
				phi49 = anon52;
				phi46 = *anon8;
				anon53 = phi50 + 4;
				phi_in48 = anon53;
			}
			while (*anon27 != 0);
			uint32_t anon54 = *anon8 - 1;
			*anon8 = anon54;
			phi46 = anon54;
			anon55 = anon53 + (arg4 << 32 >> 30);
			phi47 = anon55;
		}
		while (*anon8 != 0);
		*anon7 = anon55;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon6;
	uint64_t anon7;
	uint64_t anon8;
	uint64_t* anon9;
	uint32_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t anon14;
	uint32_t phi15;
	uint32_t phi16;
	uint64_t phi17;
	uint32_t phi24;
	uint64_t phi25;
	uint32_t* anon34;
	uint64_t phi58;
	uint64_t phi_in134;
	uint32_t phi_in181;
	uint32_t anon4 = (uint32_t)arg2;
	int64_t anon3 = (__sext int64_t)((anon4 >> 31) + anon4);
	int64_t anon2 = anon3 >> 1;
	uint32_t anon1 = (uint32_t)anon2;
	if (anon1 == 4)
	{
		anon8 = arg5 << 32;
		anon7 = anon8 >> 32;
		anon6 = (uint32_t)anon7;
		uint32_t anon5 = anon6 + 4;
		*(uint32_t*)(arg1 - 248) = anon5;
		s(4199368, 4, arg3, arg4, (__zext uint64_t)anon5);
		s(4199396, 4, arg3 + 16, arg4, anon7 + 4 & 0xffffffff);
		anon9 = (uint64_t*)0x601e10;
		*anon9 = arg3;
		phi10 = 3;
		anon14 = arg2 << 32;
		anon13 = anon14 >> 32;
		uint64_t anon12 = anon13 + anon7 << 2;
		phi11 = anon12;
		phi15 = 3;
		phi16 = 4;
		phi17 = anon12 & 0xfffffffc;
	}
	else 
	{
		uint32_t* anon18 = (uint32_t*)(arg1 - 248);
		uint32_t anon19 = anon1 + anon6;
		*anon18 = anon19;
		uint64_t anon20 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		int64_t anon21 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon20)(anon21, arg4, (__zext uint64_t)anon19);
		int64_t anon23 = anon2 << 32;
		int64_t anon22 = anon23 >> 30;
		*(uint64_t*)(arg1 - 168) = anon22;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon20)(anon21, anon22 + arg3, arg4, (__zext uint64_t)*anon18);
		*anon9 = arg3;
		phi24 = 4294967295;
		uint64_t anon27 = (anon13 + anon7 << 32 >> 32) * (anon23 >> 32);
		uint64_t anon26 = anon27 & 0xffffffff;
		phi25 = anon26;
		if (anon1 != 0)
		{
			phi10 = (uint32_t)(anon2 + 4294967295);
			phi11 = anon27;
			phi15 = anon1 - 1;
			phi16 = anon1;
			phi17 = anon26;
		}
	}
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi32;
		uint64_t anon46;
		uint64_t phi48;
		uint32_t anon55;
		uint64_t anon80;
		uint32_t phi_in28 = phi15;
		uint32_t* phi_in29 = (uint32_t*)arg3;
		uint64_t phi_in30 = arg3;
		uint32_t* phi31 = (uint32_t*)arg3;
		do
		{
			phi32 = phi_in28;
			uint32_t* phi33 = phi31;
			anon34 = (uint32_t*)0x601dec;
			uint32_t anon36 = (uint32_t)anon13;
			uint32_t anon35 = anon36 - 1;
			*anon34 = anon35;
			uint64_t phi37 = phi_in30;
			uint32_t phi38 = anon35;
			if (anon36 != 0)
			{
				do
				{
					uint32_t* phi39 = phi_in29;
					uint64_t phi40 = 3;
					if (anon1 > phi38)
					{
						*phi33 = *phi33 + (phi16 * phi16 << 1);
						phi40 = ((__zext uint64_t)(anon1 <= *anon34) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t anon41 = (uint64_t)phi39;
					*(uint32_t*)(anon41 + (phi17 << 32 >> 30)) = (uint32_t)(phi40 * anon2) * anon1 + *phi39;
					uint32_t anon42 = *anon34 - 1;
					*anon34 = anon42;
					uint64_t anon43 = anon41 + 4;
					phi37 = anon43;
					uint32_t* anon44 = (uint32_t*)anon43;
					phi_in29 = anon44;
					phi33 = anon44;
					phi38 = anon42;
				}
				while (*anon34 != 0);
			}
			phi_in28 = phi32 - 1;
			anon46 = phi37 + (anon8 >> 30);
			uint32_t* anon45 = (uint32_t*)anon46;
			phi_in29 = anon45;
			phi_in30 = anon46;
			phi31 = anon45;
		}
		while (phi32 != 256);
		*anon9 = anon46;
		uint32_t phi47 = phi10;
		uint64_t anon49 = (__zext uint64_t)phi10;
		phi48 = anon49;
		uint64_t phi50 = anon49;
		uint32_t anon52 = phi10 + 1;
		int64_t anon54 = (__sext int64_t)phi10 << 2;
		uint32_t anon53 = (uint32_t)(anon54 + 4 + arg4 >> 2) & 3;
		uint32_t anon51 = phi10 == 4 | anon52 < 5 | anon52 < anon53 ? anon52 : anon53;
		if (anon51 != 0)
		{
			uint32_t phi_in56;
			anon55 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon54 & 0xc) + arg4) = (__zext uint32_t)(phi10 < anon55);
			uint32_t anon57 = phi10 - 1;
			phi_in56 = anon57;
			uint64_t anon59 = anon49 + 4294967295;
			phi58 = anon59 & 0xffffffff;
			uint64_t phi60 = (__zext uint64_t)anon57;
			if (anon51 != 1)
			{
				uint32_t anon62 = (uint32_t)anon59;
				struct { uint32_t field0; bool field1; } anon61 = llvm.ssub.with.overflow.i32(anon55, anon62);
				uint32_t anon63 = anon55 - anon62;
				*(uint32_t*)((anon59 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon63 < 0 ^ anon61.field1) ^ 1) & (__zext uint32_t)(anon63 != 0);
				uint32_t anon64 = phi10 - 2;
				phi_in56 = anon64;
				uint64_t anon65 = anon49 + 4294967294;
				phi58 = anon65 & 0xffffffff;
				phi60 = (__zext uint64_t)anon64;
				if (anon51 != 2)
				{
					uint32_t anon67 = (uint32_t)anon65;
					struct { uint32_t field0; bool field1; } anon66 = llvm.ssub.with.overflow.i32(anon55, anon67);
					uint32_t anon68 = anon55 - anon67;
					*(uint32_t*)((anon65 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon68 < 0 ^ anon66.field1) ^ 1) & (__zext uint32_t)(anon68 != 0);
					uint32_t anon69 = phi10 - 3;
					phi_in56 = anon69;
					uint64_t anon70 = anon49 + 4294967293;
					phi58 = anon70 & 0xffffffff;
					phi60 = (__zext uint64_t)anon69;
					if (anon51 != 3)
					{
						uint32_t anon72 = (uint32_t)anon70;
						struct { uint32_t field0; bool field1; } anon71 = llvm.ssub.with.overflow.i32(anon55, anon72);
						uint32_t anon73 = anon55 - anon72;
						*(uint32_t*)((anon70 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon73 < 0 ^ anon71.field1) ^ 1) & (__zext uint32_t)(anon73 != 0);
						uint32_t anon74 = phi10 - 4;
						phi_in56 = anon74;
						uint64_t anon75 = anon49 + 4294967292;
						phi58 = anon75 & 0xffffffff;
						phi60 = (__zext uint64_t)anon74;
						if (anon51 == 5)
						{
							uint32_t anon77 = (uint32_t)anon75;
							struct { uint32_t field0; bool field1; } anon76 = llvm.ssub.with.overflow.i32(anon55, anon77);
							uint32_t anon78 = anon55 - anon77;
							*(uint32_t*)((anon75 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon78 < 0 ^ anon76.field1) ^ 1) & (__zext uint32_t)(anon78 != 0);
							phi_in56 = phi10 - 5;
							uint64_t anon79 = anon49 + 4294967291 & 0xffffffff;
							phi58 = anon79;
							phi60 = anon79;
						}
					}
				}
			}
			phi48 = phi58;
			phi50 = phi60;
			phi24 = phi10;
			anon80 = phi11 & 0xffffffff;
			phi25 = anon80;
			phi47 = phi_in56;
		}
		if (anon52 != anon51 && anon51 != 0 || anon51 == 0)
		{
			uint32_t phi84;
			uint32_t anon92;
			uint32_t anon93;
			uint64_t phi_in81 = phi48;
			uint64_t phi82 = arg4 & 0xf;
			uint64_t phi83 = phi_in81;
			uint32_t anon85 = (uint32_t)phi50;
			phi84 = anon85;
			uint32_t anon86 = phi10 - anon51;
			if (anon86 >= 3)
			{
				uint64_t anon91;
				uint32_t* anon87 = (uint32_t*)(arg1 - 240);
				*anon87 = anon85;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon87 = anon55;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in88 = 0;
				do
				{
					uint32_t phi89 = phi_in88;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon90 = phi89 + 1;
					phi_in88 = anon90;
					anon92 = anon52 - anon51;
					anon91 = ((__zext uint64_t)anon92 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon90 < (uint32_t)anon91);
				phi24 = phi10;
				phi25 = anon80;
				anon93 = (uint32_t)(anon91 << 2);
				if (anon92 != anon93)
				{
					phi82 = arg4;
					uint32_t anon94 = phi47 - anon93;
					phi83 = (__zext uint64_t)anon94;
					phi84 = anon94;
				}
			}
			if (anon86 >= 3 && anon92 != anon93 || anon86 < 3)
			{
				struct { uint32_t field0; bool field1; } anon95 = llvm.ssub.with.overflow.i32(anon55, phi84);
				uint32_t anon96 = anon55 - phi84;
				*(uint32_t*)(phi82 + ((__sext int64_t)phi84 << 2)) = ((__zext uint32_t)(anon96 < 0 ^ anon95.field1) ^ 1) & (__zext uint32_t)(anon96 != 0);
				phi24 = phi10;
				phi25 = anon80;
				if (phi84 != 0)
				{
					uint32_t anon98 = (uint32_t)(phi83 + 4294967295);
					struct { uint32_t field0; bool field1; } anon97 = llvm.ssub.with.overflow.i32(anon55, anon98);
					uint64_t anon99 = phi83 << 32;
					uint32_t anon100 = anon55 - anon98;
					*(uint32_t*)(phi82 + (anon99 - 4294967296 >> 30)) = ((__zext uint32_t)(anon100 < 0 ^ anon97.field1) ^ 1) & (__zext uint32_t)(anon100 != 0);
					phi24 = phi10;
					phi25 = anon80;
					if (anon98 != 0)
					{
						uint32_t anon102 = (uint32_t)(phi83 + 4294967294);
						struct { uint32_t field0; bool field1; } anon101 = llvm.ssub.with.overflow.i32(anon55, anon102);
						uint32_t anon103 = anon55 - anon102;
						*(uint32_t*)(phi82 + (anon99 - 8589934592 >> 30)) = ((__zext uint32_t)(anon103 < 0 ^ anon101.field1) ^ 1) & (__zext uint32_t)(anon103 != 0);
						phi24 = phi10;
						phi25 = anon80;
					}
				}
			}
		}
	}
	uint32_t* anon104 = (uint32_t*)0x601e00;
	*anon104 = phi24;
	uint64_t* anon105 = (uint64_t*)0x601df8;
	*anon105 = arg3;
	if ((anon14 >> 30) + arg3 > arg3)
	{
		uint32_t phi106;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon107 = anon2 + 1;
		phi106 = (uint32_t)(anon107 + (anon107 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in108 = arg3;
		while (true)
		{
			uint64_t phi120;
			uint64_t anon146;
			uint32_t phi_in151;
			uint64_t anon172;
			uint32_t anon178;
			uint32_t phi198;
			uint32_t phi109 = phi106;
			uint64_t phi110 = phi_in108;
			*anon9 = phi110;
			uint32_t phi111 = phi109;
			uint64_t anon113 = (__zext uint64_t)*anon104;
			phi112 = (anon2 - anon113 << 32 >> 30) - 4 + arg4;
			int64_t anon116 = (__sext int64_t)*anon104 << 2;
			int64_t anon115 = (anon116 & 0xc) + arg4;
			phi114 = anon115;
			uint64_t phi_in117 = 0;
			uint64_t phi118 = phi110;
			uint32_t phi119 = 0;
			if (anon1 != 0)
			{
				uint32_t anon133;
				int64_t anon135;
				int64_t anon136;
				uint32_t phi137;
				uint32_t anon138;
				uint64_t anon142;
				uint32_t phi152;
				uint32_t anon154;
				uint64_t phi164;
				uint32_t phi169;
				uint64_t anon171;
				phi120 = phi_in117;
				uint64_t phi_in121 = phi118;
				uint32_t phi122 = phi119;
				uint64_t phi123 = phi_in121;
				uint32_t phi_in124 = anon1;
				if (*anon104 != 0)
				{
					uint64_t anon127;
					uint32_t anon129;
					do
					{
						uint32_t phi125 = phi_in124;
						uint32_t anon126 = rand();
						anon127 = ((__zext uint64_t)(anon126 > 4294967295 ? anon126 : anon126 + 255) << 32 >> 40) % (__sext int64_t)phi125;
						*anon34 = (uint32_t)anon127;
						uint32_t* anon128 = (uint32_t*)(((__sext int64_t)*anon104 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon128;
						*anon128 = *(uint32_t*)((anon127 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = *anon128;
						anon129 = *anon104 - 1;
						*anon104 = anon129;
						phi_in124 = *anon104;
					}
					while (anon129 != 0);
					phi122 = *(uint32_t*)((anon127 << 32 >> 30) + arg4);
					phi123 = *anon9;
				}
				uint64_t phi_in130 = phi123;
				uint32_t* anon131 = (uint32_t*)phi112;
				if (*anon131 == 0)
				{
					uint32_t phi_in132;
					anon133 = anon1 - 1;
					phi_in132 = anon133;
					anon136 = anon2 << 32 >> 30;
					anon135 = anon136 + arg4;
					phi_in134 = anon135;
					phi137 = phi111;
					anon138 = *anon104 - phi119;
					if (phi111 > anon138)
					{
						uint64_t anon140;
						do
						{
							*anon34 = phi_in132;
							uint64_t phi139 = phi_in134;
							phi_in132 = *anon34 - 1;
							anon140 = phi139 - 4;
							phi_in134 = anon140;
						}
						while (*(uint32_t*)anon140 == 0);
						*anon131 = 1;
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = 0;
						phi137 = phi111 - 1;
					}
				}
				else 
				{
					uint64_t phi_in141;
					*anon34 = anon133;
					anon142 = (arg4 & 0xf) + anon136 - 4;
					phi_in141 = anon142;
					if (phi111 == 0)
					{
						uint32_t* anon144;
						do
						{
							uint64_t phi143 = phi_in141;
							*anon34 = *anon34 - 1;
							phi_in141 = phi143 - 4;
							anon144 = (uint32_t*)phi143;
						}
						while (*anon144 != 0);
						*anon144 = 1;
						*anon131 = 0;
						phi137 = phi111;
					}
					else 
					{
						phi137 = phi111 - 1;
					}
				}
				anon146 = phi114 & 0xffffffff00000000 | phi114 & 0xffffffff;
				uint32_t* anon145 = (uint32_t*)anon146;
				if (*anon145 == 0)
				{
					uint64_t phi147;
					bool anon153;
					uint64_t anon148 = (__zext uint64_t)anon138;
					phi147 = anon148;
					uint32_t phi_in149 = anon133;
					uint64_t phi_in150 = anon135;
					if (phi109 <= anon138)
					{
						phi_in151 = phi137;
						phi152 = phi109;
						anon153 = anon1 != 3 | phi109 == 0;
						if (!anon153)
						{
							phi147 = anon148;
							phi_in149 = anon133;
							phi_in150 = anon135;
							phi_in151 = phi137;
							phi152 = phi109;
						}
					}
					anon154 = phi122 + anon133 - *anon104;
					if (phi109 > anon138 || !anon153 && phi109 <= anon138 && phi137 == 2 | anon138 == anon154)
					{
						uint64_t anon156;
						do
						{
							*anon34 = phi_in149;
							uint64_t phi155 = phi_in150;
							phi147 = phi147 & 0xffffffffffffff00 | (__zext uint64_t)(*anon34 == anon154);
							phi_in149 = *anon34 - 1;
							anon156 = phi155 - 4;
							phi_in150 = anon156;
						}
						while (((__zext uint8_t)(*anon34 == anon154) | (__zext uint8_t)(*(uint32_t*)anon156 == 0)) == 1);
						*anon145 = 1;
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = 0;
						phi_in151 = phi137 - (__zext uint32_t)(anon138 == anon154);
						phi152 = phi109 - 1;
					}
				}
				else 
				{
					uint32_t phi_in157 = anon133;
					uint64_t phi_in158 = anon142;
					if (phi109 == 0)
					{
						uint32_t* anon160;
						do
						{
							*anon34 = phi_in157;
							uint64_t phi159 = phi_in158;
							phi_in157 = *anon34 - 1;
							phi_in158 = phi159 - 4;
							anon160 = (uint32_t*)phi159;
						}
						while (*anon160 != 0 | *anon34 == anon154);
						*anon160 = 1;
						*anon145 = 0;
						phi_in151 = phi137;
						phi152 = phi109;
					}
					else 
					{
						phi_in151 = phi137;
						phi152 = phi109 - 1;
					}
				}
				phi109 = phi152;
				uint64_t* anon161 = (uint64_t*)0x601df0;
				*anon161 = arg4;
				*anon34 = *anon104;
				uint32_t phi162 = *anon104;
				uint64_t phi_in163 = arg4;
				do
				{
					phi164 = phi_in130;
					uint32_t phi_in165 = phi162;
					uint64_t phi166 = phi_in163;
					if (*(uint32_t*)phi166 != 0)
					{
						uint32_t* anon167 = (uint32_t*)phi164;
						uint32_t* anon168 = (uint32_t*)(phi164 + (phi25 << 32 >> 30));
						*anon167 = *anon168;
						*anon168 = *anon167;
						phi_in165 = *anon168;
					}
					phi169 = phi_in165;
					uint32_t anon170 = phi169 - 1;
					*anon34 = anon170;
					phi_in130 = phi164 + 4;
					phi162 = anon170;
					anon171 = phi166 + 4;
					phi_in163 = anon171;
				}
				while (phi169 != 0);
				*anon161 = anon171;
				anon172 = phi164 + 4;
				*anon9 = anon172;
				uint32_t phi173 = *anon104;
				uint64_t phi174 = anon113;
				uint32_t anon176 = *anon104 + 1;
				uint32_t anon177 = (uint32_t)(anon116 + 4 + arg4 >> 2) & 3;
				uint32_t anon175 = anon176 > 5 ? anon176 < anon177 ? anon176 : anon177 : anon176;
				if (anon175 != 0)
				{
					uint32_t anon182;
					uint64_t phi183;
					int64_t anon180 = anon3 >> 32;
					int64_t anon179 = anon180 & 1;
					anon178 = (uint32_t)(anon2 + anon179 << 32 >> 33) + (uint32_t)anon179 - ((uint32_t)(anon2 + anon180) & 1);
					*(uint32_t*)anon115 = (__zext uint32_t)(*anon104 < anon178);
					if (anon175 == 1)
					{
						anon182 = *anon104 - 1;
						phi_in181 = anon182;
						phi183 = (__zext uint64_t)anon182;
					}
					else 
					{
						uint32_t anon184;
						*(uint32_t*)(((__zext uint64_t)anon182 << 32 >> 30) + arg4) = (__zext uint32_t)(anon182 < anon178);
						if (anon175 == 2)
						{
							anon184 = *anon104 - 2;
							phi_in181 = anon184;
							phi183 = (__zext uint64_t)anon184;
						}
						else 
						{
							uint32_t anon187;
							struct { uint32_t field0; bool field1; } anon185 = llvm.ssub.with.overflow.i32(anon178, anon184);
							uint32_t anon186 = anon178 - anon184;
							*(uint32_t*)(((__zext uint64_t)anon184 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon186 < 0 ^ anon185.field1) ^ 1) & (__zext uint32_t)(anon186 != 0);
							if (anon175 == 3)
							{
								anon187 = *anon104 - 3;
								phi_in181 = anon187;
								phi183 = (__zext uint64_t)anon187;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon188 = llvm.ssub.with.overflow.i32(anon178, anon187);
								uint32_t anon189 = anon178 - anon187;
								*(uint32_t*)(((__zext uint64_t)anon187 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon189 < 0 ^ anon188.field1) ^ 1) & (__zext uint32_t)(anon189 != 0);
								uint32_t anon190 = *anon104 - 4;
								phi_in181 = anon190;
								uint64_t anon191 = (__zext uint64_t)anon190;
								phi183 = anon191;
								if (anon175 == 5)
								{
									struct { uint32_t field0; bool field1; } anon192 = llvm.ssub.with.overflow.i32(anon178, anon190);
									uint32_t anon193 = anon178 - anon190;
									*(uint32_t*)(((__zext uint64_t)anon190 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon193 < 0 ^ anon192.field1) ^ 1) & (__zext uint32_t)(anon193 != 0);
									uint64_t anon194 = anon191 + 4294967295;
									phi_in181 = (uint32_t)anon194;
									phi183 = anon194 & 0xffffffff;
								}
							}
						}
					}
					phi174 = phi183;
					phi173 = phi_in181;
				}
				if (anon176 != anon175 && anon175 != 0 || anon175 == 0)
				{
					uint32_t anon200;
					uint32_t anon201;
					uint64_t phi195 = phi174;
					uint32_t phi196 = phi173;
					uint32_t anon197 = *anon104 - anon175;
					if (anon197 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi198 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon201 = anon176 - anon175;
						anon200 = (uint32_t)(((__zext uint64_t)anon201 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon199 = phi173 - anon200;
						phi195 = (__zext uint64_t)anon199;
						phi196 = anon199;
					}
					if (anon200 != anon201 && anon197 >= 3 || anon197 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi196 << 2) + arg4) = (__zext uint32_t)(phi196 < anon178);
						if (phi196 != 0)
						{
							uint32_t anon203 = (uint32_t)(phi195 + 4294967295);
							struct { uint32_t field0; bool field1; } anon202 = llvm.ssub.with.overflow.i32(anon178, anon203);
							uint64_t anon204 = phi195 << 32;
							uint32_t anon205 = anon178 - anon203;
							*(uint32_t*)((anon204 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon205 < 0 ^ anon202.field1) ^ 1) & (__zext uint32_t)(anon205 != 0);
							if (anon203 != 0)
							{
								*(uint32_t*)((anon204 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi195 + 4294967294) < anon178);
							}
						}
					}
				}
				phi110 = *anon105;
			}
			uint64_t anon206 = phi110 + *(uint64_t*)(arg1 - 168);
			*anon105 = anon206;
			phi106 = anon178;
			phi_in108 = anon206;
			(__asm "movdqa xmm0, xmm3")();
			phi198 = phi198 + 1;
			phi111 = phi_in151;
			uint64_t phi112 = phi112 + 4;
			uint64_t phi114 = anon146 - 4;
			uint64_t anon207 = phi120 + 1;
			phi_in117 = anon207;
			phi118 = anon172;
			phi119 = (uint32_t)anon207;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct { uint64_t field0; uint8_t field1[4]; uint32_t field2; uint8_t field3[56]; uint64_t field4; } alloca1;
	uint32_t anon21;
	uint64_t phi22;
	uint64_t* phi23;
	uint32_t* anon26;
	uint32_t* anon28;
	alloca1.field4 = arg0;
	alloca1.field0 = arg3;
	uint32_t anon2 = rand();
	uint64_t* anon3 = (uint64_t*)0x601df0;
	*anon3 = arg4;
	uint32_t* anon4 = (uint32_t*)0x601e00;
	uint64_t anon6 = arg2 + 4294967295;
	uint32_t anon5 = (uint32_t)anon6;
	*anon4 = anon5;
	uint32_t* anon7 = (uint32_t*)0x601e04;
	uint64_t anon8 = (__zext uint64_t)(anon2 > 4294967295 ? anon2 : anon2 + 255);
	uint64_t anon9 = anon8 >> 31;
	uint32_t anon10 = (uint32_t)arg2;
	*anon7 = (__zext uint32_t)((anon8 & 0x100) != 0 ^ anon9 != 0) == (uint32_t)anon9 ? 1 : anon10;
	uint32_t* anon11 = (uint32_t*)0x601de8;
	uint32_t anon12 = (anon10 >> 31) + anon10 >> 1;
	*anon11 = anon12;
	uint64_t phi13 = arg4;
	uint32_t phi14 = anon5;
	uint32_t phi15 = anon10;
	uint32_t phi16 = anon12;
	if (anon10 == 0)
	{
		*anon4 = 4294967294;
		alloca1.field2 = 4294967294;
	}
	else 
	{
		uint64_t phi18;
		while (true)
		{
			*(uint32_t*)phi13 = phi14;
			if (phi14 == phi16)
			{
				uint32_t anon17 = phi15 - 2;
				*anon4 = anon17;
				phi18 = phi13;
				*(uint32_t*)phi13 = anon17;
				if (phi14 == 0)
				{
					break;
				}
			}
			if (phi14 != phi16 || phi14 != 0 && phi14 == phi16)
			{
				uint32_t anon19 = *anon4 - 1;
				*anon4 = anon19;
				uint64_t anon20 = phi13 + 4;
				phi18 = anon20;
				phi13 = anon20;
				phi14 = anon19;
				phi15 = *anon4;
				phi16 = anon19;
				if (*anon4 == 0)
				{
					break;
				}
			}
		}
		*anon3 = phi18;
		anon21 = anon10 - 2;
		*(uint32_t*)(arg1 - 68) = anon21;
		*anon4 = anon21;
		phi22 = arg2 & 0xffffffff;
		phi23 = &alloca1.field0;
	}
	if (anon10 == 0 || anon10 != 0 && anon21 != 0)
	{
		uint32_t anon30;
		uint64_t phi24 = anon6 & 0xffffffff;
		do
		{
			uint32_t anon25 = rand();
			anon26 = (uint32_t*)0x601dec;
			uint64_t anon27 = ((__zext uint64_t)(anon25 > 4294967295 ? anon25 : anon25 + 255) << 32 >> 40) % (phi24 << 32 >> 32);
			*anon26 = (uint32_t)anon27;
			anon28 = (uint32_t*)0x601e08;
			uint32_t* anon29 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
			*anon28 = *anon29;
			*anon29 = *(uint32_t*)((anon27 << 32 >> 30) + arg4);
			*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon29;
			anon30 = *anon4 - 1;
			*anon4 = anon30;
			phi22 = arg2;
			phi23 = &alloca1.field0;
			phi24 = (__zext uint64_t)*anon4;
		}
		while (anon30 != 0);
	}
	*(uint32_t*)((phi22 << 2 & 0x3fffffffc) - 4 + arg4) = *anon11;
	*anon26 = 0;
	*anon4 = 0;
	uint64_t* anon31 = (uint64_t*)0x601e10;
	*anon31 = *phi23;
	uint32_t phi_in32 = 0;
	uint64_t phi_in33 = *phi23;
	uint32_t phi34 = 0;
	while (true)
	{
		uint64_t anon54;
		uint32_t phi35 = phi_in32;
		*anon31 = phi_in33;
		uint64_t anon38 = phi22 << 32 >> 32;
		uint32_t anon37 = (uint32_t)anon38;
		uint32_t anon36 = anon37 * anon37;
		if (anon36 <= phi34)
		{
			uint32_t phi48;
			*anon4 = *(uint32_t*)((uint64_t)&alloca1 + 12);
			uint32_t phi_in39 = anon5;
			uint64_t* phi40 = &alloca1.field0;
			if (*(uint32_t*)((uint64_t)&alloca1 + 12) != 0)
			{
				uint32_t anon45;
				uint64_t phi41 = anon6 & 0xffffffff;
				do
				{
					uint32_t anon42 = rand();
					uint64_t anon43 = ((__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255) << 32 >> 40) % (phi41 << 32 >> 32);
					*anon26 = (uint32_t)anon43;
					uint32_t* anon44 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
					*anon28 = *anon44;
					*anon44 = *(uint32_t*)((anon43 << 32 >> 30) + arg4);
					*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon44;
					anon45 = *anon4 - 1;
					*anon4 = anon45;
					phi_in39 = anon10 - 1;
					phi40 = &alloca1.field0;
					phi41 = (__zext uint64_t)*anon4;
				}
				while (anon45 != 0);
			}
			*anon4 = 0;
			*anon26 = phi_in39;
			*anon31 = *phi40;
			*anon7 = anon10 + 1 - *anon7;
			uint64_t phi_in46 = *phi40;
			uint32_t phi_in47 = 0;
			do
			{
				*anon26 = phi_in39;
				*anon31 = phi_in46;
				phi48 = phi_in47;
				if (anon36 > phi48)
				{
					uint32_t* anon49 = (uint32_t*)(*anon31 + ((__sext int64_t)phi48 << 2));
					uint32_t anon50 = *anon49 + *(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) * *anon7;
					*anon49 = anon50;
					uint32_t anon51 = *anon26 + 1;
					*anon26 = anon51;
					uint32_t anon52 = anon50 + 1;
					*anon4 = anon52;
					uint64_t phi53 = *anon31;
					phi_in39 = anon51;
					if ((uint32_t)((__sext int64_t)anon52 % (arg2 << 32 >> 32)) == 0)
					{
						anon54 = arg5 << 32 >> 30;
						phi53 = *anon31 + anon54;
						phi_in39 = *anon26;
					}
					phi_in46 = phi53;
					phi_in47 = anon52;
					if (phi_in39 >= anon10)
					{
						uint32_t anon55 = phi_in39 - anon10;
						*anon26 = anon55;
						phi_in39 = anon55;
						phi_in46 = phi53;
						phi_in47 = anon52;
					}
				}
			}
			while (anon36 > phi48);
		}
		break;
		uint32_t anon56 = *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4) * *anon7;
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi34 << 2)) = anon56;
		uint32_t anon57 = anon56 + 1;
		*anon4 = anon57;
		uint32_t anon58 = phi35 + ((uint32_t)((__sext int64_t)anon57 % anon38) == 0 ? 2 : 1);
		*anon26 = anon58;
		phi_in32 = anon58;
		uint64_t anon59 = *anon31 + ((uint32_t)((__sext int64_t)anon57 % anon38) == 0 ? anon54 : 0);
		phi_in33 = anon59;
		phi34 = anon57;
		uint32_t anon60 = (uint32_t)phi22;
		if (anon58 >= anon60)
		{
			uint32_t anon61 = anon58 - anon60;
			*anon26 = anon61;
			phi_in32 = anon61;
			phi_in33 = anon59;
			phi34 = anon57;
		}
	}
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
		uint32_t anon8;
		uint64_t phi3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon4 = rand();
			uint32_t* anon5 = (uint32_t*)0x601dec;
			uint64_t anon6 = ((__zext uint64_t)(anon4 > 4294967295 ? anon4 : anon4 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*anon5 = (uint32_t)anon6;
			uint32_t* anon7 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*(uint32_t*)0x601e08 = *anon7;
			*anon7 = *(uint32_t*)((anon6 << 32 >> 30) + arg1);
			*(uint32_t*)(((__sext int64_t)*anon5 << 2) + arg1) = *anon7;
			anon8 = *anon1 - 1;
			*anon1 = anon8;
			phi3 = (__zext uint64_t)*anon1;
		}
		while (anon8 != 0);
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

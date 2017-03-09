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
	uint32_t phi21;
	uint32_t* anon28;
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
		uint64_t phi29;
		uint32_t anon32;
		uint64_t anon40;
		uint32_t phi22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi24 = *anon7;
		uint64_t phi25 = anon20;
		do
		{
			uint64_t phi30;
			uint32_t phi_in26 = phi22;
			uint64_t phi_in27 = phi24;
			anon28 = (uint32_t*)0x601dec;
			*anon28 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi29 = phi25 & 0xffffffff;
				phi30 = phi_in27;
			}
			else 
			{
				uint32_t phi31;
				uint64_t anon37;
				anon32 = anon9 - 1;
				phi31 = anon32;
				uint32_t phi33 = phi_in26;
				uint32_t phi34 = phi23 - 1;
				do
				{
					uint64_t phi35 = phi_in27;
					*(uint32_t*)phi35 = *(uint32_t*)(((__sext int64_t)(phi31 ^ *anon16 & phi33 ^ (uint32_t)((__zext uint64_t)((phi34 >> 31) + phi34) << 32 >> 33)) << 2) + arg3);
					uint32_t anon36 = *anon28 - 1;
					*anon28 = anon36;
					phi31 = anon36;
					phi33 = *anon8;
					phi34 = *anon8;
					anon37 = phi35 + 4;
					phi_in27 = anon37;
				}
				while (*anon28 != 0);
				phi29 = (__zext uint64_t)*anon8;
				phi30 = anon37;
			}
			uint64_t anon39 = phi29 + 4294967295;
			uint32_t anon38 = (uint32_t)anon39;
			*anon8 = anon38;
			phi22 = anon38;
			phi23 = (uint32_t)phi29;
			anon40 = phi30 + (arg4 << 32 >> 30);
			phi24 = anon40;
			phi25 = anon39 & 0xffffffff;
		}
		while (phi29 != 0);
		*anon7 = anon40;
		phi21 = anon32;
	}
	*anon28 = phi21;
	uint32_t anon41 = rand();
	uint32_t anon42 = (uint32_t)(((__zext uint64_t)(anon41 > 4294967295 ? anon41 : anon41 + 255) << 32 >> 40) % anon4);
	*anon2 = anon42;
	*anon5 = 3 - anon42;
	uint32_t anon43 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon28;
	uint64_t anon46 = (__zext uint64_t)(anon43 > 4294967295 ? anon43 : anon43 + 255);
	uint64_t anon45 = anon46 >> 31;
	uint32_t anon44 = *(uint32_t*)(((__zext uint64_t)(anon45 != 0 ^ (anon46 & 0x100) != 0) - anon45 << 2) + arg3) ^ 1;
	*anon10 = anon44;
	*anon14 = 3 - anon44;
	if (anon9 != 0)
	{
		uint64_t anon57;
		uint32_t phi_in47 = *anon28;
		uint64_t phi48 = arg2;
		do
		{
			uint64_t anon55;
			uint64_t phi_in49 = phi48;
			uint32_t phi50 = *anon28;
			uint32_t phi51 = phi_in47;
			do
			{
				uint64_t phi52 = phi_in49;
				uint32_t* anon53 = (uint32_t*)phi52;
				*anon53 = *anon53 + (*(uint32_t*)(((__sext int64_t)(phi50 ^ (phi51 >> 31) + phi51 >> 1 ^ *anon16 & phi51) << 2) + arg3) << 2);
				uint32_t anon54 = *anon28 - 1;
				*anon28 = anon54;
				phi50 = anon54;
				phi51 = *anon8;
				anon55 = phi52 + 4;
				phi_in49 = anon55;
			}
			while (*anon28 != 0);
			uint32_t anon56 = *anon8 - 1;
			*anon8 = anon56;
			phi_in47 = anon56;
			anon57 = anon55 + (arg4 << 32 >> 30);
			phi48 = anon57;
		}
		while (*anon8 != 0);
		*anon7 = anon57;
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
	uint32_t* anon35;
	uint64_t phi_in59;
	uint64_t phi_in134;
	uint32_t phi182;
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
		uint64_t anon47;
		uint64_t phi_in49;
		uint32_t anon56;
		uint64_t anon81;
		uint32_t phi_in28 = phi15;
		uint32_t* phi_in29 = (uint32_t*)arg3;
		uint64_t phi30 = arg3;
		uint32_t* phi31 = (uint32_t*)arg3;
		do
		{
			phi32 = phi_in28;
			uint64_t phi_in33 = phi30;
			uint32_t* phi34 = phi31;
			anon35 = (uint32_t*)0x601dec;
			uint32_t anon37 = (uint32_t)anon13;
			uint32_t anon36 = anon37 - 1;
			*anon35 = anon36;
			uint64_t phi38 = phi_in33;
			uint32_t phi39 = anon36;
			if (anon37 != 0)
			{
				do
				{
					uint32_t* phi40 = phi_in29;
					uint64_t phi41 = 3;
					if (anon1 > phi39)
					{
						*phi34 = *phi34 + (phi16 * phi16 << 1);
						phi41 = ((__zext uint64_t)(anon1 <= *anon35) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t anon42 = (uint64_t)phi40;
					*(uint32_t*)(anon42 + (phi17 << 32 >> 30)) = (uint32_t)(phi41 * anon2) * anon1 + *phi40;
					uint32_t anon43 = *anon35 - 1;
					*anon35 = anon43;
					uint64_t anon44 = anon42 + 4;
					phi38 = anon44;
					uint32_t* anon45 = (uint32_t*)anon44;
					phi_in29 = anon45;
					phi34 = anon45;
					phi39 = anon43;
				}
				while (*anon35 != 0);
			}
			phi_in28 = phi32 - 1;
			anon47 = phi38 + (anon8 >> 30);
			uint32_t* anon46 = (uint32_t*)anon47;
			phi_in29 = anon46;
			phi30 = anon47;
			phi31 = anon46;
		}
		while (phi32 != 256);
		*anon9 = anon47;
		uint32_t phi48 = phi10;
		uint64_t anon50 = (__zext uint64_t)phi10;
		phi_in49 = anon50;
		uint64_t phi51 = anon50;
		uint32_t anon53 = phi10 + 1;
		int64_t anon55 = (__sext int64_t)phi10 << 2;
		uint32_t anon54 = (uint32_t)(anon55 + 4 + arg4 >> 2) & 3;
		uint32_t anon52 = phi10 == 4 | anon53 < 5 | anon53 < anon54 ? anon53 : anon54;
		if (anon52 != 0)
		{
			uint32_t phi57;
			anon56 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon55 & 0xc) + arg4) = (__zext uint32_t)(phi10 < anon56);
			uint32_t anon58 = phi10 - 1;
			phi57 = anon58;
			uint64_t anon60 = anon50 + 4294967295;
			phi_in59 = anon60 & 0xffffffff;
			uint64_t phi61 = (__zext uint64_t)anon58;
			if (anon52 != 1)
			{
				uint32_t anon63 = (uint32_t)anon60;
				struct { uint32_t field0; bool field1; } anon62 = llvm.ssub.with.overflow.i32(anon56, anon63);
				uint32_t anon64 = anon56 - anon63;
				*(uint32_t*)((anon60 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon64 < 0 ^ anon62.field1) ^ 1) & (__zext uint32_t)(anon64 != 0);
				uint32_t anon65 = phi10 - 2;
				phi57 = anon65;
				uint64_t anon66 = anon50 + 4294967294;
				phi_in59 = anon66 & 0xffffffff;
				phi61 = (__zext uint64_t)anon65;
				if (anon52 != 2)
				{
					uint32_t anon68 = (uint32_t)anon66;
					struct { uint32_t field0; bool field1; } anon67 = llvm.ssub.with.overflow.i32(anon56, anon68);
					uint32_t anon69 = anon56 - anon68;
					*(uint32_t*)((anon66 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon69 < 0 ^ anon67.field1) ^ 1) & (__zext uint32_t)(anon69 != 0);
					uint32_t anon70 = phi10 - 3;
					phi57 = anon70;
					uint64_t anon71 = anon50 + 4294967293;
					phi_in59 = anon71 & 0xffffffff;
					phi61 = (__zext uint64_t)anon70;
					if (anon52 != 3)
					{
						uint32_t anon73 = (uint32_t)anon71;
						struct { uint32_t field0; bool field1; } anon72 = llvm.ssub.with.overflow.i32(anon56, anon73);
						uint32_t anon74 = anon56 - anon73;
						*(uint32_t*)((anon71 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon74 < 0 ^ anon72.field1) ^ 1) & (__zext uint32_t)(anon74 != 0);
						uint32_t anon75 = phi10 - 4;
						phi57 = anon75;
						uint64_t anon76 = anon50 + 4294967292;
						phi_in59 = anon76 & 0xffffffff;
						phi61 = (__zext uint64_t)anon75;
						if (anon52 == 5)
						{
							uint32_t anon78 = (uint32_t)anon76;
							struct { uint32_t field0; bool field1; } anon77 = llvm.ssub.with.overflow.i32(anon56, anon78);
							uint32_t anon79 = anon56 - anon78;
							*(uint32_t*)((anon76 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon79 < 0 ^ anon77.field1) ^ 1) & (__zext uint32_t)(anon79 != 0);
							phi57 = phi10 - 5;
							uint64_t anon80 = anon50 + 4294967291 & 0xffffffff;
							phi_in59 = anon80;
							phi61 = anon80;
						}
					}
				}
			}
			phi48 = phi57;
			phi51 = phi61;
			phi24 = phi10;
			anon81 = phi11 & 0xffffffff;
			phi25 = anon81;
			phi_in49 = phi_in59;
		}
		if (anon53 != anon52 && anon52 != 0 || anon52 == 0)
		{
			uint32_t phi84;
			uint32_t anon92;
			uint32_t anon93;
			uint64_t phi82 = arg4 & 0xf;
			uint64_t phi83 = phi_in49;
			uint32_t anon85 = (uint32_t)phi51;
			phi84 = anon85;
			uint32_t anon86 = phi10 - anon52;
			if (anon86 >= 3)
			{
				uint64_t anon91;
				uint32_t* anon87 = (uint32_t*)(arg1 - 240);
				*anon87 = anon85;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon87 = anon56;
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
					anon92 = anon53 - anon52;
					anon91 = ((__zext uint64_t)anon92 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon90 < (uint32_t)anon91);
				phi24 = phi10;
				phi25 = anon81;
				anon93 = (uint32_t)(anon91 << 2);
				if (anon92 != anon93)
				{
					phi82 = arg4;
					uint32_t anon94 = phi48 - anon93;
					phi83 = (__zext uint64_t)anon94;
					phi84 = anon94;
				}
			}
			if (anon86 >= 3 && anon92 != anon93 || anon86 < 3)
			{
				struct { uint32_t field0; bool field1; } anon95 = llvm.ssub.with.overflow.i32(anon56, phi84);
				uint32_t anon96 = anon56 - phi84;
				*(uint32_t*)(phi82 + ((__sext int64_t)phi84 << 2)) = ((__zext uint32_t)(anon96 < 0 ^ anon95.field1) ^ 1) & (__zext uint32_t)(anon96 != 0);
				phi24 = phi10;
				phi25 = anon81;
				if (phi84 != 0)
				{
					uint32_t anon98 = (uint32_t)(phi83 + 4294967295);
					struct { uint32_t field0; bool field1; } anon97 = llvm.ssub.with.overflow.i32(anon56, anon98);
					uint64_t anon99 = phi83 << 32;
					uint32_t anon100 = anon56 - anon98;
					*(uint32_t*)(phi82 + (anon99 - 4294967296 >> 30)) = ((__zext uint32_t)(anon100 < 0 ^ anon97.field1) ^ 1) & (__zext uint32_t)(anon100 != 0);
					phi24 = phi10;
					phi25 = anon81;
					if (anon98 != 0)
					{
						uint32_t anon102 = (uint32_t)(phi83 + 4294967294);
						struct { uint32_t field0; bool field1; } anon101 = llvm.ssub.with.overflow.i32(anon56, anon102);
						uint32_t anon103 = anon56 - anon102;
						*(uint32_t*)(phi82 + (anon99 - 8589934592 >> 30)) = ((__zext uint32_t)(anon103 < 0 ^ anon101.field1) ^ 1) & (__zext uint32_t)(anon103 != 0);
						phi24 = phi10;
						phi25 = anon81;
					}
				}
			}
		}
	}
	*anon35 = phi24;
	uint64_t* anon104 = (uint64_t*)0x601df8;
	*anon104 = arg3;
	if ((anon14 >> 30) + arg3 > arg3)
	{
		uint32_t phi105;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon106 = anon2 + 1;
		phi105 = (uint32_t)(anon106 + (anon106 >> 31 & 1) << 32 >> 33);
		uint64_t phi107 = arg3;
		while (true)
		{
			uint64_t phi119;
			uint64_t anon147;
			uint64_t anon173;
			uint32_t anon179;
			uint32_t phi200;
			uint32_t phi108 = phi105;
			uint64_t phi109 = phi107;
			*anon9 = phi109;
			uint64_t phi110 = phi109;
			uint32_t phi111 = phi108;
			uint64_t anon113 = (__zext uint64_t)*anon35;
			phi112 = (anon2 - anon113 << 32 >> 30) - 4 + arg4;
			int64_t anon116 = (__sext int64_t)*anon35 << 2;
			int64_t anon115 = (anon116 & 0xc) + arg4;
			phi114 = anon115;
			uint64_t phi_in117 = 0;
			uint32_t phi118 = 0;
			if (anon1 != 0)
			{
				uint32_t anon133;
				int64_t anon135;
				int64_t anon136;
				uint32_t phi137;
				uint32_t anon138;
				uint64_t anon143;
				uint32_t phi152;
				uint32_t phi153;
				uint32_t anon155;
				uint64_t phi165;
				uint32_t phi170;
				uint64_t anon172;
				phi119 = phi_in117;
				uint64_t phi_in120 = phi109;
				uint32_t* anon121 = (uint32_t*)0x601e00;
				*anon121 = *anon35;
				uint32_t phi122 = phi118;
				uint64_t phi123 = phi_in120;
				uint32_t phi_in124 = anon1;
				if (*anon35 != 0)
				{
					uint64_t anon127;
					uint32_t anon129;
					do
					{
						uint32_t phi125 = phi_in124;
						uint32_t anon126 = rand();
						anon127 = ((__zext uint64_t)(anon126 > 4294967295 ? anon126 : anon126 + 255) << 32 >> 40) % (__sext int64_t)phi125;
						*anon35 = (uint32_t)anon127;
						uint32_t* anon128 = (uint32_t*)(((__sext int64_t)*anon121 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon128;
						*anon128 = *(uint32_t*)((anon127 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = *anon128;
						anon129 = *anon121 - 1;
						*anon121 = anon129;
						phi_in124 = *anon121;
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
					anon138 = *anon35 - phi118;
					if (phi111 > anon138)
					{
						uint64_t anon140;
						do
						{
							*anon35 = phi_in132;
							uint64_t phi139 = phi_in134;
							phi_in132 = *anon35 - 1;
							anon140 = phi139 - 4;
							phi_in134 = anon140;
						}
						while (*(uint32_t*)anon140 == 0);
						*anon131 = 1;
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = 0;
						phi137 = phi111 - 1;
					}
				}
				else 
				{
					uint64_t phi_in142;
					uint32_t phi141 = anon133;
					anon143 = (arg4 & 0xf) + anon136 - 4;
					phi_in142 = anon143;
					if (phi111 == 0)
					{
						uint32_t* anon145;
						do
						{
							*anon35 = phi141;
							uint64_t phi144 = phi_in142;
							phi141 = *anon35 - 1;
							phi_in142 = phi144 - 4;
							anon145 = (uint32_t*)phi144;
						}
						while (*anon145 != 0);
						*anon145 = 1;
						*anon131 = 0;
						phi137 = phi111;
					}
					else 
					{
						phi137 = phi111 - 1;
					}
				}
				anon147 = phi114 & 0xffffffff00000000 | phi114 & 0xffffffff;
				uint32_t* anon146 = (uint32_t*)anon147;
				if (*anon146 == 0)
				{
					uint64_t phi148;
					bool anon154;
					uint64_t anon149 = (__zext uint64_t)anon138;
					phi148 = anon149;
					uint32_t phi_in150 = anon133;
					uint64_t phi_in151 = anon135;
					if (phi108 <= anon138)
					{
						phi152 = phi137;
						phi153 = phi108;
						anon154 = anon1 != 3 | phi108 == 0;
						if (!anon154)
						{
							phi148 = anon149;
							phi_in150 = anon133;
							phi_in151 = anon135;
							phi152 = phi137;
							phi153 = phi108;
						}
					}
					anon155 = phi122 + anon133 - *anon35;
					if (phi108 > anon138 || !anon154 && phi108 <= anon138 && phi137 == 2 | anon138 == anon155)
					{
						uint64_t anon157;
						do
						{
							*anon35 = phi_in150;
							uint64_t phi156 = phi_in151;
							phi148 = phi148 & 0xffffffffffffff00 | (__zext uint64_t)(*anon35 == anon155);
							phi_in150 = *anon35 - 1;
							anon157 = phi156 - 4;
							phi_in151 = anon157;
						}
						while (((__zext uint8_t)(*anon35 == anon155) | (__zext uint8_t)(*(uint32_t*)anon157 == 0)) == 1);
						*anon146 = 1;
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = 0;
						phi152 = phi137 - (__zext uint32_t)(anon138 == anon155);
						phi153 = phi108 - 1;
					}
				}
				else 
				{
					uint32_t phi_in158 = anon133;
					uint64_t phi_in159 = anon143;
					if (phi108 == 0)
					{
						uint32_t* anon161;
						do
						{
							*anon35 = phi_in158;
							uint64_t phi160 = phi_in159;
							phi_in158 = *anon35 - 1;
							phi_in159 = phi160 - 4;
							anon161 = (uint32_t*)phi160;
						}
						while (*anon161 != 0 | *anon35 == anon155);
						*anon161 = 1;
						*anon146 = 0;
						phi152 = phi137;
						phi153 = phi108;
					}
					else 
					{
						phi152 = phi137;
						phi153 = phi108 - 1;
					}
				}
				phi111 = phi152;
				phi108 = phi153;
				uint64_t* anon162 = (uint64_t*)0x601df0;
				*anon162 = arg4;
				uint32_t phi163 = *anon35;
				uint64_t phi_in164 = arg4;
				do
				{
					phi165 = phi_in130;
					uint32_t phi_in166 = phi163;
					uint64_t phi167 = phi_in164;
					if (*(uint32_t*)phi167 != 0)
					{
						uint32_t* anon168 = (uint32_t*)phi165;
						uint32_t* anon169 = (uint32_t*)(phi165 + (phi25 << 32 >> 30));
						*anon168 = *anon169;
						*anon169 = *anon168;
						phi_in166 = *anon169;
					}
					phi170 = phi_in166;
					uint32_t anon171 = phi170 - 1;
					*anon35 = anon171;
					phi_in130 = phi165 + 4;
					phi163 = anon171;
					anon172 = phi167 + 4;
					phi_in164 = anon172;
				}
				while (phi170 != 0);
				*anon162 = anon172;
				anon173 = phi165 + 4;
				*anon9 = anon173;
				uint32_t phi174 = *anon35;
				uint64_t phi_in175 = anon113;
				uint32_t anon177 = *anon35 + 1;
				uint32_t anon178 = (uint32_t)(anon116 + 4 + arg4 >> 2) & 3;
				uint32_t anon176 = anon177 > 5 ? anon177 < anon178 ? anon177 : anon178 : anon177;
				if (anon176 != 0)
				{
					uint32_t anon183;
					uint64_t phi_in184;
					int64_t anon181 = anon3 >> 32;
					int64_t anon180 = anon181 & 1;
					anon179 = (uint32_t)(anon2 + anon180 << 32 >> 33) + (uint32_t)anon180 - ((uint32_t)(anon2 + anon181) & 1);
					*(uint32_t*)anon115 = (__zext uint32_t)(*anon35 < anon179);
					if (anon176 == 1)
					{
						anon183 = *anon35 - 1;
						phi182 = anon183;
						phi_in184 = (__zext uint64_t)anon183;
					}
					else 
					{
						uint32_t anon185;
						*(uint32_t*)(((__zext uint64_t)anon183 << 32 >> 30) + arg4) = (__zext uint32_t)(anon183 < anon179);
						if (anon176 == 2)
						{
							anon185 = *anon35 - 2;
							phi182 = anon185;
							phi_in184 = (__zext uint64_t)anon185;
						}
						else 
						{
							uint32_t anon188;
							struct { uint32_t field0; bool field1; } anon186 = llvm.ssub.with.overflow.i32(anon179, anon185);
							uint32_t anon187 = anon179 - anon185;
							*(uint32_t*)(((__zext uint64_t)anon185 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon187 < 0 ^ anon186.field1) ^ 1) & (__zext uint32_t)(anon187 != 0);
							if (anon176 == 3)
							{
								anon188 = *anon35 - 3;
								phi182 = anon188;
								phi_in184 = (__zext uint64_t)anon188;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon189 = llvm.ssub.with.overflow.i32(anon179, anon188);
								uint32_t anon190 = anon179 - anon188;
								*(uint32_t*)(((__zext uint64_t)anon188 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon190 < 0 ^ anon189.field1) ^ 1) & (__zext uint32_t)(anon190 != 0);
								uint32_t anon191 = *anon35 - 4;
								phi182 = anon191;
								uint64_t anon192 = (__zext uint64_t)anon191;
								phi_in184 = anon192;
								if (anon176 == 5)
								{
									struct { uint32_t field0; bool field1; } anon193 = llvm.ssub.with.overflow.i32(anon179, anon191);
									uint32_t anon194 = anon179 - anon191;
									*(uint32_t*)(((__zext uint64_t)anon191 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon194 < 0 ^ anon193.field1) ^ 1) & (__zext uint32_t)(anon194 != 0);
									uint64_t anon195 = anon192 + 4294967295;
									phi182 = (uint32_t)anon195;
									phi_in184 = anon195 & 0xffffffff;
								}
							}
						}
					}
					uint32_t phi_in196 = phi182;
					phi174 = phi_in196;
					phi_in175 = phi_in184;
				}
				if (anon177 != anon176 && anon176 != 0 || anon176 == 0)
				{
					uint32_t anon202;
					uint32_t anon203;
					uint64_t phi197 = phi_in175;
					uint32_t phi198 = phi174;
					uint32_t anon199 = *anon35 - anon176;
					if (anon199 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi200 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon203 = anon177 - anon176;
						anon202 = (uint32_t)(((__zext uint64_t)anon203 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon201 = phi174 - anon202;
						phi197 = (__zext uint64_t)anon201;
						phi198 = anon201;
					}
					if (anon202 != anon203 && anon199 >= 3 || anon199 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi198 << 2) + arg4) = (__zext uint32_t)(phi198 < anon179);
						if (phi198 != 0)
						{
							uint32_t anon205 = (uint32_t)(phi197 + 4294967295);
							struct { uint32_t field0; bool field1; } anon204 = llvm.ssub.with.overflow.i32(anon179, anon205);
							uint64_t anon206 = phi197 << 32;
							uint32_t anon207 = anon179 - anon205;
							*(uint32_t*)((anon206 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon207 < 0 ^ anon204.field1) ^ 1) & (__zext uint32_t)(anon207 != 0);
							if (anon205 != 0)
							{
								*(uint32_t*)((anon206 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi197 + 4294967294) < anon179);
							}
						}
					}
				}
				phi110 = *anon104;
			}
			uint64_t anon208 = phi110 + *(uint64_t*)(arg1 - 168);
			*anon104 = anon208;
			phi105 = anon179;
			phi107 = anon208;
			(__asm "movdqa xmm0, xmm3")();
			phi200 = phi200 + 1;
			uint64_t phi112 = phi112 + 4;
			uint64_t phi114 = anon147 - 4;
			uint64_t anon209 = phi119 + 1;
			phi_in117 = anon209;
			phi109 = anon173;
			phi118 = (uint32_t)anon209;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct { uint64_t field0; uint8_t field1[4]; uint32_t field2; uint8_t field3[56]; uint64_t field4; } alloca1;
	uint32_t anon22;
	uint64_t phi23;
	uint64_t* phi24;
	uint32_t* anon27;
	uint32_t* anon29;
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
		uint64_t phi19;
		while (true)
		{
			uint32_t phi17 = phi14;
			if (phi14 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon4 = anon18;
				phi19 = phi13;
				phi17 = anon18;
				if (phi14 == 0)
				{
					break;
				}
			}
			if (phi14 != phi16 || phi14 != 0 && phi14 == phi16)
			{
				*(uint32_t*)phi13 = phi17;
				uint32_t anon20 = *anon4 - 1;
				*anon4 = anon20;
				uint64_t anon21 = phi13 + 4;
				phi19 = anon21;
				phi13 = anon21;
				phi14 = anon20;
				phi15 = *anon4;
				phi16 = anon20;
				if (*anon4 == 0)
				{
					break;
				}
			}
		}
		*anon3 = phi19;
		anon22 = anon10 - 2;
		*(uint32_t*)(arg1 - 68) = anon22;
		*anon4 = anon22;
		phi23 = arg2 & 0xffffffff;
		phi24 = &alloca1.field0;
	}
	if (anon10 == 0 || anon10 != 0 && anon22 != 0)
	{
		uint32_t anon31;
		uint64_t phi25 = anon6 & 0xffffffff;
		do
		{
			uint32_t anon26 = rand();
			anon27 = (uint32_t*)0x601dec;
			uint64_t anon28 = ((__zext uint64_t)(anon26 > 4294967295 ? anon26 : anon26 + 255) << 32 >> 40) % (phi25 << 32 >> 32);
			*anon27 = (uint32_t)anon28;
			anon29 = (uint32_t*)0x601e08;
			uint32_t* anon30 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
			*anon29 = *anon30;
			*anon30 = *(uint32_t*)((anon28 << 32 >> 30) + arg4);
			*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon30;
			anon31 = *anon4 - 1;
			*anon4 = anon31;
			phi23 = arg2;
			phi24 = &alloca1.field0;
			phi25 = (__zext uint64_t)*anon4;
		}
		while (anon31 != 0);
	}
	*(uint32_t*)((phi23 << 2 & 0x3fffffffc) - 4 + arg4) = *anon11;
	*anon27 = 0;
	*anon4 = 0;
	uint64_t* anon32 = (uint64_t*)0x601e10;
	*anon32 = *phi24;
	uint32_t phi_in33 = 0;
	uint64_t phi_in34 = *phi24;
	uint32_t phi35 = 0;
	while (true)
	{
		uint64_t anon56;
		uint32_t phi36 = phi_in33;
		*anon32 = phi_in34;
		uint64_t anon39 = phi23 << 32 >> 32;
		uint32_t anon38 = (uint32_t)anon39;
		uint32_t anon37 = anon38 * anon38;
		if (anon37 <= phi35)
		{
			uint32_t phi49;
			*anon4 = *(uint32_t*)((uint64_t)&alloca1 + 12);
			uint32_t phi_in40 = anon5;
			uint64_t* phi41 = &alloca1.field0;
			if (*(uint32_t*)((uint64_t)&alloca1 + 12) != 0)
			{
				uint32_t anon46;
				uint64_t phi42 = anon6 & 0xffffffff;
				do
				{
					uint32_t anon43 = rand();
					uint64_t anon44 = ((__zext uint64_t)(anon43 > 4294967295 ? anon43 : anon43 + 255) << 32 >> 40) % (phi42 << 32 >> 32);
					*anon27 = (uint32_t)anon44;
					uint32_t* anon45 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
					*anon29 = *anon45;
					*anon45 = *(uint32_t*)((anon44 << 32 >> 30) + arg4);
					*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon45;
					anon46 = *anon4 - 1;
					*anon4 = anon46;
					phi_in40 = anon10 - 1;
					phi41 = &alloca1.field0;
					phi42 = (__zext uint64_t)*anon4;
				}
				while (anon46 != 0);
			}
			*anon4 = 0;
			*anon27 = phi_in40;
			*anon32 = *phi41;
			*anon7 = anon10 + 1 - *anon7;
			uint64_t phi_in47 = *phi41;
			uint32_t phi_in48 = 0;
			do
			{
				*anon27 = phi_in40;
				*anon32 = phi_in47;
				phi49 = phi_in48;
				if (anon37 > phi49)
				{
					uint32_t* anon50 = (uint32_t*)(*anon32 + ((__sext int64_t)phi49 << 2));
					uint32_t anon51 = *anon50 + *(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) * *anon7;
					*anon50 = anon51;
					uint32_t anon52 = *anon27 + 1;
					*anon27 = anon52;
					uint32_t anon53 = anon51 + 1;
					*anon4 = anon53;
					uint64_t phi54 = *anon32;
					uint32_t phi55 = anon52;
					if ((uint32_t)((__sext int64_t)anon53 % (arg2 << 32 >> 32)) == 0)
					{
						anon56 = arg5 << 32 >> 30;
						phi54 = *anon32 + anon56;
						phi55 = *anon27;
					}
					phi_in40 = phi55;
					phi_in47 = phi54;
					phi_in48 = anon53;
					if (phi55 >= anon10)
					{
						uint32_t anon57 = phi55 - anon10;
						*anon27 = anon57;
						phi_in40 = anon57;
						phi_in47 = phi54;
						phi_in48 = anon53;
					}
				}
			}
			while (anon37 > phi49);
		}
		break;
		uint32_t anon58 = *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4) * *anon7;
		*(uint32_t*)(*anon32 + ((__sext int64_t)phi35 << 2)) = anon58;
		uint32_t anon59 = anon58 + 1;
		*anon4 = anon59;
		uint32_t anon60 = phi36 + ((uint32_t)((__sext int64_t)anon59 % anon39) == 0 ? 2 : 1);
		*anon27 = anon60;
		phi_in33 = anon60;
		uint64_t anon61 = *anon32 + ((uint32_t)((__sext int64_t)anon59 % anon39) == 0 ? anon56 : 0);
		phi_in34 = anon61;
		phi35 = anon59;
		uint32_t anon62 = (uint32_t)phi23;
		if (anon60 >= anon62)
		{
			uint32_t anon63 = anon60 - anon62;
			*anon27 = anon63;
			phi_in33 = anon63;
			phi_in34 = anon61;
			phi35 = anon59;
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

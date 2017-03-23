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
	if (anon4 == null || anon4 != null && anon5 == null)
	{
		perror((uint8_t*)0x401897);
	}
	if (anon4 != null)
	{
		if (anon5 != null)
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
	uint32_t* anon25;
	uint32_t* anon1 = (uint32_t*)arg3;
	uint32_t anon3 = rand();
	uint64_t anon4 = arg1 << 32 >> 32;
	uint32_t anon2 = (uint32_t)(((__zext uint64_t)(anon3 > 4294967295 ? anon3 : anon3 + 255) << 32 >> 40) % anon4);
	*anon1 = anon2;
	uint32_t* anon5 = (uint32_t*)(arg3 + 4);
	*anon5 = 3 - anon2;
	uint32_t anon6 = rand();
	uint64_t* anon7 = (uint64_t*)0x601df0;
	*anon7 = arg2;
	uint32_t* anon8 = (uint32_t*)0x601e00;
	uint32_t anon9 = (uint32_t)arg1;
	*anon8 = anon9;
	uint32_t* anon10 = (uint32_t*)(arg3 + 8);
	uint64_t anon13 = (__zext uint64_t)anon6;
	uint64_t anon12 = (anon6 > 4294967295 ? anon13 : anon13 + 255) >> 31 & 1;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)(((anon6 > 4294967295 ? anon6 : anon6 + 255) & 0x100) != 0 ^ anon12 != 0) - anon12 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t* anon15 = (uint32_t*)0x601e04;
	uint32_t anon16 = rand();
	uint64_t anon18 = (__zext uint64_t)anon16;
	uint32_t anon17 = (uint32_t)((anon16 > 4294967295 ? anon18 : anon18 + 255) >> 31);
	*anon15 = ((((anon16 > 4294967295 ? anon16 : anon16 + 255) >> 8) + anon17 & 1) - (anon17 & 1)) * 3;
	uint32_t anon19 = *anon8 - 1;
	*anon8 = anon19;
	if (*anon8 != 0)
	{
		uint32_t phi27;
		uint64_t anon33;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi23 = phi20;
			uint64_t phi24 = phi21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi23;
			uint32_t phi28 = anon26;
			uint64_t phi29 = phi24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon15 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon25 - 1;
					*anon25 = anon30;
					phi27 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi24 = anon31;
					phi28 = anon30;
					phi23 = *anon8;
					phi29 = anon31;
				}
				while (*anon25 != 0);
			}
			uint32_t anon32 = phi27 - 1;
			*anon8 = anon32;
			phi20 = anon32;
			anon33 = phi24 + (arg4 << 32 >> 30);
			phi21 = anon33;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon33;
	}
	uint32_t anon35 = rand();
	uint32_t anon34 = (uint32_t)(((__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255) << 32 >> 40) % anon4);
	*anon1 = anon34;
	*anon5 = 3 - anon34;
	uint32_t anon36 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon37 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon37;
	uint64_t anon40 = (__zext uint64_t)anon36;
	uint64_t anon39 = (anon36 > 4294967295 ? anon40 : anon40 + 255) >> 31 & 1;
	uint32_t anon38 = *(uint32_t*)(((__zext uint64_t)(((anon36 > 4294967295 ? anon36 : anon36 + 255) & 0x100) != 0 ^ anon39 != 0) - anon39 << 2) + arg3) ^ 1;
	*anon10 = anon38;
	*anon14 = 3 - anon38;
	if (anon9 != 0)
	{
		uint64_t anon51;
		uint32_t phi41 = anon37;
		uint64_t phi42 = arg2;
		do
		{
			uint64_t anon49;
			uint32_t phi43 = phi41;
			uint64_t phi_in44 = phi42;
			*anon25 = anon37;
			uint32_t phi45 = anon37;
			do
			{
				uint64_t phi46 = phi_in44;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi43 >> 31) + phi43 >> 1 ^ *anon15 & phi43) << 2) + arg3) << 2);
				uint32_t anon48 = *anon25 - 1;
				*anon25 = anon48;
				anon49 = phi46 + 4;
				phi_in44 = anon49;
				phi45 = anon48;
				phi43 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi41 = anon50;
			anon51 = anon49 + (arg4 << 32 >> 30);
			phi42 = anon51;
		}
		while (*anon8 != 0);
		*anon7 = anon51;
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
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi_in14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon27;
	uint64_t phi_in88;
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
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		phi11 = anon12 + anon7 << 2;
		phi_in14 = 3;
		phi15 = 4;
	}
	else 
	{
		int64_t anon24;
		uint32_t* anon16 = (uint32_t*)(arg1 - 248);
		uint32_t anon17 = anon1 + anon6;
		*anon16 = anon17;
		uint64_t anon18 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		int64_t anon19 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon18)(anon19, arg4, (__zext uint64_t)anon17);
		int64_t anon21 = anon2 << 32;
		int64_t anon20 = anon21 >> 30;
		*(uint64_t*)(arg1 - 168) = anon20;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon18)(anon19, anon20 + arg3, arg4, (__zext uint64_t)*anon16);
		*anon9 = arg3;
		if (anon1 == 0)
		{
			phi22 = 4294967295;
			anon24 = (anon21 >> 32) * (anon12 + anon7 << 32 >> 32);
			phi23 = anon24 & 0xffffffff;
		}
		else 
		{
			phi10 = (uint32_t)(anon2 + 4294967295);
			phi11 = anon24;
			phi_in14 = anon1 - 1;
			phi15 = anon1;
		}
	}
	if (anon1 != 4 && anon1 != 0 || anon1 == 4)
	{
		uint32_t phi26;
		uint64_t anon34;
		uint64_t anon37;
		uint32_t phi38;
		uint32_t anon43;
		phi22 = phi10;
		uint64_t phi25 = arg3;
		do
		{
			phi26 = phi_in14;
			anon27 = (uint32_t*)0x601dec;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon27 = anon28;
			uint64_t phi30 = phi25;
			uint32_t phi31 = anon28;
			if (anon29 != 0)
			{
				do
				{
					uint64_t phi32 = 3;
					if (anon1 > phi31)
					{
						uint32_t* anon33 = (uint32_t*)phi25;
						*anon33 = *anon33 + (phi15 * phi15 << 1);
						phi32 = ((__zext uint64_t)(anon1 <= *anon27) << 2) + 4294967295 & 0xffffffff;
					}
					anon34 = phi11 & 0xffffffff;
					*(uint32_t*)(phi25 + (anon34 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi32) + *(uint32_t*)phi25;
					uint32_t anon35 = *anon27 - 1;
					*anon27 = anon35;
					uint64_t anon36 = phi25 + 4;
					phi30 = anon36;
					phi25 = anon36;
					phi31 = anon35;
				}
				while (*anon27 != 0);
			}
			phi_in14 = phi26 - 1;
			anon37 = phi30 + (anon8 >> 30);
			phi25 = anon37;
		}
		while (phi26 != 256);
		*anon9 = anon37;
		uint32_t anon39 = phi22 + 1;
		int64_t anon41 = (__sext int64_t)phi22 << 2;
		uint32_t anon40 = (uint32_t)(anon41 + 4 + arg4 >> 2) & 3;
		phi38 = anon39 < anon40 ? anon39 : anon40;
		if (phi22 == 4294967295 || phi22 == 4 || phi22 == 3 || phi22 == 2 || phi22 == 1 || phi22 == 0)
		{
			phi38 = anon39;
		}
		uint32_t phi42 = phi22;
		if (phi38 != 0)
		{
			anon43 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon41 + arg4) = (__zext uint32_t)(phi22 < anon43);
			uint32_t anon44 = phi22 - 1;
			phi42 = anon44;
			if (phi38 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon44 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon44);
				uint32_t anon45 = phi22 - 2;
				phi42 = anon45;
				if (phi38 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon45 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon45);
					uint32_t anon46 = phi22 - 3;
					phi42 = anon46;
					if (phi38 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon46);
						uint32_t anon47 = phi22 - 4;
						phi42 = anon47;
						if (phi38 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon47);
							phi42 = phi22 - 5;
						}
					}
				}
			}
			phi23 = anon34;
		}
		if (phi38 == 0 || anon39 != phi38 && phi38 != 0)
		{
			uint32_t anon55;
			uint32_t anon56;
			uint32_t* anon48 = (uint32_t*)(arg1 - 240);
			*anon48 = phi42;
			uint32_t phi49 = *anon48;
			uint32_t anon50 = phi22 - phi38;
			if (anon50 >= 3)
			{
				uint32_t anon54;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon48 = anon43;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in51 = 0;
				do
				{
					uint32_t phi52 = phi_in51;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon53 = phi52 + 1;
					phi_in51 = anon53;
					anon55 = anon39 - phi38;
					anon54 = (uint32_t)(((__zext uint64_t)anon55 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon53 < anon54);
				phi23 = anon34;
				anon56 = anon54 << 2;
				phi49 = *anon48 - anon56;
			}
			if (anon55 != anon56 && anon50 >= 3 || anon50 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi49 << 2) + arg4) = (__zext uint32_t)(anon43 > phi49);
				phi23 = anon34;
				if (phi49 != 0)
				{
					uint32_t anon57 = phi49 - 1;
					*(uint32_t*)(((__zext uint64_t)anon57 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon57);
					phi23 = anon34;
					if (anon57 != 0)
					{
						uint32_t anon58 = phi49 - 2;
						*(uint32_t*)(((__sext int64_t)anon58 << 2) + arg4) = (__zext uint32_t)(anon43 > anon58);
						phi23 = anon34;
					}
				}
			}
		}
	}
	*anon27 = phi22;
	uint64_t* anon59 = (uint64_t*)0x601df8;
	*anon59 = arg3;
	uint64_t anon60 = (anon13 >> 30) + arg3;
	if (anon60 > arg3)
	{
		uint32_t phi61;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon62 = anon2 + 1;
		phi61 = (uint32_t)(anon62 + (anon62 >> 31 & 1) << 32 >> 33);
		uint64_t phi63 = arg3;
		while (true)
		{
			uint64_t phi67;
			uint64_t phi_in71;
			uint64_t phi72;
			uint32_t phi73;
			uint64_t phi74;
			uint64_t anon101;
			uint64_t anon130;
			uint32_t anon135;
			uint32_t phi64 = phi61;
			*anon9 = phi63;
			uint64_t phi65 = *anon9;
			if (anon1 != 0)
			{
				uint32_t anon87;
				int64_t anon89;
				int64_t anon90;
				uint32_t phi91;
				uint32_t anon92;
				int64_t anon97;
				uint32_t phi106;
				uint32_t phi107;
				uint32_t anon110;
				uint64_t phi122;
				uint32_t phi127;
				uint64_t anon129;
				uint32_t phi66 = phi64;
				phi67 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon27) << 2) - 4;
				int64_t anon70 = (__sext int64_t)*anon27 << 2;
				int64_t anon69 = (anon70 & 0xc) + arg4;
				phi68 = anon69;
				phi_in71 = 0;
				phi72 = *anon9;
				phi73 = 0;
				phi74 = phi_in71;
				uint64_t phi_in75 = phi72;
				uint32_t* anon76 = (uint32_t*)0x601e00;
				*anon76 = *anon27;
				uint64_t phi77 = phi_in75;
				uint32_t phi78 = anon1;
				if (*anon27 != 0)
				{
					uint32_t anon83;
					do
					{
						uint32_t anon80 = rand();
						uint64_t anon79 = ((__zext uint64_t)(anon80 > 4294967295 ? anon80 : anon80 + 255) << 32 >> 40) % (__sext int64_t)phi78;
						*anon27 = (uint32_t)anon79;
						uint32_t* anon81 = (uint32_t*)0x601e08;
						uint32_t* anon82 = (uint32_t*)(((__sext int64_t)*anon76 << 2) + arg4);
						*anon81 = *anon82;
						*anon82 = *(uint32_t*)((anon79 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon81;
						anon83 = *anon76 - 1;
						*anon76 = anon83;
						phi78 = *anon76;
					}
					while (anon83 != 0);
					phi77 = *anon9;
				}
				uint64_t phi_in84 = phi77;
				uint32_t* anon85 = (uint32_t*)phi67;
				if (*anon85 == 0)
				{
					uint32_t phi_in86;
					anon87 = anon1 - 1;
					phi_in86 = anon87;
					anon90 = anon2 << 32 >> 30;
					anon89 = anon90 + arg4;
					phi_in88 = anon89;
					phi91 = phi66;
					anon92 = *anon27 - phi73;
					if (phi66 > anon92)
					{
						uint64_t anon94;
						do
						{
							*anon27 = phi_in86;
							uint64_t phi93 = phi_in88;
							phi_in86 = *anon27 - 1;
							anon94 = phi93 - 4;
							phi_in88 = anon94;
						}
						while (*(uint32_t*)anon94 == 0);
						*anon85 = 1;
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
						phi91 = phi66 - 1;
					}
				}
				else 
				{
					uint64_t phi_in96;
					uint32_t phi95 = anon87;
					anon97 = anon90 - 4 + arg4;
					phi_in96 = anon97;
					if (phi66 == 0)
					{
						uint32_t* anon99;
						do
						{
							*anon27 = phi95;
							uint64_t phi98 = phi_in96;
							anon99 = (uint32_t*)phi98;
							if (*anon99 != 0)
							{
								phi95 = *anon27 - 1;
								phi_in96 = phi98 - 4;
							}
						}
						while (*anon99 != 0);
						*anon99 = 1;
						*anon85 = 0;
						phi91 = phi66;
					}
					else 
					{
						phi91 = phi66 - 1;
					}
				}
				anon101 = phi68 & 0xffffffff00000000 | phi68 & 0xffffffff;
				uint32_t* anon100 = (uint32_t*)anon101;
				if (*anon100 == 0)
				{
					uint64_t phi102;
					bool anon108;
					uint64_t anon103 = (__zext uint64_t)anon92;
					phi102 = anon103;
					uint32_t phi_in104 = anon87;
					uint64_t phi_in105 = anon89;
					if (phi64 <= anon92)
					{
						phi106 = phi91;
						phi107 = phi64;
						anon108 = anon1 != 3 | phi64 == 0;
						if (!anon108)
						{
							phi102 = anon103;
							phi_in104 = anon87;
							phi_in105 = anon89;
							phi106 = phi91;
							phi107 = phi64;
						}
					}
					anon110 = phi73 + anon87 - *anon27;
					bool anon109 = phi91 == 2 | anon92 == anon110;
					if (!anon108 && phi64 <= anon92 && anon109 || phi64 > anon92)
					{
						bool anon112;
						do
						{
							*anon27 = phi_in104;
							uint64_t phi111 = phi_in105;
							uint64_t anon113 = phi111 - 4;
							anon112 = *anon27 == anon110 | *(uint32_t*)anon113 == 0;
							if (anon112)
							{
								phi102 = phi102 & 0xffffffffffffff00 | (__zext uint64_t)(*anon27 == anon110);
								phi_in104 = *anon27 - 1;
								phi_in105 = anon113;
							}
						}
						while (anon112);
						*anon100 = 1;
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
						phi106 = phi91 - (__zext uint32_t)(anon92 == anon110);
						phi107 = phi64 - 1;
					}
				}
				else 
				{
					uint32_t phi_in114 = anon87;
					uint64_t phi_in115 = anon97;
					if (phi64 == 0)
					{
						bool anon117;
						uint32_t* anon118;
						do
						{
							*anon27 = phi_in114;
							uint64_t phi116 = phi_in115;
							phi_in114 = *anon27 - 1;
							phi_in115 = phi116 - 4;
							anon118 = (uint32_t*)phi116;
							anon117 = *anon118 != 0 | *anon27 == anon110;
						}
						while (anon117);
						*anon118 = 1;
						*anon100 = 0;
						phi106 = phi91;
						phi107 = phi64;
					}
					else 
					{
						phi106 = phi91;
						phi107 = phi64 - 1;
					}
				}
				phi66 = phi106;
				phi64 = phi107;
				uint64_t* anon119 = (uint64_t*)0x601df0;
				*anon119 = arg4;
				uint32_t phi120 = *anon27;
				uint64_t phi_in121 = arg4;
				do
				{
					phi122 = phi_in84;
					uint32_t phi_in123 = phi120;
					uint64_t phi124 = phi_in121;
					if (*(uint32_t*)phi124 != 0)
					{
						uint32_t* anon125 = (uint32_t*)phi122;
						uint32_t* anon126 = (uint32_t*)(phi122 + (phi23 << 32 >> 30));
						*anon125 = *anon126;
						*anon126 = *anon125;
						phi_in123 = *anon27;
					}
					phi127 = phi_in123;
					uint32_t anon128 = phi127 - 1;
					*anon27 = anon128;
					phi_in84 = phi122 + 4;
					phi120 = anon128;
					anon129 = phi124 + 4;
					phi_in121 = anon129;
				}
				while (phi127 != 0);
				*anon119 = anon129;
				anon130 = phi122 + 4;
				*anon9 = anon130;
				uint32_t phi131 = *anon27;
				uint32_t anon133 = *anon27 + 1;
				uint32_t anon134 = (uint32_t)(anon70 + 4 + arg4 >> 2) & 3;
				uint32_t anon132 = anon133 < 6 ? anon133 : anon133 < anon134 ? anon133 : anon134;
				if (anon132 != 0)
				{
					uint32_t phi_in138;
					int64_t anon137 = anon3 >> 32;
					int64_t anon136 = anon137 & 1;
					anon135 = (uint32_t)(anon136 + anon2 << 32 >> 33) + (uint32_t)anon136 - ((uint32_t)(anon2 + anon137) & 1);
					*(uint32_t*)anon69 = (__zext uint32_t)(*anon27 < anon135);
					uint32_t anon139 = *anon27 - 1;
					phi_in138 = anon139;
					if (anon132 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon139 < anon135);
						uint32_t anon140 = *anon27 - 2;
						phi_in138 = anon140;
						if (anon132 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon140);
							uint32_t anon141 = *anon27 - 3;
							phi_in138 = anon141;
							if (anon132 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon141 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon141);
								uint32_t anon142 = *anon27 - 4;
								phi_in138 = anon142;
								if (anon132 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon142 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon142);
									phi_in138 = *anon27 - 5;
								}
							}
						}
					}
					phi131 = phi_in138;
				}
				if (anon132 == 0 || anon133 != anon132 && anon132 != 0)
				{
					uint32_t anon149;
					uint32_t anon150;
					uint32_t phi143 = phi131;
					uint32_t anon144 = *anon27 - anon132;
					if (anon144 >= 3)
					{
						uint32_t anon147;
						uint32_t anon148;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in145 = 0;
						do
						{
							uint32_t phi146 = phi_in145;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon147 = phi146 + 1;
							anon149 = anon133 - anon132;
							anon148 = (uint32_t)(((__zext uint64_t)anon149 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon147 < anon148)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in145 = anon147;
							}
						}
						while (anon147 < anon148);
						anon150 = anon148 << 2;
						phi143 = phi131 - anon150;
					}
					if (anon144 < 3 || anon150 != anon149 && anon144 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi143 << 2) + arg4) = (__zext uint32_t)(phi143 < anon135);
						if (phi143 != 0)
						{
							uint32_t anon151 = phi143 - 1;
							*(uint32_t*)(((__zext uint64_t)anon151 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon151);
							if (anon151 != 0)
							{
								uint32_t anon152 = phi143 - 2;
								*(uint32_t*)(((__sext int64_t)anon152 << 2) + arg4) = (__zext uint32_t)(anon152 < anon135);
							}
						}
					}
				}
				phi65 = *anon59;
			}
			uint64_t anon153 = phi65 + *(uint64_t*)(arg1 - 168);
			*anon59 = anon153;
			phi61 = anon135;
			phi63 = anon153;
			phi67 = phi67 + 4;
			uint64_t phi68 = anon101 - 4;
			uint64_t anon154 = phi74 + 1;
			phi_in71 = anon154;
			phi72 = anon130;
			phi73 = (uint32_t)anon154;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon22;
	uint32_t* anon23;
	uint32_t* anon26;
	uint32_t anon1 = rand();
	uint64_t* anon2 = (uint64_t*)0x601df0;
	*anon2 = arg4;
	uint32_t* anon3 = (uint32_t*)0x601e00;
	uint64_t anon5 = arg2 + 4294967295;
	uint32_t anon4 = (uint32_t)anon5;
	*anon3 = anon4;
	uint32_t* anon6 = (uint32_t*)0x601e04;
	uint64_t anon8 = (__zext uint64_t)anon1;
	uint64_t anon7 = (anon1 > 4294967295 ? anon8 : anon8 + 255) >> 31 & 1;
	uint32_t anon9 = (uint32_t)arg2;
	*anon6 = (__zext uint32_t)(((anon1 > 4294967295 ? anon1 : anon1 + 255) & 0x100) != 0 ^ anon7 != 0) == (uint32_t)anon7 ? 1 : anon9;
	uint32_t* anon10 = (uint32_t*)0x601de8;
	uint32_t anon11 = (anon9 >> 31) + anon9 >> 1;
	*anon10 = anon11;
	uint64_t phi12 = arg4;
	uint32_t anon14 = anon9 - 1;
	phi13 = anon14;
	uint32_t phi15 = anon9;
	uint32_t phi16 = anon11;
	if (anon9 == 0)
	{
		*anon3 = 4294967294;
		phi17 = anon4;
	}
	else 
	{
		while (true)
		{
			uint32_t phi18 = phi13;
			if (phi13 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				*anon2 = phi12;
				phi18 = anon19;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
				*(uint32_t*)phi12 = phi18;
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi12 + 4;
				*anon2 = anon21;
				phi12 = anon21;
				phi13 = anon20;
				phi15 = *anon3;
				phi16 = anon20;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		anon22 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon22;
		*anon3 = anon22;
		phi17 = anon14;
	}
	if (anon9 != 0 && anon22 != 0 || anon9 == 0)
	{
		uint32_t anon28;
		do
		{
			anon23 = (uint32_t*)0x601dec;
			uint32_t anon25 = rand();
			uint64_t anon24 = ((__zext uint64_t)(anon25 > 4294967295 ? anon25 : anon25 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon23 = (uint32_t)anon24;
			anon26 = (uint32_t*)0x601e08;
			uint32_t* anon27 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon27;
			*anon27 = *(uint32_t*)((anon24 << 32 >> 30) + arg4);
			*(uint32_t*)((anon24 << 32 >> 30) + arg4) = *anon26;
			anon28 = *anon3 - 1;
			*anon3 = anon28;
			phi17 = *anon3;
		}
		while (anon28 != 0);
	}
	uint64_t anon29 = arg2 << 32;
	*(uint32_t*)((anon29 >> 30) - 4 + arg4) = *anon10;
	*anon23 = 0;
	*anon3 = 0;
	uint64_t* anon30 = (uint64_t*)0x601e10;
	*anon30 = arg3;
	uint32_t phi_in31 = 0;
	uint64_t phi_in32 = arg3;
	uint64_t phi_in33 = arg2;
	uint32_t phi34 = 0;
	while (true)
	{
		uint64_t anon54;
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		uint64_t phi36 = phi_in33;
		uint64_t anon37 = anon29 >> 32;
		if ((uint32_t)(anon37 * anon37) <= phi34)
		{
			uint64_t phi38;
			uint32_t phi46;
			uint32_t anon47;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi38 = anon5 & 0xffffffff;
				uint32_t anon40 = rand();
				uint64_t anon39 = ((__zext uint64_t)(anon40 > 4294967295 ? anon40 : anon40 + 255) << 32 >> 40) % (phi38 << 32 >> 32);
				*anon23 = (uint32_t)anon39;
				uint32_t* anon41 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon26 = *anon41;
				*anon41 = *(uint32_t*)((anon39 << 32 >> 30) + arg4);
				*(uint32_t*)((anon39 << 32 >> 30) + arg4) = *anon26;
				uint32_t anon42 = *anon3 - 1;
				*anon3 = anon42;
			}
			*anon3 = 0;
			*anon23 = anon4;
			*anon30 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in43 = anon4;
			uint64_t phi_in44 = arg3;
			uint32_t phi_in45 = 0;
			do
			{
				*anon23 = phi_in43;
				*anon30 = phi_in44;
				phi46 = phi_in45;
				anon47 = (uint32_t)anon37;
				if (anon47 * anon47 > phi46)
				{
					uint32_t* anon48 = (uint32_t*)(*anon30 + ((__sext int64_t)phi46 << 2));
					uint32_t anon49 = *anon48 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon23 << 2) + arg4);
					*anon48 = anon49;
					uint32_t anon50 = *anon23 + 1;
					*anon23 = anon50;
					uint32_t anon51 = anon49 + 1;
					*anon3 = anon51;
					uint64_t phi52 = *anon30;
					uint32_t phi53 = anon50;
					if ((uint32_t)((__sext int64_t)anon51 % anon37) == 0)
					{
						anon54 = arg5 << 32 >> 30;
						phi52 = *anon30 + anon54;
						phi53 = *anon23;
					}
					phi_in43 = phi53;
					phi_in44 = phi52;
					phi_in45 = anon51;
					if (phi53 >= anon9)
					{
						uint32_t anon55 = phi53 - anon9;
						*anon23 = anon55;
						phi_in43 = anon55;
						phi_in44 = phi52;
						phi_in45 = anon51;
					}
				}
			}
			while (anon47 * anon47 > phi46);
			phi38 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon56 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
		*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon56;
		uint32_t anon57 = anon56 + 1;
		*anon3 = anon57;
		uint32_t anon58 = phi35 + ((uint32_t)((__sext int64_t)anon57 % (phi36 << 32 >> 32)) == 0 ? 2 : 1);
		*anon23 = anon58;
		phi_in31 = anon58;
		uint64_t anon59 = *anon30 + ((uint32_t)((__sext int64_t)anon57 % (phi36 << 32 >> 32)) == 0 ? anon54 : 0);
		phi_in32 = anon59;
		uint64_t anon60 = arg2 & 0xffffffff;
		phi_in33 = anon60;
		phi34 = anon57;
		if (anon58 >= anon9)
		{
			uint32_t anon61 = anon58 - anon9;
			*anon23 = anon61;
			phi_in31 = anon61;
			phi_in32 = anon59;
			phi_in33 = anon60;
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
		uint32_t anon9;
		uint64_t phi3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon5 = rand();
			uint64_t anon4 = ((__zext uint64_t)(anon5 > 4294967295 ? anon5 : anon5 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*(uint32_t*)0x601dec = (uint32_t)anon4;
			uint32_t* anon6 = (uint32_t*)0x601e08;
			uint32_t* anon7 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon6 = *anon7;
			uint32_t* anon8 = (uint32_t*)((anon4 << 32 >> 30) + arg1);
			*anon7 = *anon8;
			*anon8 = *anon6;
			anon9 = *anon1 - 1;
			*anon1 = anon9;
			if (anon9 != 0)
			{
				phi3 = (__zext uint64_t)*anon1;
			}
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

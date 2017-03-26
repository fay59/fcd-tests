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
		uint64_t anon35;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			uint64_t phi_in24 = phi21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi_in23;
			uint64_t phi28 = phi_in24;
			uint32_t phi29 = anon26;
			uint32_t phi30 = phi_in23;
			uint64_t phi31 = phi_in24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi31 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon15 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
					uint32_t anon32 = *anon25 - 1;
					*anon25 = anon32;
					phi27 = *anon8;
					uint64_t anon33 = phi31 + 4;
					phi28 = anon33;
					phi29 = anon32;
					phi30 = *anon8;
					phi31 = anon33;
				}
				while (*anon25 != 0);
			}
			uint32_t anon34 = phi27 - 1;
			*anon8 = anon34;
			phi20 = anon34;
			anon35 = phi28 + (arg4 << 32 >> 30);
			phi21 = anon35;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon35;
	}
	uint32_t anon37 = rand();
	uint32_t anon36 = (uint32_t)(((__zext uint64_t)(anon37 > 4294967295 ? anon37 : anon37 + 255) << 32 >> 40) % anon4);
	*anon1 = anon36;
	*anon5 = 3 - anon36;
	uint32_t anon38 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon39 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon39;
	uint64_t anon42 = (__zext uint64_t)anon38;
	uint64_t anon41 = (anon38 > 4294967295 ? anon42 : anon42 + 255) >> 31 & 1;
	uint32_t anon40 = *(uint32_t*)(((__zext uint64_t)(((anon38 > 4294967295 ? anon38 : anon38 + 255) & 0x100) != 0 ^ anon41 != 0) - anon41 << 2) + arg3) ^ 1;
	*anon10 = anon40;
	*anon14 = 3 - anon40;
	if (anon9 != 0)
	{
		uint64_t anon53;
		uint32_t phi_in43 = anon39;
		uint64_t phi44 = arg2;
		do
		{
			uint64_t anon51;
			uint64_t phi_in45 = phi44;
			*anon25 = anon39;
			uint64_t phi46 = phi_in45;
			uint32_t phi47 = anon39;
			uint32_t phi48 = phi_in43;
			do
			{
				uint32_t* anon49 = (uint32_t*)phi46;
				*anon49 = *anon49 + (*(uint32_t*)(((__sext int64_t)(phi47 ^ (phi48 >> 31) + phi48 >> 1 ^ *anon15 & phi48) << 2) + arg3) << 2);
				uint32_t anon50 = *anon25 - 1;
				*anon25 = anon50;
				anon51 = phi46 + 4;
				phi46 = anon51;
				phi47 = anon50;
				phi48 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon52 = *anon8 - 1;
			*anon8 = anon52;
			phi_in43 = anon52;
			anon53 = anon51 + (arg4 << 32 >> 30);
			phi44 = anon53;
		}
		while (*anon8 != 0);
		*anon7 = anon53;
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon27;
	uint64_t phi87;
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
		phi14 = 3;
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
			phi14 = anon1 - 1;
			phi15 = anon1;
		}
	}
	if (anon1 != 4 && anon1 != 0 || anon1 && 4)
	{
		uint64_t anon33;
		uint64_t anon36;
		uint32_t phi37;
		uint32_t anon42;
		uint64_t phi25 = arg3;
		do
		{
			uint64_t phi26 = phi25;
			anon27 = (uint32_t*)0x601dec;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon27 = anon28;
			phi25 = phi26;
			uint32_t phi30 = anon28;
			if (anon29 != 0)
			{
				do
				{
					uint64_t phi31 = 3;
					if (anon1 > phi30)
					{
						uint32_t* anon32 = (uint32_t*)phi25;
						*anon32 = *anon32 + (phi15 * phi15 << 1);
						phi31 = ((__zext uint64_t)(anon1 <= *anon27) << 2) + 4294967295 & 0xffffffff;
					}
					anon33 = phi11 & 0xffffffff;
					*(uint32_t*)(phi25 + (anon33 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi31) + *(uint32_t*)phi25;
					uint32_t anon34 = *anon27 - 1;
					*anon27 = anon34;
					uint64_t anon35 = phi25 + 4;
					phi26 = anon35;
					phi25 = anon35;
					phi30 = anon34;
				}
				while (*anon27 != 0);
			}
			phi14 = phi14 - 1;
			anon36 = phi26 + (anon8 >> 30);
			phi25 = anon36;
		}
		while (phi14 != 256);
		*anon9 = anon36;
		uint32_t anon38 = phi10 + 1;
		int64_t anon40 = (__sext int64_t)phi10 << 2;
		uint32_t anon39 = (uint32_t)(anon40 + 4 + arg4 >> 2) & 3;
		phi37 = anon38 < anon39 ? anon38 : anon39;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi37 = anon38;
		}
		uint32_t phi41 = phi10;
		if (phi37 != 0)
		{
			anon42 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon40 + arg4) = (__zext uint32_t)(phi10 < anon42);
			uint32_t anon43 = phi10 - 1;
			phi41 = anon43;
			if (phi37 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon43 << 32 >> 30) + arg4) = (__zext uint32_t)(anon42 > anon43);
				uint32_t anon44 = phi10 - 2;
				phi41 = anon44;
				if (phi37 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon44 << 32 >> 30) + arg4) = (__zext uint32_t)(anon42 > anon44);
					uint32_t anon45 = phi10 - 3;
					phi41 = anon45;
					if (phi37 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon45 << 32 >> 30) + arg4) = (__zext uint32_t)(anon42 > anon45);
						uint32_t anon46 = phi10 - 4;
						phi41 = anon46;
						if (phi37 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon42 > anon46);
							phi41 = phi10 - 5;
						}
					}
				}
			}
			phi22 = phi10;
			phi23 = anon33;
		}
		if (phi37 == 0 || anon38 != phi37 && phi37 != 0)
		{
			uint32_t anon54;
			uint32_t anon55;
			uint32_t phi_in47 = phi41;
			uint32_t phi48 = phi_in47;
			uint32_t anon49 = phi10 - phi37;
			if (anon49 >= 3)
			{
				uint32_t anon53;
				uint32_t* anon50 = (uint32_t*)(arg1 - 240);
				*anon50 = phi_in47;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon50 = anon42;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi51 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon52 = phi51 + 1;
					phi51 = anon52;
					anon54 = anon38 - phi37;
					anon53 = (uint32_t)(((__zext uint64_t)anon54 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon52 < anon53);
				phi22 = phi10;
				phi23 = anon33;
				anon55 = anon53 << 2;
				phi48 = phi_in47 - anon55;
			}
			if (anon54 != anon55 && anon49 >= 3 || anon49 && 3)
			{
				*(uint32_t*)(((__sext int64_t)phi48 << 2) + arg4) = (__zext uint32_t)(anon42 > phi48);
				phi22 = phi10;
				phi23 = anon33;
				if (phi48 != 0)
				{
					uint32_t anon56 = phi48 - 1;
					*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon42 > anon56);
					phi22 = phi10;
					phi23 = anon33;
					if (anon56 != 0)
					{
						uint32_t anon57 = phi48 - 2;
						*(uint32_t*)(((__sext int64_t)anon57 << 2) + arg4) = (__zext uint32_t)(anon42 > anon57);
						phi22 = phi10;
						phi23 = anon33;
					}
				}
			}
		}
	}
	*anon27 = phi22;
	uint64_t* anon58 = (uint64_t*)0x601df8;
	*anon58 = arg3;
	uint64_t anon59 = (anon13 >> 30) + arg3;
	if (anon59 > arg3)
	{
		uint32_t phi_in60;
		uint64_t anon147;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon61 = anon2 + 1;
		phi_in60 = (uint32_t)(anon61 + (anon61 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in62 = arg3;
		do
		{
			uint32_t anon130;
			uint32_t phi63 = phi_in60;
			uint64_t phi_in64 = phi_in62;
			*anon9 = phi_in64;
			uint64_t phi65 = phi_in64;
			if (anon1 != 0)
			{
				uint64_t phi68;
				uint64_t phi74;
				uint64_t anon124;
				uint32_t phi66 = phi63;
				uint64_t phi67 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon27) << 2) - 4;
				int64_t anon70 = (__sext int64_t)*anon27 << 2;
				int64_t anon69 = (anon70 & 0xc) + arg4;
				phi68 = anon69;
				uint64_t phi_in71 = 0;
				uint64_t phi_in72 = phi_in64;
				uint32_t phi73 = 0;
				do
				{
					uint32_t anon86;
					int64_t anon88;
					int64_t anon89;
					uint32_t phi90;
					uint32_t anon91;
					int64_t anon95;
					uint32_t phi_in104;
					uint32_t anon107;
					uint64_t phi117;
					uint32_t phi120;
					uint64_t anon122;
					phi74 = phi_in71;
					uint32_t* anon75 = (uint32_t*)0x601e00;
					*anon75 = *anon27;
					uint64_t phi76 = phi_in72;
					uint32_t phi77 = anon1;
					if (*anon27 != 0)
					{
						uint32_t anon82;
						do
						{
							uint32_t anon79 = rand();
							uint64_t anon78 = ((__zext uint64_t)(anon79 > 4294967295 ? anon79 : anon79 + 255) << 32 >> 40) % (__sext int64_t)phi77;
							*anon27 = (uint32_t)anon78;
							uint32_t* anon80 = (uint32_t*)0x601e08;
							uint32_t* anon81 = (uint32_t*)(((__sext int64_t)*anon75 << 2) + arg4);
							*anon80 = *anon81;
							*anon81 = *(uint32_t*)((anon78 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon80;
							anon82 = *anon75 - 1;
							*anon75 = anon82;
							phi77 = *anon75;
						}
						while (anon82 != 0);
						phi76 = *anon9;
					}
					uint64_t phi_in83 = phi76;
					uint32_t* anon84 = (uint32_t*)phi67;
					if (*anon84 == 0)
					{
						uint32_t phi85;
						anon86 = anon1 - 1;
						phi85 = anon86;
						anon89 = anon2 << 32 >> 30;
						anon88 = anon89 + arg4;
						phi87 = anon88;
						phi90 = phi66;
						anon91 = *anon27 - phi73;
						if (phi66 > anon91)
						{
							uint64_t anon92;
							do
							{
								*anon27 = phi85;
								phi85 = *anon27 - 1;
								anon92 = phi87 - 4;
								phi87 = anon92;
							}
							while (*(uint32_t*)anon92 == 0);
							*anon84 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi90 = phi66 - 1;
						}
					}
					else 
					{
						uint64_t phi_in94;
						uint32_t phi93 = anon86;
						anon95 = anon89 - 4 + arg4;
						phi_in94 = anon95;
						if (phi66 == 0)
						{
							uint32_t* anon97;
							do
							{
								*anon27 = phi93;
								uint64_t phi96 = phi_in94;
								anon97 = (uint32_t*)phi96;
								if (*anon97 != 0)
								{
									phi93 = *anon27 - 1;
									phi_in94 = phi96 - 4;
								}
							}
							while (*anon97 != 0);
							*anon97 = 1;
							*anon84 = 0;
							phi90 = phi66;
						}
						else 
						{
							phi90 = phi66 - 1;
						}
					}
					uint64_t anon99 = phi68 & 0xffffffff00000000 | phi68 & 0xffffffff;
					uint32_t* anon98 = (uint32_t*)anon99;
					if (*anon98 == 0)
					{
						uint64_t phi100;
						bool anon105;
						uint64_t anon101 = (__zext uint64_t)anon91;
						phi100 = anon101;
						uint32_t phi_in102 = anon86;
						uint64_t phi103 = anon88;
						if (phi63 <= anon91)
						{
							phi_in60 = phi90;
							phi_in104 = phi63;
							anon105 = anon1 != 3 | phi63 == 0;
							if (!anon105)
							{
								phi100 = anon101;
								phi_in102 = anon86;
								phi103 = anon88;
								phi_in60 = phi90;
								phi_in104 = phi63;
							}
						}
						anon107 = phi73 + anon86 - *anon27;
						bool anon106 = phi90 == 2 | anon91 == anon107;
						if (!anon105 && phi63 <= anon91 && anon106 || phi63 && anon91)
						{
							bool anon108;
							do
							{
								*anon27 = phi_in102;
								uint64_t anon109 = phi103 - 4;
								anon108 = *anon27 == anon107 | *(uint32_t*)anon109 == 0;
								if (anon108)
								{
									phi100 = phi100 & 0xffffffffffffff00 | (__zext uint64_t)(*anon27 == anon107);
									phi_in102 = *anon27 - 1;
									phi103 = anon109;
								}
							}
							while (anon108);
							*anon98 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi_in60 = phi90 - (__zext uint32_t)(anon91 == anon107);
							phi_in104 = phi63 - 1;
						}
					}
					else 
					{
						uint32_t phi110 = anon86;
						uint64_t phi111 = anon95;
						if (phi63 == 0)
						{
							bool anon112;
							uint32_t* anon113;
							do
							{
								*anon27 = phi110;
								phi110 = *anon27 - 1;
								phi111 = phi111 - 4;
								anon113 = (uint32_t*)phi111;
								anon112 = *anon113 != 0 | *anon27 == anon107;
							}
							while (anon112);
							*anon113 = 1;
							*anon98 = 0;
							phi_in60 = phi90;
							phi_in104 = phi63;
						}
						else 
						{
							phi_in60 = phi90;
							phi_in104 = phi63 - 1;
						}
					}
					uint64_t* anon114 = (uint64_t*)0x601df0;
					*anon114 = arg4;
					uint32_t phi_in115 = *anon27;
					uint64_t phi116 = arg4;
					do
					{
						phi117 = phi_in83;
						if (*(uint32_t*)phi116 != 0)
						{
							uint32_t* anon118 = (uint32_t*)phi117;
							uint32_t* anon119 = (uint32_t*)(phi117 + (phi23 << 32 >> 30));
							*anon118 = *anon119;
							*anon119 = *anon118;
							phi_in115 = *anon27;
						}
						phi120 = phi_in115;
						uint32_t anon121 = phi120 - 1;
						*anon27 = anon121;
						phi_in83 = phi117 + 4;
						phi_in115 = anon121;
						anon122 = phi116 + 4;
						phi116 = anon122;
					}
					while (phi120 != 0);
					*anon114 = anon122;
					uint64_t anon123 = phi117 + 4;
					*anon9 = anon123;
					anon124 = (__zext uint64_t)*anon27;
					if (phi74 != anon124)
					{
						phi66 = phi_in60;
						phi63 = phi_in104;
						phi67 = phi67 + 4;
						phi68 = anon99 - 4;
						uint64_t anon125 = phi74 + 1;
						phi_in71 = anon125;
						phi_in72 = anon123;
						phi73 = (uint32_t)anon125;
					}
				}
				while (phi74 != anon124);
				uint32_t phi126 = *anon27;
				uint32_t anon128 = *anon27 + 1;
				uint32_t anon129 = (uint32_t)(anon70 + 4 + arg4 >> 2) & 3;
				uint32_t anon127 = anon128 < 6 ? anon128 : anon128 < anon129 ? anon128 : anon129;
				if (anon127 != 0)
				{
					uint32_t phi_in133;
					int64_t anon132 = anon3 >> 32;
					int64_t anon131 = anon132 & 1;
					anon130 = (uint32_t)(anon131 + anon2 << 32 >> 33) + (uint32_t)anon131 - ((uint32_t)(anon2 + anon132) & 1);
					*(uint32_t*)anon69 = (__zext uint32_t)(*anon27 < anon130);
					uint32_t anon134 = *anon27 - 1;
					phi_in133 = anon134;
					if (anon127 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon134 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 < anon130);
						uint32_t anon135 = *anon27 - 2;
						phi_in133 = anon135;
						if (anon127 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon135 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon135);
							uint32_t anon136 = *anon27 - 3;
							phi_in133 = anon136;
							if (anon127 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon136 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon136);
								uint32_t anon137 = *anon27 - 4;
								phi_in133 = anon137;
								if (anon127 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon137);
									phi_in133 = *anon27 - 5;
								}
							}
						}
					}
					phi126 = phi_in133;
				}
				if (anon127 == 0 || anon128 != anon127 && anon127 != 0)
				{
					uint32_t anon143;
					uint32_t anon144;
					uint32_t phi138 = phi126;
					uint32_t anon139 = *anon27 - anon127;
					if (anon139 >= 3)
					{
						uint32_t anon141;
						uint32_t anon142;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi140 = 0;
						do
						{
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon141 = phi140 + 1;
							anon143 = anon128 - anon127;
							anon142 = (uint32_t)(((__zext uint64_t)anon143 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon141 < anon142)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi140 = anon141;
							}
						}
						while (anon141 < anon142);
						anon144 = anon142 << 2;
						phi138 = phi138 - anon144;
					}
					if (anon139 < 3 || anon144 != anon143 && anon139 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi138 << 2) + arg4) = (__zext uint32_t)(phi138 < anon130);
						if (phi138 != 0)
						{
							uint32_t anon145 = phi138 - 1;
							*(uint32_t*)(((__zext uint64_t)anon145 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon145);
							if (anon145 != 0)
							{
								uint32_t anon146 = phi138 - 2;
								*(uint32_t*)(((__sext int64_t)anon146 << 2) + arg4) = (__zext uint32_t)(anon146 < anon130);
							}
						}
					}
				}
				phi65 = *anon58;
			}
			anon147 = phi65 + *(uint64_t*)(arg1 - 168);
			*anon58 = anon147;
			phi_in60 = anon130;
			phi_in62 = anon147;
		}
		while (anon147 < anon59);
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon23;
	uint32_t* anon24;
	uint32_t* anon27;
	uint64_t anon37;
	uint64_t anon42;
	uint32_t phi53;
	uint32_t anon54;
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
		uint64_t phi20;
		while (true)
		{
			uint32_t phi_in18 = phi13;
			*(uint32_t*)phi12 = phi_in18;
			if (phi_in18 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				phi20 = phi12;
				*(uint32_t*)phi12 = anon19;
				if (phi_in18 == 0)
				{
					break;
				}
			}
			if (phi_in18 != phi16 || phi_in18 != 0)
			{
				uint32_t anon21 = *anon3 - 1;
				*anon3 = anon21;
				uint64_t anon22 = phi12 + 4;
				phi20 = anon22;
				phi12 = anon22;
				phi13 = anon21;
				phi15 = *anon3;
				phi16 = anon21;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		*anon2 = phi20;
		anon23 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon23;
		*anon3 = anon23;
		phi17 = anon14;
	}
	if (anon9 != 0 && anon23 != 0 || anon9 && 0)
	{
		uint32_t anon29;
		do
		{
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon26 = rand();
			uint64_t anon25 = ((__zext uint64_t)(anon26 > 4294967295 ? anon26 : anon26 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon24 = (uint32_t)anon25;
			anon27 = (uint32_t*)0x601e08;
			uint32_t* anon28 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon27 = *anon28;
			*anon28 = *(uint32_t*)((anon25 << 32 >> 30) + arg4);
			*(uint32_t*)((anon25 << 32 >> 30) + arg4) = *anon27;
			anon29 = *anon3 - 1;
			*anon3 = anon29;
			phi17 = *anon3;
		}
		while (anon29 != 0);
	}
	uint64_t anon30 = arg2 << 32;
	*(uint32_t*)((anon30 >> 30) - 4 + arg4) = *anon10;
	*anon24 = 0;
	*anon3 = 0;
	uint64_t* anon31 = (uint64_t*)0x601e10;
	*anon31 = arg3;
	uint32_t phi_in32 = 0;
	uint64_t phi_in33 = arg3;
	uint64_t phi34 = arg2;
	uint32_t phi35 = 0;
	do
	{
		uint32_t phi36 = phi_in32;
		*anon31 = phi_in33;
		anon37 = anon30 >> 32;
		if ((uint32_t)(anon37 * anon37) > phi35)
		{
			uint32_t anon38 = *anon6 * *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4);
			*(uint32_t*)(*anon31 + ((__sext int64_t)phi35 << 2)) = anon38;
			uint32_t anon39 = anon38 + 1;
			*anon3 = anon39;
			uint32_t anon40 = phi36 + ((uint32_t)((__sext int64_t)anon39 % (phi34 << 32 >> 32)) == 0 ? 2 : 1);
			*anon24 = anon40;
			phi_in32 = anon40;
			anon42 = arg5 << 32 >> 30;
			uint64_t anon41 = *anon31 + ((uint32_t)((__sext int64_t)anon39 % (phi34 << 32 >> 32)) == 0 ? anon42 : 0);
			phi_in33 = anon41;
			uint64_t anon43 = arg2 & 0xffffffff;
			phi34 = anon43;
			phi35 = anon39;
			if (anon40 >= anon9)
			{
				uint32_t anon44 = anon40 - anon9;
				*anon24 = anon44;
				phi_in32 = anon44;
				phi_in33 = anon41;
				phi34 = anon43;
				phi35 = anon39;
			}
		}
	}
	while ((uint32_t)(anon37 * anon37) > phi35);
	*anon3 = *(uint32_t*)(arg1 - 68);
	if (*(uint32_t*)(arg1 - 68) != 0)
	{
		uint32_t anon49;
		uint64_t phi45 = anon5 & 0xffffffff;
		do
		{
			uint32_t anon47 = rand();
			uint64_t anon46 = ((__zext uint64_t)(anon47 > 4294967295 ? anon47 : anon47 + 255) << 32 >> 40) % (phi45 << 32 >> 32);
			*anon24 = (uint32_t)anon46;
			uint32_t* anon48 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon27 = *anon48;
			*anon48 = *(uint32_t*)((anon46 << 32 >> 30) + arg4);
			*(uint32_t*)((anon46 << 32 >> 30) + arg4) = *anon27;
			anon49 = *anon3 - 1;
			*anon3 = anon49;
			if (anon49 != 0)
			{
				phi45 = (__zext uint64_t)*anon3;
			}
		}
		while (anon49 != 0);
	}
	*anon3 = 0;
	*anon24 = anon4;
	*anon31 = arg3;
	*anon6 = anon9 + 1 - *anon6;
	uint32_t phi_in50 = anon4;
	uint64_t phi_in51 = arg3;
	uint32_t phi_in52 = 0;
	do
	{
		*anon24 = phi_in50;
		*anon31 = phi_in51;
		phi53 = phi_in52;
		anon54 = (uint32_t)anon37;
		if (anon54 * anon54 > phi53)
		{
			uint32_t* anon55 = (uint32_t*)(*anon31 + ((__sext int64_t)phi53 << 2));
			uint32_t anon56 = *anon55 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon24 << 2) + arg4);
			*anon55 = anon56;
			uint32_t anon57 = *anon24 + 1;
			*anon24 = anon57;
			uint32_t anon58 = anon56 + 1;
			*anon3 = anon58;
			phi_in51 = *anon31;
			uint32_t phi59 = anon57;
			if ((uint32_t)((__sext int64_t)anon58 % anon37) == 0)
			{
				phi_in51 = *anon31 + anon42;
				phi59 = *anon24;
			}
			phi_in50 = phi59;
			phi_in52 = anon58;
			if (phi59 >= anon9)
			{
				uint32_t anon60 = phi59 - anon9;
				*anon24 = anon60;
				phi_in50 = anon60;
				phi_in52 = anon58;
			}
		}
	}
	while (anon54 * anon54 > phi53);
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

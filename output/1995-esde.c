#include "tests/bin/1995-esde.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600db0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { struct _IO_FILE* field0; uint8_t field1; uint8_t field2; uint8_t field3; uint8_t field4[13]; uint8_t field5; uint8_t field6; uint8_t field7; uint8_t field8; uint8_t field9[12]; uint8_t field10[32]; uint8_t field11[312]; uint64_t field12; } alloca1;
	uint64_t phi_in4;
	alloca1.field12 = arg0;
	if ((uint32_t)arg2 > 2)
	{
		struct _IO_FILE* anon2 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x4009e4);
		alloca1.field0 = anon2;
		if (anon2 != null)
		{
			uint8_t* anon3;
			SD(4195805, (uint64_t)&alloca1.field1, *(uint64_t*)(arg3 + 16));
			do
			{
				anon3 = fgets(&alloca1.field11[0], 256, alloca1.field0);
				uint64_t anon5 = (uint64_t)&alloca1.field11;
				phi_in4 = anon5;
				if (anon3 != null)
				{
					uint64_t anon6;
					uint16_t anon7;
					uint32_t phi_in12;
					do
					{
						anon6 = (phi_in4 & 0xffffffff) + 4;
						phi_in4 = anon6;
						uint16_t anon8 = (uint16_t)*(uint32_t*)phi_in4;
						anon7 = anon8 - 257 & (anon8 ^ 0x8080) & 0x8080;
					}
					while (anon7 == 0);
					uint8_t anon10 = (uint8_t)anon7;
					struct { uint8_t field0; bool field1; } anon9 = llvm.uadd.with.overflow.i8(anon10, anon10);
					uint32_t phi_in11 = 4294967295;
					uint32_t anon13 = (uint32_t)arg1 - 320;
					phi_in12 = (uint32_t)anon6 - 3 - (__zext uint32_t)anon9.field1 - anon13;
					while (phi_in11 < phi_in12)
					{
						uint32_t anon14;
						uint64_t anon15;
						uint32_t anon16;
						uint64_t phi19;
						uint32_t anon20;
						uint32_t anon21;
						do
						{
							anon15 = arg1 - 400;
							anon16 = phi_in11 + 1;
							anon14 = isalpha((__sext int32_t)*(uint8_t*)(anon15 + (__sext int64_t)anon16 + 80));
							phi_in11 = anon16;
						}
						while (anon14 == 0);
						uint8_t phi_in17 = *(uint8_t*)(anon15 + (__sext int64_t)anon16 + 80);
						uint64_t phi_in18 = 0;
						do
						{
							phi19 = phi_in18;
							anon21 = phi_in11 + 2 + (uint32_t)phi19;
							anon20 = isalpha((__sext int32_t)*(uint8_t*)(anon15 + (__sext int64_t)anon21 + 80));
							if (anon20 != 0)
							{
								phi_in17 = *(uint8_t*)(anon15 + (__sext int64_t)anon21 + 80);
								phi_in18 = (phi19 & 0xffffffff) + 1;
							}
						}
						while (anon20 != 0);
						*(uint8_t*)(anon15 + ((phi19 << 32) + 4294967296 >> 32) + 48) = 0;
						SD(4195996, (uint64_t)&alloca1.field5, (uint64_t)&alloca1.field10);
						uint64_t phi_in22 = anon5;
						uint64_t phi_in23 = (__zext uint64_t)anon13;
						if ((*(uint8_t*)((arg1 + 4294966896 & 0xffffffff) + 19) ^ alloca1.field8 | alloca1.field1 ^ alloca1.field5 | alloca1.field2 ^ alloca1.field6 | alloca1.field3 ^ alloca1.field7) == 0)
						{
							uint64_t anon25;
							uint16_t anon26;
							printf(&alloca1.field11[0]);
							uint64_t phi_in24 = anon5;
							do
							{
								anon25 = (phi_in24 & 0xffffffff) + 4;
								phi_in24 = anon25;
								uint16_t anon27 = (uint16_t)*(uint32_t*)phi_in24;
								anon26 = anon27 - 257 & (anon27 ^ 0x8080) & 0x8080;
							}
							while (anon26 == 0);
							uint8_t anon29 = (uint8_t)anon26;
							uint32_t anon28 = (uint32_t)anon25 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon29, anon29).field1 - anon13;
							phi_in11 = anon28;
							phi_in12 = anon28;
						}
						else 
						{
							uint64_t anon30;
							uint16_t anon31;
							do
							{
								anon30 = (phi_in22 & 0xffffffff) + 4;
								phi_in22 = anon30;
								phi_in23 = anon30;
								uint16_t anon32 = (uint16_t)*(uint32_t*)phi_in23;
								anon31 = anon32 - 257 & (anon32 ^ 0x8080) & 0x8080;
							}
							while (anon31 == 0);
							uint8_t anon34 = (uint8_t)anon31;
							struct { uint8_t field0; bool field1; } anon33 = llvm.uadd.with.overflow.i8(anon34, anon34);
							phi_in11 = anon21;
							phi_in12 = (uint32_t)anon30 - 3 - (__zext uint32_t)anon33.field1 - anon13;
						}
					}
				}
			}
			while (anon3 != null);
			fclose(alloca1.field0);
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400580, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400960, (void(*)())0x4009d0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600e20;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196402);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void SD(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint8_t* anon2 = (uint8_t*)arg2;
	while (strlen(anon2) > phi_in1)
	{
		uint8_t* anon4 = (uint8_t*)(phi_in1 + arg2);
		struct { uint8_t field0; bool field1; } anon3 = llvm.ssub.with.overflow.i8(*anon4, 96);
		uint8_t anon5 = *anon4 - 96;
		uint8_t anon6 = *anon4 - 122;
		*anon4 = (anon5 != 0 & !(anon5 < 0 ^ anon3.field1) ^ anon6 != 0 & !(anon6 < 0 ^ llvm.ssub.with.overflow.i8(*anon4, 122).field1) ? 32 : 0) ^ *anon4;
		phi_in1 = phi_in1 + 1;
	}
	*(uint8_t*)(arg1 + 1) = 0;
	*(uint8_t*)(arg1 + 2) = 0;
	*(uint8_t*)(arg1 + 3) = 0;
	*(uint8_t*)arg1 = 0;
	uint64_t anon8 = strlen(anon2);
	uint32_t anon7 = (uint32_t)anon8;
	if (anon7 != 1)
	{
		bool anon20;
		uint64_t phi_in9 = arg2;
		uint32_t phi_in10 = 0;
		uint8_t phi_in11 = 255;
		uint32_t phi_in12 = 0;
		if (anon7 > 0)
		{
			uint64_t anon16;
			uint64_t phi_in13 = arg2 + 1;
			do
			{
				uint8_t* anon14 = (uint8_t*)phi_in13;
				*anon14 = *(uint8_t*)((__sext int64_t)(*anon14 ^ 0x40) + 4196864);
				phi_in9 = arg2;
				phi_in10 = 0;
				phi_in11 = 255;
				phi_in12 = 0;
				uint64_t anon15 = phi_in13 + 1;
				phi_in13 = anon15;
				anon16 = (anon8 + 4294967294 & 0xffffffff) + 2 + arg2;
			}
			while (anon15 != anon16);
		}
		do
		{
			uint32_t phi17 = phi_in10;
			uint8_t phi18 = phi_in11;
			uint32_t phi19 = phi_in12;
			uint8_t anon21 = phi18 & 3;
			uint32_t anon22 = phi19 + 1;
			anon20 = anon21 != 0 & anon22 < anon7;
			if (anon20)
			{
				uint64_t anon23 = phi_in9 + 1;
				phi_in9 = anon23;
				phi_in10 = phi17;
				phi_in11 = anon21;
				phi_in12 = anon22;
				if (*(uint8_t*)anon23 != 95)
				{
					phi_in9 = anon23;
					phi_in10 = phi17;
					phi_in11 = phi18;
					phi_in12 = anon22;
					if (*(uint8_t*)anon23 != *(uint8_t*)phi_in9)
					{
						uint32_t anon24 = (phi17 & 3) + 1;
						*(uint8_t*)((__zext uint64_t)anon24 + arg1) = *(uint8_t*)anon23;
						phi_in9 = anon23;
						phi_in10 = anon24;
						phi_in11 = 2 - (uint8_t)phi17 & 3;
						phi_in12 = anon22;
					}
				}
			}
		}
		while (anon20);
	}
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196755);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600bc8)(arg1 & 0xffffffff, arg2, arg3);
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

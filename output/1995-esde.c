#include "tests/bin/1995-esde.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600db0 != 0)
	{
		__gmon_start__(4195549);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600df8);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in6;
	struct { struct _IO_FILE* field0; uint8_t field1; uint8_t field2; uint8_t field3; uint8_t field4; uint8_t field5[12]; uint8_t field6; uint8_t field7; uint8_t field8; uint8_t field9; uint8_t field10[12]; uint8_t field11[344]; uint64_t field12; } alloca1;
	alloca1.field12 = arg0;
	if ((uint32_t)arg2 > 2)
	{
		struct _IO_FILE* anon2 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x4009e4);
		alloca1.field0 = anon2;
		if (anon2 != null)
		{
			SD(4195805, (uint64_t)&alloca1.field1, *(uint64_t*)(arg3 + 16));
			uint32_t dispatch3 = 0;
			while (true)
			{
				uint64_t phi_in38;
				uint64_t anon29;
				uint32_t anon27;
				uint64_t phi_in24;
				uint8_t phi_in23;
				uint64_t anon9;
				uint64_t phi8;
				uint64_t phi_in30;
				uint32_t anon5;
				uint64_t phi_in15;
				uint32_t anon20;
				uint64_t anon7;
				uint8_t* anon4;
				uint32_t phi_in14;
				uint32_t phi16;
				uint64_t phi17;
				uint32_t phi_in18;
				uint32_t phi19;
				uint64_t anon21;
				uint32_t anon28;
				uint32_t anon22;
				if (dispatch3 == 0)
				{
					anon5 = (uint32_t)arg1 - 320;
					anon4 = fgets((uint8_t*)(__zext uint64_t)anon5, 256, alloca1.field0);
					anon7 = arg1 - 320;
					phi_in6 = anon7;
					if (anon4 == null)
					{
						break;
					}
				}
				if (dispatch3 == 1 || anon4 != null && dispatch3 == 0)
				{
					phi8 = phi_in6;
					anon9 = phi8 + 4;
					phi_in6 = anon9;
					dispatch3 = 1;
				}
				uint16_t anon11 = (uint16_t)*(uint32_t*)(phi8 & 0xffffffff);
				uint16_t anon10 = anon11 - 257 & (anon11 ^ 0x8080) & 0x8080;
				if (anon10 != 0 && (dispatch3 == 1 || anon4 != null && dispatch3 == 0))
				{
					uint8_t anon13 = (uint8_t)anon10;
					struct { uint8_t field0; bool field1; } anon12 = llvm.uadd.with.overflow.i8(anon13, anon13);
					phi_in14 = 4294967295;
					phi_in15 = (__zext uint64_t)((uint32_t)anon9 - 3 - (__zext uint32_t)anon12.field1 - anon5);
				}
				if (dispatch3 == 2 || anon10 != 0 && dispatch3 == 1 || anon4 != null && anon10 != 0 && dispatch3 == 0)
				{
					phi16 = phi_in14;
					phi17 = phi_in15;
					phi_in18 = phi16;
					dispatch3 = 0;
				}
				if (dispatch3 == 6 || dispatch3 == 2 && phi16 < (uint32_t)phi17 || anon10 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 || anon4 != null && anon10 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17)
				{
					phi19 = phi_in18;
					anon21 = arg1 - 400;
					anon22 = phi19 + 1;
					anon20 = isalpha((__sext int32_t)*(uint8_t*)(anon21 + (__sext int64_t)anon22 + 80));
					phi_in18 = anon22;
					dispatch3 = 6;
				}
				if (anon20 != 0 && (dispatch3 == 6 || dispatch3 == 2 && phi16 < (uint32_t)phi17 || anon10 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 || anon4 != null && anon10 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17))
				{
					phi_in23 = *(uint8_t*)(anon21 + (__sext int64_t)anon22 + 80);
					phi_in24 = 0;
				}
				if (dispatch3 == 5 || anon20 != 0 && dispatch3 == 6 || anon20 != 0 && dispatch3 == 2 && phi16 < (uint32_t)phi17 || anon10 != 0 && anon20 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 || anon4 != null && anon10 != 0 && anon20 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17)
				{
					uint8_t phi25 = phi_in23;
					uint64_t phi26 = phi_in24;
					*(uint8_t*)(anon21 + phi26 + 48) = phi25;
					anon28 = phi19 + 2 + (uint32_t)phi26;
					anon27 = isalpha((__sext int32_t)*(uint8_t*)(anon21 + (__sext int64_t)anon28 + 80));
					phi_in23 = *(uint8_t*)(anon21 + (__sext int64_t)anon28 + 80);
					anon29 = (phi26 & 0xffffffff) + 1;
					phi_in24 = anon29;
					dispatch3 = 5;
				}
				if (anon27 == 0 && (dispatch3 == 5 || anon20 != 0 && dispatch3 == 6 || anon20 != 0 && dispatch3 == 2 && phi16 < (uint32_t)phi17 || anon10 != 0 && anon20 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 || anon4 != null && anon10 != 0 && anon20 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17))
				{
					*(uint8_t*)(anon21 + (anon29 << 32 >> 32) + 48) = 0;
					SD(4195996, (uint64_t)&alloca1.field6, (uint64_t)&alloca1.field11);
					phi_in30 = anon7;
				}
				uint8_t anon31 = alloca1.field4 ^ alloca1.field9 | alloca1.field1 ^ alloca1.field6 | alloca1.field2 ^ alloca1.field7 | alloca1.field3 ^ alloca1.field8;
				if (dispatch3 == 4 || anon31 != 0 && dispatch3 == 5 && anon27 == 0 || anon20 != 0 && anon31 != 0 && dispatch3 == 6 && anon27 == 0 || anon20 != 0 && anon31 != 0 && dispatch3 == 2 && phi16 < (uint32_t)phi17 && anon27 == 0 || anon10 != 0 && anon20 != 0 && anon31 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 && anon27 == 0 || anon4 != null && anon10 != 0 && anon20 != 0 && anon31 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17 && anon27 == 0)
				{
					uint64_t phi32 = phi_in30;
					uint64_t anon33 = phi32 + 4;
					phi_in30 = anon33;
					dispatch3 = 4;
					uint16_t anon35 = (uint16_t)*(uint32_t*)(phi32 & 0xffffffff);
					uint16_t anon34 = anon35 - 257 & (anon35 ^ 0x8080) & 0x8080;
					if (anon34 != 0)
					{
						uint8_t anon37 = (uint8_t)anon34;
						struct { uint8_t field0; bool field1; } anon36 = llvm.uadd.with.overflow.i8(anon37, anon37);
						phi_in14 = anon28;
						phi_in15 = (__zext uint64_t)((uint32_t)anon33 - 3 - (__zext uint32_t)anon36.field1 - anon5);
						dispatch3 = 2;
					}
				}
				if (anon27 == 0 && anon31 == 0 && (dispatch3 == 5 || anon20 != 0 && dispatch3 == 6 || anon20 != 0 && dispatch3 == 2 && phi16 < (uint32_t)phi17 || anon10 != 0 && anon20 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 || anon4 != null && anon10 != 0 && anon20 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17))
				{
					printf((uint8_t*)anon7);
					phi_in38 = anon7;
				}
				if (dispatch3 == 3 || dispatch3 == 5 && anon27 == 0 && anon31 == 0 || anon20 != 0 && dispatch3 == 6 && anon27 == 0 && anon31 == 0 || anon20 != 0 && dispatch3 == 2 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0 || anon10 != 0 && anon20 != 0 && dispatch3 == 1 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0 || anon4 != null && anon10 != 0 && anon20 != 0 && dispatch3 == 0 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0)
				{
					uint64_t phi39 = phi_in38;
					uint64_t anon40 = phi39 + 4;
					phi_in38 = anon40;
					dispatch3 = 3;
					uint16_t anon42 = (uint16_t)*(uint32_t*)(phi39 & 0xffffffff);
					uint16_t anon41 = anon42 - 257 & (anon42 ^ 0x8080) & 0x8080;
					if (anon41 != 0)
					{
						uint8_t anon44 = (uint8_t)anon41;
						struct { uint8_t field0; bool field1; } anon43 = llvm.uadd.with.overflow.i8(anon44, anon44);
						phi_in14 = (uint32_t)anon40 - 3 - (__zext uint32_t)anon43.field1 - anon5;
						phi_in15 = phi39 + 1 - (__zext uint64_t)anon43.field1 - anon7;
						dispatch3 = 2;
					}
				}
			}
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
	uint64_t anon3;
	uint64_t phi2;
	uint8_t* anon4;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		anon4 = (uint8_t*)arg2;
		anon3 = strlen(anon4);
		if (anon3 > phi2)
		{
			uint8_t* anon5 = (uint8_t*)(phi2 + arg2);
			*anon5 = (*anon5 > 96 ^ *anon5 > 122 ? 32 : 0) ^ *anon5;
			phi_in1 = phi2 + 1;
		}
	}
	while (anon3 > phi2);
	*(uint8_t*)(arg1 + 1) = 0;
	*(uint8_t*)(arg1 + 2) = 0;
	*(uint8_t*)(arg1 + 3) = 0;
	*(uint8_t*)arg1 = 0;
	uint64_t anon6 = strlen(anon4);
	uint32_t anon7 = (uint32_t)anon6;
	if (anon7 != 1)
	{
		bool anon20;
		uint64_t phi_in8 = arg2;
		uint32_t phi_in9 = 0;
		uint8_t phi_in10 = 255;
		uint32_t phi_in11 = 0;
		if (anon7 > 0)
		{
			uint64_t anon15;
			uint64_t phi_in12 = arg2 + 1;
			do
			{
				uint64_t phi13 = phi_in12;
				uint8_t* anon14 = (uint8_t*)phi13;
				*anon14 = *(uint8_t*)((__sext int64_t)(*anon14 ^ 0x40) + 4196864);
				phi_in8 = arg2;
				phi_in9 = 0;
				phi_in10 = 255;
				phi_in11 = 0;
				anon15 = phi13 + 1;
				phi_in12 = anon15;
			}
			while (anon15 != (anon6 + 4294967294 & 0xffffffff) + 2 + arg2);
		}
		do
		{
			uint64_t phi16 = phi_in8;
			uint32_t phi17 = phi_in9;
			uint8_t phi18 = phi_in10;
			uint32_t phi19 = phi_in11;
			uint8_t anon21 = phi18 & 3;
			uint32_t anon22 = phi19 + 1;
			anon20 = anon21 != 0 & anon22 < anon7;
			if (anon20)
			{
				uint64_t anon23 = phi16 + 1;
				phi_in8 = anon23;
				phi_in9 = phi17;
				phi_in10 = phi18;
				phi_in11 = anon22;
				if (*(uint8_t*)anon23 != 95)
				{
					phi_in8 = anon23;
					phi_in9 = phi17;
					phi_in10 = anon21;
					phi_in11 = anon22;
					if (*(uint8_t*)anon23 != *(uint8_t*)phi16)
					{
						uint32_t anon24 = (phi17 & 3) + 1;
						*(uint8_t*)((__zext uint64_t)anon24 + arg1) = *(uint8_t*)anon23;
						phi_in8 = anon23;
						phi_in9 = anon24;
						phi_in10 = 2 - (uint8_t)phi17 & 3;
						phi_in11 = anon22;
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

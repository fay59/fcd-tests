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
	struct { struct _IO_FILE* field0; uint8_t field1; uint8_t field2; uint8_t field3; uint8_t field4; uint8_t field5[12]; uint8_t field6; uint8_t field7; uint8_t field8; uint8_t field9; uint8_t field10[12]; uint8_t field11[344]; uint64_t field12; } alloca1;
	uint64_t phi_in5;
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
				uint64_t phi_in31;
				uint64_t anon28;
				uint32_t anon27;
				uint32_t anon26;
				uint32_t anon19;
				uint64_t phi16;
				uint32_t phi15;
				uint64_t phi_in14;
				uint32_t phi_in13;
				uint64_t phi_in29;
				uint64_t phi_in23;
				uint16_t anon9;
				uint32_t anon4;
				uint64_t anon20;
				uint8_t anon30;
				uint32_t phi18;
				uint32_t anon21;
				uint64_t anon6;
				uint8_t phi_in22;
				uint32_t phi_in17;
				if (dispatch3 == 0)
				{
					anon4 = (uint32_t)arg1 - 320;
					fgets((uint8_t*)(__zext uint64_t)anon4, 256, alloca1.field0);
					anon6 = arg1 - 320;
					phi_in5 = anon6;
				}
				fclose(alloca1.field0);
				break;
				if (dispatch3 == 1)
				{
					uint64_t phi7 = phi_in5;
					uint64_t anon8 = phi7 + 4;
					phi_in5 = anon8;
					dispatch3 = 1;
					uint16_t anon10 = (uint16_t)*(uint32_t*)(phi7 & 0xffffffff);
					anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
					if (anon9 != 0)
					{
						uint8_t anon12 = (uint8_t)anon9;
						struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
						phi_in13 = 4294967295;
						phi_in14 = (__zext uint64_t)((uint32_t)anon8 - 3 - (__zext uint32_t)anon11.field1 - anon4);
					}
				}
				if (dispatch3 == 3 || dispatch3 == 1 && anon9 != 0)
				{
					phi15 = phi_in13;
					phi16 = phi_in14;
					phi_in17 = phi15;
					dispatch3 = 0;
				}
				if (dispatch3 == 2 || dispatch3 == 3 && phi15 < (uint32_t)phi16 || dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16)
				{
					phi18 = phi_in17;
					anon20 = arg1 - 400;
					anon21 = phi18 + 1;
					anon19 = isalpha((__sext int32_t)*(uint8_t*)(anon20 + (__sext int64_t)anon21 + 80));
					phi_in17 = anon21;
					dispatch3 = 2;
				}
				if (anon19 != 0 && (dispatch3 == 2 || dispatch3 == 3 && phi15 < (uint32_t)phi16 || dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16))
				{
					phi_in22 = *(uint8_t*)(anon20 + (__sext int64_t)anon21 + 80);
					phi_in23 = 0;
				}
				if (dispatch3 == 6 || anon19 != 0 && dispatch3 == 2 || anon19 != 0 && dispatch3 == 3 && phi15 < (uint32_t)phi16 || anon19 != 0 && dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16)
				{
					uint8_t phi24 = phi_in22;
					uint64_t phi25 = phi_in23;
					*(uint8_t*)(anon20 + phi25 + 48) = phi24;
					anon27 = phi18 + 2 + (uint32_t)phi25;
					anon26 = isalpha((__sext int32_t)*(uint8_t*)(anon20 + (__sext int64_t)anon27 + 80));
					phi_in22 = *(uint8_t*)(anon20 + (__sext int64_t)anon27 + 80);
					anon28 = (phi25 & 0xffffffff) + 1;
					phi_in23 = anon28;
					dispatch3 = 6;
				}
				if (anon26 == 0)
				{
					if (dispatch3 == 6 || anon19 != 0 && dispatch3 == 2 || anon19 != 0 && dispatch3 == 3 && phi15 < (uint32_t)phi16 || anon19 != 0 && dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16)
					{
						*(uint8_t*)(anon20 + (anon28 << 32 >> 32) + 48) = 0;
						SD(4195996, (uint64_t)&alloca1.field6, (uint64_t)&alloca1.field11);
						phi_in29 = anon6;
					}
					anon30 = alloca1.field4 ^ alloca1.field9 | alloca1.field1 ^ alloca1.field6 | alloca1.field2 ^ alloca1.field7 | alloca1.field3 ^ alloca1.field8;
					if (anon30 == 0 && (dispatch3 == 6 || anon19 != 0 && dispatch3 == 2 || anon19 != 0 && dispatch3 == 3 && phi15 < (uint32_t)phi16 || anon19 != 0 && dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16))
					{
						printf((uint8_t*)anon6);
						phi_in31 = anon6;
					}
				}
				if (dispatch3 == 5 || dispatch3 == 6 && anon26 == 0 && anon30 == 0 || anon19 != 0 && dispatch3 == 2 && anon26 == 0 && anon30 == 0 || anon19 != 0 && dispatch3 == 3 && phi15 < (uint32_t)phi16 && anon26 == 0 && anon30 == 0 || anon19 != 0 && dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16 && anon26 == 0 && anon30 == 0)
				{
					uint64_t phi32 = phi_in31;
					uint64_t anon33 = phi32 + 4;
					phi_in31 = anon33;
					dispatch3 = 5;
					uint16_t anon35 = (uint16_t)*(uint32_t*)(phi32 & 0xffffffff);
					uint16_t anon34 = anon35 - 257 & (anon35 ^ 0x8080) & 0x8080;
					if (anon34 != 0)
					{
						uint8_t anon37 = (uint8_t)anon34;
						struct { uint8_t field0; bool field1; } anon36 = llvm.uadd.with.overflow.i8(anon37, anon37);
						phi_in13 = (uint32_t)anon33 - 3 - (__zext uint32_t)anon36.field1 - anon4;
						phi_in14 = phi32 + 1 - (__zext uint64_t)anon36.field1 - anon6;
						dispatch3 = 3;
					}
				}
				if (dispatch3 == 4 || anon30 != 0 && dispatch3 == 6 && anon26 == 0 || anon19 != 0 && anon30 != 0 && dispatch3 == 2 && anon26 == 0 || anon19 != 0 && anon30 != 0 && dispatch3 == 3 && phi15 < (uint32_t)phi16 && anon26 == 0 || anon19 != 0 && anon30 != 0 && dispatch3 == 1 && anon9 != 0 && phi15 < (uint32_t)phi16 && anon26 == 0)
				{
					uint64_t phi38 = phi_in29;
					uint64_t anon39 = phi38 + 4;
					phi_in29 = anon39;
					dispatch3 = 4;
					uint16_t anon41 = (uint16_t)*(uint32_t*)(phi38 & 0xffffffff);
					uint16_t anon40 = anon41 - 257 & (anon41 ^ 0x8080) & 0x8080;
					if (anon40 != 0)
					{
						uint8_t anon43 = (uint8_t)anon40;
						struct { uint8_t field0; bool field1; } anon42 = llvm.uadd.with.overflow.i8(anon43, anon43);
						phi_in13 = anon27;
						phi_in14 = (__zext uint64_t)((uint32_t)anon39 - 3 - (__zext uint32_t)anon42.field1 - anon4);
						dispatch3 = 3;
					}
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
	uint8_t* anon4;
	uint64_t phi2;
	uint64_t anon3;
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

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
	uint64_t phi_in6;
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
				uint32_t anon21;
				uint64_t phi_in31;
				uint64_t anon30;
				uint32_t anon29;
				uint32_t phi_in19;
				uint64_t phi_in25;
				uint8_t phi_in24;
				uint64_t anon22;
				uint32_t phi17;
				uint64_t phi_in16;
				uint32_t anon23;
				uint32_t phi_in15;
				uint64_t phi18;
				uint64_t phi_in40;
				uint32_t anon28;
				uint32_t phi20;
				uint64_t phi8;
				uint32_t anon5;
				uint8_t* anon4;
				uint64_t anon9;
				uint64_t anon7;
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
				uint64_t anon11 = (__zext uint64_t)*(uint32_t*)(phi8 & 0xffffffff);
				uint64_t anon10 = (anon11 ^ 0x80808080) & anon11 + 4278124287 & 0x80808080;
				if (anon10 != 0 && (dispatch3 == 1 || anon4 != null && dispatch3 == 0))
				{
					uint16_t anon14 = (uint16_t)*(uint32_t*)(phi8 & 0xffffffff);
					uint8_t anon13 = (anon14 - 257 & (anon14 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon10 >> 16) : (uint8_t)(*(uint32_t*)(phi8 & 0xffffffff) + 255 & (*(uint32_t*)(phi8 & 0xffffffff) ^ 0x80)) & 0x80;
					struct { uint8_t field0; bool field1; } anon12 = llvm.uadd.with.overflow.i8(anon13, anon13);
					phi_in15 = 4294967295;
					phi_in16 = (__zext uint64_t)((uint32_t)((anon14 - 257 & (anon14 ^ 0x8080) & 0x8080) == 0 ? phi8 + 6 : anon9) - 3 - (__zext uint32_t)anon12.field1 - anon5);
				}
				if (dispatch3 == 3 || anon10 != 0 && dispatch3 == 1 || anon4 != null && anon10 != 0 && dispatch3 == 0)
				{
					phi17 = phi_in15;
					phi18 = phi_in16;
					phi_in19 = phi17;
					dispatch3 = 0;
				}
				if (dispatch3 == 2 || dispatch3 == 3 && phi17 < (uint32_t)phi18 || anon10 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 || anon4 != null && anon10 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18)
				{
					phi20 = phi_in19;
					anon22 = arg1 - 400;
					anon23 = phi20 + 1;
					anon21 = isalpha((__sext int32_t)*(uint8_t*)(anon22 + (__sext int64_t)anon23 + 80));
					phi_in19 = anon23;
					dispatch3 = 2;
				}
				if (anon21 != 0 && (dispatch3 == 2 || dispatch3 == 3 && phi17 < (uint32_t)phi18 || anon10 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 || anon4 != null && anon10 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18))
				{
					phi_in24 = *(uint8_t*)(anon22 + (__sext int64_t)anon23 + 80);
					phi_in25 = 0;
				}
				if (dispatch3 == 6 || anon21 != 0 && dispatch3 == 2 || anon21 != 0 && dispatch3 == 3 && phi17 < (uint32_t)phi18 || anon10 != 0 && anon21 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 || anon4 != null && anon10 != 0 && anon21 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18)
				{
					uint8_t phi26 = phi_in24;
					uint64_t phi27 = phi_in25;
					*(uint8_t*)(anon22 + phi27 + 48) = phi26;
					anon29 = phi20 + 2 + (uint32_t)phi27;
					anon28 = isalpha((__sext int32_t)*(uint8_t*)(anon22 + (__sext int64_t)anon29 + 80));
					phi_in24 = *(uint8_t*)(anon22 + (__sext int64_t)anon29 + 80);
					anon30 = (phi27 & 0xffffffff) + 1;
					phi_in25 = anon30;
					dispatch3 = 6;
				}
				if (anon28 == 0 && (dispatch3 == 6 || anon21 != 0 && dispatch3 == 2 || anon21 != 0 && dispatch3 == 3 && phi17 < (uint32_t)phi18 || anon10 != 0 && anon21 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 || anon4 != null && anon10 != 0 && anon21 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18))
				{
					*(uint8_t*)(anon22 + (anon30 << 32 >> 32) + 48) = 0;
					SD(4195996, (uint64_t)&alloca1.field6, (uint64_t)&alloca1.field11);
					phi_in31 = anon7;
				}
				uint8_t anon32 = alloca1.field4 ^ alloca1.field9 | alloca1.field1 ^ alloca1.field6 | alloca1.field2 ^ alloca1.field7 | alloca1.field3 ^ alloca1.field8;
				if (dispatch3 == 5 || anon32 != 0 && dispatch3 == 6 && anon28 == 0 || anon21 != 0 && anon32 != 0 && dispatch3 == 2 && anon28 == 0 || anon21 != 0 && anon32 != 0 && dispatch3 == 3 && phi17 < (uint32_t)phi18 && anon28 == 0 || anon10 != 0 && anon21 != 0 && anon32 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 && anon28 == 0 || anon4 != null && anon10 != 0 && anon21 != 0 && anon32 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18 && anon28 == 0)
				{
					uint64_t phi33 = phi_in31;
					uint64_t anon34 = phi33 + 4;
					phi_in31 = anon34;
					dispatch3 = 5;
					uint64_t anon36 = (__zext uint64_t)*(uint32_t*)(phi33 & 0xffffffff);
					uint64_t anon35 = (anon36 ^ 0x80808080) & anon36 + 4278124287 & 0x80808080;
					if (anon35 != 0)
					{
						uint16_t anon39 = (uint16_t)*(uint32_t*)(phi33 & 0xffffffff);
						uint8_t anon38 = (anon39 - 257 & (anon39 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon35 >> 16) : (uint8_t)(*(uint32_t*)(phi33 & 0xffffffff) + 255 & (*(uint32_t*)(phi33 & 0xffffffff) ^ 0x80)) & 0x80;
						struct { uint8_t field0; bool field1; } anon37 = llvm.uadd.with.overflow.i8(anon38, anon38);
						phi_in15 = anon29;
						phi_in16 = (__zext uint64_t)((uint32_t)((anon39 - 257 & (anon39 ^ 0x8080) & 0x8080) == 0 ? phi33 + 6 : anon34) - 3 - (__zext uint32_t)anon37.field1 - anon5);
						dispatch3 = 3;
					}
				}
				if (anon28 == 0 && anon32 == 0 && (dispatch3 == 6 || anon21 != 0 && dispatch3 == 2 || anon21 != 0 && dispatch3 == 3 && phi17 < (uint32_t)phi18 || anon10 != 0 && anon21 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 || anon4 != null && anon10 != 0 && anon21 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18))
				{
					printf((uint8_t*)anon7);
					phi_in40 = anon7;
				}
				if (dispatch3 == 4 || dispatch3 == 6 && anon28 == 0 && anon32 == 0 || anon21 != 0 && dispatch3 == 2 && anon28 == 0 && anon32 == 0 || anon21 != 0 && dispatch3 == 3 && phi17 < (uint32_t)phi18 && anon28 == 0 && anon32 == 0 || anon10 != 0 && anon21 != 0 && dispatch3 == 1 && phi17 < (uint32_t)phi18 && anon28 == 0 && anon32 == 0 || anon4 != null && anon10 != 0 && anon21 != 0 && dispatch3 == 0 && phi17 < (uint32_t)phi18 && anon28 == 0 && anon32 == 0)
				{
					uint64_t phi41 = phi_in40;
					uint64_t anon42 = phi41 + 4;
					phi_in40 = anon42;
					dispatch3 = 4;
					uint64_t anon44 = (__zext uint64_t)*(uint32_t*)(phi41 & 0xffffffff);
					uint64_t anon43 = (anon44 ^ 0x80808080) & anon44 + 4278124287 & 0x80808080;
					if (anon43 != 0)
					{
						uint16_t anon47 = (uint16_t)*(uint32_t*)(phi41 & 0xffffffff);
						uint8_t anon46 = (anon47 - 257 & (anon47 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon43 >> 16) : (uint8_t)(*(uint32_t*)(phi41 & 0xffffffff) + 255 & (*(uint32_t*)(phi41 & 0xffffffff) ^ 0x80)) & 0x80;
						struct { uint8_t field0; bool field1; } anon45 = llvm.uadd.with.overflow.i8(anon46, anon46);
						uint64_t anon48 = (anon47 - 257 & (anon47 ^ 0x8080) & 0x8080) == 0 ? phi41 + 6 : anon42;
						phi_in15 = (uint32_t)anon48 - 3 - (__zext uint32_t)anon45.field1 - anon5;
						phi_in16 = anon48 - 3 - (__zext uint64_t)anon45.field1 - anon7;
						dispatch3 = 3;
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
	uint8_t* anon4;
	uint64_t phi2;
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
		uint8_t anon20;
		uint64_t phi_in8 = arg2;
		uint32_t phi_in9 = 0;
		uint8_t phi_in10 = 255;
		uint64_t phi_in11 = 0;
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
			uint64_t phi19 = phi_in11;
			anon20 = phi18 & 3;
			if (anon20 != 0)
			{
				if ((uint32_t)phi19 + 1 < anon7)
				{
					uint64_t anon21 = phi16 + 1;
					phi_in8 = anon21;
					phi_in9 = phi17;
					phi_in10 = phi18;
					uint64_t anon22 = phi19 + 1 & 0xffffffff;
					phi_in11 = anon22;
					if (*(uint8_t*)anon21 != 95)
					{
						phi_in8 = anon21;
						phi_in9 = phi17;
						phi_in10 = anon20;
						phi_in11 = anon22;
						if (*(uint8_t*)anon21 != *(uint8_t*)phi16)
						{
							uint32_t anon23 = phi17 + 1;
							*(uint8_t*)((__sext int64_t)anon23 + arg1) = *(uint8_t*)anon21;
							phi_in8 = anon21;
							phi_in9 = anon23;
							phi_in10 = (uint8_t)anon23 & 3 ^ 3;
							phi_in11 = anon22;
						}
					}
				}
				else 
				{
					break;
				}
			}
		}
		while (anon20 != 0);
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

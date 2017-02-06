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
void fopen(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600e08);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in5;
	struct { struct __sFILE* field0; uint8_t field1; uint8_t field2; uint8_t field3; uint8_t field4; uint8_t field5[12]; uint8_t field6; uint8_t field7; uint8_t field8; uint8_t field9; uint8_t field10[12]; uint8_t field11[344]; uint64_t field12; } alloca1;
	alloca1.field12 = arg0;
	if ((uint32_t)arg2 > 2)
	{
		fopen(4195762);
		*(uint64_t*)&alloca1 = 1;
		SD(4195805, (uint64_t)&alloca1.field1, *(uint64_t*)(arg3 + 16));
		uint32_t dispatch2 = 0;
		while (true)
		{
			uint64_t phi_in39;
			uint64_t anon29;
			uint32_t anon27;
			uint8_t* anon3;
			uint32_t anon22;
			uint8_t phi_in23;
			uint64_t anon21;
			uint32_t phi19;
			uint32_t phi16;
			uint32_t anon20;
			uint64_t phi_in15;
			uint32_t phi_in14;
			uint64_t phi_in30;
			uint64_t anon8;
			uint32_t anon4;
			uint64_t phi17;
			uint32_t anon28;
			uint64_t anon6;
			uint64_t phi7;
			uint64_t phi_in24;
			uint32_t phi_in18;
			if (dispatch2 == 0)
			{
				anon4 = (uint32_t)arg1 - 320;
				anon3 = fgets((uint8_t*)(__zext uint64_t)anon4, 256, alloca1.field0);
				anon6 = arg1 - 320;
				phi_in5 = anon6;
				if (anon3 == null)
				{
					break;
				}
			}
			if (dispatch2 == 6 || anon3 != null && dispatch2 == 0)
			{
				phi7 = phi_in5;
				anon8 = phi7 + 4;
				phi_in5 = anon8;
				dispatch2 = 6;
			}
			uint64_t anon10 = (__zext uint64_t)*(uint32_t*)(phi7 & 0xffffffff);
			uint64_t anon9 = (anon10 ^ 0x80808080) & anon10 + 4278124287 & 0x80808080;
			if (anon9 != 0 && (dispatch2 == 6 || anon3 != null && dispatch2 == 0))
			{
				uint16_t anon13 = (uint16_t)*(uint32_t*)(phi7 & 0xffffffff);
				uint8_t anon12 = (anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon9 >> 16) : (uint8_t)(*(uint32_t*)(phi7 & 0xffffffff) + 255 & (*(uint32_t*)(phi7 & 0xffffffff) ^ 0x80)) & 0x80;
				struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
				phi_in14 = 4294967295;
				phi_in15 = (__zext uint64_t)((uint32_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? phi7 + 6 : anon8) - 3 - (__zext uint32_t)anon11.field1 - anon4);
			}
			if (dispatch2 == 3 || anon9 != 0 && dispatch2 == 6 || anon3 != null && anon9 != 0 && dispatch2 == 0)
			{
				phi16 = phi_in14;
				phi17 = phi_in15;
				phi_in18 = phi16;
				dispatch2 = 0;
			}
			if (dispatch2 == 1 || dispatch2 == 3 && phi16 < (uint32_t)phi17 || anon9 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 || anon3 != null && anon9 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17)
			{
				phi19 = phi_in18;
				anon21 = arg1 - 400;
				anon22 = phi19 + 1;
				anon20 = isalpha((__sext int32_t)*(uint8_t*)(anon21 + (__sext int64_t)anon22 + 80));
				phi_in18 = anon22;
				dispatch2 = 1;
			}
			if (anon20 != 0 && (dispatch2 == 1 || dispatch2 == 3 && phi16 < (uint32_t)phi17 || anon9 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 || anon3 != null && anon9 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17))
			{
				phi_in23 = *(uint8_t*)(anon21 + (__sext int64_t)anon22 + 80);
				phi_in24 = 0;
			}
			if (dispatch2 == 5 || anon20 != 0 && dispatch2 == 1 || anon20 != 0 && dispatch2 == 3 && phi16 < (uint32_t)phi17 || anon9 != 0 && anon20 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 || anon3 != null && anon9 != 0 && anon20 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17)
			{
				uint8_t phi25 = phi_in23;
				uint64_t phi26 = phi_in24;
				*(uint8_t*)(anon21 + phi26 + 48) = phi25;
				anon28 = phi19 + 2 + (uint32_t)phi26;
				anon27 = isalpha((__sext int32_t)*(uint8_t*)(anon21 + (__sext int64_t)anon28 + 80));
				phi_in23 = *(uint8_t*)(anon21 + (__sext int64_t)anon28 + 80);
				anon29 = (phi26 & 0xffffffff) + 1;
				phi_in24 = anon29;
				dispatch2 = 5;
			}
			if (anon27 == 0 && (dispatch2 == 5 || anon20 != 0 && dispatch2 == 1 || anon20 != 0 && dispatch2 == 3 && phi16 < (uint32_t)phi17 || anon9 != 0 && anon20 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 || anon3 != null && anon9 != 0 && anon20 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17))
			{
				*(uint8_t*)(anon21 + (anon29 << 32 >> 32) + 48) = 0;
				SD(4195996, (uint64_t)&alloca1.field6, (uint64_t)&alloca1.field11);
				phi_in30 = anon6;
			}
			uint8_t anon31 = alloca1.field4 ^ alloca1.field9 | alloca1.field1 ^ alloca1.field6 | alloca1.field2 ^ alloca1.field7 | alloca1.field3 ^ alloca1.field8;
			if (dispatch2 == 4 || anon31 != 0 && dispatch2 == 5 && anon27 == 0 || anon20 != 0 && anon31 != 0 && dispatch2 == 1 && anon27 == 0 || anon20 != 0 && anon31 != 0 && dispatch2 == 3 && phi16 < (uint32_t)phi17 && anon27 == 0 || anon9 != 0 && anon20 != 0 && anon31 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 && anon27 == 0 || anon3 != null && anon9 != 0 && anon20 != 0 && anon31 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17 && anon27 == 0)
			{
				uint64_t phi32 = phi_in30;
				uint64_t anon33 = phi32 + 4;
				phi_in30 = anon33;
				dispatch2 = 4;
				uint64_t anon35 = (__zext uint64_t)*(uint32_t*)(phi32 & 0xffffffff);
				uint64_t anon34 = (anon35 ^ 0x80808080) & anon35 + 4278124287 & 0x80808080;
				if (anon34 != 0)
				{
					uint16_t anon38 = (uint16_t)*(uint32_t*)(phi32 & 0xffffffff);
					uint8_t anon37 = (anon38 - 257 & (anon38 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon34 >> 16) : (uint8_t)(*(uint32_t*)(phi32 & 0xffffffff) + 255 & (*(uint32_t*)(phi32 & 0xffffffff) ^ 0x80)) & 0x80;
					struct { uint8_t field0; bool field1; } anon36 = llvm.uadd.with.overflow.i8(anon37, anon37);
					phi_in14 = anon28;
					phi_in15 = (__zext uint64_t)((uint32_t)((anon38 - 257 & (anon38 ^ 0x8080) & 0x8080) == 0 ? phi32 + 6 : anon33) - 3 - (__zext uint32_t)anon36.field1 - anon4);
					dispatch2 = 3;
				}
			}
			if (anon27 == 0 && anon31 == 0 && (dispatch2 == 5 || anon20 != 0 && dispatch2 == 1 || anon20 != 0 && dispatch2 == 3 && phi16 < (uint32_t)phi17 || anon9 != 0 && anon20 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 || anon3 != null && anon9 != 0 && anon20 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17))
			{
				printf((uint8_t*)anon6);
				phi_in39 = anon6;
			}
			if (dispatch2 == 2 || dispatch2 == 5 && anon27 == 0 && anon31 == 0 || anon20 != 0 && dispatch2 == 1 && anon27 == 0 && anon31 == 0 || anon20 != 0 && dispatch2 == 3 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0 || anon9 != 0 && anon20 != 0 && dispatch2 == 6 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0 || anon3 != null && anon9 != 0 && anon20 != 0 && dispatch2 == 0 && phi16 < (uint32_t)phi17 && anon27 == 0 && anon31 == 0)
			{
				uint64_t phi40 = phi_in39;
				uint64_t anon41 = phi40 + 4;
				phi_in39 = anon41;
				dispatch2 = 2;
				uint64_t anon43 = (__zext uint64_t)*(uint32_t*)(phi40 & 0xffffffff);
				uint64_t anon42 = (anon43 ^ 0x80808080) & anon43 + 4278124287 & 0x80808080;
				if (anon42 != 0)
				{
					uint16_t anon46 = (uint16_t)*(uint32_t*)(phi40 & 0xffffffff);
					uint8_t anon45 = (anon46 - 257 & (anon46 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon42 >> 16) : (uint8_t)(*(uint32_t*)(phi40 & 0xffffffff) + 255 & (*(uint32_t*)(phi40 & 0xffffffff) ^ 0x80)) & 0x80;
					struct { uint8_t field0; bool field1; } anon44 = llvm.uadd.with.overflow.i8(anon45, anon45);
					uint64_t anon47 = (anon46 - 257 & (anon46 ^ 0x8080) & 0x8080) == 0 ? phi40 + 6 : anon41;
					phi_in14 = (uint32_t)anon47 - 3 - (__zext uint32_t)anon44.field1 - anon4;
					phi_in15 = anon47 - 3 - (__zext uint64_t)anon44.field1 - anon6;
					dispatch2 = 3;
				}
			}
		}
		fclose(alloca1.field0);
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

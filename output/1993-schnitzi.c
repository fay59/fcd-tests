#include "tests/bin/1993-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195829);
	}
	return;
}
void toupper(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601218);
}
void system(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601230);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601250);
}
void fopen(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601260);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in4;
	struct { uint8_t field0[12]; uint32_t field1; uint32_t field2; uint8_t field3[3]; uint8_t field4; uint64_t field5; struct __sFILE* field6; uint32_t field7; uint32_t field8; uint8_t field9[112]; uint8_t field10[2448]; uint8_t field11; uint8_t field12[2391]; uint64_t field13; } alloca1;
	alloca1.field13 = arg0;
	alloca1.field5 = arg3;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 == 2)
	{
		uint64_t anon3 = arg1 - 4960;
		sprintf((uint8_t*)anon3, (uint8_t*)0x400c32);
		system(4196841);
		phi_in4 = anon3;
	}
	else 
	{
		fopen(4196116);
		alloca1.field8 = 0;
		*(uint64_t*)&alloca1.field6 = 0;
		alloca1.field7 = 0;
		alloca1.field2 = 0;
		alloca1.field1 = 0 - anon2;
		uint64_t phi_in5 = 0;
		uint32_t dispatch6 = 0;
		while (true)
		{
			uint32_t anon39;
			uint64_t phi_in40;
			uint32_t phi27;
			uint32_t anon38;
			uint64_t phi7;
			uint64_t phi_in9;
			uint64_t phi8;
			uint64_t phi28;
			if (dispatch6 == 0)
			{
				phi7 = phi_in5;
				phi8 = phi_in9;
				fscanf(alloca1.field6, (uint8_t*)0x400c48);
			}
			if (alloca1.field7 == 0)
			{
				puts((uint8_t*)0x400c21);
				phi_in4 = (uint64_t)&alloca1.field9;
			}
			else if (alloca1.field8 == 0)
			{
				puts((uint8_t*)0x400c2c);
				phi_in4 = arg1 - 4960;
			}
			else 
			{
				uint32_t anon12;
				toupper(4196654);
				alloca1.field11 = (uint8_t)alloca1.field7;
				uint32_t phi_in10 = 0;
				do
				{
					uint32_t phi11 = phi_in10;
					printf((uint8_t*)0x400c47);
					anon12 = phi11 + 1;
					phi_in10 = anon12;
				}
				while (anon12 < alloca1.field8);
				puts((uint8_t*)0x400c2a);
				phi_in4 = arg1 - 4960;
			}
			break;
			int64_t anon16 = (__sext int64_t)alloca1.field2 * 21;
			uint64_t anon17 = arg1 - 4736;
			int64_t anon15 = anon16 + anon17;
			uint8_t* anon14 = (uint8_t*)anon15;
			uint64_t anon13 = strlen(anon14);
			uint64_t anon18 = anon13 - 1;
			alloca1.field4 = (__zext uint8_t)(*(uint8_t*)(anon15 + anon18) == 46) | (__zext uint8_t)(*(uint8_t*)(anon15 + anon18) == 63) | (__zext uint8_t)(*(uint8_t*)(anon15 + anon18) == 33);
			uint64_t anon19 = phi8 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon15 + anon18) == 63) | anon15 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon15 + anon18) == 33) | (__zext uint64_t)(*(uint8_t*)(anon15 + anon18) == 46);
			if ((anon19 & 1 | (__zext uint64_t)((*(uint8_t*)(anon15 + anon18) | 1) == 59)) != 0 | *(uint8_t*)(anon15 + anon18) == 44)
			{
				*(uint8_t*)(anon18 + anon16 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi_in20 = phi7;
			uint64_t phi_in21 = 0;
			uint32_t phi_in22 = 0;
			uint64_t phi_in23 = anon19;
			uint64_t phi_in24 = alloca1.field5;
			if (dispatch6 == 2)
			{
				uint64_t phi25 = phi_in20;
				uint64_t phi26 = phi_in21;
				phi27 = phi_in22;
				phi28 = phi_in23;
				uint64_t phi29 = phi_in24;
				if (phi27 > alloca1.field1)
				{
					uint64_t* anon31 = (uint64_t*)phi29;
					uint64_t anon30 = strlen((uint8_t*)*anon31);
					uint64_t phi_in32 = *anon31;
					uint8_t* anon34 = (uint8_t*)(*anon31 + anon30 - 1);
					uint8_t anon33 = (__zext uint8_t)((*anon34 & 0xfd) == 44) | (__zext uint8_t)(*anon34 == 63) | (__zext uint8_t)(*anon34 == 33);
					if (anon33 != 0 | (*anon34 | 1) == 59)
					{
						*anon34 = 0;
						phi_in32 = *anon31;
					}
					uint64_t phi35 = phi_in32;
					uint32_t anon36 = strcasecmp((uint8_t*)phi35, anon14);
					uint64_t anon37 = phi25 + 1 & 0xffffffff;
					phi_in20 = anon36 == 0 ? anon37 : phi25;
					phi_in21 = anon36 == 0 ? anon37 : phi26;
					phi_in22 = phi27 - 1;
					phi_in23 = (*anon31 | phi28) & 0xffffff00 | (__zext uint64_t)anon33;
					phi_in24 = phi29 + 8;
					dispatch6 = 2;
				}
				else 
				{
					anon38 = (__zext uint32_t)((uint32_t)phi26 == 0) + alloca1.field2;
					alloca1.field2 = anon38;
					phi_in5 = phi25;
					phi_in9 = phi28;
					dispatch6 = 0;
					if (alloca1.field4 != 0)
					{
						anon39 = (uint32_t)phi25;
						if (alloca1.field7 < anon39)
						{
							if (anon38 == 0)
							{
								alloca1.field7 = anon39;
								alloca1.field8 = 0;
								phi_in5 = 0;
								phi_in9 = phi28;
								dispatch6 = 0;
							}
							else 
							{
								phi_in40 = 0;
							}
						}
						else 
						{
							alloca1.field2 = 0;
							phi_in5 = 0;
							phi_in9 = phi28;
							dispatch6 = 0;
						}
					}
				}
			}
			if (dispatch6 == 1 || phi27 <= alloca1.field1 && anon38 != 0 && dispatch6 == 2 && alloca1.field4 != 0 && alloca1.field7 < anon39)
			{
				uint64_t phi41 = phi_in40;
				uint32_t anon43 = anon38 - 1;
				uint64_t anon42 = phi41 + (__sext int64_t)anon43 * 21;
				strcpy((uint8_t*)(anon42 + arg1 - 2400), (uint8_t*)(anon17 + anon42));
				if (phi41 == (__zext uint64_t)anon43 * -21)
				{
					alloca1.field7 = anon39;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi_in5 = 0;
					phi_in9 = phi28;
					dispatch6 = 0;
				}
				else 
				{
					phi_in40 = phi41 - 21;
					dispatch6 = 1;
				}
			}
		}
	}
	uint64_t phi44 = phi_in4;
	printf((uint8_t*)0x400c3e);
	gets((uint8_t*)phi44);
	sprintf(&alloca1.field10[0], (uint8_t*)0x400c42);
	system(4196784);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4006e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400b80, (void(*)())0x400bf0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601280;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4197106);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void ii(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon1 = (uint32_t)arg2;
	if ((anon1 >> 31 | (__zext uint32_t)(anon1 == 0)) == 0)
	{
		uint64_t anon4;
		uint64_t phi_in2 = 4197380;
		do
		{
			uint64_t phi3 = phi_in2;
			anon4 = phi3 + 3;
			phi_in2 = anon4;
		}
		while (anon4 != (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383);
	}
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4197299);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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

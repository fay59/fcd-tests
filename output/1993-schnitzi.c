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
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601250);
}
void gets(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601258);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint8_t field0[12]; uint32_t field1; uint32_t field2; uint8_t field3[3]; uint8_t field4; uint64_t field5; struct _IO_FILE* field6; uint32_t field7; uint32_t field8; uint8_t field9[112]; uint8_t field10[2448]; uint8_t field11; uint8_t field12[2391]; uint64_t field13; } alloca1;
	alloca1.field13 = arg0;
	alloca1.field5 = arg3;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 == 2)
	{
		sprintf(&alloca1.field9[0], (uint8_t*)0x400c32);
		system(&alloca1.field9[0]);
	}
	else 
	{
		struct _IO_FILE* anon3 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field8 = 0;
		alloca1.field6 = anon3;
		alloca1.field7 = 0;
		alloca1.field2 = 0;
		alloca1.field1 = 0 - anon2;
		uint64_t phi_in4 = 0;
		uint32_t dispatch5 = 0;
		while (true)
		{
			uint32_t anon31;
			uint64_t phi29;
			uint64_t phi28;
			uint64_t phi_in32;
			uint32_t anon30;
			uint32_t phi27;
			uint64_t phi26;
			uint64_t phi6;
			uint64_t phi7;
			uint64_t phi25;
			uint64_t phi_in8;
			if (dispatch5 == 0)
			{
				phi6 = phi_in4;
				phi7 = phi_in8;
				fscanf(alloca1.field6, (uint8_t*)0x400c48);
			}
			if (alloca1.field7 == 0)
			{
				puts((uint8_t*)0x400c21);
			}
			else if (alloca1.field8 == 0)
			{
				puts((uint8_t*)0x400c2c);
			}
			else 
			{
				uint32_t anon11;
				toupper(4196654);
				alloca1.field11 = (uint8_t)alloca1.field7;
				uint32_t phi_in9 = 0;
				do
				{
					uint32_t phi10 = phi_in9;
					printf((uint8_t*)0x400c47);
					anon11 = phi10 + 1;
					phi_in9 = anon11;
				}
				while (anon11 < alloca1.field8);
				puts((uint8_t*)0x400c2a);
			}
			break;
			int64_t anon15 = (__sext int64_t)alloca1.field2 * 21;
			uint64_t anon16 = arg1 - 4736;
			int64_t anon14 = anon15 + anon16;
			uint8_t* anon13 = (uint8_t*)anon14;
			uint64_t anon12 = strlen(anon13);
			uint64_t anon18 = anon12 - 1;
			uint8_t anon17 = (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 46) | (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 63) | (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 33);
			alloca1.field4 = anon17;
			uint64_t anon19 = phi7 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 63) | anon14 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 33) | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 46);
			if ((anon19 & 1 | (__zext uint64_t)((*(uint8_t*)(anon14 + anon18) | 1) == 59)) != 0 | *(uint8_t*)(anon14 + anon18) == 44)
			{
				*(uint8_t*)(anon18 + anon15 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi_in20 = phi6;
			uint64_t phi_in21 = 0;
			uint32_t phi_in22 = 0;
			uint64_t phi_in23 = anon19;
			uint64_t phi_in24 = alloca1.field5;
			if (dispatch5 == 1)
			{
				phi25 = phi_in20;
				phi26 = phi_in21;
				phi27 = phi_in22;
				phi28 = phi_in23;
				phi29 = phi_in24;
				if (phi27 <= alloca1.field1)
				{
					anon30 = (__zext uint32_t)((uint32_t)phi26 == 0) + alloca1.field2;
					alloca1.field2 = anon30;
					phi_in4 = phi25;
					phi_in8 = phi28;
					dispatch5 = 0;
					if (anon17 != 0)
					{
						anon31 = (uint32_t)phi25;
						if (alloca1.field7 < anon31)
						{
							if (anon30 == 0)
							{
								alloca1.field7 = anon31;
								alloca1.field8 = 0;
								phi_in4 = 0;
								phi_in8 = phi28;
								dispatch5 = 0;
							}
							else 
							{
								phi_in32 = 0;
							}
						}
						else 
						{
							alloca1.field2 = 0;
							phi_in4 = 0;
							phi_in8 = phi28;
							dispatch5 = 0;
						}
					}
				}
			}
			if (dispatch5 == 2 || anon30 != 0 && dispatch5 == 1 && phi27 <= alloca1.field1 && anon17 != 0 && alloca1.field7 < anon31)
			{
				uint64_t phi33 = phi_in32;
				uint32_t anon35 = anon30 - 1;
				uint64_t anon34 = phi33 + (__sext int64_t)anon35 * 21;
				strcpy((uint8_t*)(anon34 + arg1 - 2400), (uint8_t*)(anon16 + anon34));
				if (phi33 == (__zext uint64_t)anon35 * -21)
				{
					alloca1.field7 = anon31;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi_in4 = 0;
					phi_in8 = phi28;
					dispatch5 = 0;
				}
				else 
				{
					phi_in32 = phi33 - 21;
					dispatch5 = 2;
				}
			}
			if (dispatch5 == 1 && phi27 > alloca1.field1)
			{
				uint64_t phi_in40;
				uint64_t* anon37 = (uint64_t*)phi29;
				uint64_t anon36 = strlen((uint8_t*)*anon37);
				uint8_t* anon39 = (uint8_t*)(*anon37 + anon36 - 1);
				uint8_t anon38 = (__zext uint8_t)((*anon39 & 0xfd) == 44) | (__zext uint8_t)(*anon39 == 63) | (__zext uint8_t)(*anon39 == 33);
				if (anon38 == 0)
				{
					phi_in40 = *anon37 & 0xff;
				}
				if (anon38 != 0 || anon38 == 0 && (*anon39 | 1) == 59)
				{
					*anon39 = 0;
					phi_in40 = *anon37;
				}
				uint64_t phi41 = phi_in40;
				uint32_t anon42 = strcasecmp((uint8_t*)phi41, anon13);
				uint64_t anon43 = phi25 + 1 & 0xffffffff;
				phi_in20 = anon42 == 0 ? anon43 : phi25;
				phi_in21 = anon42 == 0 ? anon43 : phi26;
				phi_in22 = phi27 - 1;
				phi_in23 = (*anon37 | phi28) & 0xffffff00 | (__zext uint64_t)anon38;
				phi_in24 = phi29 + 8;
				dispatch5 = 1;
			}
		}
	}
	printf((uint8_t*)0x400c3e);
	gets(4196734);
	sprintf(&alloca1.field10[0], (uint8_t*)0x400c42);
	system(&alloca1.field10[0]);
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

#include "tests/bin/1993-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint32_t field1; uint8_t field2[3]; uint8_t field3; uint64_t field4; struct _IO_FILE* field5; uint32_t field6; uint32_t field7; uint8_t field8[112]; uint8_t field9[2448]; uint8_t field10; uint8_t field11[2391]; uint64_t field12; } alloca1;
	uint64_t phi5;
	alloca1.field12 = arg0;
	alloca1.field4 = arg3;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 == 2)
	{
		uint64_t anon4 = arg1 - 4960;
		uint8_t* anon3 = (uint8_t*)anon4;
		sprintf(anon3, (uint8_t*)0x400c32);
		system(anon3);
		phi5 = anon4;
	}
	else 
	{
		struct _IO_FILE* anon6 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field7 = 0;
		alloca1.field5 = anon6;
		alloca1.field6 = 0;
		alloca1.field1 = 0;
		alloca1.field0 = -anon2;
		while (true)
		{
			uint64_t phi_in8;
			uint64_t phi38;
			uint64_t phi7 = phi_in8;
			uint32_t phi_in9 = alloca1.field1;
			uint64_t phi10 = 0;
			uint32_t phi11 = phi_in9;
			uint64_t phi_in12 = phi10;
			fscanf(alloca1.field5, (uint8_t*)0x400c48);
			if (alloca1.field6 == 0)
			{
				puts((uint8_t*)0x400c21);
				phi5 = (uint64_t)&alloca1.field8;
			}
			else if (alloca1.field7 == 0)
			{
				puts((uint8_t*)0x400c2c);
				phi5 = arg1 - 4960;
			}
			else 
			{
				uint32_t anon16;
				uint32_t anon13 = toupper((__sext int32_t)alloca1.field10);
				alloca1.field10 = (uint8_t)anon13;
				uint32_t phi_in14 = 0;
				do
				{
					uint32_t phi15 = phi_in14;
					printf((uint8_t*)0x400c47);
					anon16 = phi15 + 1;
					phi_in14 = anon16;
				}
				while (anon16 < alloca1.field7);
				puts((uint8_t*)0x400c2a);
				phi5 = arg1 - 4960;
			}
			int64_t anon20 = (__sext int64_t)phi11 * 21;
			uint64_t anon21 = arg1 - 4736;
			int64_t anon19 = anon20 + anon21;
			uint8_t* anon18 = (uint8_t*)anon19;
			uint64_t anon17 = strlen(anon18);
			uint64_t anon22 = anon17 - 1;
			alloca1.field3 = (__zext uint8_t)(*(uint8_t*)(anon19 + anon22) == 46 | *(uint8_t*)(anon19 + anon22) == 63 | *(uint8_t*)(anon19 + anon22) == 33);
			if (*(uint8_t*)(anon19 + anon22) == 63 || *(uint8_t*)(anon19 + anon22) == 59 || *(uint8_t*)(anon19 + anon22) == 58 || *(uint8_t*)(anon19 + anon22) == 46 || *(uint8_t*)(anon19 + anon22) == 33 || *(uint8_t*)(anon19 + anon22) == 44)
			{
				*(uint8_t*)(anon22 + anon20 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi23 = 0;
			uint32_t phi24 = 0;
			uint64_t phi25 = phi7 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon19 + anon22) == 63) | anon19 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon19 + anon22) == 33) | (__zext uint64_t)(*(uint8_t*)(anon19 + anon22) == 46);
			uint64_t phi26 = alloca1.field4;
			phi10 = phi_in12;
			phi7 = phi25;
			break;
			uint32_t anon27 = (__zext uint32_t)((uint32_t)phi23 == 0) + alloca1.field1;
			alloca1.field1 = anon27;
			phi_in9 = anon27;
			if (*(uint8_t*)(anon19 + anon22) == 63 || *(uint8_t*)(anon19 + anon22) == 46 || *(uint8_t*)(anon19 + anon22) == 33)
			{
				uint32_t anon28 = (uint32_t)phi10;
				if (alloca1.field6 < anon28)
				{
					if (anon27 == 0)
					{
						alloca1.field6 = anon28;
						alloca1.field7 = 0;
						phi_in8 = phi7;
					}
					else 
					{
						uint64_t phi30;
						uint64_t anon33;
						uint64_t phi_in29 = 0;
						do
						{
							phi30 = phi_in29;
							uint32_t anon32 = anon27 - 1;
							uint64_t anon31 = phi30 + (__sext int64_t)anon32 * 21;
							strcpy((uint8_t*)(anon31 + arg1 - 2400), (uint8_t*)(anon21 + anon31));
							anon33 = (__zext uint64_t)anon32 * -21;
							if (phi30 != anon33)
							{
								phi_in29 = phi30 - 21;
							}
						}
						while (phi30 != anon33);
						alloca1.field6 = anon28;
						alloca1.field1 = 0;
						alloca1.field7 = alloca1.field1;
						phi_in8 = phi7 & 0xff;
					}
				}
				else 
				{
					alloca1.field1 = 0;
					phi_in8 = phi7;
				}
			}
			uint64_t* anon35 = (uint64_t*)phi26;
			uint64_t anon34 = strlen((uint8_t*)*anon35);
			uint8_t* anon37 = (uint8_t*)(*anon35 + anon34 - 1);
			bool anon36 = !(*anon37 == 63 || *anon37 == 46 || *anon37 == 44 || *anon37 == 33);
			if (anon36)
			{
				phi38 = *anon35 & 0xff;
			}
			if (anon36 && (*anon37 | 1) == 59 || *anon37 == 63 || *anon37 == 46 || *anon37 == 44 || *anon37 == 33 || *anon37 == 63 || *anon37 == 46 || *anon37 == 44 || *anon37 == 33 || *anon37 == 63 || *anon37 == 46 || *anon37 == 44 || *anon37 == 33 || *anon37 == 63 || *anon37 == 46 || *anon37 == 44 || *anon37 == 33)
			{
				*anon37 = 0;
				phi38 = *anon35;
			}
			uint32_t anon39 = strcasecmp((uint8_t*)phi38, anon18);
			uint64_t anon40 = phi10 + 1 & 0xffffffff;
			phi_in12 = anon39 == 0 ? anon40 : phi10 & 0xffffffff;
			phi23 = anon39 == 0 ? anon40 : phi23;
			phi24 = phi24 - 1;
			phi25 = (*anon35 | phi7) & 0xffffff00 | (__zext uint64_t)((*anon37 & 0xfd) == 44 | *anon37 == 63 | *anon37 == 33);
			phi26 = phi26 + 8;
			break;
		}
	}
	printf((uint8_t*)0x400c3e);
	gets((uint8_t*)phi5);
	sprintf(&alloca1.field9[0], (uint8_t*)0x400c42);
	system(&alloca1.field9[0]);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4006e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400b80, (void(*)())0x400bf0, (void(*)())arg2, *(uint8_t**)anon1);
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
	if ((uint32_t)arg2 >= 1)
	{
		uint64_t anon3;
		uint64_t phi_in1 = 4197380;
		do
		{
			uint64_t phi2 = phi_in1;
			anon3 = phi2 + 3;
			phi_in1 = anon3;
		}
		while (anon3 != (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383);
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

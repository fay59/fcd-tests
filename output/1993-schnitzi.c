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
			uint64_t phi39;
			uint64_t phi_in7 = phi_in8;
			uint32_t phi_in9 = alloca1.field1;
			uint64_t phi10 = 0;
			uint64_t phi11 = phi_in7;
			uint32_t phi12 = phi_in9;
			uint64_t phi_in13 = phi10;
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
				uint32_t anon17;
				uint32_t anon14 = toupper((__sext int32_t)alloca1.field10);
				alloca1.field10 = (uint8_t)anon14;
				uint32_t phi_in15 = 0;
				do
				{
					uint32_t phi16 = phi_in15;
					printf((uint8_t*)0x400c47);
					anon17 = phi16 + 1;
					phi_in15 = anon17;
				}
				while (anon17 < alloca1.field7);
				puts((uint8_t*)0x400c2a);
				phi5 = arg1 - 4960;
			}
			int64_t anon21 = (__sext int64_t)phi12 * 21;
			uint64_t anon22 = arg1 - 4736;
			int64_t anon20 = anon21 + anon22;
			uint8_t* anon19 = (uint8_t*)anon20;
			uint64_t anon18 = strlen(anon19);
			uint64_t anon23 = anon18 - 1;
			alloca1.field3 = (__zext uint8_t)(*(uint8_t*)(anon20 + anon23) == 46 | *(uint8_t*)(anon20 + anon23) == 63 | *(uint8_t*)(anon20 + anon23) == 33);
			if (*(uint8_t*)(anon20 + anon23) == 63 || *(uint8_t*)(anon20 + anon23) == 59 || *(uint8_t*)(anon20 + anon23) == 58 || *(uint8_t*)(anon20 + anon23) == 46 || *(uint8_t*)(anon20 + anon23) == 33 || *(uint8_t*)(anon20 + anon23) == 44)
			{
				*(uint8_t*)(anon23 + anon21 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi24 = 0;
			uint32_t phi25 = 0;
			uint64_t phi26 = phi11 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon20 + anon23) == 63) | anon20 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon20 + anon23) == 33) | (__zext uint64_t)(*(uint8_t*)(anon20 + anon23) == 46);
			uint64_t phi27 = alloca1.field4;
			phi10 = phi_in13;
			phi11 = phi26;
			break;
			uint32_t anon28 = (__zext uint32_t)((uint32_t)phi24 == 0) + alloca1.field1;
			alloca1.field1 = anon28;
			phi_in9 = anon28;
			if (*(uint8_t*)(anon20 + anon23) == 63 || *(uint8_t*)(anon20 + anon23) == 46 || *(uint8_t*)(anon20 + anon23) == 33)
			{
				uint32_t anon29 = (uint32_t)phi10;
				if (alloca1.field6 < anon29)
				{
					if (anon28 == 0)
					{
						alloca1.field6 = anon29;
						alloca1.field7 = 0;
						phi_in8 = phi11;
					}
					else 
					{
						uint64_t phi31;
						uint64_t anon34;
						uint64_t phi_in30 = 0;
						do
						{
							phi31 = phi_in30;
							uint32_t anon33 = anon28 - 1;
							uint64_t anon32 = phi31 + (__sext int64_t)anon33 * 21;
							strcpy((uint8_t*)(anon32 + arg1 - 2400), (uint8_t*)(anon22 + anon32));
							anon34 = (__zext uint64_t)anon33 * -21;
							if (phi31 != anon34)
							{
								phi_in30 = phi31 - 21;
							}
						}
						while (phi31 != anon34);
						alloca1.field6 = anon29;
						alloca1.field1 = 0;
						alloca1.field7 = alloca1.field1;
						phi_in8 = phi11 & 0xff;
					}
				}
				else 
				{
					alloca1.field1 = 0;
					phi_in8 = phi11;
				}
			}
			uint64_t* anon36 = (uint64_t*)phi27;
			uint64_t anon35 = strlen((uint8_t*)*anon36);
			uint8_t* anon38 = (uint8_t*)(*anon36 + anon35 - 1);
			bool anon37 = !(*anon38 == 63 || *anon38 == 46 || *anon38 == 44 || *anon38 == 33);
			if (anon37)
			{
				phi39 = *anon36 & 0xff;
			}
			if (anon37 && (*anon38 | 1) == 59 || *anon38 == 63 || *anon38 == 46 || *anon38 == 44 || *anon38 == 33 || *anon38 == 63 || *anon38 == 46 || *anon38 == 44 || *anon38 == 33 || *anon38 == 63 || *anon38 == 46 || *anon38 == 44 || *anon38 == 33 || *anon38 == 63 || *anon38 == 46 || *anon38 == 44 || *anon38 == 33)
			{
				*anon38 = 0;
				phi39 = *anon36;
			}
			uint32_t anon40 = strcasecmp((uint8_t*)phi39, anon19);
			uint64_t anon41 = phi10 + 1;
			phi_in13 = (anon40 == 0 ? anon41 : phi10) & 0xffffffff;
			phi24 = anon40 == 0 ? anon41 & 0xffffffff : phi24;
			phi25 = phi25 - 1;
			phi26 = (*anon36 | phi11) & 0xffffff00 | (__zext uint64_t)((*anon38 & 0xfd) == 44 | *anon38 == 63 | *anon38 == 33);
			phi27 = phi27 + 8;
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

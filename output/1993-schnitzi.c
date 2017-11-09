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
	uint64_t phi_in5;
	alloca1.field12 = arg0;
	alloca1.field4 = arg3;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 == 2)
	{
		uint64_t anon4 = arg1 - 4960;
		uint8_t* anon3 = (uint8_t*)anon4;
		sprintf(anon3, (uint8_t*)0x400c32);
		system(anon3);
		phi_in5 = anon4;
	}
	else 
	{
		struct _IO_FILE* anon6 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field7 = 0;
		alloca1.field5 = anon6;
		alloca1.field6 = 0;
		alloca1.field1 = 0;
		alloca1.field0 = -anon2;
		uint64_t phi_in7 = 0;
		while (fscanf(alloca1.field5, (uint8_t*)0x400c48) != 255)
		{
			int64_t anon9 = (__sext int64_t)alloca1.field1 * 21;
			uint64_t anon10 = arg1 - 4736;
			int64_t anon8 = anon9 + anon10;
			uint8_t* anon12 = (uint8_t*)anon8;
			uint64_t anon11 = strlen(anon12) - 1;
			alloca1.field3 = (__zext uint8_t)(*(uint8_t*)(anon8 + anon11) == 46 | *(uint8_t*)(anon8 + anon11) == 63 | *(uint8_t*)(anon8 + anon11) == 33);
			if (*(uint8_t*)(anon8 + anon11) == 63 || *(uint8_t*)(anon8 + anon11) == 59 || *(uint8_t*)(anon8 + anon11) == 58 || *(uint8_t*)(anon8 + anon11) == 46 || *(uint8_t*)(anon8 + anon11) == 33 || *(uint8_t*)(anon8 + anon11) == 44)
			{
				*(uint8_t*)(anon11 + anon9 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi_in13 = 0;
			uint32_t phi_in14 = 0;
			uint64_t phi_in15 = phi_in16 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon8 + anon11) == 63) | anon8 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon8 + anon11) == 33) | (__zext uint64_t)(*(uint8_t*)(anon8 + anon11) == 46);
			uint64_t phi_in17 = alloca1.field4;
			while (phi_in14 > alloca1.field0)
			{
				uint64_t phi_in21;
				uint64_t* anon20 = (uint64_t*)phi_in17;
				uint8_t* anon19 = (uint8_t*)(*anon20 + strlen((uint8_t*)*anon20) - 1);
				bool anon18 = !(*anon19 == 63 || *anon19 == 46 || *anon19 == 44 || *anon19 == 33);
				if (anon18)
				{
					phi_in21 = *anon20 & 0xff;
				}
				if (*anon19 == 63 || *anon19 == 46 || *anon19 == 44 || *anon19 == 33 || *anon19 == 63 || *anon19 == 46 || *anon19 == 44 || *anon19 == 33 || *anon19 == 63 || *anon19 == 46 || *anon19 == 44 || *anon19 == 33 || *anon19 == 63 || *anon19 == 46 || *anon19 == 44 || *anon19 == 33 || anon18 && (*anon19 | 1) == 59)
				{
					*anon19 = 0;
					phi_in21 = *anon20;
				}
				uint64_t anon22 = phi_in7 + 1 & 0xffffffff;
				phi_in7 = strcasecmp((uint8_t*)phi_in21, anon12) == 0 ? anon22 : phi_in7 & 0xffffffff;
				phi_in13 = strcasecmp((uint8_t*)phi_in21, anon12) == 0 ? anon22 : phi_in13;
				phi_in14 = phi_in14 - 1;
				phi_in15 = (*anon20 | phi_in15) & 0xffffff00 | (__zext uint64_t)((*anon19 & 0xfd) == 44 | *anon19 == 63 | *anon19 == 33);
				phi_in17 = phi_in17 + 8;
			}
			uint32_t anon23 = (__zext uint32_t)((uint32_t)phi_in13 == 0) + alloca1.field1;
			alloca1.field1 = anon23;
			uint64_t phi_in16 = phi_in15;
			if (*(uint8_t*)(anon8 + anon11) == 63 || *(uint8_t*)(anon8 + anon11) == 46 || *(uint8_t*)(anon8 + anon11) == 33)
			{
				uint32_t anon24 = (uint32_t)phi_in7;
				if (alloca1.field6 < anon24)
				{
					if (anon23 == 0)
					{
						alloca1.field6 = anon24;
						alloca1.field7 = 0;
						phi_in7 = 0;
						phi_in16 = phi_in15;
					}
					else 
					{
						uint64_t anon28;
						uint64_t phi_in25 = 0;
						do
						{
							uint32_t anon27 = anon23 - 1;
							uint64_t anon26 = phi_in25 + (__sext int64_t)anon27 * 21;
							strcpy((uint8_t*)(anon26 + arg1 - 2400), (uint8_t*)(anon10 + anon26));
							anon28 = (__zext uint64_t)anon27 * -21;
							if (phi_in25 != anon28)
							{
								phi_in25 = phi_in25 - 21;
							}
						}
						while (phi_in25 != anon28);
						alloca1.field6 = anon24;
						alloca1.field1 = 0;
						alloca1.field7 = alloca1.field1;
						phi_in7 = 0;
						phi_in16 = phi_in15;
					}
				}
				else 
				{
					alloca1.field1 = 0;
					phi_in7 = 0;
					phi_in16 = phi_in15;
				}
			}
		}
		if (alloca1.field6 == 0)
		{
			puts((uint8_t*)0x400c21);
			phi_in5 = (uint64_t)&alloca1.field8;
		}
		else if (alloca1.field7 == 0)
		{
			puts((uint8_t*)0x400c2c);
			phi_in5 = arg1 - 4960;
		}
		else 
		{
			uint32_t anon30;
			alloca1.field10 = (uint8_t)toupper((__sext int32_t)alloca1.field10);
			uint32_t phi_in29 = 0;
			do
			{
				printf((uint8_t*)0x400c47);
				anon30 = phi_in29 + 1;
				phi_in29 = anon30;
			}
			while (anon30 < alloca1.field7);
			puts((uint8_t*)0x400c2a);
			phi_in5 = arg1 - 4960;
		}
	}
	printf((uint8_t*)0x400c3e);
	gets((uint8_t*)phi_in5);
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
			uint64_t anon2 = phi_in1 + 3;
			phi_in1 = anon2;
			anon3 = (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383;
		}
		while (anon2 != anon3);
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

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
		uint32_t anon11;
		struct _IO_FILE* anon6 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field7 = 0;
		alloca1.field5 = anon6;
		alloca1.field6 = 0;
		alloca1.field1 = 0;
		alloca1.field0 = -anon2;
		uint64_t phi7 = 0;
		do
		{
			uint64_t phi_in10;
			uint64_t phi8 = phi7;
			uint64_t phi9 = phi_in10;
			anon11 = fscanf(alloca1.field5, (uint8_t*)0x400c48);
			if (anon11 != 255)
			{
				int64_t anon13 = (__sext int64_t)alloca1.field1 * 21;
				uint64_t anon14 = arg1 - 4736;
				int64_t anon12 = anon13 + anon14;
				uint8_t* anon16 = (uint8_t*)anon12;
				uint64_t anon15 = strlen(anon16) - 1;
				alloca1.field3 = (__zext uint8_t)(*(uint8_t*)(anon12 + anon15) == 46 | *(uint8_t*)(anon12 + anon15) == 63 | *(uint8_t*)(anon12 + anon15) == 33);
				if (*(uint8_t*)(anon12 + anon15) == 63 || *(uint8_t*)(anon12 + anon15) == 59 || *(uint8_t*)(anon12 + anon15) == 58 || *(uint8_t*)(anon12 + anon15) == 46 || *(uint8_t*)(anon12 + anon15) == 33 || *(uint8_t*)(anon12 + anon15) == 44)
				{
					*(uint8_t*)(anon15 + anon13 + arg1 - 64 - 4672) = 0;
				}
				uint64_t phi17 = 0;
				uint32_t phi18 = 0;
				phi_in10 = phi9 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 63) | anon12 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 33) | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 46);
				uint64_t phi19 = alloca1.field4;
				while (phi18 > alloca1.field0)
				{
					uint64_t phi23;
					uint64_t* anon22 = (uint64_t*)phi19;
					uint8_t* anon21 = (uint8_t*)(*anon22 + strlen((uint8_t*)*anon22) - 1);
					bool anon20 = !(*anon21 == 63 || *anon21 == 46 || *anon21 == 44 || *anon21 == 33);
					if (anon20)
					{
						phi23 = *anon22 & 0xff;
					}
					bool anon24 = *anon21 == 63 || *anon21 == 46 || *anon21 == 44;
					bool anon25 = *anon21 == 63 || *anon21 == 46 || *anon21 == 44;
					bool anon26 = *anon21 == 63 || *anon21 == 46 || *anon21 == 44;
					if (*anon21 == 63 || *anon21 == 46 || *anon21 == 44 || *anon21 == 33 || anon24 && *anon21 == 33 || anon25 && *anon21 == 33 || anon26 && *anon21 == 33 || anon20 && (*anon21 | 1) == 59)
					{
						*anon21 = 0;
						phi23 = *anon22;
					}
					uint64_t anon27 = phi8 + 1 & 0xffffffff;
					phi8 = strcasecmp((uint8_t*)phi23, anon16) == 0 ? anon27 : phi8 & 0xffffffff;
					phi17 = strcasecmp((uint8_t*)phi23, anon16) == 0 ? anon27 : phi17;
					phi18 = phi18 - 1;
					phi_in10 = (*anon22 | phi_in10) & 0xffffff00 | (__zext uint64_t)((*anon21 & 0xfd) == 44 | *anon21 == 63 | *anon21 == 33);
					phi19 = phi19 + 8;
				}
				uint32_t anon28 = (__zext uint32_t)((uint32_t)phi17 == 0) + alloca1.field1;
				alloca1.field1 = anon28;
				phi7 = phi8;
				if (*(uint8_t*)(anon12 + anon15) == 63 || *(uint8_t*)(anon12 + anon15) == 46 || *(uint8_t*)(anon12 + anon15) == 33)
				{
					uint32_t anon29 = (uint32_t)phi8;
					if (alloca1.field6 < anon29)
					{
						if (anon28 == 0)
						{
							alloca1.field6 = anon29;
							alloca1.field7 = 0;
							phi7 = 0;
						}
						else 
						{
							uint64_t anon33;
							uint64_t phi30 = 0;
							do
							{
								uint32_t anon32 = anon28 - 1;
								uint64_t anon31 = phi30 + (__sext int64_t)anon32 * 21;
								strcpy((uint8_t*)(anon31 + arg1 - 2400), (uint8_t*)(anon14 + anon31));
								anon33 = (__zext uint64_t)anon32 * -21;
								if (phi30 != anon33)
								{
									phi30 = phi30 - 21;
								}
							}
							while (phi30 != anon33);
							alloca1.field6 = anon29;
							alloca1.field1 = 0;
							alloca1.field7 = alloca1.field1;
							phi7 = 0;
						}
					}
					else 
					{
						alloca1.field1 = 0;
						phi7 = 0;
					}
				}
			}
		}
		while (anon11 != 255);
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
			uint32_t anon35;
			alloca1.field10 = (uint8_t)toupper((__sext int32_t)alloca1.field10);
			uint32_t phi34 = 0;
			do
			{
				printf((uint8_t*)0x400c47);
				anon35 = phi34 + 1;
				phi34 = anon35;
			}
			while (anon35 < alloca1.field7);
			puts((uint8_t*)0x400c2a);
			phi5 = arg1 - 4960;
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
	uint32_t anon1 = (uint32_t)arg2;
	if ((anon1 >> 31 | (__zext uint32_t)(anon1 == 0)) == 0)
	{
		uint64_t anon4;
		uint64_t phi2 = 4197380;
		do
		{
			uint64_t anon3 = phi2 + 3;
			phi2 = anon3;
			anon4 = (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383;
		}
		while (anon3 != anon4);
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

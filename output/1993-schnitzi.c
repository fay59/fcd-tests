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
			uint64_t phi_in8 = phi7;
			uint64_t phi9 = phi_in10;
			anon11 = fscanf(alloca1.field5, (uint8_t*)0x400c48);
			if (anon11 != 255)
			{
				uint64_t phi24;
				uint64_t phi25;
				uint32_t phi26;
				uint64_t phi27;
				int64_t anon15 = (__sext int64_t)alloca1.field1 * 21;
				uint64_t anon16 = arg1 - 4736;
				int64_t anon14 = anon15 + anon16;
				uint8_t* anon13 = (uint8_t*)anon14;
				uint64_t anon12 = strlen(anon13);
				uint64_t anon18 = anon12 - 1;
				uint8_t anon17 = (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 46) | (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 63) | (__zext uint8_t)(*(uint8_t*)(anon14 + anon18) == 33);
				alloca1.field3 = anon17;
				uint64_t anon19 = phi9 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 63) | anon14 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 33) | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 46);
				if ((anon19 & 1 | (__zext uint64_t)((*(uint8_t*)(anon14 + anon18) | 1) == 59)) != 0 | *(uint8_t*)(anon14 + anon18) == 44)
				{
					*(uint8_t*)(anon18 + anon15 + arg1 - 64 - 4672) = 0;
				}
				uint64_t phi_in20 = 0;
				uint32_t phi_in21 = 0;
				uint64_t phi_in22 = anon19;
				uint64_t phi23 = alloca1.field4;
				do
				{
					phi24 = phi_in8;
					phi25 = phi_in20;
					phi26 = phi_in21;
					phi27 = phi_in22;
					if (phi26 > alloca1.field0)
					{
						uint64_t phi32;
						uint64_t* anon29 = (uint64_t*)phi23;
						uint64_t anon28 = strlen((uint8_t*)*anon29);
						uint8_t* anon31 = (uint8_t*)(*anon29 + anon28 - 1);
						uint8_t anon30 = (__zext uint8_t)((*anon31 & 0xfd) == 44) | (__zext uint8_t)(*anon31 == 63) | (__zext uint8_t)(*anon31 == 33);
						if (anon30 == 0)
						{
							phi32 = *anon29 & 0xff;
						}
						if (anon30 != 0 || anon30 == 0 && (*anon31 | 1) == 59)
						{
							*anon31 = 0;
							phi32 = *anon29;
						}
						uint32_t anon33 = strcasecmp((uint8_t*)phi32, anon13);
						uint64_t anon34 = phi24 + 1 & 0xffffffff;
						phi_in8 = anon33 == 0 ? anon34 : phi24;
						phi_in20 = anon33 == 0 ? anon34 : phi25;
						phi_in21 = phi26 - 1;
						phi_in22 = (*anon29 | phi27) & 0xffffff00 | (__zext uint64_t)anon30;
						phi23 = phi23 + 8;
					}
				}
				while (phi26 > alloca1.field0);
				uint32_t anon35 = (__zext uint32_t)((uint32_t)phi25 == 0) + alloca1.field1;
				alloca1.field1 = anon35;
				phi7 = phi24;
				phi_in10 = phi27;
				if (anon17 != 0)
				{
					uint32_t anon36 = (uint32_t)phi24;
					if (alloca1.field6 < anon36)
					{
						if (anon35 == 0)
						{
							alloca1.field6 = anon36;
							alloca1.field7 = 0;
							phi7 = 0;
							phi_in10 = phi27;
						}
						else 
						{
							uint64_t phi38;
							uint64_t anon41;
							uint64_t phi_in37 = 0;
							do
							{
								phi38 = phi_in37;
								uint32_t anon40 = anon35 - 1;
								uint64_t anon39 = phi38 + (__sext int64_t)anon40 * 21;
								strcpy((uint8_t*)(anon39 + arg1 - 2400), (uint8_t*)(anon16 + anon39));
								anon41 = (__zext uint64_t)anon40 * -21;
								if (phi38 != anon41)
								{
									phi_in37 = phi38 - 21;
								}
							}
							while (phi38 != anon41);
							alloca1.field6 = anon36;
							alloca1.field1 = 0;
							alloca1.field7 = alloca1.field1;
							phi7 = 0;
							phi_in10 = phi27;
						}
					}
					else 
					{
						alloca1.field1 = 0;
						phi7 = 0;
						phi_in10 = phi27;
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
			uint32_t anon45;
			uint32_t anon42 = toupper((__sext int32_t)alloca1.field10);
			alloca1.field10 = (uint8_t)anon42;
			uint32_t phi_in43 = 0;
			do
			{
				uint32_t phi44 = phi_in43;
				printf((uint8_t*)0x400c47);
				anon45 = phi44 + 1;
				phi_in43 = anon45;
			}
			while (anon45 < alloca1.field7);
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

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
		uint32_t anon10;
		struct _IO_FILE* anon6 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field7 = 0;
		alloca1.field5 = anon6;
		alloca1.field6 = 0;
		alloca1.field1 = 0;
		alloca1.field0 = -anon2;
		uint64_t phi_in7 = 0;
		do
		{
			uint64_t phi_in9;
			uint64_t phi8 = phi_in9;
			anon10 = fscanf(alloca1.field5, (uint8_t*)0x400c48);
			if (anon10 != 255)
			{
				uint64_t phi23;
				uint64_t phi24;
				uint32_t phi25;
				uint64_t phi26;
				int64_t anon14 = (__sext int64_t)alloca1.field1 * 21;
				uint64_t anon15 = arg1 - 4736;
				int64_t anon13 = anon14 + anon15;
				uint8_t* anon12 = (uint8_t*)anon13;
				uint64_t anon11 = strlen(anon12);
				uint64_t anon17 = anon11 - 1;
				uint8_t anon16 = (__zext uint8_t)(*(uint8_t*)(anon13 + anon17) == 46) | (__zext uint8_t)(*(uint8_t*)(anon13 + anon17) == 63) | (__zext uint8_t)(*(uint8_t*)(anon13 + anon17) == 33);
				alloca1.field3 = anon16;
				uint64_t anon18 = phi8 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon13 + anon17) == 63) | anon13 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon13 + anon17) == 33) | (__zext uint64_t)(*(uint8_t*)(anon13 + anon17) == 46);
				if ((anon18 & 1 | (__zext uint64_t)((*(uint8_t*)(anon13 + anon17) | 1) == 59)) != 0 | *(uint8_t*)(anon13 + anon17) == 44)
				{
					*(uint8_t*)(anon17 + anon14 + arg1 - 64 - 4672) = 0;
				}
				uint64_t phi_in19 = 0;
				uint32_t phi_in20 = 0;
				uint64_t phi_in21 = anon18;
				uint64_t phi22 = alloca1.field4;
				do
				{
					phi23 = phi_in7;
					phi24 = phi_in19;
					phi25 = phi_in20;
					phi26 = phi_in21;
					if (phi25 > alloca1.field0)
					{
						uint64_t phi31;
						uint64_t* anon28 = (uint64_t*)phi22;
						uint64_t anon27 = strlen((uint8_t*)*anon28);
						uint8_t* anon30 = (uint8_t*)(*anon28 + anon27 - 1);
						uint8_t anon29 = (__zext uint8_t)((*anon30 & 0xfd) == 44) | (__zext uint8_t)(*anon30 == 63) | (__zext uint8_t)(*anon30 == 33);
						if (anon29 == 0)
						{
							phi31 = *anon28 & 0xff;
						}
						if (anon29 != 0 || anon29 == 0 && (*anon30 | 1) == 59)
						{
							*anon30 = 0;
							phi31 = *anon28;
						}
						uint32_t anon32 = strcasecmp((uint8_t*)phi31, anon12);
						uint64_t anon33 = phi23 + 1 & 0xffffffff;
						phi_in7 = anon32 == 0 ? anon33 : phi23;
						phi_in19 = anon32 == 0 ? anon33 : phi24;
						phi_in20 = phi25 - 1;
						phi_in21 = (*anon28 | phi26) & 0xffffff00 | (__zext uint64_t)anon29;
						phi22 = phi22 + 8;
					}
				}
				while (phi25 > alloca1.field0);
				uint32_t anon34 = (__zext uint32_t)((uint32_t)phi24 == 0) + alloca1.field1;
				alloca1.field1 = anon34;
				phi_in7 = phi23;
				phi_in9 = phi26;
				if (anon16 != 0)
				{
					uint32_t anon35 = (uint32_t)phi23;
					if (alloca1.field6 < anon35)
					{
						if (anon34 == 0)
						{
							alloca1.field6 = anon35;
							alloca1.field7 = 0;
							phi_in7 = 0;
							phi_in9 = phi26;
						}
						else 
						{
							uint64_t phi37;
							uint64_t anon40;
							uint64_t phi_in36 = 0;
							do
							{
								phi37 = phi_in36;
								uint32_t anon39 = anon34 - 1;
								uint64_t anon38 = phi37 + (__sext int64_t)anon39 * 21;
								strcpy((uint8_t*)(anon38 + arg1 - 2400), (uint8_t*)(anon15 + anon38));
								anon40 = (__zext uint64_t)anon39 * -21;
								if (phi37 != anon40)
								{
									phi_in36 = phi37 - 21;
								}
							}
							while (phi37 != anon40);
							alloca1.field6 = anon35;
							alloca1.field1 = 0;
							alloca1.field7 = alloca1.field1;
							phi_in7 = 0;
							phi_in9 = phi26;
						}
					}
					else 
					{
						alloca1.field1 = 0;
						phi_in7 = 0;
						phi_in9 = phi26;
					}
				}
			}
		}
		while (anon10 != 255);
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
			uint32_t anon44;
			uint32_t anon41 = toupper((__sext int32_t)alloca1.field10);
			alloca1.field10 = (uint8_t)anon41;
			uint32_t phi_in42 = 0;
			do
			{
				uint32_t phi43 = phi_in42;
				printf((uint8_t*)0x400c47);
				anon44 = phi43 + 1;
				phi_in42 = anon44;
			}
			while (anon44 < alloca1.field7);
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

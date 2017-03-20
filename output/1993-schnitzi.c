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
				uint64_t phi22;
				uint64_t phi23;
				uint32_t phi24;
				uint64_t phi25;
				int64_t anon15 = (__sext int64_t)alloca1.field1 * 21;
				uint64_t anon16 = arg1 - 4736;
				int64_t anon14 = anon15 + anon16;
				uint8_t* anon13 = (uint8_t*)anon14;
				uint64_t anon12 = strlen(anon13);
				uint64_t anon17 = anon12 - 1;
				alloca1.field3 = (__zext uint8_t)(*(uint8_t*)(anon14 + anon17) == 46 | *(uint8_t*)(anon14 + anon17) == 63 | *(uint8_t*)(anon14 + anon17) == 33);
				if (*(uint8_t*)(anon14 + anon17) == 63 || *(uint8_t*)(anon14 + anon17) == 59 || *(uint8_t*)(anon14 + anon17) == 58 || *(uint8_t*)(anon14 + anon17) == 46 || *(uint8_t*)(anon14 + anon17) == 33 || *(uint8_t*)(anon14 + anon17) == 44)
				{
					*(uint8_t*)(anon17 + anon15 + arg1 - 64 - 4672) = 0;
				}
				uint64_t phi_in18 = 0;
				uint32_t phi_in19 = 0;
				uint64_t phi_in20 = phi9 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon17) == 63) | anon14 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon17) == 33) | (__zext uint64_t)(*(uint8_t*)(anon14 + anon17) == 46);
				uint64_t phi21 = alloca1.field4;
				do
				{
					phi22 = phi_in8;
					phi23 = phi_in18;
					phi24 = phi_in19;
					phi25 = phi_in20;
					if (phi24 > alloca1.field0)
					{
						uint64_t phi30;
						uint64_t* anon27 = (uint64_t*)phi21;
						uint64_t anon26 = strlen((uint8_t*)*anon27);
						uint8_t* anon29 = (uint8_t*)(*anon27 + anon26 - 1);
						bool anon28 = !(*anon29 == 63 || *anon29 == 46 || *anon29 == 44 || *anon29 == 33);
						if (anon28)
						{
							phi30 = *anon27 & 0xff;
						}
						if (*anon29 == 63 || *anon29 == 46 || *anon29 == 44 || *anon29 == 33 || *anon29 == 63 || *anon29 == 46 || *anon29 == 44 || *anon29 == 33 || *anon29 == 63 || *anon29 == 46 || *anon29 == 44 || *anon29 == 33 || *anon29 == 63 || *anon29 == 46 || *anon29 == 44 || *anon29 == 33 || anon28 && (*anon29 | 1) == 59)
						{
							*anon29 = 0;
							phi30 = *anon27;
						}
						uint32_t anon31 = strcasecmp((uint8_t*)phi30, anon13);
						uint64_t anon32 = phi22 + 1 & 0xffffffff;
						phi_in8 = anon31 == 0 ? anon32 : phi22 & 0xffffffff;
						phi_in18 = anon31 == 0 ? anon32 : phi23;
						phi_in19 = phi24 - 1;
						phi_in20 = (*anon27 | phi25) & 0xffffff00 | (__zext uint64_t)((*anon29 & 0xfd) == 44 | *anon29 == 63 | *anon29 == 33);
						phi21 = phi21 + 8;
					}
				}
				while (phi24 > alloca1.field0);
				uint32_t anon33 = (__zext uint32_t)((uint32_t)phi23 == 0) + alloca1.field1;
				alloca1.field1 = anon33;
				phi7 = phi22;
				phi_in10 = phi25;
				if (*(uint8_t*)(anon14 + anon17) == 63 || *(uint8_t*)(anon14 + anon17) == 46 || *(uint8_t*)(anon14 + anon17) == 33)
				{
					uint32_t anon34 = (uint32_t)phi22;
					if (alloca1.field6 < anon34)
					{
						if (anon33 == 0)
						{
							alloca1.field6 = anon34;
							alloca1.field7 = 0;
							phi7 = 0;
							phi_in10 = phi25;
						}
						else 
						{
							uint64_t phi36;
							uint64_t anon39;
							uint64_t phi_in35 = 0;
							do
							{
								phi36 = phi_in35;
								uint32_t anon38 = anon33 - 1;
								uint64_t anon37 = phi36 + (__sext int64_t)anon38 * 21;
								strcpy((uint8_t*)(anon37 + arg1 - 2400), (uint8_t*)(anon16 + anon37));
								anon39 = (__zext uint64_t)anon38 * -21;
								if (phi36 != anon39)
								{
									phi_in35 = phi36 - 21;
								}
							}
							while (phi36 != anon39);
							alloca1.field6 = anon34;
							alloca1.field1 = 0;
							alloca1.field7 = alloca1.field1;
							phi7 = 0;
							phi_in10 = phi25;
						}
					}
					else 
					{
						alloca1.field1 = 0;
						phi7 = 0;
						phi_in10 = phi25;
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
			uint32_t anon43;
			uint32_t anon40 = toupper((__sext int32_t)alloca1.field10);
			alloca1.field10 = (uint8_t)anon40;
			uint32_t phi_in41 = 0;
			do
			{
				uint32_t phi42 = phi_in41;
				printf((uint8_t*)0x400c47);
				anon43 = phi42 + 1;
				phi_in41 = anon43;
			}
			while (anon43 < alloca1.field7);
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
		uint64_t anon5;
		uint64_t phi_in2 = 4197380;
		do
		{
			uint64_t phi3 = phi_in2;
			uint64_t anon4 = phi3 + 3;
			phi_in2 = anon4;
			anon5 = (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383;
		}
		while (anon4 != anon5);
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

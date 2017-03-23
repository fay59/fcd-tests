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
				uint64_t phi21;
				uint64_t phi22;
				uint32_t phi23;
				uint64_t phi24;
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
				uint64_t phi_in17 = 0;
				uint32_t phi_in18 = 0;
				uint64_t phi_in19 = phi9 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 63) | anon12 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 33) | (__zext uint64_t)(*(uint8_t*)(anon12 + anon15) == 46);
				uint64_t phi20 = alloca1.field4;
				do
				{
					phi21 = phi_in8;
					phi22 = phi_in17;
					phi23 = phi_in18;
					phi24 = phi_in19;
					if (phi23 > alloca1.field0)
					{
						uint64_t phi28;
						uint64_t* anon27 = (uint64_t*)phi20;
						uint8_t* anon26 = (uint8_t*)(*anon27 + strlen((uint8_t*)*anon27) - 1);
						bool anon25 = !(*anon26 == 63 || *anon26 == 46 || *anon26 == 44 || *anon26 == 33);
						if (anon25)
						{
							phi28 = *anon27 & 0xff;
						}
						if (*anon26 == 63 || *anon26 == 46 || *anon26 == 44 || *anon26 == 33 || *anon26 == 63 || *anon26 == 46 || *anon26 == 44 || *anon26 == 33 || *anon26 == 63 || *anon26 == 46 || *anon26 == 44 || *anon26 == 33 || *anon26 == 63 || *anon26 == 46 || *anon26 == 44 || *anon26 == 33 || anon25 && (*anon26 | 1) == 59)
						{
							*anon26 = 0;
							phi28 = *anon27;
						}
						uint64_t anon29 = phi21 + 1 & 0xffffffff;
						phi_in8 = strcasecmp((uint8_t*)phi28, anon16) == 0 ? anon29 : phi21 & 0xffffffff;
						phi_in17 = strcasecmp((uint8_t*)phi28, anon16) == 0 ? anon29 : phi22;
						phi_in18 = phi23 - 1;
						phi_in19 = (*anon27 | phi24) & 0xffffff00 | (__zext uint64_t)((*anon26 & 0xfd) == 44 | *anon26 == 63 | *anon26 == 33);
						phi20 = phi20 + 8;
					}
				}
				while (phi23 > alloca1.field0);
				uint32_t anon30 = (__zext uint32_t)((uint32_t)phi22 == 0) + alloca1.field1;
				alloca1.field1 = anon30;
				phi7 = phi21;
				phi_in10 = phi24;
				if (*(uint8_t*)(anon12 + anon15) == 63 || *(uint8_t*)(anon12 + anon15) == 46 || *(uint8_t*)(anon12 + anon15) == 33)
				{
					uint32_t anon31 = (uint32_t)phi21;
					if (alloca1.field6 < anon31)
					{
						if (anon30 == 0)
						{
							alloca1.field6 = anon31;
							alloca1.field7 = 0;
							phi7 = 0;
							phi_in10 = phi24;
						}
						else 
						{
							uint64_t phi33;
							uint64_t anon36;
							uint64_t phi_in32 = 0;
							do
							{
								phi33 = phi_in32;
								uint32_t anon35 = anon30 - 1;
								uint64_t anon34 = phi33 + (__sext int64_t)anon35 * 21;
								strcpy((uint8_t*)(anon34 + arg1 - 2400), (uint8_t*)(anon14 + anon34));
								anon36 = (__zext uint64_t)anon35 * -21;
								if (phi33 != anon36)
								{
									phi_in32 = phi33 - 21;
								}
							}
							while (phi33 != anon36);
							alloca1.field6 = anon31;
							alloca1.field1 = 0;
							alloca1.field7 = alloca1.field1;
							phi7 = 0;
							phi_in10 = phi24;
						}
					}
					else 
					{
						alloca1.field1 = 0;
						phi7 = 0;
						phi_in10 = phi24;
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
			uint32_t anon39;
			alloca1.field10 = (uint8_t)toupper((__sext int32_t)alloca1.field10);
			uint32_t phi_in37 = 0;
			do
			{
				uint32_t phi38 = phi_in37;
				printf((uint8_t*)0x400c47);
				anon39 = phi38 + 1;
				phi_in37 = anon39;
			}
			while (anon39 < alloca1.field7);
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

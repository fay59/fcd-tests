#include "tests/bin/1993-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
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
		uint32_t anon8;
		struct _IO_FILE* anon3 = fopen(*(uint8_t**)(arg3 + 8), (uint8_t*)0x400c1f);
		alloca1.field8 = 0;
		alloca1.field6 = anon3;
		alloca1.field7 = 0;
		alloca1.field2 = 0;
		alloca1.field1 = 0 - anon2;
		uint64_t phi4 = 0;
		do
		{
			uint64_t phi_in7;
			uint64_t phi_in5 = phi4;
			uint64_t phi6 = phi_in7;
			anon8 = fscanf(alloca1.field6, (uint8_t*)0x400c48);
			if (anon8 != 255)
			{
				uint64_t phi21;
				uint64_t phi22;
				uint32_t phi23;
				uint64_t phi24;
				int64_t anon12 = (__sext int64_t)alloca1.field2 * 21;
				uint64_t anon13 = arg1 - 4736;
				int64_t anon11 = anon12 + anon13;
				uint8_t* anon10 = (uint8_t*)anon11;
				uint64_t anon9 = strlen(anon10);
				uint64_t anon15 = anon9 - 1;
				uint8_t anon14 = (__zext uint8_t)(*(uint8_t*)(anon11 + anon15) == 46) | (__zext uint8_t)(*(uint8_t*)(anon11 + anon15) == 63) | (__zext uint8_t)(*(uint8_t*)(anon11 + anon15) == 33);
				alloca1.field4 = anon14;
				uint64_t anon16 = phi6 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon11 + anon15) == 63) | anon11 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon11 + anon15) == 33) | (__zext uint64_t)(*(uint8_t*)(anon11 + anon15) == 46);
				if ((anon16 & 1 | (__zext uint64_t)((*(uint8_t*)(anon11 + anon15) | 1) == 59)) != 0 | *(uint8_t*)(anon11 + anon15) == 44)
				{
					*(uint8_t*)(anon15 + anon12 + arg1 - 64 - 4672) = 0;
				}
				uint64_t phi_in17 = 0;
				uint32_t phi_in18 = 0;
				uint64_t phi_in19 = anon16;
				uint64_t phi20 = alloca1.field5;
				do
				{
					phi21 = phi_in5;
					phi22 = phi_in17;
					phi23 = phi_in18;
					phi24 = phi_in19;
					if (phi23 > alloca1.field1)
					{
						uint64_t phi29;
						uint64_t* anon26 = (uint64_t*)phi20;
						uint64_t anon25 = strlen((uint8_t*)*anon26);
						uint8_t* anon28 = (uint8_t*)(*anon26 + anon25 - 1);
						uint8_t anon27 = (__zext uint8_t)((*anon28 & 0xfd) == 44) | (__zext uint8_t)(*anon28 == 63) | (__zext uint8_t)(*anon28 == 33);
						if (anon27 == 0)
						{
							phi29 = *anon26 & 0xff;
						}
						if (anon27 != 0 || anon27 == 0 && (*anon28 | 1) == 59)
						{
							*anon28 = 0;
							phi29 = *anon26;
						}
						uint32_t anon30 = strcasecmp((uint8_t*)phi29, anon10);
						uint64_t anon31 = phi21 + 1 & 0xffffffff;
						phi_in5 = anon30 == 0 ? anon31 : phi21;
						phi_in17 = anon30 == 0 ? anon31 : phi22;
						phi_in18 = phi23 - 1;
						phi_in19 = (*anon26 | phi24) & 0xffffff00 | (__zext uint64_t)anon27;
						phi20 = phi20 + 8;
					}
				}
				while (phi23 > alloca1.field1);
				uint32_t anon32 = (__zext uint32_t)((uint32_t)phi22 == 0) + alloca1.field2;
				alloca1.field2 = anon32;
				phi4 = phi21;
				phi_in7 = phi24;
				if (anon14 != 0)
				{
					uint32_t anon33 = (uint32_t)phi21;
					if (alloca1.field7 < anon33)
					{
						if (anon32 == 0)
						{
							alloca1.field7 = anon33;
							alloca1.field8 = 0;
							phi4 = 0;
							phi_in7 = phi24;
						}
						else 
						{
							uint64_t phi35;
							uint64_t anon38;
							uint64_t phi_in34 = 0;
							do
							{
								phi35 = phi_in34;
								uint32_t anon37 = anon32 - 1;
								uint64_t anon36 = phi35 + (__sext int64_t)anon37 * 21;
								strcpy((uint8_t*)(anon36 + arg1 - 2400), (uint8_t*)(anon13 + anon36));
								anon38 = (__zext uint64_t)anon37 * -21;
								if (phi35 != anon38)
								{
									phi_in34 = phi35 - 21;
								}
							}
							while (phi35 != anon38);
							alloca1.field7 = anon33;
							alloca1.field2 = 0;
							alloca1.field8 = alloca1.field2;
							phi4 = 0;
							phi_in7 = phi24;
						}
					}
					else 
					{
						alloca1.field2 = 0;
						phi4 = 0;
						phi_in7 = phi24;
					}
				}
			}
		}
		while (anon8 != 255);
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
			uint32_t anon42;
			uint32_t anon39 = toupper((__sext int32_t)alloca1.field11);
			alloca1.field11 = (uint8_t)anon39;
			uint32_t phi_in40 = 0;
			do
			{
				uint32_t phi41 = phi_in40;
				printf((uint8_t*)0x400c47);
				anon42 = phi41 + 1;
				phi_in40 = anon42;
			}
			while (anon42 < alloca1.field8);
			puts((uint8_t*)0x400c2a);
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

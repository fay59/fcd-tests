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
			uint64_t phi6;
			uint64_t phi_in7;
			uint64_t phi24;
			uint32_t anon25;
			uint32_t anon26;
			uint64_t phi27;
			if (dispatch5 == 0)
			{
				phi6 = phi_in7;
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
				uint32_t anon8 = toupper((__sext int32_t)alloca1.field11);
				alloca1.field11 = (uint8_t)anon8;
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
			uint64_t anon19 = phi6 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 63) | anon14 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 33) | (__zext uint64_t)(*(uint8_t*)(anon14 + anon18) == 46);
			if ((anon19 & 1 | (__zext uint64_t)((*(uint8_t*)(anon14 + anon18) | 1) == 59)) != 0 | *(uint8_t*)(anon14 + anon18) == 44)
			{
				*(uint8_t*)(anon18 + anon15 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi20 = 0;
			uint32_t phi21 = 0;
			uint64_t phi22 = anon19;
			uint64_t phi23 = alloca1.field5;
			if (dispatch5 == 1)
			{
				phi24 = phi_in4;
				if (phi21 <= alloca1.field1)
				{
					anon25 = (__zext uint32_t)((uint32_t)phi20 == 0) + alloca1.field2;
					alloca1.field2 = anon25;
					phi_in4 = phi24;
					phi_in7 = phi22;
					dispatch5 = 0;
					if (anon17 != 0)
					{
						anon26 = (uint32_t)phi24;
						if (alloca1.field7 < anon26)
						{
							if (anon25 == 0)
							{
								alloca1.field7 = anon26;
								alloca1.field8 = 0;
								phi_in4 = 0;
								phi_in7 = phi22;
								dispatch5 = 0;
							}
							else 
							{
								phi27 = 0;
							}
						}
						else 
						{
							alloca1.field2 = 0;
							phi_in4 = 0;
							phi_in7 = phi22;
							dispatch5 = 0;
						}
					}
				}
			}
			if (dispatch5 == 2 || anon25 != 0 && dispatch5 == 1 && phi21 <= alloca1.field1 && anon17 != 0 && alloca1.field7 < anon26)
			{
				uint32_t anon29 = anon25 - 1;
				uint64_t anon28 = phi27 + (__sext int64_t)anon29 * 21;
				strcpy((uint8_t*)(anon28 + arg1 - 2400), (uint8_t*)(anon16 + anon28));
				if (phi27 == (__zext uint64_t)anon29 * -21)
				{
					alloca1.field7 = anon26;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi_in4 = 0;
					phi_in7 = phi22;
					dispatch5 = 0;
				}
				else 
				{
					phi27 = phi27 - 21;
					dispatch5 = 2;
				}
			}
			if (dispatch5 == 1 && phi21 > alloca1.field1)
			{
				uint64_t phi34;
				uint64_t* anon31 = (uint64_t*)phi23;
				uint64_t anon30 = strlen((uint8_t*)*anon31);
				uint8_t* anon33 = (uint8_t*)(*anon31 + anon30 - 1);
				uint8_t anon32 = (__zext uint8_t)((*anon33 & 0xfd) == 44) | (__zext uint8_t)(*anon33 == 63) | (__zext uint8_t)(*anon33 == 33);
				if (anon32 == 0)
				{
					phi34 = *anon31 & 0xff;
				}
				if (anon32 != 0 || anon32 == 0 && (*anon33 | 1) == 59)
				{
					*anon33 = 0;
					phi34 = *anon31;
				}
				uint32_t anon35 = strcasecmp((uint8_t*)phi34, anon13);
				uint64_t anon36 = phi24 + 1 & 0xffffffff;
				phi_in4 = anon35 == 0 ? anon36 : phi24;
				phi20 = anon35 == 0 ? anon36 : phi20;
				phi21 = phi21 - 1;
				phi22 = (*anon31 | phi22) & 0xffffff00 | (__zext uint64_t)anon32;
				phi23 = phi23 + 8;
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

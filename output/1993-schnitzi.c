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
		uint64_t phi4 = 0;
		uint32_t dispatch5 = 0;
		while (true)
		{
			uint64_t phi_in6;
			uint64_t phi7;
			uint64_t phi_in8;
			uint64_t phi25;
			uint32_t anon26;
			uint32_t anon27;
			uint64_t phi28;
			if (dispatch5 == 0)
			{
				phi_in6 = phi4;
				phi7 = phi_in8;
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
				uint32_t anon12;
				uint32_t anon9 = toupper((__sext int32_t)alloca1.field11);
				alloca1.field11 = (uint8_t)anon9;
				uint32_t phi_in10 = 0;
				do
				{
					uint32_t phi11 = phi_in10;
					printf((uint8_t*)0x400c47);
					anon12 = phi11 + 1;
					phi_in10 = anon12;
				}
				while (anon12 < alloca1.field8);
				puts((uint8_t*)0x400c2a);
			}
			break;
			int64_t anon16 = (__sext int64_t)alloca1.field2 * 21;
			uint64_t anon17 = arg1 - 4736;
			int64_t anon15 = anon16 + anon17;
			uint8_t* anon14 = (uint8_t*)anon15;
			uint64_t anon13 = strlen(anon14);
			uint64_t anon19 = anon13 - 1;
			uint8_t anon18 = (__zext uint8_t)(*(uint8_t*)(anon15 + anon19) == 46) | (__zext uint8_t)(*(uint8_t*)(anon15 + anon19) == 63) | (__zext uint8_t)(*(uint8_t*)(anon15 + anon19) == 33);
			alloca1.field4 = anon18;
			uint64_t anon20 = phi7 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon15 + anon19) == 63) | anon15 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon15 + anon19) == 33) | (__zext uint64_t)(*(uint8_t*)(anon15 + anon19) == 46);
			if ((anon20 & 1 | (__zext uint64_t)((*(uint8_t*)(anon15 + anon19) | 1) == 59)) != 0 | *(uint8_t*)(anon15 + anon19) == 44)
			{
				*(uint8_t*)(anon19 + anon16 + arg1 - 64 - 4672) = 0;
			}
			uint64_t phi21 = 0;
			uint32_t phi22 = 0;
			uint64_t phi23 = anon20;
			uint64_t phi24 = alloca1.field5;
			if (dispatch5 == 1)
			{
				phi25 = phi_in6;
				if (phi22 <= alloca1.field1)
				{
					anon26 = (__zext uint32_t)((uint32_t)phi21 == 0) + alloca1.field2;
					alloca1.field2 = anon26;
					phi4 = phi25;
					phi_in8 = phi23;
					dispatch5 = 0;
					if (anon18 != 0)
					{
						anon27 = (uint32_t)phi25;
						if (alloca1.field7 < anon27)
						{
							if (anon26 == 0)
							{
								alloca1.field7 = anon27;
								alloca1.field8 = 0;
								phi4 = 0;
								phi_in8 = phi23;
								dispatch5 = 0;
							}
							else 
							{
								phi28 = 0;
							}
						}
						else 
						{
							alloca1.field2 = 0;
							phi4 = 0;
							phi_in8 = phi23;
							dispatch5 = 0;
						}
					}
				}
			}
			if (dispatch5 == 2 || anon26 != 0 && dispatch5 == 1 && phi22 <= alloca1.field1 && anon18 != 0 && alloca1.field7 < anon27)
			{
				uint32_t anon30 = anon26 - 1;
				uint64_t anon29 = phi28 + (__sext int64_t)anon30 * 21;
				strcpy((uint8_t*)(anon29 + arg1 - 2400), (uint8_t*)(anon17 + anon29));
				if (phi28 == (__zext uint64_t)anon30 * -21)
				{
					alloca1.field7 = anon27;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi4 = 0;
					phi_in8 = phi23;
					dispatch5 = 0;
				}
				else 
				{
					phi28 = phi28 - 21;
					dispatch5 = 2;
				}
			}
			if (dispatch5 == 1 && phi22 > alloca1.field1)
			{
				uint64_t phi35;
				uint64_t* anon32 = (uint64_t*)phi24;
				uint64_t anon31 = strlen((uint8_t*)*anon32);
				uint8_t* anon34 = (uint8_t*)(*anon32 + anon31 - 1);
				uint8_t anon33 = (__zext uint8_t)((*anon34 & 0xfd) == 44) | (__zext uint8_t)(*anon34 == 63) | (__zext uint8_t)(*anon34 == 33);
				if (anon33 == 0)
				{
					phi35 = *anon32 & 0xff;
				}
				if (anon33 != 0 || anon33 == 0 && (*anon34 | 1) == 59)
				{
					*anon34 = 0;
					phi35 = *anon32;
				}
				uint32_t anon36 = strcasecmp((uint8_t*)phi35, anon14);
				uint64_t anon37 = phi25 + 1 & 0xffffffff;
				phi_in6 = anon36 == 0 ? anon37 : phi25;
				phi21 = anon36 == 0 ? anon37 : phi21;
				phi22 = phi22 - 1;
				phi23 = (*anon32 | phi23) & 0xffffff00 | (__zext uint64_t)anon33;
				phi24 = phi24 + 8;
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

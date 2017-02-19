#include "tests/bin/1993-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195829);
	}
	return;
}
void toupper(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601218);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601250);
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
			uint32_t anon29;
			uint64_t phi27;
			uint64_t phi26;
			uint32_t phi25;
			uint64_t phi24;
			uint64_t phi_in18;
			uint64_t phi_in22;
			uint64_t phi_in21;
			uint32_t phi_in20;
			uint8_t anon15;
			uint64_t phi_in19;
			uint64_t anon14;
			uint8_t* anon11;
			uint64_t phi_in30;
			uint32_t anon9;
			uint64_t phi_in8;
			uint64_t phi23;
			uint32_t anon28;
			if (dispatch5 == 0)
			{
				uint64_t phi6 = phi_in4;
				uint64_t phi7 = phi_in8;
				anon9 = fscanf(alloca1.field6, (uint8_t*)0x400c48);
				if (anon9 == 255)
				{
					break;
				}
				else 
				{
					int64_t anon13 = (__sext int64_t)alloca1.field2 * 21;
					anon14 = arg1 - 4736;
					int64_t anon12 = anon13 + anon14;
					anon11 = (uint8_t*)anon12;
					uint64_t anon10 = strlen(anon11);
					uint64_t anon16 = anon10 - 1;
					anon15 = (__zext uint8_t)(*(uint8_t*)(anon12 + anon16) == 46) | (__zext uint8_t)(*(uint8_t*)(anon12 + anon16) == 63) | (__zext uint8_t)(*(uint8_t*)(anon12 + anon16) == 33);
					alloca1.field4 = anon15;
					uint64_t anon17 = phi7 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon16) == 63) | anon12 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon12 + anon16) == 33) | (__zext uint64_t)(*(uint8_t*)(anon12 + anon16) == 46);
					if ((anon17 & 1 | (__zext uint64_t)((*(uint8_t*)(anon12 + anon16) | 1) == 59)) != 0 | *(uint8_t*)(anon12 + anon16) == 44)
					{
						*(uint8_t*)(anon16 + anon13 + arg1 - 64 - 4672) = 0;
					}
					phi_in18 = phi6;
					phi_in19 = 0;
					phi_in20 = 0;
					phi_in21 = anon17;
					phi_in22 = alloca1.field5;
				}
			}
			if (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1)
			{
				phi23 = phi_in18;
				phi24 = phi_in19;
				phi25 = phi_in20;
				phi26 = phi_in21;
				phi27 = phi_in22;
			}
			if (phi25 <= alloca1.field1)
			{
				if (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1)
				{
					anon28 = (__zext uint32_t)((uint32_t)phi24 == 0) + alloca1.field2;
					alloca1.field2 = anon28;
					phi_in4 = phi23;
					phi_in8 = phi26;
					dispatch5 = 0;
				}
				if (anon15 != 0)
				{
					anon29 = (uint32_t)phi23;
					if (alloca1.field7 < anon29)
					{
						if (anon28 == 0)
						{
							if (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1)
							{
								alloca1.field7 = anon29;
								alloca1.field8 = 0;
								phi_in4 = 0;
								phi_in8 = phi26;
								dispatch5 = 0;
							}
						}
						else if (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1)
						{
							phi_in30 = 0;
						}
					}
					else if (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1)
					{
						alloca1.field2 = 0;
						phi_in4 = 0;
						phi_in8 = phi26;
						dispatch5 = 0;
					}
				}
			}
			if (dispatch5 == 2 || anon9 != 255 && anon28 != 0 && dispatch5 == 0 && phi25 <= alloca1.field1 && anon15 != 0 && alloca1.field7 < anon29 || anon28 != 0 && dispatch5 == 1 && phi25 <= alloca1.field1 && anon15 != 0 && alloca1.field7 < anon29)
			{
				uint64_t phi31 = phi_in30;
				uint32_t anon33 = anon28 - 1;
				uint64_t anon32 = phi31 + (__sext int64_t)anon33 * 21;
				strcpy((uint8_t*)(anon32 + arg1 - 2400), (uint8_t*)(anon14 + anon32));
				if (phi31 == (__zext uint64_t)anon33 * -21)
				{
					alloca1.field7 = anon29;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi_in4 = 0;
					phi_in8 = phi26;
					dispatch5 = 0;
				}
				else 
				{
					phi_in30 = phi31 - 21;
					dispatch5 = 2;
				}
			}
			if (phi25 > alloca1.field1 && (anon9 != 255 && dispatch5 == 0 || dispatch5 == 1))
			{
				uint64_t* anon35 = (uint64_t*)phi27;
				uint64_t anon34 = strlen((uint8_t*)*anon35);
				uint64_t phi_in36 = *anon35;
				uint8_t* anon38 = (uint8_t*)(*anon35 + anon34 - 1);
				uint8_t anon37 = (__zext uint8_t)((*anon38 & 0xfd) == 44) | (__zext uint8_t)(*anon38 == 63) | (__zext uint8_t)(*anon38 == 33);
				if (anon37 != 0 | (*anon38 | 1) == 59)
				{
					*anon38 = 0;
					phi_in36 = *anon35;
				}
				uint64_t phi39 = phi_in36;
				uint32_t anon40 = strcasecmp((uint8_t*)phi39, anon11);
				uint64_t anon41 = phi23 + 1 & 0xffffffff;
				phi_in18 = anon40 == 0 ? anon41 : phi23;
				phi_in19 = anon40 == 0 ? anon41 : phi24;
				phi_in20 = phi25 - 1;
				phi_in21 = (*anon35 | phi26) & 0xffffff00 | (__zext uint64_t)anon37;
				phi_in22 = phi27 + 8;
				dispatch5 = 1;
			}
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
			uint32_t anon44;
			toupper(4196654);
			alloca1.field11 = (uint8_t)alloca1.field7;
			uint32_t phi_in42 = 0;
			do
			{
				uint32_t phi43 = phi_in42;
				printf((uint8_t*)0x400c47);
				anon44 = phi43 + 1;
				phi_in42 = anon44;
			}
			while (anon44 < alloca1.field8);
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

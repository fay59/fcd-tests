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
		uint32_t dispatch4 = 0;
		while (true)
		{
			uint64_t anon19;
			bool anon39;
			uint8_t* anon15;
			uint64_t phi12;
			uint64_t anon18;
			uint64_t phi_in41;
			uint64_t phi29;
			uint32_t anon40;
			uint32_t phi10;
			uint32_t phi27;
			uint64_t phi26;
			uint64_t phi25;
			uint64_t phi_in23;
			uint32_t anon38;
			uint64_t phi_in8;
			int64_t anon16;
			uint64_t phi_in20;
			uint64_t phi_in21;
			uint32_t anon13;
			uint32_t phi_in22;
			uint64_t phi11;
			uint64_t phi_in9;
			uint64_t phi_in24;
			uint64_t phi_in6;
			uint64_t phi28;
			uint32_t phi_in7;
			if (dispatch4 == 0)
			{
				uint64_t phi5 = phi_in6;
				phi_in7 = alloca1.field2;
				phi_in8 = 0;
				phi_in9 = phi5;
			}
			if (dispatch4 == 2 || dispatch4 == 0)
			{
				phi10 = phi_in7;
				phi11 = phi_in8;
				phi12 = phi_in9;
				anon13 = fscanf(alloca1.field6, (uint8_t*)0x400c48);
				if (anon13 == 255)
				{
					break;
				}
			}
			if (anon13 != 255 && (dispatch4 == 2 || dispatch4 == 0))
			{
				int64_t anon17 = (__sext int64_t)phi10 * 21;
				anon18 = arg1 - 4736;
				anon16 = anon17 + anon18;
				anon15 = (uint8_t*)anon16;
				uint64_t anon14 = strlen(anon15);
				anon19 = anon14 - 1;
				alloca1.field4 = (__zext uint8_t)(*(uint8_t*)(anon16 + anon19) == 46 | *(uint8_t*)(anon16 + anon19) == 63 | *(uint8_t*)(anon16 + anon19) == 33);
				if (*(uint8_t*)(anon16 + anon19) == 63 || *(uint8_t*)(anon16 + anon19) == 59 || *(uint8_t*)(anon16 + anon19) == 58 || *(uint8_t*)(anon16 + anon19) == 46 || *(uint8_t*)(anon16 + anon19) == 33 || *(uint8_t*)(anon16 + anon19) == 44)
				{
					*(uint8_t*)(anon19 + anon17 + arg1 - 64 - 4672) = 0;
				}
				phi_in20 = phi11;
				phi_in21 = 0;
				phi_in22 = 0;
				phi_in23 = phi12 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon16 + anon19) == 63) | anon16 & 0xffffff00 | (__zext uint64_t)(*(uint8_t*)(anon16 + anon19) == 33) | (__zext uint64_t)(*(uint8_t*)(anon16 + anon19) == 46);
				phi_in24 = alloca1.field5;
			}
			if (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3)
			{
				phi25 = phi_in20;
				phi26 = phi_in21;
				phi27 = phi_in22;
				phi28 = phi_in23;
				phi29 = phi_in24;
			}
			if (phi27 > alloca1.field1)
			{
				if (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3)
				{
					uint64_t phi_in34;
					uint64_t* anon31 = (uint64_t*)phi29;
					uint64_t anon30 = strlen((uint8_t*)*anon31);
					uint8_t* anon33 = (uint8_t*)(*anon31 + anon30 - 1);
					bool anon32 = !(*anon33 == 63 || *anon33 == 46 || *anon33 == 44 || *anon33 == 33);
					if (anon32)
					{
						phi_in34 = *anon31 & 0xff;
					}
					if (*anon33 == 46 || *anon33 == 46 || *anon33 == 44 || *anon33 == 44 || *anon33 == 33 || *anon33 == 33 || *anon33 == 63 || *anon33 == 63 || *anon33 == 46 || *anon33 == 46 || *anon33 == 44 || *anon33 == 44 || *anon33 == 33 || *anon33 == 33 || *anon33 == 63 || *anon33 == 63 || anon32 && (*anon33 | 1) == 59)
					{
						*anon33 = 0;
						phi_in34 = *anon31;
					}
					uint64_t phi35 = phi_in34;
					uint32_t anon36 = strcasecmp((uint8_t*)phi35, anon15);
					uint64_t anon37 = phi25 + 1;
					phi_in20 = (anon36 == 0 ? anon37 : phi25) & 0xffffffff;
					phi_in21 = anon36 == 0 ? anon37 & 0xffffffff : phi26;
					phi_in22 = phi27 - 1;
					phi_in23 = (*anon31 | phi28) & 0xffffff00 | (__zext uint64_t)((*anon33 & 0xfd) == 44 | *anon33 == 63 | *anon33 == 33);
					phi_in24 = phi29 + 8;
					dispatch4 = 3;
				}
			}
			else 
			{
				if (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3)
				{
					anon38 = (__zext uint32_t)((uint32_t)phi26 == 0) + alloca1.field2;
					alloca1.field2 = anon38;
					phi_in7 = anon38;
					phi_in8 = phi25;
					phi_in9 = phi28;
					dispatch4 = 2;
				}
				anon39 = *(uint8_t*)(anon16 + anon19) == 63 || *(uint8_t*)(anon16 + anon19) == 46 || *(uint8_t*)(anon16 + anon19) == 33;
				anon40 = (uint32_t)phi25;
				if (anon38 != 0 && anon39 && alloca1.field7 < anon40 && (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0))
				{
					phi_in41 = 0;
				}
			}
			bool anon42 = *(uint8_t*)(anon16 + anon19) == 63 || *(uint8_t*)(anon16 + anon19) == 46 || *(uint8_t*)(anon16 + anon19) == 33;
			bool anon43 = *(uint8_t*)(anon16 + anon19) == 63 || *(uint8_t*)(anon16 + anon19) == 46 || *(uint8_t*)(anon16 + anon19) == 33;
			if (dispatch4 == 1 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 2 && anon42 && alloca1.field7 < anon40 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 0 && anon42 && alloca1.field7 < anon40 || phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 3 && anon42 && alloca1.field7 < anon40 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 2 && anon43 && alloca1.field7 < anon40 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 0 && anon43 && alloca1.field7 < anon40 || phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 3 && anon43 && alloca1.field7 < anon40 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 2 && anon39 && alloca1.field7 < anon40 || anon13 != 255 && phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 0 && anon39 && alloca1.field7 < anon40 || phi27 <= alloca1.field1 && anon38 != 0 && dispatch4 == 3 && anon39 && alloca1.field7 < anon40)
			{
				uint64_t phi44 = phi_in41;
				uint32_t anon46 = anon38 - 1;
				uint64_t anon45 = phi44 + (__sext int64_t)anon46 * 21;
				strcpy((uint8_t*)(anon45 + arg1 - 2400), (uint8_t*)(anon18 + anon45));
				if (phi44 == (__zext uint64_t)anon46 * -21)
				{
					alloca1.field7 = anon40;
					alloca1.field2 = 0;
					alloca1.field8 = alloca1.field2;
					phi_in6 = phi28 & 0xff;
					dispatch4 = 0;
				}
				else 
				{
					phi_in41 = phi44 - 21;
					dispatch4 = 1;
				}
			}
			if (phi27 <= alloca1.field1 && anon39)
			{
				if (alloca1.field7 < anon40)
				{
					if (anon38 == 0 && (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0))
					{
						alloca1.field7 = anon40;
						alloca1.field8 = 0;
						phi_in6 = phi28;
						dispatch4 = 0;
					}
				}
				else if (anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || dispatch4 == 3 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0 || anon13 != 255 && dispatch4 == 2 || anon13 != 255 && dispatch4 == 0)
				{
					alloca1.field2 = 0;
					phi_in6 = phi28;
					dispatch4 = 0;
				}
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
			uint32_t anon49;
			toupper(4196654);
			alloca1.field11 = (uint8_t)alloca1.field7;
			uint32_t phi_in47 = 0;
			do
			{
				uint32_t phi48 = phi_in47;
				printf((uint8_t*)0x400c47);
				anon49 = phi48 + 1;
				phi_in47 = anon49;
			}
			while (anon49 < alloca1.field8);
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
	if ((uint32_t)arg2 >= 1)
	{
		uint64_t anon3;
		uint64_t phi_in1 = 4197380;
		do
		{
			uint64_t phi2 = phi_in1;
			anon3 = phi2 + 3;
			phi_in1 = anon3;
		}
		while (anon3 != (arg2 + 4294967295 & 0xffffffff) + ((arg2 << 1) + 8589934590 & 0x1fffffffe) + 4197383);
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

#include "tests/bin/1995-heathbar.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600a80 != 0)
	{
		__gmon_start__(4195317);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600ab0);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	if ((uint32_t)arg1 == 3)
	{
		uint32_t* anon1 = (uint32_t*)0x600ad4;
		*anon1 = *anon1 + 1;
		uint32_t anon2 = atoi(*(uint8_t**)(arg2 + 8));
		*anon1 = anon2;
		uint32_t anon3 = atoi(*(uint8_t**)(arg2 + 16));
		*(uint32_t*)0x600ae0 = anon3;
		uint64_t anon4 = mAIn(4195464, 0, 0);
		uint64_t anon6 = anon4 & 0xffffffff;
		uint64_t anon5 = mAIn(4195471, anon6, anon6);
		uint64_t anon8 = anon5 & 0xffffffff;
		uint64_t anon7 = mAIn(4195478, anon8, anon8);
		uint64_t anon10 = anon7 & 0xffffffff;
		uint64_t anon9 = mAIn(4195485, anon10, anon10);
		uint64_t anon12 = anon9 & 0xffffffff;
		uint64_t anon11 = mAIn(4195492, anon12, anon12);
		uint64_t anon14 = anon11 & 0xffffffff;
		uint64_t anon13 = mAIn(4195499, anon14, anon14);
		uint64_t anon16 = anon13 & 0xffffffff;
		uint64_t anon15 = mAIn(4195506, anon16, anon16);
		uint64_t anon18 = anon15 & 0xffffffff;
		uint64_t anon17 = mAIn(4195513, anon18, anon18);
		uint64_t anon20 = anon17 & 0xffffffff;
		uint64_t anon19 = mAIn(4195520, anon20, anon20);
		uint64_t anon22 = anon19 & 0xffffffff;
		uint64_t anon21 = mAIn(4195527, anon22, anon22);
		uint64_t anon24 = anon21 & 0xffffffff;
		uint64_t anon23 = mAIn(4195534, anon24, anon24);
		uint64_t anon26 = anon23 & 0xffffffff;
		uint64_t anon25 = mAIn(4195541, anon26, anon26);
		uint64_t anon28 = anon25 & 0xffffffff;
		uint64_t anon27 = mAIn(4195548, anon28, anon28);
		uint64_t anon30 = anon27 & 0xffffffff;
		uint64_t anon29 = mAIn(4195555, anon30, anon30);
		uint64_t anon32 = anon29 & 0xffffffff;
		uint64_t anon31 = mAIn(4195562, anon32, anon32);
		uint64_t anon33 = anon31 & 0xffffffff;
		mAIn(4195569, anon33, anon33);
		printf((uint8_t*)0x400744);
		return;
	}
	else 
	{
		return;
	}
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400450, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4006c0, (void(*)())0x400730, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600ad8;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195794);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t mAIn(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t anon20;
	uint32_t anon19;
	uint32_t anon18;
	uint64_t phi_in14;
	uint32_t* anon13;
	uint32_t anon9;
	uint64_t anon6;
	uint32_t anon10;
	uint32_t* anon1 = (uint32_t*)0x600ad0;
	uint64_t anon3 = (__zext uint64_t)*anon1 + 1;
	uint32_t anon2 = (uint32_t)anon3;
	*anon1 = anon2;
	uint64_t anon4 = 1 << (anon3 & 0xffffffff) & (__zext uint64_t)*(uint32_t*)0x600ad4;
	if (anon4 == 0)
	{
		uint32_t phi_in5 = anon2;
		anon6 = anon3 & 0x1f;
		if (anon6 != 0)
		{
			phi_in5 = (__zext uint32_t)((anon3 << 32 >> 32 & 1 << anon6) != 0);
		}
		uint32_t phi7 = phi_in5;
		uint32_t phi_in8 = 0;
		anon9 = phi7 & 1;
		anon10 = (uint32_t)arg2;
		if ((anon9 | anon10) != 0)
		{
			uint32_t anon11 = (__zext uint32_t)(anon10 == 0) | anon9 ^ 1;
			phi_in8 = anon11;
			if (anon6 != 0)
			{
				phi_in8 = (uint32_t)((__zext uint64_t)anon11 << anon6);
			}
		}
		uint32_t phi12 = phi_in8;
		anon13 = (uint32_t*)0x600adc;
		*anon13 = phi12 | anon2;
		phi_in14 = 0;
	}
	else 
	{
		uint32_t phi_in15 = anon2;
		uint5_t anon16 = (uint5_t)*anon1;
		if (anon16 != 31)
		{
			phi_in15 = (__zext uint32_t)((anon3 << 32 >> 32 & 1 << anon6) != 0);
		}
		uint32_t phi17 = phi_in15;
		anon19 = phi17 & 1;
		anon18 = anon10 | anon19;
		if (anon18 == 0)
		{
			*anon13 = (anon16 == 31 ? 1 : (uint32_t)(1 << anon6)) | anon2;
			return 0;
		}
		else 
		{
			anon20 = phi17 & ((__zext uint32_t)(anon10 == 0) ^ 1);
			*anon13 = (anon16 == 31 ? anon20 : (uint32_t)((__zext uint64_t)anon20 << anon6)) | anon2;
			phi_in14 = 0;
		}
	}
	bool anon21 = anon9 == 0 | anon10 == 0;
	bool anon22 = anon20 != 0 | anon19 == 0 | anon10 == 0;
	if (!anon21 && anon4 == 0 || anon4 != 0 && anon18 != 0 && anon22)
	{
		phi_in14 = 1;
	}
	if (anon4 == 0 && anon21 || !anon21 && anon4 == 0 || anon4 != 0 && anon18 != 0 && anon22 || anon4 != 0 && anon18 != 0 && !anon22)
	{
		uint64_t phi23 = phi_in14;
		return phi23;
	}
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196083);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600898)(arg1 & 0xffffffff, arg2, arg3);
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
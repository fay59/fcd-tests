#include "tests/bin/1995-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bf8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct { uint8_t field0; uint8_t field1[23]; uint64_t field2; uint8_t field3[40]; uint64_t field4; } alloca1;
	uint64_t phi59;
	alloca1.field4 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		uint32_t phi3;
		uint32_t anon4;
		uint32_t anon5;
		uint64_t alloca6;
		uint8_t anon9;
		uint64_t anon10;
		uint64_t anon11;
		uint8_t anon54;
		do
		{
			phi3 = anon2;
			anon5 = anon2 << 24 >> 24;
			anon4 = (uint32_t)((((__zext uint64_t)anon5 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon5)) >> 31 ^ 1;
			if (anon4 == -((anon5 - 97) * (123 - anon5) >> 31 ^ 1))
			{
				alloca6 = 91;
				uint32_t phi7 = anon5;
				putchar(phi7);
				uint32_t anon8 = getchar();
				anon9 = (uint8_t)anon8;
				if (anon9 == 255)
				{
					break;
				}
				else 
				{
					anon11 = (__zext uint64_t)anon8 << 56;
					anon10 = anon11 >> 56;
					phi7 = (uint32_t)anon10;
					phi3 = anon8;
				}
			}
		}
		while (!(anon4 != -((anon5 - 97) * (123 - anon5) >> 31 ^ 1) || anon9 != 255 && ((uint32_t)((91 - anon10) * ((anon11 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1) && anon4 == -((anon5 - 97) * (123 - anon5) >> 31 ^ 1)));
		uint64_t alloca12 = (__zext uint64_t)(phi3 << 16 >> 24);
		uint64_t* phi13 = &alloca6;
		*phi13 = 91;
		do
		{
			uint64_t anon23;
			uint64_t phi28;
			uint64_t phi39;
			uint64_t phi40;
			uint64_t phi14 = alloca12;
			uint64_t phi15 = (__zext uint64_t)phi3;
			uint64_t phi16 = phi15;
			uint32_t anon19 = (uint32_t)phi14;
			uint32_t anon18 = anon19 - 65;
			uint32_t anon20 = *(uint32_t*)&alloca6 - anon19;
			uint32_t anon17 = ((uint32_t)(((phi14 << 32) - 416611827712 >> 32) * (123 - phi14 << 32 >> 32)) >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon20 >> 31) & 1 ^ 1);
			alloca12 = (__zext uint64_t)anon17;
			uint64_t phi21 = phi16;
			if (anon17 != 0)
			{
				uint64_t phi22;
				uint64_t phi27;
				anon23 = (uint64_t)&alloca1;
				phi22 = anon23;
				uint64_t phi24 = phi14 + 4294967199 & 0xffffffff;
				uint32_t phi25 = anon18 * anon20;
				uint32_t phi26 = anon18;
				while (true)
				{
					uint8_t phi29;
					phi27 = phi16;
					if (phi25 > 4294967295)
					{
						phi28 = phi22;
						if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) == 45)
						{
							break;
						}
						else 
						{
							phi29 = (uint8_t)((uint32_t)phi27 + 32 >> 8);
						}
					}
					else 
					{
						phi28 = phi22;
						if (*(uint8_t*)((phi24 << 32 >> 32) + 4196500) == 45)
						{
							break;
						}
						else 
						{
							phi29 = (uint8_t)(phi27 >> 8);
						}
					}
					if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) != 45 && phi25 > 4294967295 || phi25 <= 4294967295 && *(uint8_t*)((phi24 << 32 >> 32) + 4196500) != 45)
					{
						*(uint8_t*)phi22 = phi29;
						uint32_t anon30 = getchar();
						uint64_t anon36 = (__zext uint64_t)anon30;
						uint64_t anon35 = anon36 << 56 >> 56;
						uint32_t anon34 = (uint32_t)anon35;
						uint32_t anon33 = anon34 - 65;
						uint32_t anon32 = anon33 * (*(uint32_t*)&alloca6 - anon34);
						uint32_t anon37 = anon34 - 97;
						uint32_t anon31 = (anon32 >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon37 * (123 - anon35) >> 31) & 1 ^ 1);
						alloca12 = (__zext uint64_t)anon31;
						uint64_t anon38 = phi22 + 1;
						phi28 = anon38;
						phi27 = anon36;
						phi22 = anon38;
						phi16 = anon36;
						phi24 = (__zext uint64_t)anon37;
						phi25 = anon32;
						phi26 = anon33;
						if (anon31 == 0)
						{
							break;
						}
					}
				}
				phi39 = phi27;
				phi21 = phi39;
				phi40 = phi28;
			}
			if (anon17 != 0 && phi28 == anon23 || anon17 == 0)
			{
				phi39 = phi21;
				alloca1.field0 = 119;
				phi40 = (uint64_t)&alloca1.field1;
			}
			*(uint8_t*)phi40 = 97;
			uint64_t phi41 = phi39;
			uint64_t anon43 = phi39 >> 8;
			uint32_t anon42 = (uint32_t)(anon43 << 24) >> 24;
			uint64_t anon44 = anon43 << 56;
			uint64_t anon45 = anon44 >> 56;
			if (((uint32_t)((__sext int64_t)(*(uint32_t*)&alloca6 - anon42) * ((anon44 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon45 - 97) * (__sext int64_t)(123 - anon42) >> 31) & 1 ^ 1))
			{
				uint64_t anon48;
				uint32_t anon49;
				uint64_t phi46 = anon45 & 0xffffffff;
				do
				{
					putchar((uint32_t)phi46);
					uint32_t anon47 = getchar();
					phi41 = (__zext uint64_t)anon47;
					anon49 = anon47 << 24 >> 24;
					anon48 = (__zext uint64_t)anon49;
					phi46 = anon48;
				}
				while (((uint32_t)((__sext int64_t)(*(uint32_t*)&alloca6 - anon49) * ((anon48 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon49 - 97) * (123 - anon49) >> 31 ^ 1));
			}
			*(uint8_t*)(phi40 + 1) = 0;
			uint8_t phi50 = alloca1.field0;
			uint64_t phi_in51 = anon23;
			if (alloca1.field0 != 0)
			{
				uint64_t anon53;
				do
				{
					uint64_t phi52 = phi_in51;
					putchar((__sext int32_t)phi50);
					anon53 = phi52 + 1;
					phi50 = *(uint8_t*)anon53;
					phi_in51 = anon53;
				}
				while (*(uint8_t*)anon53 != 0);
			}
			uint64_t anon55 = phi41 >> 8;
			anon54 = (uint8_t)anon55;
			if (anon54 != 255)
			{
				uint64_t anon58 = anon55 << 56;
				uint64_t anon57 = anon58 >> 56;
				uint64_t anon56 = anon57 & 0xffffffff;
				alloca12 = anon56;
				int32_t anon60 = (__sext int32_t)anon54;
				phi59 = (__zext uint64_t)anon60;
				phi14 = anon56;
				phi15 = phi41;
				if (((uint32_t)((__sext int64_t)(*(uint32_t*)&alloca6 - anon60) * ((anon58 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon57 - 97) * (__sext int64_t)(123 - anon60) >> 31) & 1 ^ 1))
				{
					putchar((uint32_t)phi59);
					uint32_t anon61 = getchar();
					if ((uint8_t)anon61 == 255)
					{
						break;
					}
					else 
					{
						uint64_t anon62 = (__zext uint64_t)anon61 << 56 >> 56 & 0xffffffff;
						phi59 = anon62;
						phi3 = anon61;
						phi13 = &alloca12;
						*phi13 = anon62;
					}
				}
			}
		}
		while (anon54 != 255);
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400460, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400810, (void(*)())0x400880, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c48;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196306);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196419);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600a10)(arg1 & 0xffffffff, arg2, arg3);
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

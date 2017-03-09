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
	struct { uint8_t field0; uint8_t field1[71]; uint64_t field2; } alloca1;
	uint32_t phi3;
	uint32_t phi31;
	uint32_t phi51;
	uint32_t phi59;
	alloca1.field2 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		uint32_t anon4;
		uint64_t phi5;
		uint32_t phi6;
		uint32_t anon7;
		uint8_t anon9;
		uint64_t anon10;
		uint64_t anon11;
		uint8_t phi14;
		uint8_t phi50;
		do
		{
			anon4 = anon2 << 24 >> 24;
			phi3 = anon4;
			phi5 = (__zext uint64_t)anon2;
			phi6 = anon2;
			anon7 = (uint32_t)((__sext int64_t)(91 - anon4) * (((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) >> 31) & 1 ^ 1;
			if (anon7 == -((uint32_t)((__sext int64_t)(123 - anon4) * (__sext int64_t)(anon4 - 97) >> 31) & 1 ^ 1))
			{
				putchar(phi3);
				uint32_t anon8 = getchar();
				anon9 = (uint8_t)anon8;
				if (anon9 == 255)
				{
					break;
				}
				else 
				{
					uint64_t anon12 = (__zext uint64_t)anon8;
					anon11 = anon12 << 56;
					anon10 = anon11 >> 56;
					phi3 = (uint32_t)anon10;
					phi5 = anon12;
					phi6 = anon8;
				}
			}
		}
		while (!(anon7 != -((uint32_t)((__sext int64_t)(123 - anon4) * (__sext int64_t)(anon4 - 97) >> 31) & 1 ^ 1) || anon9 != 255 && ((uint32_t)(((anon11 >> 24) - 279172874240 >> 32) * (91 - anon10) >> 31) & 1 ^ 1) != -((uint32_t)((123 - anon10) * (anon10 - 97) >> 31) & 1 ^ 1) && anon7 == -((uint32_t)((__sext int64_t)(123 - anon4) * (__sext int64_t)(anon4 - 97) >> 31) & 1 ^ 1)));
		uint64_t phi13 = phi5;
		uint32_t anon16 = phi6 >> 8;
		uint8_t anon15 = (uint8_t)anon16;
		phi14 = anon15;
		uint32_t phi17 = anon16 << 24 >> 24;
		uint64_t phi18 = (__sext int64_t)anon15;
		do
		{
			uint64_t anon28;
			uint64_t phi46;
			uint64_t phi47;
			uint8_t phi48;
			uint64_t phi_in19 = phi13;
			uint8_t phi_in20 = phi14;
			uint64_t phi21 = phi_in19;
			uint8_t phi_in22 = phi_in20;
			uint64_t anon24 = phi18 << 32;
			uint32_t anon23 = (uint32_t)((__sext int64_t)(123 - phi17) * (anon24 - 416611827712 >> 32) >> 31) & 1 ^ 1;
			uint32_t anon25 = 91 - phi17;
			uint64_t anon26 = anon24 - 279172874240 >> 32;
			if (anon23 != -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1))
			{
				uint64_t phi27;
				uint64_t phi35;
				uint64_t phi_in36;
				anon28 = (uint64_t)&alloca1;
				phi27 = anon28;
				uint64_t phi29 = phi_in19;
				uint8_t phi30 = phi_in20;
				uint32_t anon32 = (uint32_t)phi18;
				phi31 = anon32 - 65;
				uint32_t phi33 = anon32 - 97;
				uint32_t phi34 = anon25 * (uint32_t)anon26;
				while (true)
				{
					if (phi34 > 4294967295)
					{
						phi35 = phi27;
						phi_in36 = phi29;
						if (*(uint8_t*)((__sext int64_t)phi31 + 4196500) == 45)
						{
							break;
						}
						else 
						{
							*(uint8_t*)phi27 = (uint8_t)((uint32_t)phi29 + 32 >> 8);
						}
					}
					else 
					{
						phi35 = phi27;
						phi_in36 = phi29;
						*(uint8_t*)phi27 = phi30;
						if (*(uint8_t*)((__sext int64_t)phi33 + 4196500) == 45)
						{
							break;
						}
					}
					if (*(uint8_t*)((__sext int64_t)phi33 + 4196500) != 45 && true)
					{
						uint32_t anon37 = getchar();
						uint64_t anon38 = phi27 + 1;
						phi35 = anon38;
						uint64_t anon39 = (__zext uint64_t)anon37;
						phi_in36 = anon39;
						uint8_t anon40 = (uint8_t)(anon37 >> 8);
						phi30 = anon40;
						phi27 = anon38;
						phi29 = anon39;
						phi30 = anon40;
						uint64_t anon43 = anon39 << 56 >> 56;
						uint32_t anon42 = (uint32_t)anon43;
						uint32_t anon41 = anon42 - 65;
						phi31 = anon41;
						uint32_t anon44 = anon42 - 97;
						phi33 = anon44;
						uint64_t anon45 = 91 - anon43;
						phi34 = (uint32_t)anon45 * anon41;
						if (((uint32_t)(anon45 * (__sext int64_t)anon41 >> 31) & 1 ^ 1) == -((uint32_t)((123 - anon43) * (__sext int64_t)anon44 >> 31) & 1 ^ 1))
						{
							break;
						}
					}
				}
				phi46 = phi35;
				phi_in22 = phi30;
				phi21 = phi_in36;
				phi_in22 = phi_in22;
				phi47 = phi_in36;
				phi48 = phi_in22;
			}
			if (anon23 != -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1) && phi46 == anon28 || anon23 == -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1))
			{
				phi47 = phi21;
				alloca1.field0 = 119;
				phi46 = (uint64_t)&alloca1.field1;
				phi48 = phi_in22;
			}
			uint64_t phi49 = phi47;
			*(uint8_t*)phi46 = 97;
			phi50 = phi48;
			int32_t anon52 = (__sext int32_t)phi48;
			phi51 = anon52;
			if (((uint32_t)((((__zext uint64_t)anon52 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon52) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon52) * (__sext int64_t)(anon52 - 97) >> 31) & 1 ^ 1))
			{
				uint32_t anon53;
				uint32_t anon54;
				do
				{
					putchar(phi51);
					anon53 = getchar();
					anon54 = anon53 << 24 >> 24;
					phi51 = anon54;
				}
				while (((uint32_t)((((__zext uint64_t)anon54 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon54) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon54) * (__sext int64_t)(anon54 - 97) >> 31) & 1 ^ 1));
				phi49 = (__zext uint64_t)anon53;
				phi50 = (uint8_t)(anon53 >> 8);
			}
			*(uint8_t*)(phi46 + 1) = 0;
			uint8_t phi55 = alloca1.field0;
			uint64_t phi_in56 = anon28;
			if (alloca1.field0 != 0)
			{
				uint64_t anon58;
				do
				{
					uint64_t phi57 = phi_in56;
					putchar((__sext int32_t)phi55);
					anon58 = phi57 + 1;
					phi55 = *(uint8_t*)anon58;
					phi_in56 = anon58;
				}
				while (*(uint8_t*)anon58 != 0);
				phi50 = (uint8_t)(phi49 >> 8);
			}
			if (phi50 != 255)
			{
				int32_t anon60 = (__sext int32_t)phi50;
				phi59 = anon60;
				if (((uint32_t)((((__zext uint64_t)anon60 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon60) >> 31) & 1 ^ 1) == -((uint32_t)((__sext int64_t)(123 - anon60) * (__sext int64_t)(anon60 - 97) >> 31) & 1 ^ 1))
				{
					putchar(phi59);
					uint32_t anon61 = getchar();
					if ((uint8_t)anon61 == 255)
					{
						break;
					}
					else 
					{
						uint64_t anon64 = (__zext uint64_t)anon61;
						uint64_t anon63 = anon64 << 56 >> 56;
						uint32_t anon62 = (uint32_t)anon63;
						phi59 = anon62;
						phi13 = anon64;
						phi14 = (uint8_t)(anon61 >> 8);
						phi17 = anon62;
						phi18 = anon63;
					}
				}
				else 
				{
					phi13 = phi49;
					phi14 = phi50;
					phi17 = anon60;
					phi18 = (__sext int64_t)phi50;
				}
			}
		}
		while (phi50 != 255);
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

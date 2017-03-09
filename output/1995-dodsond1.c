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
	uint32_t phi30;
	uint32_t phi52;
	uint32_t phi62;
	alloca1.field2 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		uint32_t anon4;
		uint64_t phi_in5;
		uint32_t phi6;
		uint32_t anon7;
		uint8_t anon9;
		uint64_t anon10;
		uint64_t anon11;
		uint8_t phi14;
		uint8_t phi57;
		do
		{
			anon4 = anon2 << 24 >> 24;
			phi3 = anon4;
			phi_in5 = (__zext uint64_t)anon2;
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
					phi_in5 = anon12;
					phi6 = anon8;
				}
			}
		}
		while (!(anon7 != -((uint32_t)((__sext int64_t)(123 - anon4) * (__sext int64_t)(anon4 - 97) >> 31) & 1 ^ 1) || anon9 != 255 && ((uint32_t)(((anon11 >> 24) - 279172874240 >> 32) * (91 - anon10) >> 31) & 1 ^ 1) != -((uint32_t)((123 - anon10) * (anon10 - 97) >> 31) & 1 ^ 1) && anon7 == -((uint32_t)((__sext int64_t)(123 - anon4) * (__sext int64_t)(anon4 - 97) >> 31) & 1 ^ 1)));
		uint64_t phi13 = phi_in5;
		uint32_t anon16 = phi6 >> 8;
		uint8_t anon15 = (uint8_t)anon16;
		phi14 = anon15;
		uint32_t phi17 = anon16 << 24 >> 24;
		uint64_t phi18 = (__sext int64_t)anon15;
		do
		{
			uint64_t anon28;
			uint64_t phi35;
			uint8_t phi47;
			uint64_t phi48;
			uint64_t phi19 = phi13;
			uint8_t phi_in20 = phi14;
			uint64_t phi21 = phi19;
			uint8_t phi22 = phi_in20;
			uint64_t anon24 = phi18 << 32;
			uint32_t anon23 = (uint32_t)((__sext int64_t)(123 - phi17) * (anon24 - 416611827712 >> 32) >> 31) & 1 ^ 1;
			uint32_t anon25 = 91 - phi17;
			uint64_t anon26 = anon24 - 279172874240 >> 32;
			if (anon23 != -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1))
			{
				uint64_t phi27;
				uint8_t phi34;
				uint64_t phi36;
				anon28 = (uint64_t)&alloca1;
				phi27 = anon28;
				uint8_t phi29 = phi_in20;
				uint32_t anon31 = (uint32_t)phi18;
				phi30 = anon31 - 65;
				uint32_t phi32 = anon31 - 97;
				uint32_t phi33 = anon25 * (uint32_t)anon26;
				while (true)
				{
					uint8_t phi37;
					phi34 = phi29;
					if (phi33 > 4294967295)
					{
						phi35 = phi27;
						phi36 = phi19;
						if (*(uint8_t*)((__sext int64_t)phi30 + 4196500) == 45)
						{
							break;
						}
						else 
						{
							phi37 = (uint8_t)((uint32_t)phi19 + 32 >> 8);
						}
					}
					else 
					{
						phi35 = phi27;
						phi36 = phi19;
						phi37 = phi34;
						if (*(uint8_t*)((__sext int64_t)phi32 + 4196500) == 45)
						{
							break;
						}
					}
					if (*(uint8_t*)((__sext int64_t)phi32 + 4196500) != 45 && true)
					{
						*(uint8_t*)phi27 = phi37;
						uint32_t anon38 = getchar();
						uint64_t anon39 = phi27 + 1;
						phi35 = anon39;
						uint64_t anon40 = (__zext uint64_t)anon38;
						phi36 = anon40;
						uint8_t anon41 = (uint8_t)(anon38 >> 8);
						phi34 = anon41;
						phi27 = anon39;
						phi19 = anon40;
						phi29 = anon41;
						uint64_t anon44 = anon40 << 56 >> 56;
						uint32_t anon43 = (uint32_t)anon44;
						uint32_t anon42 = anon43 - 65;
						phi30 = anon42;
						uint32_t anon45 = anon43 - 97;
						phi32 = anon45;
						uint64_t anon46 = 91 - anon44;
						phi33 = (uint32_t)anon46 * anon42;
						if (((uint32_t)(anon46 * (__sext int64_t)anon42 >> 31) & 1 ^ 1) == -((uint32_t)((123 - anon44) * (__sext int64_t)anon45 >> 31) & 1 ^ 1))
						{
							break;
						}
					}
				}
				phi21 = phi36;
				phi47 = phi34;
				phi22 = phi47;
				phi48 = phi35;
			}
			if (anon23 != -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1) && phi35 == anon28 || anon23 == -((uint32_t)((__sext int64_t)anon25 * anon26 >> 31) & 1 ^ 1))
			{
				phi47 = phi22;
				alloca1.field0 = 119;
				phi48 = (uint64_t)&alloca1.field1;
			}
			uint64_t phi_in49 = phi21;
			*(uint8_t*)phi48 = 97;
			uint64_t phi50 = phi_in49;
			uint8_t phi51 = phi47;
			int32_t anon53 = (__sext int32_t)phi47;
			phi52 = anon53;
			if (((uint32_t)((((__zext uint64_t)anon53 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon53) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon53) * (__sext int64_t)(anon53 - 97) >> 31) & 1 ^ 1))
			{
				uint32_t anon54;
				uint32_t anon55;
				do
				{
					putchar(phi52);
					anon54 = getchar();
					anon55 = anon54 << 24 >> 24;
					phi52 = anon55;
				}
				while (((uint32_t)((((__zext uint64_t)anon55 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon55) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon55) * (__sext int64_t)(anon55 - 97) >> 31) & 1 ^ 1));
				phi50 = (__zext uint64_t)anon54;
				phi51 = (uint8_t)(anon54 >> 8);
			}
			uint8_t phi_in56 = phi51;
			*(uint8_t*)(phi48 + 1) = 0;
			phi57 = phi_in56;
			uint8_t phi58 = alloca1.field0;
			uint64_t phi_in59 = anon28;
			if (alloca1.field0 != 0)
			{
				uint64_t anon61;
				do
				{
					uint64_t phi60 = phi_in59;
					putchar((__sext int32_t)phi58);
					anon61 = phi60 + 1;
					phi58 = *(uint8_t*)anon61;
					phi_in59 = anon61;
				}
				while (*(uint8_t*)anon61 != 0);
				phi57 = (uint8_t)(phi50 >> 8);
			}
			if (phi57 != 255)
			{
				int32_t anon63 = (__sext int32_t)phi57;
				phi62 = anon63;
				if (((uint32_t)((((__zext uint64_t)anon63 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon63) >> 31) & 1 ^ 1) == -((uint32_t)((__sext int64_t)(123 - anon63) * (__sext int64_t)(anon63 - 97) >> 31) & 1 ^ 1))
				{
					putchar(phi62);
					uint32_t anon64 = getchar();
					if ((uint8_t)anon64 == 255)
					{
						break;
					}
					else 
					{
						uint64_t anon67 = (__zext uint64_t)anon64;
						uint64_t anon66 = anon67 << 56 >> 56;
						uint32_t anon65 = (uint32_t)anon66;
						phi62 = anon65;
						phi13 = anon67;
						phi14 = (uint8_t)(anon64 >> 8);
						phi17 = anon65;
						phi18 = anon66;
					}
				}
				else 
				{
					phi13 = phi50;
					phi14 = phi57;
					phi17 = anon63;
					phi18 = (__sext int64_t)phi57;
				}
			}
		}
		while (phi57 != 255);
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

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
	uint32_t phi28;
	uint32_t phi50;
	uint32_t phi60;
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
		uint8_t phi55;
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
			uint64_t anon27;
			uint64_t phi32;
			uint8_t phi_in44;
			uint64_t phi45;
			uint64_t phi_in46;
			uint8_t phi47;
			uint64_t phi19 = phi13;
			uint64_t phi_in20 = phi19;
			uint8_t phi21 = phi14;
			uint64_t anon23 = phi18 << 32;
			uint32_t anon22 = (uint32_t)((__sext int64_t)(123 - phi17) * (anon23 - 416611827712 >> 32) >> 31) & 1 ^ 1;
			uint32_t anon24 = 91 - phi17;
			uint64_t anon25 = anon23 - 279172874240 >> 32;
			if (anon22 != -((uint32_t)((__sext int64_t)anon24 * anon25 >> 31) & 1 ^ 1))
			{
				uint64_t phi26;
				uint64_t phi33;
				uint8_t phi34;
				anon27 = (uint64_t)&alloca1;
				phi26 = anon27;
				uint32_t anon29 = (uint32_t)phi18;
				phi28 = anon29 - 65;
				uint32_t phi30 = anon29 - 97;
				uint32_t phi31 = anon24 * (uint32_t)anon25;
				while (true)
				{
					if (phi31 > 4294967295)
					{
						phi32 = phi26;
						phi33 = phi19;
						phi34 = phi14;
						if (*(uint8_t*)((__sext int64_t)phi28 + 4196500) == 45)
						{
							break;
						}
						else 
						{
							*(uint8_t*)phi26 = (uint8_t)((uint32_t)phi19 + 32 >> 8);
						}
					}
					else 
					{
						phi32 = phi26;
						phi33 = phi19;
						phi34 = phi14;
						*(uint8_t*)phi26 = phi14;
						if (*(uint8_t*)((__sext int64_t)phi30 + 4196500) == 45)
						{
							break;
						}
					}
					if (*(uint8_t*)((__sext int64_t)phi30 + 4196500) != 45 && true)
					{
						uint32_t anon35 = getchar();
						uint64_t anon36 = phi26 + 1;
						phi32 = anon36;
						uint64_t anon37 = (__zext uint64_t)anon35;
						phi33 = anon37;
						uint8_t anon38 = (uint8_t)(anon35 >> 8);
						phi34 = anon38;
						phi26 = anon36;
						phi19 = anon37;
						phi14 = anon38;
						uint64_t anon41 = anon37 << 56 >> 56;
						uint32_t anon40 = (uint32_t)anon41;
						uint32_t anon39 = anon40 - 65;
						phi28 = anon39;
						uint32_t anon42 = anon40 - 97;
						phi30 = anon42;
						uint64_t anon43 = 91 - anon41;
						phi31 = (uint32_t)anon43 * anon39;
						if (((uint32_t)(anon43 * (__sext int64_t)anon39 >> 31) & 1 ^ 1) == -((uint32_t)((123 - anon41) * (__sext int64_t)anon42 >> 31) & 1 ^ 1))
						{
							break;
						}
					}
				}
				phi_in20 = phi33;
				phi_in44 = phi34;
				phi_in20 = phi_in20;
				phi21 = phi_in44;
				phi45 = phi32;
				phi_in46 = phi_in20;
				phi47 = phi_in44;
			}
			if (anon22 != -((uint32_t)((__sext int64_t)anon24 * anon25 >> 31) & 1 ^ 1) && phi32 == anon27 || anon22 == -((uint32_t)((__sext int64_t)anon24 * anon25 >> 31) & 1 ^ 1))
			{
				phi_in44 = phi21;
				alloca1.field0 = 119;
				phi45 = (uint64_t)&alloca1.field1;
				phi_in46 = phi_in20;
				phi47 = phi_in44;
			}
			uint8_t phi48 = phi47;
			*(uint8_t*)phi45 = 97;
			uint64_t phi49 = phi_in46;
			int32_t anon51 = (__sext int32_t)phi48;
			phi50 = anon51;
			if (((uint32_t)((((__zext uint64_t)anon51 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon51) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon51) * (__sext int64_t)(anon51 - 97) >> 31) & 1 ^ 1))
			{
				uint32_t anon52;
				uint32_t anon53;
				do
				{
					putchar(phi50);
					anon52 = getchar();
					anon53 = anon52 << 24 >> 24;
					phi50 = anon53;
				}
				while (((uint32_t)((((__zext uint64_t)anon53 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon53) >> 31) & 1 ^ 1) != -((uint32_t)((__sext int64_t)(123 - anon53) * (__sext int64_t)(anon53 - 97) >> 31) & 1 ^ 1));
				phi49 = (__zext uint64_t)anon52;
				phi48 = (uint8_t)(anon52 >> 8);
			}
			uint8_t phi_in54 = phi48;
			*(uint8_t*)(phi45 + 1) = 0;
			phi55 = phi_in54;
			uint8_t phi56 = alloca1.field0;
			uint64_t phi_in57 = anon27;
			if (alloca1.field0 != 0)
			{
				uint64_t anon59;
				do
				{
					uint64_t phi58 = phi_in57;
					putchar((__sext int32_t)phi56);
					anon59 = phi58 + 1;
					phi56 = *(uint8_t*)anon59;
					phi_in57 = anon59;
				}
				while (*(uint8_t*)anon59 != 0);
				phi55 = (uint8_t)(phi49 >> 8);
			}
			if (phi55 != 255)
			{
				int32_t anon61 = (__sext int32_t)phi55;
				phi60 = anon61;
				if (((uint32_t)((((__zext uint64_t)anon61 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon61) >> 31) & 1 ^ 1) == -((uint32_t)((__sext int64_t)(123 - anon61) * (__sext int64_t)(anon61 - 97) >> 31) & 1 ^ 1))
				{
					putchar(phi60);
					uint32_t anon62 = getchar();
					if ((uint8_t)anon62 == 255)
					{
						break;
					}
					else 
					{
						uint64_t anon65 = (__zext uint64_t)anon62;
						uint64_t anon64 = anon65 << 56 >> 56;
						uint32_t anon63 = (uint32_t)anon64;
						phi60 = anon63;
						phi13 = anon65;
						phi14 = (uint8_t)(anon62 >> 8);
						phi17 = anon63;
						phi18 = anon64;
					}
				}
				else 
				{
					phi13 = phi49;
					phi14 = phi55;
					phi17 = anon61;
					phi18 = (__sext int64_t)phi55;
				}
			}
		}
		while (phi55 != 255);
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

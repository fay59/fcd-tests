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
	alloca1.field2 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		while (true)
		{
			uint32_t phi_in3;
			uint32_t anon8;
			uint8_t anon9;
			uint32_t anon4 = anon2 << 24 >> 24;
			phi_in3 = anon4;
			uint32_t phi_in5 = anon2;
			uint32_t anon6 = (uint32_t)((((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon4)) >> 31 ^ 1;
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint32_t phi7 = phi_in3;
				putchar(phi7);
				anon8 = getchar();
				anon9 = (uint8_t)anon8;
				if (anon9 == 255)
				{
					break;
				}
				else 
				{
					phi_in5 = anon8;
				}
			}
			uint64_t anon12 = (__zext uint64_t)anon8 << 56;
			uint64_t anon11 = anon12 >> 56;
			uint32_t anon10 = (uint32_t)((91 - anon11) * ((anon12 >> 24) - 279172874240 >> 32)) >> 31 ^ 1;
			if (anon6 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon9 != 255 && anon10 != -((uint32_t)((anon11 - 97) * (123 - anon11) >> 31) & 1 ^ 1) && anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint32_t phi_in15;
				uint8_t anon73;
				uint32_t phi13 = phi_in5;
				uint64_t phi_in14 = (__zext uint64_t)phi13;
				uint32_t anon16 = phi13 >> 8;
				phi_in15 = anon16 << 24 >> 24;
				uint64_t phi_in17 = (__zext uint64_t)anon16 << 56 >> 56;
				do
				{
					uint64_t anon26;
					uint64_t phi49;
					uint64_t phi_in51;
					uint64_t phi_in52;
					uint64_t phi18 = phi_in14;
					uint32_t phi19 = phi_in15;
					uint64_t phi20 = phi_in17;
					uint64_t phi_in21 = phi18;
					uint32_t anon22 = (uint32_t)(((phi20 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi19)) >> 31 ^ 1;
					uint32_t anon23 = (uint32_t)phi20 - 65;
					uint32_t anon24 = 91 - phi19;
					if (anon22 != -((uint32_t)((__sext int64_t)anon23 * (__sext int64_t)anon24 >> 31) & 1 ^ 1))
					{
						uint64_t phi_in25;
						uint64_t phi_in36;
						uint64_t phi_in37;
						anon26 = (uint64_t)&alloca1;
						phi_in25 = anon26;
						uint64_t phi_in27 = phi18;
						uint64_t phi_in28 = phi20 + 4294967199 & 0xffffffff;
						uint32_t phi_in29 = anon23 * anon24;
						uint32_t phi_in30 = anon23;
						while (true)
						{
							uint8_t phi_in38;
							uint64_t anon41;
							uint64_t anon42;
							uint32_t anon43;
							uint32_t anon44;
							uint64_t anon46;
							uint64_t anon47;
							uint32_t anon48;
							uint64_t phi31 = phi_in25;
							uint64_t phi32 = phi_in27;
							uint64_t phi33 = phi_in28;
							uint32_t phi34 = phi_in29;
							uint32_t phi35 = phi_in30;
							if (phi34 > 4294967295)
							{
								phi_in36 = phi31;
								phi_in37 = phi32;
								if (*(uint8_t*)((__sext int64_t)phi35 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi_in38 = (uint8_t)((uint32_t)phi32 + 32 >> 8);
								}
							}
							else 
							{
								phi_in36 = phi31;
								phi_in37 = phi32;
								if (*(uint8_t*)((phi33 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi_in38 = (uint8_t)(phi32 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi35 + 4196500) != 45 && phi34 > 4294967295 || phi34 <= 4294967295 && *(uint8_t*)((phi33 << 32 >> 32) + 4196500) != 45)
							{
								uint8_t phi39 = phi_in38;
								*(uint8_t*)phi31 = phi39;
								uint32_t anon40 = getchar();
								anon41 = phi31 + 1;
								phi_in36 = anon41;
								anon42 = (__zext uint64_t)anon40;
								phi_in37 = anon42;
								anon46 = anon42 << 56 >> 56;
								uint32_t anon45 = (uint32_t)anon46;
								anon44 = anon45 - 65;
								anon47 = 91 - anon46;
								anon43 = (uint32_t)((__sext int64_t)anon44 * anon47) >> 31 ^ 1;
								anon48 = anon45 - 97;
								if (anon43 == -((uint32_t)((__sext int64_t)anon48 * (123 - anon46) >> 31) & 1 ^ 1))
								{
									break;
								}
							}
							if (anon43 != -((uint32_t)((__sext int64_t)anon48 * (123 - anon46) >> 31) & 1 ^ 1) && (*(uint8_t*)((__sext int64_t)phi35 + 4196500) != 45 && phi34 > 4294967295 || phi34 <= 4294967295 && *(uint8_t*)((phi33 << 32 >> 32) + 4196500) != 45))
							{
								phi_in25 = anon41;
								phi_in27 = anon42;
								phi_in28 = (__zext uint64_t)anon48;
								phi_in29 = anon44 * (uint32_t)anon47;
								phi_in30 = anon44;
							}
						}
						phi49 = phi_in36;
						uint64_t phi50 = phi_in37;
						phi_in21 = phi50;
						phi_in51 = phi49;
						phi_in52 = phi50;
					}
					if (anon22 == -((uint32_t)((__sext int64_t)anon23 * (__sext int64_t)anon24 >> 31) & 1 ^ 1) || anon22 != -((uint32_t)((__sext int64_t)anon23 * (__sext int64_t)anon24 >> 31) & 1 ^ 1) && phi49 == anon26)
					{
						uint64_t phi53 = phi_in21;
						alloca1.field0 = 119;
						phi_in51 = (uint64_t)&alloca1.field1;
						phi_in52 = phi53;
					}
					uint64_t phi54 = phi_in51;
					uint64_t phi55 = phi_in52;
					*(uint8_t*)phi54 = 97;
					uint64_t phi_in56 = phi55;
					uint64_t anon58 = phi55 >> 8;
					uint32_t anon57 = (uint32_t)(anon58 << 24) >> 24;
					uint64_t anon59 = anon58 << 56;
					uint64_t anon60 = anon59 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon57) * ((anon59 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon60 - 97) * (__sext int64_t)(123 - anon57) >> 31) & 1 ^ 1))
					{
						uint32_t anon63;
						uint32_t anon65;
						uint32_t anon66;
						uint64_t phi_in61 = anon60 & 0xffffffff;
						do
						{
							uint64_t phi62 = phi_in61;
							putchar((uint32_t)phi62);
							anon63 = getchar();
							anon65 = anon63 << 24 >> 24;
							uint64_t anon64 = (__zext uint64_t)anon65;
							phi_in61 = anon64;
							anon66 = (uint32_t)((__sext int64_t)(91 - anon65) * ((anon64 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon66 != -((anon65 - 97) * (123 - anon65) >> 31 ^ 1));
						phi_in56 = (__zext uint64_t)anon63;
					}
					uint64_t phi67 = phi_in56;
					*(uint8_t*)(phi54 + 1) = 0;
					uint8_t phi_in68 = alloca1.field0;
					uint64_t phi_in69 = anon26;
					if (alloca1.field0 != 0)
					{
						uint64_t anon72;
						do
						{
							uint8_t phi70 = phi_in68;
							uint64_t phi71 = phi_in69;
							putchar((__sext int32_t)phi70);
							anon72 = phi71 + 1;
							phi_in68 = *(uint8_t*)anon72;
							phi_in69 = anon72;
						}
						while (*(uint8_t*)anon72 != 0);
					}
					uint64_t anon74 = phi67 >> 8;
					anon73 = (uint8_t)anon74;
					if (anon73 != 255)
					{
						int32_t anon75 = (__sext int32_t)anon73;
						uint64_t anon76 = anon74 << 56;
						uint64_t anon77 = anon76 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon75) * ((anon76 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon77 - 97) * (__sext int64_t)(123 - anon75) >> 31) & 1 ^ 1))
						{
							uint64_t phi_in78 = (__zext uint64_t)anon75;
							uint64_t phi79 = phi_in78;
							putchar((uint32_t)phi79);
							uint32_t anon80 = getchar();
							if ((uint8_t)anon80 == 255)
							{
								break;
							}
							uint64_t anon83 = (__zext uint64_t)anon80;
							uint64_t anon82 = anon83 << 56;
							uint64_t anon81 = anon82 >> 56;
							else if (((uint32_t)((91 - anon81) * ((anon82 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon81 - 97) * (123 - anon81) >> 31) & 1 ^ 1))
							{
								phi_in78 = anon81 & 0xffffffff;
							}
							else 
							{
								phi_in14 = anon83;
								phi_in15 = (uint32_t)anon81;
								phi_in17 = anon81;
							}
						}
						else 
						{
							phi_in14 = phi67;
							phi_in15 = (uint32_t)anon77;
							phi_in17 = anon77;
						}
					}
				}
				while (anon73 != 255);
				break;
			}
			if (anon9 != 255 && anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) && anon10 == -((uint32_t)((anon11 - 97) * (123 - anon11) >> 31) & 1 ^ 1))
			{
				phi_in3 = (uint32_t)anon11;
			}
		}
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

#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint8_t* anon3;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi_in2 = *(uint64_t*)0x601288;
	do
	{
		anon3 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi_in2);
		*(uint64_t*)0x603b08 = (uint64_t)anon3;
		if (anon3 != null)
		{
			uint64_t anon4 = cb(4195727);
			*(uint64_t*)0x603b00 = anon4;
			fwrite((uint8_t*)anon4, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi_in2 = *anon1;
		}
	}
	while (anon3 != null);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400560, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400930, (void(*)())0x4009a0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601290;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196002);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t cb(uint64_t arg0)
{
	uint16_t anon7;
	uint64_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		uint32_t* phi6 = phi_in5;
		uint16_t anon8 = (uint16_t)*phi6;
		anon7 = anon8 - 257 & (anon8 ^ 0x8080) & 0x8080;
		if (anon7 == 0)
		{
			anon9 = (phi_in4 & 0xffffffff) + 4;
			phi_in4 = anon9;
			phi_in5 = (uint32_t*)anon9;
		}
	}
	while (anon7 == 0);
	uint32_t* anon10 = (uint32_t*)0x6012c0;
	uint8_t anon11 = (uint8_t)anon7;
	*anon10 = (uint32_t)anon9 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon11, anon11).field1 - 6306624;
	uint64_t phi_in12 = 6306624;
	uint64_t phi_in13 = 6296320;
	uint8_t* phi_in14 = (uint8_t*)0x601300;
	uint8_t* phi_in15 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi16;
		do
		{
			phi16 = phi_in15;
			if (*phi16 != 0)
			{
				uint64_t anon20;
				uint64_t phi17 = phi_in13;
				if (*phi16 == *anon3)
				{
					anon20 = phi_in12 + 1;
					uint8_t* anon19 = (uint8_t*)anon20;
					uint8_t* anon18 = strchr(anon19, (__sext int32_t)*phi16);
					if (anon18 == null)
					{
						*(uint8_t*)phi17 = *phi16;
						phi_in12 = anon20;
						uint64_t anon21 = phi17 + 1;
						phi_in13 = anon21;
						phi_in14 = (uint8_t*)anon21;
						phi_in15 = anon19;
					}
					else 
					{
						*anon18 = 0;
						if (strchr(anon19, 32) == null)
						{
							uint64_t phi_in22;
							uint8_t* anon23 = getenv(anon19);
							phi_in22 = (uint64_t)anon23;
							uint64_t phi_in24 = phi17;
							if (anon23 == null)
							{
								*anon18 = *anon3;
								*(uint8_t*)phi17 = *anon3;
								*(uint8_t*)(phi17 + 1) = *anon3;
								uint64_t anon25 = phi_in12 + 2;
								phi_in12 = anon25;
								uint64_t anon26 = phi17 + 2;
								phi_in13 = anon26;
								phi_in14 = (uint8_t*)anon26;
								phi_in15 = (uint8_t*)anon25;
							}
							else 
							{
								while (true && !(*(uint8_t*)phi_in22 == 0))
								{
									uint8_t phi_in28;
									uint64_t phi_in29;
									bool anon27 = *(uint8_t*)phi_in22 == 92;
									if (anon27)
									{
										phi_in28 = 92;
										uint64_t anon30 = phi_in22 + 1;
										phi_in29 = anon30;
										uint8_t anon32 = *(uint8_t*)anon30 - 48;
										bool anon31 = *(uint8_t*)anon30 == 57 | anon32 < 9;
										if (anon31)
										{
											phi_in28 = anon32;
											uint64_t anon33 = phi_in22 + 2;
											phi_in29 = anon33;
											uint64_t anon34 = (__zext uint64_t)*(uint8_t*)anon33 + 4294967248;
											if ((uint8_t)anon34 < 10)
											{
												uint64_t phi_in35;
												uint64_t anon36 = anon34 + ((__zext uint64_t)*(uint8_t*)anon30 << 3) + 34359737984;
												phi_in35 = anon36;
												uint64_t anon37 = phi_in22 + 3;
												phi_in29 = anon37;
												if (*(uint8_t*)anon37 - 48 < 10)
												{
													phi_in35 = (__zext uint64_t)*(uint8_t*)anon37 + 4294967248 + (anon36 << 3) & 0xffffffff;
													phi_in29 = phi_in22 + 4;
												}
												phi_in28 = (uint8_t)phi_in35;
											}
										}
									}
									bool anon39 = *(uint8_t*)phi_in22 == 0 || *(uint8_t*)phi_in22 == 92;
									bool anon38 = !anon39;
									if (anon38)
									{
										phi_in28 = *(uint8_t*)phi_in22;
										phi_in29 = phi_in22 + 1;
									}
									if (!anon39 || *(uint8_t*)phi_in22 == 92)
									{
										phi_in22 = phi_in29;
										phi_in24 = phi_in24 + 1;
									}
								}
								uint64_t anon40 = (uint64_t)anon18 + 1;
								phi_in12 = anon40;
								phi_in13 = phi_in24;
								uint8_t* anon41 = (uint8_t*)phi_in24;
								phi_in14 = anon41;
								phi_in15 = (uint8_t*)anon40;
							}
						}
						else 
						{
							*(uint8_t*)phi17 = *phi16;
							*anon18 = *phi16;
							phi_in12 = anon20;
							uint64_t anon42 = phi17 + 1;
							phi_in13 = anon42;
							phi_in14 = (uint8_t*)anon42;
							phi_in15 = anon19;
						}
					}
				}
				else 
				{
					*phi_in14 = *phi16;
					uint64_t anon43 = phi17 + 1;
					phi_in13 = anon43;
					if (*phi16 == 0)
					{
						break;
					}
					else 
					{
						phi_in12 = anon20;
						phi_in13 = anon43;
						phi_in14 = (uint8_t*)anon43;
					}
				}
			}
		}
		while (*phi16 != 0);
		*anon10 = (uint32_t)phi_in13 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint32_t phi_in1;
	*(uint64_t*)0x603b00 = cb(4196603);
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	phi_in1 = *anon2;
	uint8_t anon3 = (uint8_t)(*anon2 >> 1) & 0x1f;
	if (anon3 != 0)
	{
		phi_in1 = (uint32_t)((__zext uint64_t)*anon2 << (__zext uint64_t)anon3);
	}
	*anon2 = phi_in1 * phi_in1;
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196707);
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

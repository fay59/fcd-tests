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
	uint64_t phi2 = *(uint64_t*)0x601288;
	do
	{
		anon3 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi2);
		*(uint64_t*)0x603b08 = (uint64_t)anon3;
		if (anon3 != null)
		{
			uint64_t anon4 = cb(4195727);
			*(uint64_t*)0x603b00 = anon4;
			fwrite((uint8_t*)anon4, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi2 = *anon1;
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
	uint64_t phi4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		uint32_t* phi6 = phi_in5;
		uint16_t anon8 = (uint16_t)*phi6;
		anon7 = anon8 - 257 & (anon8 ^ 0x8080) & 0x8080;
		if (anon7 == 0)
		{
			anon9 = (phi4 & 0xffffffff) + 4;
			phi4 = anon9;
			phi_in5 = (uint32_t*)anon9;
		}
	}
	while (anon7 == 0);
	uint32_t* anon10 = (uint32_t*)0x6012c0;
	uint8_t anon11 = (uint8_t)anon7;
	*anon10 = (uint32_t)anon9 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon11, anon11).field1 - 6306624;
	uint64_t phi_in12 = 6306624;
	uint64_t phi13 = 6296320;
	uint8_t* phi14 = (uint8_t*)0x601300;
	uint8_t* phi_in15 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi18;
		uint64_t phi19;
		do
		{
			uint64_t phi_in16 = phi13;
			uint8_t* phi17 = phi14;
			phi18 = phi_in15;
			phi19 = phi_in16;
			uint64_t phi20 = phi_in12;
			uint64_t phi_in21 = phi_in16;
			if (*phi18 != 0)
			{
				uint64_t anon25;
				uint64_t phi22 = phi_in21;
				if (*phi18 == *anon3)
				{
					anon25 = phi20 + 1;
					uint8_t* anon24 = (uint8_t*)anon25;
					uint8_t* anon23 = strchr(anon24, (__sext int32_t)*phi18);
					if (anon23 == null)
					{
						*(uint8_t*)phi22 = *phi18;
						phi_in12 = anon25;
						uint64_t anon26 = phi22 + 1;
						phi13 = anon26;
						phi14 = (uint8_t*)anon26;
						phi_in15 = anon24;
					}
					else 
					{
						*anon23 = 0;
						if (strchr(anon24, 32) == null)
						{
							uint64_t phi27;
							uint8_t* anon28 = getenv(anon24);
							phi27 = (uint64_t)anon28;
							uint64_t phi29 = phi22;
							if (anon28 == null)
							{
								*anon23 = *anon3;
								*(uint8_t*)phi22 = *anon3;
								*(uint8_t*)(phi22 + 1) = *anon3;
								uint64_t anon30 = phi20 + 2;
								phi_in12 = anon30;
								uint64_t anon31 = phi22 + 2;
								phi13 = anon31;
								phi14 = (uint8_t*)anon31;
								phi_in15 = (uint8_t*)anon30;
							}
							else 
							{
								uint8_t* anon32;
								while (true && !(*(uint8_t*)phi27 == 0))
								{
									uint64_t phi33;
									if (*(uint8_t*)phi27 == 92)
									{
										anon32 = (uint8_t*)phi29;
										*anon32 = 92;
										uint64_t anon34 = phi27 + 1;
										phi33 = anon34;
										uint8_t anon36 = *(uint8_t*)anon34 - 48;
										bool anon35 = *(uint8_t*)anon34 == 57 | anon36 < 9;
										if (anon35)
										{
											*anon32 = anon36;
											uint64_t anon37 = phi27 + 2;
											phi33 = anon37;
											uint64_t anon38 = (__zext uint64_t)*(uint8_t*)anon37 + 4294967248;
											if ((uint8_t)anon38 < 10)
											{
												uint64_t phi39;
												uint64_t phi41;
												uint64_t anon40 = anon38 + ((__zext uint64_t)*(uint8_t*)anon34 << 3) + 34359737984;
												phi39 = anon40;
												uint64_t anon42 = phi27 + 3;
												phi41 = anon42;
												if (*(uint8_t*)anon42 - 48 < 10)
												{
													phi39 = (__zext uint64_t)*(uint8_t*)anon42 + 4294967248 + (anon40 << 3) & 0xffffffff;
													phi41 = phi27 + 4;
												}
												uint64_t phi_in43 = phi41;
												*anon32 = (uint8_t)phi39;
												phi33 = phi_in43;
											}
										}
									}
									bool anon44 = *(uint8_t*)phi27 == 0 || *(uint8_t*)phi27 == 92;
									if (!anon44)
									{
										*anon32 = *(uint8_t*)phi27;
										phi33 = phi27 + 1;
									}
									if (!anon44 || *(uint8_t*)phi27 == 92)
									{
										phi27 = phi33;
										phi29 = phi29 + 1;
									}
								}
								uint64_t anon45 = (uint64_t)anon23 + 1;
								phi_in12 = anon45;
								phi13 = phi29;
								phi14 = anon32;
								phi_in15 = (uint8_t*)anon45;
							}
						}
						else 
						{
							*(uint8_t*)phi22 = *phi18;
							*anon23 = *phi18;
							phi_in12 = anon25;
							uint64_t anon46 = phi22 + 1;
							phi13 = anon46;
							phi14 = (uint8_t*)anon46;
							phi_in15 = anon24;
						}
					}
				}
				else 
				{
					*phi17 = *phi18;
					uint64_t anon47 = phi22 + 1;
					phi19 = anon47;
					if (*phi18 == 0)
					{
						break;
					}
					else 
					{
						phi20 = anon25;
						phi_in21 = anon47;
						phi17 = (uint8_t*)anon47;
					}
				}
			}
		}
		while (*phi18 != 0);
		*anon10 = (uint32_t)phi19 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint32_t phi1;
	*(uint64_t*)0x603b00 = cb(4196603);
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	phi1 = *anon2;
	uint8_t anon3 = (uint8_t)(*anon2 >> 1) & 0x1f;
	if (anon3 != 0)
	{
		phi1 = (uint32_t)((__zext uint64_t)*anon2 << (__zext uint64_t)anon3);
	}
	*anon2 = phi1 * phi1;
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

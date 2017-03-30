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
	uint64_t phi12 = 6306624;
	uint64_t phi13 = 6296320;
	uint8_t* phi14 = (uint8_t*)0x601300;
	uint8_t* phi_in15 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi19;
		uint64_t phi20;
		do
		{
			uint64_t phi_in16 = phi12;
			uint64_t phi_in17 = phi13;
			uint8_t* phi_in18 = phi14;
			phi19 = phi_in15;
			phi20 = phi_in17;
			uint64_t phi21 = phi_in16;
			uint8_t* phi22 = phi_in18;
			if (*phi19 != 0)
			{
				uint64_t anon26;
				uint64_t phi23 = phi_in17;
				if (*phi19 == *anon3)
				{
					anon26 = phi21 + 1;
					uint8_t* anon25 = (uint8_t*)anon26;
					uint8_t* anon24 = strchr(anon25, (__sext int32_t)*phi19);
					if (anon24 == null)
					{
						*(uint8_t*)phi23 = *phi19;
						phi12 = anon26;
						uint64_t anon27 = phi23 + 1;
						phi13 = anon27;
						phi14 = (uint8_t*)anon27;
						phi_in15 = anon25;
					}
					else 
					{
						*anon24 = 0;
						if (strchr(anon25, 32) == null)
						{
							uint64_t phi28;
							uint8_t* anon29 = getenv(anon25);
							phi28 = (uint64_t)anon29;
							uint64_t phi30 = phi23;
							if (anon29 == null)
							{
								*anon24 = *anon3;
								*(uint8_t*)phi23 = *anon3;
								*(uint8_t*)(phi23 + 1) = *anon3;
								uint64_t anon31 = phi21 + 2;
								phi12 = anon31;
								uint64_t anon32 = phi23 + 2;
								phi13 = anon32;
								phi14 = (uint8_t*)anon32;
								phi_in15 = (uint8_t*)anon31;
							}
							else 
							{
								uint8_t* anon47;
								while (true && !(*(uint8_t*)phi28 == 0))
								{
									uint8_t phi34;
									uint64_t phi_in35;
									bool anon33 = *(uint8_t*)phi28 == 92;
									if (anon33)
									{
										phi34 = 92;
										uint64_t anon36 = phi28 + 1;
										phi_in35 = anon36;
										uint8_t anon38 = *(uint8_t*)anon36 - 48;
										bool anon37 = *(uint8_t*)anon36 == 57 | anon38 < 9;
										if (anon37)
										{
											phi34 = anon38;
											uint64_t anon39 = phi28 + 2;
											phi_in35 = anon39;
											uint64_t anon40 = (__zext uint64_t)*(uint8_t*)anon39 + 4294967248;
											if ((uint8_t)anon40 < 10)
											{
												uint64_t phi41;
												uint64_t phi_in43;
												uint64_t anon42 = anon40 + ((__zext uint64_t)*(uint8_t*)anon36 << 3) + 34359737984;
												phi41 = anon42;
												uint64_t anon44 = phi28 + 3;
												phi_in43 = anon44;
												if (*(uint8_t*)anon44 - 48 < 10)
												{
													phi41 = (__zext uint64_t)*(uint8_t*)anon44 + 4294967248 + (anon42 << 3) & 0xffffffff;
													phi_in43 = phi28 + 4;
												}
												phi34 = (uint8_t)phi41;
												phi_in35 = phi_in43;
											}
										}
									}
									bool anon46 = *(uint8_t*)phi28 == 0 || *(uint8_t*)phi28 == 92;
									bool anon45 = !anon46;
									if (anon45)
									{
										phi34 = *(uint8_t*)phi28;
										phi_in35 = phi28 + 1;
									}
									if (!anon46 || *(uint8_t*)phi28 == 92)
									{
										anon47 = (uint8_t*)phi30;
										*anon47 = phi34;
										phi28 = phi_in35;
										phi30 = phi30 + 1;
									}
								}
								uint64_t anon48 = (uint64_t)anon24 + 1;
								phi12 = anon48;
								phi13 = phi30;
								phi14 = anon47;
								phi_in15 = (uint8_t*)anon48;
							}
						}
						else 
						{
							*(uint8_t*)phi23 = *phi19;
							*anon24 = *phi19;
							phi12 = anon26;
							uint64_t anon49 = phi23 + 1;
							phi13 = anon49;
							phi14 = (uint8_t*)anon49;
							phi_in15 = anon25;
						}
					}
				}
				else 
				{
					*phi22 = *phi19;
					uint64_t anon50 = phi23 + 1;
					phi20 = anon50;
					if (*phi19 == 0)
					{
						break;
					}
					else 
					{
						phi21 = anon26;
						phi_in17 = anon50;
						phi22 = (uint8_t*)anon50;
					}
				}
			}
		}
		while (*phi19 != 0);
		*anon10 = (uint32_t)phi20 - 6296320;
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

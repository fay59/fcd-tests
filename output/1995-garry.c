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
		uint8_t* phi17;
		uint64_t phi18;
		do
		{
			uint64_t phi_in16 = phi13;
			phi17 = phi_in15;
			phi18 = phi_in16;
			uint64_t phi19 = phi_in12;
			if (*phi17 != 0)
			{
				uint64_t anon23;
				uint64_t phi20 = phi_in16;
				if (*phi17 == *anon3)
				{
					anon23 = phi19 + 1;
					uint8_t* anon22 = (uint8_t*)anon23;
					uint8_t* anon21 = strchr(anon22, (__sext int32_t)*phi17);
					if (anon21 == null)
					{
						*(uint8_t*)phi20 = *phi17;
						phi_in12 = anon23;
						uint64_t anon24 = phi20 + 1;
						phi13 = anon24;
						phi14 = (uint8_t*)anon24;
						phi_in15 = anon22;
					}
					else 
					{
						*anon21 = 0;
						if (strchr(anon22, 32) == null)
						{
							uint64_t phi25;
							uint8_t* anon26 = getenv(anon22);
							phi25 = (uint64_t)anon26;
							phi13 = phi20;
							if (anon26 == null)
							{
								*anon21 = *anon3;
								*(uint8_t*)phi20 = *anon3;
								*(uint8_t*)(phi20 + 1) = *anon3;
								uint64_t anon27 = phi19 + 2;
								phi_in12 = anon27;
								uint64_t anon28 = phi20 + 2;
								phi13 = anon28;
								phi14 = (uint8_t*)anon28;
								phi_in15 = (uint8_t*)anon27;
							}
							else 
							{
								uint8_t* anon42;
								while (true && !(*(uint8_t*)phi25 == 0))
								{
									uint8_t phi29;
									uint64_t phi_in30;
									if (*(uint8_t*)phi25 == 92)
									{
										phi29 = 92;
										uint64_t anon31 = phi25 + 1;
										phi_in30 = anon31;
										uint8_t anon33 = *(uint8_t*)anon31 - 48;
										bool anon32 = *(uint8_t*)anon31 == 57 | anon33 < 9;
										if (anon32)
										{
											phi29 = anon33;
											uint64_t anon34 = phi25 + 2;
											phi_in30 = anon34;
											uint64_t anon35 = (__zext uint64_t)*(uint8_t*)anon34 + 4294967248;
											if ((uint8_t)anon35 < 10)
											{
												uint64_t phi36;
												uint64_t phi38;
												uint64_t anon37 = anon35 + ((__zext uint64_t)*(uint8_t*)anon31 << 3) + 34359737984;
												phi36 = anon37;
												uint64_t anon39 = phi25 + 3;
												phi38 = anon39;
												if (*(uint8_t*)anon39 - 48 < 10)
												{
													phi36 = (__zext uint64_t)*(uint8_t*)anon39 + 4294967248 + (anon37 << 3) & 0xffffffff;
													phi38 = phi25 + 4;
												}
												uint64_t phi_in40 = phi38;
												phi29 = (uint8_t)phi36;
												phi_in30 = phi_in40;
											}
										}
									}
									bool anon41 = *(uint8_t*)phi25 == 0 || *(uint8_t*)phi25 == 92;
									if (!anon41)
									{
										phi29 = *(uint8_t*)phi25;
										phi_in30 = phi25 + 1;
									}
									if (!anon41 || *(uint8_t*)phi25 == 92)
									{
										anon42 = (uint8_t*)phi13;
										*anon42 = phi29;
										phi25 = phi_in30;
										phi13 = phi13 + 1;
									}
								}
								uint64_t anon43 = (uint64_t)anon21 + 1;
								phi_in12 = anon43;
								phi14 = anon42;
								phi_in15 = (uint8_t*)anon43;
							}
						}
						else 
						{
							*(uint8_t*)phi20 = *phi17;
							*anon21 = *phi17;
							phi_in12 = anon23;
							uint64_t anon44 = phi20 + 1;
							phi13 = anon44;
							phi14 = (uint8_t*)anon44;
							phi_in15 = anon22;
						}
					}
				}
				else 
				{
					*phi14 = *phi17;
					uint64_t anon45 = phi20 + 1;
					phi18 = anon45;
					if (*phi17 == 0)
					{
						break;
					}
					else 
					{
						phi19 = anon23;
						phi_in16 = anon45;
						phi14 = (uint8_t*)anon45;
					}
				}
			}
		}
		while (*phi17 != 0);
		*anon10 = (uint32_t)phi18 - 6296320;
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

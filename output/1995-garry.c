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
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi_in2 = *(uint64_t*)0x601288;
	do
	{
		uint64_t phi3 = phi_in2;
		anon4 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi3);
		*(uint64_t*)0x603b08 = (uint64_t)anon4;
		if (anon4 != null)
		{
			uint64_t anon5 = cb(4195727);
			*(uint64_t*)0x603b00 = anon5;
			fwrite((uint8_t*)anon5, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi_in2 = *anon1;
		}
	}
	while (anon4 != null);
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
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi5 = (uint32_t*)0x603b40;
	uint64_t phi6 = phi_in4;
	uint16_t anon9 = (uint16_t)*phi5;
	uint8_t anon8 = (uint8_t)(anon9 - 257 & (anon9 ^ 0x8080) & 0x8080);
	struct { uint8_t field0; bool field1; } anon7 = llvm.uadd.with.overflow.i8(anon8, anon8);
	uint32_t* anon10 = (uint32_t*)0x6012c0;
	uint64_t anon11 = (phi6 & 0xffffffff) + 4;
	*anon10 = (uint32_t)anon11 - 3 - (__zext uint32_t)anon7.field1 - 6306624;
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
			uint8_t* phi18 = phi14;
			phi19 = phi_in15;
			phi20 = phi_in17;
			uint64_t phi21 = phi_in16;
			if (*phi19 != 0)
			{
				uint64_t anon25;
				uint64_t phi22 = phi_in17;
				if (*phi19 == *anon3)
				{
					anon25 = phi21 + 1;
					uint8_t* anon24 = (uint8_t*)anon25;
					uint8_t* anon23 = strchr(anon24, (__sext int32_t)*phi19);
					if (anon23 == null)
					{
						*(uint8_t*)phi22 = *phi19;
						phi12 = anon25;
						uint64_t anon26 = phi22 + 1;
						phi13 = anon26;
						phi14 = (uint8_t*)anon26;
						phi_in15 = anon24;
					}
					else 
					{
						*anon23 = 0;
						uint8_t* anon27 = strchr(anon24, 32);
						if (anon27 == null)
						{
							uint8_t* anon28 = getenv(anon24);
							uint64_t phi29 = (uint64_t)anon28;
							uint64_t phi_in30 = phi22;
							if (anon28 == null)
							{
								*anon23 = *anon3;
								*(uint8_t*)phi22 = *anon3;
								*(uint8_t*)(phi22 + 1) = *anon3;
								uint64_t anon31 = phi21 + 2;
								phi12 = anon31;
								uint64_t anon32 = phi22 + 2;
								phi13 = anon32;
								phi14 = (uint8_t*)anon32;
								phi_in15 = (uint8_t*)anon31;
							}
							else 
							{
								uint64_t phi33;
								uint8_t* anon44;
								while (true)
								{
									uint8_t phi34;
									phi33 = phi_in30;
									if (*(uint8_t*)phi29 == 0)
									{
										break;
									}
									if (*(uint8_t*)phi29 == 92)
									{
										phi34 = 92;
										uint64_t anon35 = phi29 + 1;
										phi29 = anon35;
										uint8_t anon36 = *(uint8_t*)anon35 - 48;
										if (*(uint8_t*)anon35 == 57 | anon36 < 9)
										{
											phi34 = anon36;
											uint64_t anon37 = phi29 + 2;
											phi29 = anon37;
											uint64_t anon38 = (__zext uint64_t)*(uint8_t*)anon37 + 4294967248;
											if ((uint8_t)anon38 < 10)
											{
												uint64_t phi39;
												uint64_t phi41;
												uint64_t anon40 = anon38 + ((__zext uint64_t)*(uint8_t*)anon35 << 3) + 34359737984;
												phi39 = anon40;
												uint64_t anon42 = phi29 + 3;
												phi41 = anon42;
												if (*(uint8_t*)anon42 - 48 < 10)
												{
													phi39 = (__zext uint64_t)*(uint8_t*)anon42 + 4294967248 + (anon40 << 3) & 0xffffffff;
													phi41 = phi29 + 4;
												}
												phi29 = phi41;
												phi34 = (uint8_t)phi39;
											}
										}
									}
									bool anon43 = *(uint8_t*)phi29 == 0 || *(uint8_t*)phi29 == 92;
									if (!anon43)
									{
										phi34 = *(uint8_t*)phi29;
										phi29 = phi29 + 1;
									}
									if (!anon43 || *(uint8_t*)phi29 == 92)
									{
										anon44 = (uint8_t*)phi33;
										*anon44 = phi34;
										phi_in30 = phi33 + 1;
									}
								}
								uint64_t anon45 = (uint64_t)anon23 + 1;
								phi12 = anon45;
								phi13 = phi33;
								phi14 = anon44;
								phi_in15 = (uint8_t*)anon45;
							}
						}
						else 
						{
							*(uint8_t*)phi22 = *phi19;
							*anon23 = *phi19;
							phi12 = anon25;
							uint64_t anon46 = phi22 + 1;
							phi13 = anon46;
							phi14 = (uint8_t*)anon46;
							phi_in15 = anon24;
						}
					}
				}
				else 
				{
					*phi18 = *phi19;
					uint64_t anon47 = phi22 + 1;
					phi20 = anon47;
					if (*phi19 == 0)
					{
						break;
					}
					else 
					{
						phi21 = anon25;
						phi_in17 = anon47;
						phi18 = (uint8_t*)anon47;
					}
				}
			}
		}
		while (*phi19 != 0);
		*anon10 = (uint32_t)phi20 - 6296320;
		return 6296320;
	}
	phi_in4 = anon11;
	phi5 = (uint32_t*)anon11;
}
void tng(uint64_t arg0)
{
	uint32_t phi2;
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon3 = (uint32_t*)0x6012c0;
	phi2 = *anon3;
	uint8_t anon4 = (uint8_t)(*anon3 >> 1) & 0x1f;
	if (anon4 != 0)
	{
		phi2 = (uint32_t)((__zext uint64_t)*anon3 << (__zext uint64_t)anon4);
	}
	*anon3 = phi2 * phi2;
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

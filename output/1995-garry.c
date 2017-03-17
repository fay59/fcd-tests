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
	uint8_t* phi_in14 = (uint8_t*)0x601300;
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
			uint8_t* phi19 = phi_in14;
			if (*phi17 != 0)
			{
				uint64_t anon23;
				uint64_t phi20 = phi_in16;
				if (*phi17 == *anon3)
				{
					anon23 = phi12 + 1;
					uint8_t* anon22 = (uint8_t*)anon23;
					uint8_t* anon21 = strchr(anon22, (__sext int32_t)*phi17);
					if (anon21 == null)
					{
						*(uint8_t*)phi20 = *phi17;
						phi12 = anon23;
						uint64_t anon24 = phi20 + 1;
						phi13 = anon24;
						phi_in14 = (uint8_t*)anon24;
						phi_in15 = anon22;
					}
					else 
					{
						*anon21 = 0;
						uint8_t* anon25 = strchr(anon22, 32);
						if (anon25 == null)
						{
							uint8_t* anon26 = getenv(anon22);
							uint64_t phi27 = (uint64_t)anon26;
							uint64_t phi_in28 = phi20;
							if (anon26 == null)
							{
								*anon21 = *anon3;
								*(uint8_t*)phi20 = *anon3;
								*(uint8_t*)(phi20 + 1) = *anon3;
								uint64_t anon29 = phi12 + 2;
								phi12 = anon29;
								uint64_t anon30 = phi20 + 2;
								phi13 = anon30;
								phi_in14 = (uint8_t*)anon30;
								phi_in15 = (uint8_t*)anon29;
							}
							else 
							{
								uint64_t phi31;
								uint8_t* anon43;
								while (true)
								{
									uint8_t phi32;
									uint64_t phi33;
									phi31 = phi_in28;
									if (*(uint8_t*)phi27 == 0)
									{
										break;
									}
									if (*(uint8_t*)phi27 == 92)
									{
										phi32 = 92;
										uint64_t anon34 = phi27 + 1;
										phi33 = anon34;
										uint8_t anon35 = *(uint8_t*)anon34 - 48;
										if (*(uint8_t*)anon34 == 57 | anon35 < 9)
										{
											phi32 = anon35;
											uint64_t anon36 = phi27 + 2;
											phi33 = anon36;
											uint64_t anon37 = (__zext uint64_t)*(uint8_t*)anon36 + 4294967248;
											if ((uint8_t)anon37 < 10)
											{
												uint64_t phi38;
												uint64_t phi40;
												uint64_t anon39 = anon37 + ((__zext uint64_t)*(uint8_t*)anon34 << 3) + 34359737984;
												phi38 = anon39;
												uint64_t anon41 = phi27 + 3;
												phi40 = anon41;
												if (*(uint8_t*)anon41 - 48 < 10)
												{
													phi38 = (__zext uint64_t)*(uint8_t*)anon41 + 4294967248 + (anon39 << 3) & 0xffffffff;
													phi40 = phi27 + 4;
												}
												phi33 = phi40;
												phi32 = (uint8_t)phi38;
											}
										}
									}
									bool anon42 = *(uint8_t*)phi27 == 0 || *(uint8_t*)phi27 == 92;
									if (!anon42)
									{
										phi32 = *(uint8_t*)phi27;
										phi33 = phi27 + 1;
									}
									if (!anon42 || *(uint8_t*)phi27 == 92)
									{
										anon43 = (uint8_t*)phi31;
										*anon43 = phi32;
										phi27 = phi33;
										phi_in28 = phi31 + 1;
									}
								}
								uint64_t anon44 = (uint64_t)anon21 + 1;
								phi12 = anon44;
								phi13 = phi31;
								phi_in14 = anon43;
								phi_in15 = (uint8_t*)anon44;
							}
						}
						else 
						{
							*(uint8_t*)phi20 = *phi17;
							*anon21 = *phi17;
							phi12 = anon23;
							uint64_t anon45 = phi20 + 1;
							phi13 = anon45;
							phi_in14 = (uint8_t*)anon45;
							phi_in15 = anon22;
						}
					}
				}
				else 
				{
					*phi19 = *phi17;
					uint64_t anon46 = phi20 + 1;
					phi18 = anon46;
					if (*phi17 == 0)
					{
						break;
					}
					else 
					{
						phi12 = anon23;
						phi_in16 = anon46;
						phi19 = (uint8_t*)anon46;
					}
				}
			}
		}
		while (*phi17 != 0);
		*anon10 = (uint32_t)phi18 - 6296320;
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

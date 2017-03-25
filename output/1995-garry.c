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
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi4 = 6306624;
	uint32_t* phi5 = (uint32_t*)0x603b40;
	uint32_t* anon6 = (uint32_t*)0x6012c0;
	uint64_t anon7 = (phi4 & 0xffffffff) + 4;
	uint16_t anon10 = (uint16_t)*phi5;
	uint16_t anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
	uint8_t anon8 = (uint8_t)anon9;
	*anon6 = (uint32_t)anon7 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon8, anon8).field1 - 6306624;
	uint64_t phi11 = 6306624;
	uint64_t phi12 = 6296320;
	uint8_t* phi_in13 = (uint8_t*)0x601300;
	uint8_t* phi_in14 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi16;
		uint8_t* phi17;
		do
		{
			uint64_t phi_in15 = phi11;
			phi16 = phi12;
			phi17 = phi_in14;
			uint64_t phi18 = phi_in15;
			uint64_t phi_in19 = phi16;
			uint8_t* phi20 = phi_in13;
			if (*phi17 != 0)
			{
				uint64_t anon24;
				uint64_t phi21 = phi_in19;
				if (*phi17 == *anon3)
				{
					anon24 = phi18 + 1;
					uint8_t* anon23 = (uint8_t*)anon24;
					uint8_t* anon22 = strchr(anon23, (__sext int32_t)*phi17);
					if (anon22 == null)
					{
						*(uint8_t*)phi21 = *phi17;
						phi11 = anon24;
						uint64_t anon25 = phi21 + 1;
						phi12 = anon25;
						phi_in13 = (uint8_t*)anon25;
						phi_in14 = anon23;
					}
					else 
					{
						*anon22 = 0;
						if (strchr(anon23, 32) == null)
						{
							uint64_t phi26;
							uint8_t* anon27 = getenv(anon23);
							phi26 = (uint64_t)anon27;
							uint64_t phi28 = phi21;
							if (anon27 == null)
							{
								*anon22 = *anon3;
								*(uint8_t*)phi21 = *anon3;
								*(uint8_t*)(phi21 + 1) = *anon3;
								uint64_t anon29 = phi18 + 2;
								phi11 = anon29;
								uint64_t anon30 = phi21 + 2;
								phi12 = anon30;
								phi_in13 = (uint8_t*)anon30;
								phi_in14 = (uint8_t*)anon29;
							}
							else 
							{
								uint8_t* anon43;
								while (true && !(*(uint8_t*)phi26 == 0))
								{
									uint8_t phi31;
									uint64_t phi32;
									if (*(uint8_t*)phi26 == 92)
									{
										phi31 = 92;
										uint64_t anon33 = phi26 + 1;
										phi32 = anon33;
										uint8_t anon35 = *(uint8_t*)anon33 - 48;
										bool anon34 = *(uint8_t*)anon33 == 57 | anon35 < 9;
										if (anon34)
										{
											phi31 = anon35;
											uint64_t anon36 = phi26 + 2;
											phi32 = anon36;
											uint64_t anon37 = (__zext uint64_t)*(uint8_t*)anon36 + 4294967248;
											if ((uint8_t)anon37 < 10)
											{
												uint64_t phi38;
												uint64_t phi_in40;
												uint64_t anon39 = anon37 + ((__zext uint64_t)*(uint8_t*)anon33 << 3) + 34359737984;
												phi38 = anon39;
												uint64_t anon41 = phi26 + 3;
												phi_in40 = anon41;
												if (*(uint8_t*)anon41 - 48 < 10)
												{
													phi38 = (__zext uint64_t)*(uint8_t*)anon41 + 4294967248 + (anon39 << 3) & 0xffffffff;
													phi_in40 = phi26 + 4;
												}
												phi31 = (uint8_t)phi38;
												phi32 = phi_in40;
											}
										}
									}
									bool anon42 = *(uint8_t*)phi26 == 0 || *(uint8_t*)phi26 == 92;
									if (!anon42)
									{
										phi31 = *(uint8_t*)phi26;
										phi32 = phi26 + 1;
									}
									if (!anon42 || *(uint8_t*)phi26 == 92)
									{
										anon43 = (uint8_t*)phi28;
										*anon43 = phi31;
										phi26 = phi32;
										phi28 = phi28 + 1;
									}
								}
								uint64_t anon44 = (uint64_t)anon22 + 1;
								phi11 = anon44;
								phi12 = phi28;
								phi_in13 = anon43;
								phi_in14 = (uint8_t*)anon44;
							}
						}
						else 
						{
							*(uint8_t*)phi21 = *phi17;
							*anon22 = *phi17;
							phi11 = anon24;
							uint64_t anon45 = phi21 + 1;
							phi12 = anon45;
							phi_in13 = (uint8_t*)anon45;
							phi_in14 = anon23;
						}
					}
				}
				else 
				{
					*phi20 = *phi17;
					uint64_t anon46 = phi21 + 1;
					phi16 = anon46;
					if (*phi17 == 0)
					{
						break;
					}
					else 
					{
						phi18 = anon24;
						phi_in19 = anon46;
						phi20 = (uint8_t*)anon46;
					}
				}
			}
		}
		while (*phi17 != 0);
		*anon6 = (uint32_t)phi16 - 6296320;
		return 6296320;
	}
	phi4 = anon7;
	phi5 = (uint32_t*)anon7;
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

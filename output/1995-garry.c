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
	uint64_t phi_in13 = 6296320;
	uint8_t* phi14 = (uint8_t*)0x601300;
	uint8_t* phi_in15 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi16;
		uint64_t phi17;
		do
		{
			phi16 = phi_in15;
			phi17 = phi_in13;
			uint64_t phi18 = phi_in12;
			if (*phi16 != 0)
			{
				uint64_t anon22;
				uint64_t phi19 = phi_in13;
				if (*phi16 == *anon3)
				{
					anon22 = phi18 + 1;
					uint8_t* anon21 = (uint8_t*)anon22;
					uint8_t* anon20 = strchr(anon21, (__sext int32_t)*phi16);
					if (anon20 == null)
					{
						*(uint8_t*)phi19 = *phi16;
						phi_in12 = anon22;
						uint64_t anon23 = phi19 + 1;
						phi_in13 = anon23;
						phi14 = (uint8_t*)anon23;
						phi_in15 = anon21;
					}
					else 
					{
						*anon20 = 0;
						if (strchr(anon21, 32) == null)
						{
							uint64_t phi24;
							uint8_t* anon25 = getenv(anon21);
							phi24 = (uint64_t)anon25;
							uint64_t phi26 = phi19;
							if (anon25 == null)
							{
								*anon20 = *anon3;
								*(uint8_t*)phi19 = *anon3;
								*(uint8_t*)(phi19 + 1) = *anon3;
								uint64_t anon27 = phi18 + 2;
								phi_in12 = anon27;
								uint64_t anon28 = phi19 + 2;
								phi_in13 = anon28;
								phi14 = (uint8_t*)anon28;
								phi_in15 = (uint8_t*)anon27;
							}
							else 
							{
								uint8_t* anon43;
								while (true && !(*(uint8_t*)phi24 == 0))
								{
									uint8_t phi30;
									uint64_t phi31;
									bool anon29 = *(uint8_t*)phi24 == 92;
									if (anon29)
									{
										phi30 = 92;
										uint64_t anon32 = phi24 + 1;
										phi31 = anon32;
										uint8_t anon34 = *(uint8_t*)anon32 - 48;
										bool anon33 = *(uint8_t*)anon32 == 57 | anon34 < 9;
										if (anon33)
										{
											phi30 = anon34;
											uint64_t anon35 = phi24 + 2;
											phi31 = anon35;
											uint64_t anon36 = (__zext uint64_t)*(uint8_t*)anon35 + 4294967248;
											if ((uint8_t)anon36 < 10)
											{
												uint64_t phi37;
												uint64_t phi_in39;
												uint64_t anon38 = anon36 + ((__zext uint64_t)*(uint8_t*)anon32 << 3) + 34359737984;
												phi37 = anon38;
												uint64_t anon40 = phi24 + 3;
												phi_in39 = anon40;
												if (*(uint8_t*)anon40 - 48 < 10)
												{
													phi37 = (__zext uint64_t)*(uint8_t*)anon40 + 4294967248 + (anon38 << 3) & 0xffffffff;
													phi_in39 = phi24 + 4;
												}
												phi30 = (uint8_t)phi37;
												phi31 = phi_in39;
											}
										}
									}
									bool anon42 = *(uint8_t*)phi24 == 0 || *(uint8_t*)phi24 == 92;
									bool anon41 = !anon42;
									if (anon41)
									{
										phi30 = *(uint8_t*)phi24;
										phi31 = phi24 + 1;
									}
									if (!anon42 || *(uint8_t*)phi24 == 92)
									{
										anon43 = (uint8_t*)phi26;
										*anon43 = phi30;
										phi24 = phi31;
										phi26 = phi26 + 1;
									}
								}
								uint64_t anon44 = (uint64_t)anon20 + 1;
								phi_in12 = anon44;
								phi_in13 = phi26;
								phi14 = anon43;
								phi_in15 = (uint8_t*)anon44;
							}
						}
						else 
						{
							*(uint8_t*)phi19 = *phi16;
							*anon20 = *phi16;
							phi_in12 = anon22;
							uint64_t anon45 = phi19 + 1;
							phi_in13 = anon45;
							phi14 = (uint8_t*)anon45;
							phi_in15 = anon21;
						}
					}
				}
				else 
				{
					*phi14 = *phi16;
					uint64_t anon46 = phi19 + 1;
					phi17 = anon46;
					if (*phi16 == 0)
					{
						break;
					}
					else 
					{
						phi18 = anon22;
						phi_in13 = anon46;
						phi14 = (uint8_t*)anon46;
					}
				}
			}
		}
		while (*phi16 != 0);
		*anon10 = (uint32_t)phi17 - 6296320;
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

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
	uint64_t anon8;
	uint16_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		uint64_t phi6 = phi_in4;
		uint32_t* phi7 = phi_in5;
		anon8 = (phi6 & 0xffffffff) + 4;
		phi_in4 = anon8;
		phi_in5 = (uint32_t*)anon8;
		uint16_t anon10 = (uint16_t)*phi7;
		anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
	}
	while (anon9 == 0);
	uint8_t anon12 = (uint8_t)anon9;
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon13 = (uint32_t*)0x6012c0;
	*anon13 = (uint32_t)anon8 - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi14 = 6306624;
	uint64_t phi15 = 6296320;
	uint8_t* phi16 = (uint8_t*)0x601300;
	uint8_t* phi_in17 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi20;
		uint64_t phi21;
		do
		{
			uint64_t phi18 = phi15;
			uint8_t* phi_in19 = phi16;
			phi20 = phi_in17;
			phi21 = phi18;
			uint8_t* phi22 = phi_in19;
			if (*phi20 != 0)
			{
				uint64_t anon25;
				if (*phi20 == *anon3)
				{
					anon25 = phi14 + 1;
					uint8_t* anon24 = (uint8_t*)anon25;
					uint8_t* anon23 = strchr(anon24, (__sext int32_t)*phi20);
					if (anon23 == null)
					{
						*(uint8_t*)phi18 = *phi20;
						phi14 = anon25;
						uint64_t anon26 = phi18 + 1;
						phi15 = anon26;
						phi16 = (uint8_t*)anon26;
						phi_in17 = anon24;
					}
					else 
					{
						*anon23 = 0;
						uint8_t* anon27 = strchr(anon24, 32);
						if (anon27 == null)
						{
							uint8_t* anon28 = getenv(anon24);
							if (anon28 == null)
							{
								*anon23 = *anon3;
								*(uint8_t*)phi18 = *anon3;
								*(uint8_t*)(phi18 + 1) = *anon3;
								uint64_t anon29 = phi14 + 2;
								phi14 = anon29;
								uint64_t anon30 = phi18 + 2;
								phi15 = anon30;
								phi16 = (uint8_t*)anon30;
								phi_in17 = (uint8_t*)anon29;
							}
							else 
							{
								uint64_t phi33;
								uint64_t phi34;
								uint8_t* anon44;
								uint64_t phi_in31 = (uint64_t)anon28;
								uint64_t phi_in32 = phi18;
								do
								{
									phi33 = phi_in31;
									phi34 = phi_in32;
									if (*(uint8_t*)phi33 != 0)
									{
										uint8_t phi35 = *(uint8_t*)phi33;
										uint64_t anon36 = phi33 + 1;
										phi_in31 = anon36;
										if (*(uint8_t*)phi33 == 92)
										{
											phi35 = 92;
											phi_in31 = anon36;
											uint8_t anon37 = *(uint8_t*)anon36 - 48;
											if (*(uint8_t*)anon36 == 57 | anon37 < 9)
											{
												phi35 = anon37;
												uint64_t anon38 = phi33 + 2;
												phi_in31 = anon38;
												uint64_t anon39 = (__zext uint64_t)*(uint8_t*)anon38 + 4294967248;
												if ((uint8_t)anon39 < 10)
												{
													uint64_t phi40;
													uint64_t phi42;
													uint64_t anon41 = anon39 + ((__zext uint64_t)*(uint8_t*)anon36 << 3) + 34359737984;
													phi40 = anon41;
													uint64_t anon43 = phi33 + 3;
													phi42 = anon43;
													if (*(uint8_t*)anon43 - 48 < 10)
													{
														phi40 = (__zext uint64_t)*(uint8_t*)anon43 + 4294967248 + (anon41 << 3) & 0xffffffff;
														phi42 = phi33 + 4;
													}
													phi_in31 = phi42;
													phi35 = (uint8_t)phi40;
												}
											}
										}
										anon44 = (uint8_t*)phi34;
										*anon44 = phi35;
										phi_in32 = phi34 + 1;
									}
								}
								while (*(uint8_t*)phi33 != 0);
								uint64_t anon45 = (uint64_t)anon23 + 1;
								phi14 = anon45;
								phi15 = phi34;
								phi16 = anon44;
								phi_in17 = (uint8_t*)anon45;
							}
						}
						else 
						{
							*(uint8_t*)phi18 = *phi20;
							*anon23 = *phi20;
							phi14 = anon25;
							uint64_t anon46 = phi18 + 1;
							phi15 = anon46;
							phi16 = (uint8_t*)anon46;
							phi_in17 = anon24;
						}
					}
				}
				else 
				{
					*phi22 = *phi20;
					uint64_t anon47 = (uint64_t)phi22 + 1;
					phi21 = anon47;
					phi14 = anon25;
					phi18 = anon47;
					phi22 = (uint8_t*)anon47;
					if (*phi20 == 0)
					{
						break;
					}
				}
			}
		}
		while (*phi20 != 0);
		*anon13 = (uint32_t)phi21 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint32_t phi2;
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon3 = (uint32_t*)0x6012c0;
	phi2 = *anon3;
	uint32_t anon4 = *anon3 >> 1 & 0x1f;
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

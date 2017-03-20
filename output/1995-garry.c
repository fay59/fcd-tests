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
	uint16_t anon10 = (uint16_t)*phi5;
	uint16_t anon9 = anon10 - 257 & (anon10 ^ 0x8080) & 0x8080;
	uint8_t anon8 = (uint8_t)anon9;
	struct { uint8_t field0; bool field1; } anon7 = llvm.uadd.with.overflow.i8(anon8, anon8);
	uint32_t* anon11 = (uint32_t*)0x6012c0;
	uint64_t anon12 = (phi6 & 0xffffffff) + 4;
	*anon11 = (uint32_t)anon12 - 3 - (__zext uint32_t)anon7.field1 - 6306624;
	uint64_t phi13 = 6306624;
	uint64_t phi14 = 6296320;
	uint8_t* phi15 = (uint8_t*)0x601300;
	uint8_t* phi_in16 = anon2;
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
			uint64_t phi_in17 = phi13;
			uint64_t phi_in18 = phi14;
			uint8_t* phi19 = phi15;
			phi20 = phi_in16;
			phi21 = phi_in18;
			uint64_t phi22 = phi_in17;
			if (*phi20 != 0)
			{
				uint64_t anon26;
				uint64_t phi23 = phi_in18;
				if (*phi20 == *anon3)
				{
					anon26 = phi22 + 1;
					uint8_t* anon25 = (uint8_t*)anon26;
					uint8_t* anon24 = strchr(anon25, (__sext int32_t)*phi20);
					if (anon24 == null)
					{
						*(uint8_t*)phi23 = *phi20;
						phi13 = anon26;
						uint64_t anon27 = phi23 + 1;
						phi14 = anon27;
						phi15 = (uint8_t*)anon27;
						phi_in16 = anon25;
					}
					else 
					{
						*anon24 = 0;
						uint8_t* anon28 = strchr(anon25, 32);
						if (anon28 == null)
						{
							uint8_t* anon29 = getenv(anon25);
							uint64_t phi30 = (uint64_t)anon29;
							uint64_t phi_in31 = phi23;
							if (anon29 == null)
							{
								*anon24 = *anon3;
								*(uint8_t*)phi23 = *anon3;
								*(uint8_t*)(phi23 + 1) = *anon3;
								uint64_t anon32 = phi22 + 2;
								phi13 = anon32;
								uint64_t anon33 = phi23 + 2;
								phi14 = anon33;
								phi15 = (uint8_t*)anon33;
								phi_in16 = (uint8_t*)anon32;
							}
							else 
							{
								uint64_t phi34;
								uint8_t* anon47;
								while (true)
								{
									uint8_t phi35;
									uint64_t phi_in36;
									phi34 = phi_in31;
									if (*(uint8_t*)phi30 == 0)
									{
										break;
									}
									if (*(uint8_t*)phi30 == 92)
									{
										phi35 = 92;
										uint64_t anon37 = phi30 + 1;
										phi_in36 = anon37;
										uint8_t anon39 = *(uint8_t*)anon37 - 48;
										bool anon38 = *(uint8_t*)anon37 == 57 | anon39 < 9;
										if (anon38)
										{
											phi35 = anon39;
											uint64_t anon40 = phi30 + 2;
											phi_in36 = anon40;
											uint64_t anon41 = (__zext uint64_t)*(uint8_t*)anon40 + 4294967248;
											if ((uint8_t)anon41 < 10)
											{
												uint64_t phi42;
												uint64_t phi44;
												uint64_t anon43 = anon41 + ((__zext uint64_t)*(uint8_t*)anon37 << 3) + 34359737984;
												phi42 = anon43;
												uint64_t anon45 = phi30 + 3;
												phi44 = anon45;
												if (*(uint8_t*)anon45 - 48 < 10)
												{
													phi42 = (__zext uint64_t)*(uint8_t*)anon45 + 4294967248 + (anon43 << 3) & 0xffffffff;
													phi44 = phi30 + 4;
												}
												phi_in36 = phi44;
												phi35 = (uint8_t)phi42;
											}
										}
									}
									bool anon46 = *(uint8_t*)phi30 == 0 || *(uint8_t*)phi30 == 92;
									if (!anon46)
									{
										phi35 = *(uint8_t*)phi30;
										phi_in36 = phi30 + 1;
									}
									if (!anon46 || *(uint8_t*)phi30 == 92)
									{
										anon47 = (uint8_t*)phi34;
										*anon47 = phi35;
										phi30 = phi_in36;
										phi_in31 = phi34 + 1;
									}
								}
								uint64_t anon48 = (uint64_t)anon24 + 1;
								phi13 = anon48;
								phi14 = phi34;
								phi15 = anon47;
								phi_in16 = (uint8_t*)anon48;
							}
						}
						else 
						{
							*(uint8_t*)phi23 = *phi20;
							*anon24 = *phi20;
							phi13 = anon26;
							uint64_t anon49 = phi23 + 1;
							phi14 = anon49;
							phi15 = (uint8_t*)anon49;
							phi_in16 = anon25;
						}
					}
				}
				else 
				{
					*phi19 = *phi20;
					uint64_t anon50 = phi23 + 1;
					phi21 = anon50;
					if (*phi20 == 0)
					{
						break;
					}
					else 
					{
						phi22 = anon26;
						phi_in18 = anon50;
						phi19 = (uint8_t*)anon50;
					}
				}
			}
		}
		while (*phi20 != 0);
		*anon11 = (uint32_t)phi21 - 6296320;
		return 6296320;
	}
	phi_in4 = anon12;
	phi5 = (uint32_t*)anon12;
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

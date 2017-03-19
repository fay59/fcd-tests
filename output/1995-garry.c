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
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	uint64_t phi6 = phi_in4;
	uint32_t* phi7 = phi_in5;
	uint16_t anon11 = (uint16_t)*phi7;
	uint16_t anon10 = anon11 - 257 & (anon11 ^ 0x8080) & 0x8080;
	uint8_t anon9 = (uint8_t)anon10;
	struct { uint8_t field0; bool field1; } anon8 = llvm.uadd.with.overflow.i8(anon9, anon9);
	uint32_t* anon12 = (uint32_t*)0x6012c0;
	uint64_t anon13 = (phi6 & 0xffffffff) + 4;
	*anon12 = (uint32_t)anon13 - 3 - (__zext uint32_t)anon8.field1 - 6306624;
	uint64_t phi_in14 = 6306624;
	uint64_t phi_in15 = 6296320;
	uint8_t* phi_in16 = (uint8_t*)0x601300;
	uint8_t* phi_in17 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi21;
		uint64_t phi_in22;
		do
		{
			uint64_t phi18 = phi_in14;
			uint64_t phi19 = phi_in15;
			uint8_t* phi20 = phi_in16;
			phi21 = phi_in17;
			phi_in22 = phi19;
			uint64_t phi_in23 = phi18;
			uint64_t phi_in24 = phi19;
			uint8_t* phi_in25 = phi20;
			if (*phi21 != 0)
			{
				uint64_t anon31;
				uint64_t phi26 = phi_in23;
				uint64_t phi27 = phi_in24;
				uint8_t* phi28 = phi_in25;
				if (*phi21 == *anon3)
				{
					anon31 = phi26 + 1;
					uint8_t* anon30 = (uint8_t*)anon31;
					uint8_t* anon29 = strchr(anon30, (__sext int32_t)*phi21);
					if (anon29 == null)
					{
						*(uint8_t*)phi27 = *phi21;
						phi_in14 = anon31;
						uint64_t anon32 = phi27 + 1;
						phi_in15 = anon32;
						phi_in16 = (uint8_t*)anon32;
						phi_in17 = anon30;
					}
					else 
					{
						*anon29 = 0;
						uint8_t* anon33 = strchr(anon30, 32);
						if (anon33 == null)
						{
							uint8_t* anon34 = getenv(anon30);
							uint64_t phi_in35 = (uint64_t)anon34;
							uint64_t phi_in36 = phi27;
							if (anon34 == null)
							{
								*anon29 = *anon3;
								*(uint8_t*)phi27 = *anon3;
								*(uint8_t*)(phi27 + 1) = *anon3;
								uint64_t anon37 = phi26 + 2;
								phi_in14 = anon37;
								uint64_t anon38 = phi27 + 2;
								phi_in15 = anon38;
								phi_in16 = (uint8_t*)anon38;
								phi_in17 = (uint8_t*)anon37;
							}
							else 
							{
								uint64_t phi40;
								uint8_t* anon57;
								while (true)
								{
									uint8_t phi_in41;
									uint64_t phi_in42;
									uint64_t phi39 = phi_in35;
									phi40 = phi_in36;
									if (*(uint8_t*)phi39 == 0)
									{
										break;
									}
									if (*(uint8_t*)phi39 == 92)
									{
										phi_in41 = 92;
										uint64_t anon43 = phi39 + 1;
										phi_in42 = anon43;
										uint8_t anon45 = *(uint8_t*)anon43 - 48;
										bool anon44 = *(uint8_t*)anon43 == 57 | anon45 < 9;
										if (anon44)
										{
											phi_in41 = anon45;
											uint64_t anon46 = phi39 + 2;
											phi_in42 = anon46;
											uint64_t anon47 = (__zext uint64_t)*(uint8_t*)anon46 + 4294967248;
											if ((uint8_t)anon47 < 10)
											{
												uint64_t phi_in48;
												uint64_t phi_in50;
												uint64_t anon49 = anon47 + ((__zext uint64_t)*(uint8_t*)anon43 << 3) + 34359737984;
												phi_in48 = anon49;
												uint64_t anon51 = phi39 + 3;
												phi_in50 = anon51;
												if (*(uint8_t*)anon51 - 48 < 10)
												{
													phi_in48 = (__zext uint64_t)*(uint8_t*)anon51 + 4294967248 + (anon49 << 3) & 0xffffffff;
													phi_in50 = phi39 + 4;
												}
												uint64_t phi52 = phi_in48;
												uint64_t phi53 = phi_in50;
												phi_in41 = (uint8_t)phi52;
												phi_in42 = phi53;
											}
										}
									}
									bool anon54 = *(uint8_t*)phi39 == 0 || *(uint8_t*)phi39 == 92;
									if (!anon54)
									{
										phi_in41 = *(uint8_t*)phi39;
										phi_in42 = phi39 + 1;
									}
									if (!anon54 || *(uint8_t*)phi39 == 92)
									{
										uint8_t phi55 = phi_in41;
										uint64_t phi56 = phi_in42;
										anon57 = (uint8_t*)phi40;
										*anon57 = phi55;
										phi_in35 = phi56;
										phi_in36 = phi40 + 1;
									}
								}
								uint64_t anon58 = (uint64_t)anon29 + 1;
								phi_in14 = anon58;
								phi_in15 = phi40;
								phi_in16 = anon57;
								phi_in17 = (uint8_t*)anon58;
							}
						}
						else 
						{
							*(uint8_t*)phi27 = *phi21;
							*anon29 = *phi21;
							phi_in14 = anon31;
							uint64_t anon59 = phi27 + 1;
							phi_in15 = anon59;
							phi_in16 = (uint8_t*)anon59;
							phi_in17 = anon30;
						}
					}
				}
				else 
				{
					*phi28 = *phi21;
					uint64_t anon60 = phi27 + 1;
					phi_in22 = anon60;
					if (*phi21 == 0)
					{
						break;
					}
					else 
					{
						phi_in23 = anon31;
						phi_in24 = anon60;
						phi_in25 = (uint8_t*)anon60;
					}
				}
			}
		}
		while (*phi21 != 0);
		uint64_t phi61 = phi_in22;
		*anon12 = (uint32_t)phi61 - 6296320;
		return 6296320;
	}
	phi_in4 = anon13;
	phi_in5 = (uint32_t*)anon13;
}
void tng(uint64_t arg0)
{
	uint32_t phi_in2;
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon3 = (uint32_t*)0x6012c0;
	phi_in2 = *anon3;
	uint8_t anon4 = (uint8_t)(*anon3 >> 1) & 0x1f;
	if (anon4 != 0)
	{
		phi_in2 = (uint32_t)((__zext uint64_t)*anon3 << (__zext uint64_t)anon4);
	}
	uint32_t phi5 = phi_in2;
	*anon3 = phi5 * phi5;
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

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
	uint64_t phi6;
	uint32_t* phi7;
	uint64_t anon8;
	uint64_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		phi6 = phi_in4;
		phi7 = phi_in5;
		anon8 = (phi6 & 0xffffffff) + 4;
		phi_in4 = anon8;
		phi_in5 = (uint32_t*)anon8;
		uint64_t anon10 = (__zext uint64_t)*phi7;
		anon9 = (anon10 ^ 0x80808080) & anon10 + 4278124287 & 0x80808080;
	}
	while (anon9 == 0);
	uint16_t anon13 = (uint16_t)*phi7;
	uint8_t anon12 = (uint8_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? anon9 >> 16 : anon9);
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon14 = (uint32_t*)0x6012c0;
	*anon14 = (uint32_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? phi6 + 6 : anon8) - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi_in15 = 6306624;
	uint64_t phi_in16 = 6296320;
	uint8_t* phi17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
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
			uint8_t* phi_in19 = phi17;
			phi20 = phi_in18;
			phi21 = phi_in16;
			uint64_t phi22 = phi_in15;
			uint64_t phi23 = phi_in16;
			uint8_t* phi24 = phi_in19;
			if (*phi20 != 0)
			{
				uint64_t anon27;
				if (*phi20 == *anon3)
				{
					anon27 = phi22 + 1;
					uint8_t* anon26 = (uint8_t*)anon27;
					uint8_t* anon25 = strchr(anon26, (__sext int32_t)*phi20);
					if (anon25 == null)
					{
						*(uint8_t*)phi23 = *phi20;
						phi_in15 = anon27;
						uint64_t anon28 = phi23 + 1;
						phi_in16 = anon28;
						phi17 = (uint8_t*)anon28;
						phi_in18 = anon26;
					}
					else 
					{
						*anon25 = 0;
						uint8_t* anon29 = strchr(anon26, 32);
						if (anon29 == null)
						{
							uint8_t* anon30 = getenv(anon26);
							if (anon30 == null)
							{
								*anon25 = *anon3;
								*(uint8_t*)phi23 = *anon3;
								*(uint8_t*)(phi23 + 1) = *anon3;
								uint64_t anon31 = phi22 + 2;
								phi_in15 = anon31;
								uint64_t anon32 = phi23 + 2;
								phi_in16 = anon32;
								phi17 = (uint8_t*)anon32;
								phi_in18 = (uint8_t*)anon31;
							}
							else 
							{
								uint64_t phi35;
								uint64_t phi36;
								uint8_t* anon45;
								uint64_t phi_in33 = (uint64_t)anon30;
								uint64_t phi_in34 = phi23;
								do
								{
									phi35 = phi_in33;
									phi36 = phi_in34;
									if (*(uint8_t*)phi35 != 0)
									{
										uint64_t anon37;
										uint64_t anon46;
										if (*(uint8_t*)phi35 == 92)
										{
											anon37 = phi35 + 1;
											uint8_t anon38 = *(uint8_t*)anon37 - 48;
											if (*(uint8_t*)anon37 == 57 | anon38 < 9)
											{
												uint64_t anon40 = phi35 + 2;
												uint64_t anon39 = (__zext uint64_t)*(uint8_t*)anon40 + 4294967248;
												if ((uint8_t)anon39 < 10)
												{
													uint64_t phi41;
													uint64_t phi43;
													uint64_t anon42 = anon39 + ((__zext uint64_t)*(uint8_t*)anon37 << 3) + 34359737984;
													phi41 = anon42;
													uint64_t anon44 = phi35 + 3;
													phi43 = anon44;
													if (((__zext uint8_t)(*(uint8_t*)anon44 != 57) & (__zext uint8_t)(*(uint8_t*)anon44 - 48 > 8)) == 0)
													{
														phi41 = (__zext uint64_t)*(uint8_t*)anon44 + 4294967248 + (anon42 << 3) & 0xffffffff;
														phi43 = phi35 + 4;
													}
													anon45 = (uint8_t*)phi36;
													*anon45 = (uint8_t)phi41;
													phi_in33 = phi43;
													anon46 = phi36 + 1;
													phi_in34 = anon46;
												}
												else 
												{
													*anon45 = anon38;
													phi_in33 = anon40;
													phi_in34 = anon46;
												}
											}
											else 
											{
												*anon45 = 92;
												phi_in33 = anon37;
												phi_in34 = anon46;
											}
										}
										else 
										{
											*anon45 = *(uint8_t*)phi35;
											phi_in33 = anon37;
											phi_in34 = anon46;
										}
									}
								}
								while (*(uint8_t*)phi35 != 0);
								uint64_t anon47 = (uint64_t)anon25 + 1;
								phi_in15 = anon47;
								phi_in16 = phi36;
								phi17 = anon45;
								phi_in18 = (uint8_t*)anon47;
							}
						}
						else 
						{
							*(uint8_t*)phi23 = *phi20;
							*anon25 = *phi20;
							phi_in15 = anon27;
							uint64_t anon48 = phi23 + 1;
							phi_in16 = anon48;
							phi17 = (uint8_t*)anon48;
							phi_in18 = anon26;
						}
					}
				}
				else 
				{
					*phi24 = *phi20;
					uint64_t anon49 = (uint64_t)phi24 + 1;
					phi21 = anon49;
					phi22 = anon27;
					phi23 = anon49;
					phi24 = (uint8_t*)anon49;
					if (*phi20 == 0)
					{
						break;
					}
				}
			}
		}
		while (*phi20 != 0);
		*anon14 = (uint32_t)phi21 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	uint64_t anon5 = (__zext uint64_t)*anon2;
	uint64_t anon4 = anon5 >> 1 & 0x1f;
	uint32_t anon3 = anon4 == 0 ? *anon2 : (uint32_t)(anon5 << anon4);
	*anon2 = anon3 * anon3;
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

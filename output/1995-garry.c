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
	uint64_t phi15 = 6306624;
	uint64_t phi16 = 6296320;
	uint8_t* phi17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi22;
		uint64_t phi23;
		do
		{
			uint64_t phi_in19 = phi15;
			uint64_t phi20 = phi16;
			uint8_t* phi_in21 = phi17;
			phi22 = phi_in18;
			phi23 = phi20;
			uint64_t phi24 = phi_in19;
			uint8_t* phi25 = phi_in21;
			if (*phi22 != 0)
			{
				uint64_t anon28;
				if (*phi22 == *anon3)
				{
					anon28 = phi24 + 1;
					uint8_t* anon27 = (uint8_t*)anon28;
					uint8_t* anon26 = strchr(anon27, (__sext int32_t)*phi22);
					if (anon26 == null)
					{
						*(uint8_t*)phi20 = *phi22;
						phi15 = anon28;
						uint64_t anon29 = phi20 + 1;
						phi16 = anon29;
						phi17 = (uint8_t*)anon29;
						phi_in18 = anon27;
					}
					else 
					{
						*anon26 = 0;
						uint8_t* anon30 = strchr(anon27, 32);
						if (anon30 == null)
						{
							uint8_t* anon31 = getenv(anon27);
							if (anon31 == null)
							{
								*anon26 = *anon3;
								*(uint8_t*)phi20 = *anon3;
								*(uint8_t*)(phi20 + 1) = *anon3;
								uint64_t anon32 = phi24 + 2;
								phi15 = anon32;
								uint64_t anon33 = phi20 + 2;
								phi16 = anon33;
								phi17 = (uint8_t*)anon33;
								phi_in18 = (uint8_t*)anon32;
							}
							else 
							{
								uint64_t phi36;
								uint64_t phi37;
								uint8_t* anon45;
								uint64_t phi_in34 = (uint64_t)anon31;
								uint64_t phi_in35 = phi20;
								do
								{
									phi36 = phi_in34;
									phi37 = phi_in35;
									if (*(uint8_t*)phi36 != 0)
									{
										uint64_t anon38;
										uint64_t anon46;
										if (*(uint8_t*)phi36 == 92)
										{
											anon38 = phi36 + 1;
											uint8_t anon39 = *(uint8_t*)anon38 - 48;
											if (*(uint8_t*)anon38 == 57 | anon39 < 9)
											{
												uint64_t anon41 = phi36 + 2;
												uint64_t anon40 = (__zext uint64_t)*(uint8_t*)anon41 + 4294967248;
												if ((uint8_t)anon40 < 10)
												{
													uint64_t phi42;
													uint64_t anon43 = anon40 + ((__zext uint64_t)*(uint8_t*)anon38 << 3) + 34359737984;
													phi42 = anon43;
													uint64_t anon44 = phi36 + 3;
													phi_in34 = anon44;
													if (((__zext uint8_t)(*(uint8_t*)anon44 != 57) & (__zext uint8_t)(*(uint8_t*)anon44 - 48 > 8)) == 0)
													{
														phi42 = (__zext uint64_t)*(uint8_t*)anon44 + 4294967248 + (anon43 << 3) & 0xffffffff;
														phi_in34 = phi36 + 4;
													}
													anon45 = (uint8_t*)phi37;
													*anon45 = (uint8_t)phi42;
													anon46 = phi37 + 1;
													phi_in35 = anon46;
												}
												else 
												{
													*anon45 = anon39;
													phi_in34 = anon41;
													phi_in35 = anon46;
												}
											}
											else 
											{
												*anon45 = 92;
												phi_in34 = anon38;
												phi_in35 = anon46;
											}
										}
										else 
										{
											*anon45 = *(uint8_t*)phi36;
											phi_in34 = anon38;
											phi_in35 = anon46;
										}
									}
								}
								while (*(uint8_t*)phi36 != 0);
								uint64_t anon47 = (uint64_t)anon26 + 1;
								phi15 = anon47;
								phi16 = phi37;
								phi17 = anon45;
								phi_in18 = (uint8_t*)anon47;
							}
						}
						else 
						{
							*(uint8_t*)phi20 = *phi22;
							*anon26 = *phi22;
							phi15 = anon28;
							uint64_t anon48 = phi20 + 1;
							phi16 = anon48;
							phi17 = (uint8_t*)anon48;
							phi_in18 = anon27;
						}
					}
				}
				else 
				{
					*phi25 = *phi22;
					uint64_t anon49 = (uint64_t)phi25 + 1;
					phi23 = anon49;
					phi24 = anon28;
					phi20 = anon49;
					phi25 = (uint8_t*)anon49;
					if (*phi22 == 0)
					{
						break;
					}
				}
			}
		}
		while (*phi22 != 0);
		*anon14 = (uint32_t)phi23 - 6296320;
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

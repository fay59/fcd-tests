#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195557);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601228);
}
void fwrite(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601230);
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
		anon4 = fgets((uint8_t*)0x603b40, 255, (struct __sFILE*)phi3);
		*(uint64_t*)0x603b08 = (uint64_t)anon4;
		if (anon4 != null)
		{
			uint64_t anon5 = cb(4195727);
			*(uint64_t*)0x603b00 = anon5;
			fwrite(4195761);
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
	llvm.trap();
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
	uint64_t anon9;
	uint64_t phi6;
	uint32_t* phi7;
	uint64_t anon8;
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
	uint8_t anon12 = (anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? (uint8_t)(anon9 >> 16) : (uint8_t)(*phi7 + 255 & (*phi7 ^ 0x80)) & 0x80;
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon14 = (uint32_t*)0x6012c0;
	*anon14 = (uint32_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? phi6 + 6 : anon8) - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi_in15 = 6306624;
	uint64_t phi_in16 = 6296320;
	uint8_t* phi_in17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
	uint32_t dispatch19 = 0;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi_in24;
		while (true)
		{
			uint8_t* anon34;
			uint8_t* phi30;
			uint64_t phi28;
			uint8_t* phi_in27;
			uint64_t phi_in39;
			uint64_t phi_in26;
			uint64_t phi29;
			uint64_t phi_in25;
			uint8_t* phi23;
			uint64_t phi_in38;
			uint8_t* anon35;
			uint64_t anon33;
			uint8_t* anon32;
			uint8_t* anon31;
			if (dispatch19 == 0)
			{
				uint64_t phi20 = phi_in15;
				uint64_t phi21 = phi_in16;
				uint8_t* phi22 = phi_in17;
				phi23 = phi_in18;
				phi_in24 = phi21;
				phi_in25 = phi20;
				phi_in26 = phi21;
				phi_in27 = phi22;
				if (*phi23 == 0)
				{
					break;
				}
			}
			if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
			{
				phi28 = phi_in25;
				phi29 = phi_in26;
				phi30 = phi_in27;
			}
			if (*phi23 == *anon3)
			{
				if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
				{
					anon33 = phi28 + 1;
					anon32 = (uint8_t*)anon33;
					anon31 = strchr(anon32, (__sext int32_t)*phi23);
				}
				if (anon31 != null)
				{
					if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
					{
						*anon31 = 0;
						anon34 = strchr(anon32, 32);
					}
					if (anon34 == null)
					{
						if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
						{
							anon35 = getenv(anon32);
						}
						if (anon35 == null)
						{
							if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
							{
								*anon31 = *anon3;
								*(uint8_t*)phi29 = *anon3;
								*(uint8_t*)(phi29 + 1) = *anon3;
								uint64_t anon36 = phi28 + 2;
								phi_in15 = anon36;
								uint64_t anon37 = phi29 + 2;
								phi_in16 = anon37;
								phi_in17 = (uint8_t*)anon37;
								phi_in18 = (uint8_t*)anon36;
								dispatch19 = 0;
							}
						}
						else if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
						{
							phi_in38 = (uint64_t)anon35;
							phi_in39 = phi29;
						}
					}
					else if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
					{
						*(uint8_t*)phi29 = *phi23;
						*anon31 = *phi23;
						phi_in15 = anon33;
						uint64_t anon40 = phi29 + 1;
						phi_in16 = anon40;
						phi_in17 = (uint8_t*)anon40;
						phi_in18 = anon32;
						dispatch19 = 0;
					}
				}
			}
			else if (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0)
			{
				*phi30 = *phi23;
				uint64_t anon41 = (uint64_t)phi30 + 1;
				phi_in24 = anon41;
				phi_in25 = anon33;
				phi_in26 = anon41;
				phi_in27 = (uint8_t*)anon41;
				dispatch19 = 2;
				if (*phi23 == 0)
				{
					break;
				}
			}
			if (dispatch19 == 1 || anon35 != null && dispatch19 == 2 && *phi23 == *anon3 && anon31 != null && anon34 == null || *phi23 != 0 && anon35 != null && dispatch19 == 0 && *phi23 == *anon3 && anon31 != null && anon34 == null)
			{
				uint64_t anon57;
				uint64_t anon48;
				uint8_t* anon45;
				uint64_t phi42 = phi_in38;
				uint64_t phi43 = phi_in39;
				if (*(uint8_t*)phi42 == 0)
				{
					uint64_t anon44 = (uint64_t)anon31 + 1;
					phi_in15 = anon44;
					phi_in16 = phi43;
					anon45 = (uint8_t*)phi43;
					phi_in17 = anon45;
					phi_in18 = (uint8_t*)anon44;
					dispatch19 = 0;
				}
				else if (*(uint8_t*)phi42 == 92)
				{
					anon48 = phi42 + 1;
					uint64_t anon47 = (__zext uint64_t)*(uint8_t*)anon48 + 4294967248;
					uint8_t anon46 = (uint8_t)anon47;
					if (anon46 < 10)
					{
						uint64_t anon50 = phi42 + 2;
						uint64_t anon49 = (__zext uint64_t)*(uint8_t*)anon50 + 4294967248;
						if ((uint8_t)anon49 < 10)
						{
							uint64_t phi_in53;
							uint64_t phi_in51;
							uint64_t anon52 = anon49 + (anon47 << 3);
							phi_in51 = anon52;
							uint64_t anon54 = phi42 + 3;
							phi_in53 = anon54;
							if (*(uint8_t*)anon54 - 48 <= 9)
							{
								phi_in51 = (__zext uint64_t)*(uint8_t*)anon54 + 4294967248 + (anon52 << 3) & 0xffffffff;
								phi_in53 = phi42 + 4;
							}
							uint64_t phi55 = phi_in51;
							uint64_t phi56 = phi_in53;
							*anon45 = (uint8_t)phi55;
							phi_in38 = phi56;
							anon57 = phi43 + 1;
							phi_in39 = anon57;
							dispatch19 = 1;
						}
						else 
						{
							*anon45 = anon46;
							phi_in38 = anon50;
							phi_in39 = anon57;
							dispatch19 = 1;
						}
					}
					else 
					{
						*anon45 = 92;
						phi_in38 = anon48;
						phi_in39 = anon57;
						dispatch19 = 1;
					}
				}
				else 
				{
					*anon45 = *(uint8_t*)phi42;
					phi_in38 = anon48;
					phi_in39 = anon57;
					dispatch19 = 1;
				}
			}
			if (*phi23 == *anon3 && anon31 == null && (dispatch19 == 2 || *phi23 != 0 && dispatch19 == 0))
			{
				*(uint8_t*)phi29 = *phi23;
				phi_in15 = anon33;
				uint64_t anon58 = phi29 + 1;
				phi_in16 = anon58;
				phi_in17 = (uint8_t*)anon58;
				phi_in18 = anon32;
				dispatch19 = 0;
			}
		}
		uint64_t phi59 = phi_in24;
		*anon14 = (uint32_t)phi59 - 6296320;
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

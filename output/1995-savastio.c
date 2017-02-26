#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600de0);
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon4;
	uint64_t phi_in67;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon5;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 < 13)
		{
			anon5 = phi3 + 1;
			phi_in1 = anon5;
			phi2 = *(uint8_t*)(phi3 + 4196946);
		}
		else 
		{
			uint64_t phi_in13;
			uint64_t phi_in14;
			uint64_t phi15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint16_t phi18;
			uint32_t dispatch19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint16_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t* phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t phi_in37;
			uint64_t phi75;
			uint64_t phi78;
			uint64_t phi79;
			uint64_t phi80;
			uint64_t* phi81;
			uint64_t phi82;
			uint64_t phi_in83;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon6 = malloc(2016);
			*(uint64_t*)anon6 = 0;
			uint64_t anon7 = (uint64_t)anon6;
			*(uint64_t*)(anon7 + 8) = 0;
			uint8_t* anon8 = malloc(2016);
			*(uint64_t*)anon8 = 0;
			uint64_t anon9 = (uint64_t)anon8;
			*(uint64_t*)(anon9 + 8) = 0;
			uint64_t anon10 = anon7 + 16;
			*(uint16_t*)anon10 = 1;
			*(uint16_t*)(anon7 + 18) = 65535;
			uint64_t phi11 = anon7;
			uint64_t phi12 = anon7;
			if (anon5 >= 2)
			{
				uint64_t phi_in39;
				uint64_t phi40;
				uint64_t phi41;
				phi_in13 = anon9;
				phi_in14 = anon9 + 16;
				phi15 = anon10;
				phi_in16 = 2;
				phi17 = anon7;
				phi18 = 1;
				dispatch19 = 0;
				while (true)
				{
					uint64_t phi42;
					uint64_t phi_in43;
					uint64_t* phi44;
					uint64_t phi45;
					uint64_t phi46;
					uint64_t phi_in47;
					uint64_t anon48;
					if (dispatch19 == 0)
					{
						phi20 = phi_in13;
						phi21 = phi_in14;
						phi22 = phi15;
						phi23 = phi_in16;
						phi24 = phi18;
						phi25 = phi20;
						phi26 = 0;
						phi27 = phi20;
						uint64_t* anon29 = (uint64_t*)phi20;
						phi28 = anon29;
						phi30 = anon29;
						phi31 = 0;
						phi32 = *(uint64_t*)phi17;
					}
					if (dispatch19 == 1 || dispatch19 == 0)
					{
						anon34 = malloc(2016);
						anon33 = (uint64_t)anon34;
						*(uint64_t*)(anon33 + 8) = phi25;
						phi_in35 = phi27;
						phi_in36 = phi28;
						phi_in37 = phi32;
					}
					bool anon38 = phi_in37 == 0 & phi24 == 65535;
					if (anon38 && (dispatch19 == 1 || dispatch19 == 0))
					{
						phi_in39 = *(uint64_t*)(anon33 + 8);
						phi40 = phi_in35;
						phi41 = phi21;
						phi42 = *(uint64_t*)(anon33 + 8);
						phi_in43 = phi_in35;
						phi44 = phi_in36;
						phi45 = phi21;
						phi46 = phi31;
						phi_in47 = phi26;
						anon48 = phi26 & 0xffff;
						if (anon48 == 0)
						{
							break;
						}
					}
					if (dispatch19 == 2 || anon48 != 0 && dispatch19 == 1 && anon38 || anon48 != 0 && dispatch19 == 0 && anon38)
					{
						uint8_t* anon50 = malloc(2016);
						uint64_t anon49 = (uint64_t)anon50;
						*(uint64_t*)(anon49 + 8) = phi42;
						uint64_t phi51 = phi_in47;
						uint128_t anon52 = (__zext uint128_t)(phi51 & 0xffff) * 3777893186295716171 >> 75;
						*(uint16_t*)phi45 = (uint16_t)phi51 + (uint16_t)anon52 * 55536;
						phi42 = *(uint64_t*)(anon49 + 8);
						uint64_t phi53 = phi_in43;
						uint64_t phi_in54 = phi45 + 2;
						uint64_t* phi55 = phi44;
						uint64_t phi56 = phi46 + 1;
						if (phi46 >= 999)
						{
							uint64_t phi57 = *phi44;
							if (*phi44 == 0)
							{
								*(uint64_t*)*(uint64_t*)(anon49 + 8) = anon49;
								*(uint64_t*)anon50 = 0;
								phi57 = anon49;
							}
							phi53 = phi57;
							phi42 = phi53;
							phi_in54 = phi53 + 16;
							phi55 = (uint64_t*)phi53;
							phi56 = 0;
						}
						phi40 = phi53;
						phi41 = phi_in54;
						phi44 = phi55;
						phi46 = phi56;
						phi_in39 = phi42;
						phi_in43 = phi40;
						phi45 = phi41;
						uint64_t anon58 = (uint64_t)anon52;
						phi_in47 = anon58;
						dispatch19 = 2;
						if (anon58 == 0)
						{
							break;
						}
					}
				}
				phi12 = phi40;
				*(uint16_t*)phi41 = 65535;
				phi11 = phi_in39;
			}
			uint64_t phi59 = phi11;
			uint64_t phi60 = 0;
			uint64_t phi_in61 = phi12;
			uint64_t phi62 = 0;
			uint64_t phi_in63 = 1;
			uint32_t dispatch64 = 0;
			if (*(uint16_t*)(phi12 + 16) != 65535)
			{
				uint64_t phi65;
				do
				{
					phi65 = phi_in63;
					phi60 = 0;
					phi_in61 = phi12;
					phi62 = phi65;
					dispatch64 = 0;
					if (*(uint16_t*)(phi12 + (phi65 << 1) + 16) != 65535)
					{
						phi60 = 0;
						phi_in61 = phi12;
						phi62 = 1000;
						phi_in63 = phi65 + 1;
						dispatch64 = 0;
						if (phi65 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi12 + (phi65 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi_in70;
				while (true)
				{
					uint64_t anon68;
					uint64_t phi69;
					if (dispatch64 == 0)
					{
						uint64_t phi_in66 = phi60;
						anon68 = phi62 - 1;
						phi_in67 = anon68;
						phi69 = phi_in66;
						phi_in70 = phi_in66;
						if (anon68 <= -1)
						{
							break;
						}
					}
					if (dispatch64 == 1 || dispatch64 == 0 && anon68 > -1)
					{
						uint64_t phi71 = phi_in67;
						uint8_t* phi72 = (uint8_t*)0x400a44;
						uint64_t phi73 = 1;
						if (phi69 != 0)
						{
							phi72 = (uint8_t*)0x400a48;
							phi73 = 20;
							if (phi69 != ((uint64_t)((__zext uint128_t)phi69 * 970881267037344822 >> 64) - (phi69 >> 63)) * 19)
							{
								phi72 = (uint8_t*)0x400a49;
								phi73 = phi69 + 1;
							}
						}
						phi69 = phi73;
						printf(phi72);
						uint64_t anon74 = phi71 - 1;
						phi_in67 = anon74;
						phi_in70 = phi69;
						phi_in61 = phi59;
						dispatch64 = 1;
						if (anon74 <= -1)
						{
							break;
						}
					}
				}
				phi75 = phi_in61;
				phi59 = *(uint64_t*)(phi75 + 8);
				phi60 = phi_in70;
				phi_in61 = *(uint64_t*)(phi75 + 8);
				phi62 = 1000;
				dispatch64 = 0;
			}
			while (*(uint64_t*)(phi75 + 8) != 0);
			phi_in13 = phi17;
			phi_in14 = phi22;
			phi15 = phi21;
			phi_in16 = (phi23 & 0xffff) + 1;
			phi17 = phi20;
			phi18 = 65535;
			dispatch19 = 0;
			uint16_t anon76 = (uint16_t)phi26 + phi24 * (uint16_t)phi23;
			uint128_t anon77 = (__zext uint128_t)anon76 * 3777893186295716171 >> 75;
			*(uint16_t*)phi21 = anon76 + (uint16_t)anon77 * 55536;
			if (phi31 < 1000)
			{
				phi78 = *(uint64_t*)(anon33 + 8);
				phi79 = phi21 + 2;
				phi80 = phi_in35;
				phi81 = phi_in36;
				phi30 = phi30;
				phi82 = phi_in37;
				phi22 = phi22 + 2;
				phi_in83 = phi31 + 1;
			}
			else 
			{
				uint64_t phi84 = *phi30;
				uint64_t phi85 = phi_in37;
				if (*phi30 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi84 = anon33;
					phi85 = anon33;
				}
				phi78 = phi84;
				phi79 = phi84 + 16;
				phi80 = phi84;
				uint64_t* anon86 = (uint64_t*)phi84;
				phi81 = anon86;
				phi30 = anon86;
				phi82 = *(uint64_t*)phi85;
				phi22 = phi85 + 16;
				phi_in83 = 0;
			}
			phi25 = phi78;
			phi21 = phi79;
			phi27 = phi80;
			uint64_t* phi28 = phi81;
			phi32 = phi82;
			phi26 = (uint64_t)anon77;
			phi24 = *(uint16_t*)phi22;
			phi31 = phi_in83;
			dispatch19 = 1;
		}
	}
	_IO_putc(10, *anon4);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400530, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4009c0, (void(*)())0x400a30, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600e18;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196738);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196851);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600bc0)(arg1 & 0xffffffff, arg2, arg3);
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

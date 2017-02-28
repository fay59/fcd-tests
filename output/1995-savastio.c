#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon4;
	uint64_t phi_in68;
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
			uint16_t phi_in18;
			uint32_t dispatch19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t* phi27;
			uint64_t* phi29;
			uint16_t phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t* phi37;
			uint64_t phi38;
			uint64_t phi75;
			uint64_t phi78;
			uint64_t phi79;
			uint64_t phi80;
			uint64_t phi81;
			uint64_t phi82;
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
				uint64_t phi_in40;
				uint64_t phi41;
				uint64_t phi42;
				phi_in13 = anon9;
				phi_in14 = anon9 + 16;
				phi15 = anon10;
				phi_in16 = 2;
				phi17 = anon7;
				phi_in18 = 1;
				dispatch19 = 0;
				while (true)
				{
					uint64_t phi43;
					uint64_t phi44;
					uint64_t* phi_in45;
					uint64_t phi46;
					uint64_t phi47;
					uint64_t phi_in48;
					uint64_t anon49;
					if (dispatch19 == 0)
					{
						phi20 = phi_in13;
						phi21 = phi_in14;
						phi22 = phi15;
						phi23 = phi_in16;
						phi24 = phi21;
						phi25 = 0;
						phi26 = phi20;
						uint64_t* anon28 = (uint64_t*)phi20;
						phi27 = anon28;
						phi29 = anon28;
						phi30 = phi_in18;
						phi31 = 0;
						phi32 = *(uint64_t*)phi17;
					}
					if (dispatch19 == 1 || dispatch19 == 0)
					{
						anon34 = malloc(2016);
						anon33 = (uint64_t)anon34;
						*(uint64_t*)(anon33 + 8) = phi20;
						phi_in35 = phi26;
						phi_in36 = phi27;
						phi37 = phi29;
						phi38 = phi32;
					}
					bool anon39 = phi38 == 0 & phi30 == 65535;
					if (anon39 && (dispatch19 == 1 || dispatch19 == 0))
					{
						phi_in40 = *(uint64_t*)(anon33 + 8);
						phi41 = phi_in35;
						phi42 = phi24;
						phi43 = *(uint64_t*)(anon33 + 8);
						phi44 = phi_in35;
						phi_in45 = phi_in36;
						phi46 = phi24;
						phi47 = phi31;
						phi_in48 = phi25;
						anon49 = phi25 & 0xffff;
						if (anon49 == 0)
						{
							break;
						}
					}
					if (dispatch19 == 2 || anon49 != 0 && dispatch19 == 1 && anon39 || anon49 != 0 && dispatch19 == 0 && anon39)
					{
						uint8_t* anon51 = malloc(2016);
						uint64_t anon50 = (uint64_t)anon51;
						*(uint64_t*)(anon50 + 8) = phi43;
						uint64_t phi52 = phi44;
						uint64_t phi53 = phi_in48;
						uint128_t anon54 = (__zext uint128_t)(phi53 & 0xffff) * 3777893186295716171 >> 75;
						*(uint16_t*)phi46 = (uint16_t)phi53 + (uint16_t)anon54 * 55536;
						uint64_t phi55 = *(uint64_t*)(anon50 + 8);
						uint64_t phi56 = phi46 + 2;
						uint64_t phi57 = phi47 + 1;
						if (phi47 >= 999)
						{
							phi55 = *phi_in45;
							if (*phi_in45 == 0)
							{
								*(uint64_t*)*(uint64_t*)(anon50 + 8) = anon50;
								*(uint64_t*)anon51 = 0;
								phi55 = anon50;
							}
							phi52 = phi55;
							phi56 = phi55 + 16;
							phi_in45 = (uint64_t*)phi55;
							phi57 = 0;
						}
						phi43 = phi55;
						phi44 = phi52;
						phi46 = phi56;
						phi47 = phi57;
						phi_in40 = phi43;
						phi41 = phi44;
						phi42 = phi46;
						uint64_t anon58 = (uint64_t)anon54;
						phi_in48 = anon58;
						dispatch19 = 2;
						if (anon58 == 0)
						{
							break;
						}
					}
				}
				phi12 = phi41;
				*(uint16_t*)phi42 = 65535;
				phi11 = phi_in40;
			}
			uint64_t phi59 = phi12;
			uint64_t phi60 = phi11;
			uint64_t phi61 = 0;
			uint64_t phi62 = 0;
			uint64_t phi_in63 = 1;
			uint32_t dispatch64 = 0;
			if (*(uint16_t*)(phi59 + 16) != 65535)
			{
				uint64_t phi65;
				do
				{
					phi65 = phi_in63;
					phi60 = phi11;
					phi61 = 0;
					phi62 = phi65;
					dispatch64 = 0;
					if (*(uint16_t*)(phi59 + (phi65 << 1) + 16) != 65535)
					{
						phi60 = phi11;
						phi61 = 0;
						phi62 = 1000;
						phi_in63 = phi65 + 1;
						dispatch64 = 0;
						if (phi65 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi59 + (phi65 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi66;
				uint64_t phi_in67;
				while (true)
				{
					uint64_t anon69;
					uint64_t phi70;
					if (dispatch64 == 0)
					{
						phi66 = phi61;
						phi_in67 = phi59;
						anon69 = phi62 - 1;
						phi_in68 = anon69;
						phi70 = phi66;
						if (anon69 <= -1)
						{
							break;
						}
					}
					if (dispatch64 == 1 || dispatch64 == 0 && anon69 > -1)
					{
						uint64_t phi71 = phi_in68;
						uint8_t* phi72 = (uint8_t*)0x400a44;
						uint64_t phi73 = 1;
						if (phi70 != 0)
						{
							phi72 = (uint8_t*)0x400a48;
							phi73 = 20;
							if (phi70 != ((uint64_t)((__zext uint128_t)phi70 * 970881267037344822 >> 64) - (phi70 >> 63)) * 19)
							{
								phi72 = (uint8_t*)0x400a49;
								phi73 = phi70 + 1;
							}
						}
						phi66 = phi73;
						printf(phi72);
						uint64_t anon74 = phi71 - 1;
						phi_in68 = anon74;
						phi70 = phi66;
						phi_in67 = phi60;
						dispatch64 = 1;
						if (anon74 <= -1)
						{
							break;
						}
					}
				}
				phi75 = phi_in67;
				phi60 = *(uint64_t*)(phi75 + 8);
				phi61 = phi66;
				phi59 = *(uint64_t*)(phi75 + 8);
				phi62 = 1000;
				dispatch64 = 0;
			}
			while (*(uint64_t*)(phi75 + 8) != 0);
			phi_in13 = phi17;
			phi_in14 = phi22;
			phi15 = phi21;
			phi_in16 = (phi23 & 0xffff) + 1;
			phi17 = phi20;
			phi_in18 = 65535;
			dispatch19 = 0;
			uint16_t anon76 = (uint16_t)phi25 + phi30 * (uint16_t)phi23;
			uint128_t anon77 = (__zext uint128_t)anon76 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon76 + (uint16_t)anon77 * 55536;
			if (phi31 < 1000)
			{
				phi78 = *(uint64_t*)(anon33 + 8);
				phi79 = phi24 + 2;
				phi80 = phi_in35;
				phi27 = phi_in36;
				phi32 = phi38;
				phi81 = phi22 + 2;
				phi82 = phi31 + 1;
			}
			else 
			{
				uint64_t phi83 = *phi37;
				if (*phi37 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi83 = anon33;
					phi38 = anon33;
				}
				phi78 = phi83;
				phi79 = phi83 + 16;
				phi80 = phi83;
				uint64_t* anon84 = (uint64_t*)phi83;
				phi27 = anon84;
				phi37 = anon84;
				phi32 = *(uint64_t*)phi38;
				phi81 = phi38 + 16;
				phi82 = 0;
			}
			phi20 = phi78;
			phi24 = phi79;
			phi26 = phi80;
			phi29 = phi37;
			phi22 = phi81;
			phi31 = phi82;
			phi25 = (uint64_t)anon77;
			phi30 = *(uint16_t*)phi22;
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

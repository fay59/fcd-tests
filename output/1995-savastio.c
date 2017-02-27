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
	uint64_t phi_in66;
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
			uint64_t* phi26;
			uint64_t* phi28;
			uint64_t phi29;
			uint16_t phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t phi33;
			uint64_t phi34;
			uint64_t* phi_in35;
			uint64_t phi36;
			uint64_t phi74;
			uint64_t phi77;
			uint64_t phi78;
			uint64_t phi79;
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
				uint64_t phi_in38;
				uint64_t phi39;
				phi_in13 = anon9;
				phi_in14 = anon9 + 16;
				phi15 = anon10;
				phi_in16 = 2;
				phi17 = anon7;
				phi_in18 = 1;
				dispatch19 = 0;
				while (true)
				{
					uint64_t anon40;
					uint8_t* anon41;
					uint64_t phi42;
					uint64_t* phi43;
					uint64_t phi44;
					uint64_t phi45;
					uint64_t phi_in46;
					uint64_t anon47;
					if (dispatch19 == 0)
					{
						phi20 = phi_in13;
						phi21 = phi_in14;
						phi22 = phi_in16;
						phi23 = phi21;
						phi24 = 0;
						phi25 = phi20;
						uint64_t* anon27 = (uint64_t*)phi20;
						phi26 = anon27;
						phi28 = anon27;
						phi29 = phi15;
						phi30 = phi_in18;
						phi31 = 0;
						phi32 = *(uint64_t*)phi17;
					}
					if (dispatch19 == 1 || dispatch19 == 0)
					{
						phi33 = phi20;
						phi34 = phi25;
						phi_in35 = phi26;
						phi36 = phi32;
					}
					bool anon37 = phi36 == 0 & phi30 == 65535;
					if (anon37 && (dispatch19 == 1 || dispatch19 == 0))
					{
						phi_in38 = phi33;
						phi12 = phi34;
						phi39 = phi23;
						anon41 = malloc(2016);
						anon40 = (uint64_t)anon41;
						*(uint64_t*)(anon40 + 8) = phi33;
						phi42 = phi34;
						phi43 = phi_in35;
						phi44 = phi23;
						phi45 = phi31;
						phi_in46 = phi24;
						anon47 = phi24 & 0xffff;
						if (anon47 == 0)
						{
							break;
						}
					}
					if (dispatch19 == 2 || anon47 != 0 && dispatch19 == 1 && anon37 || anon47 != 0 && dispatch19 == 0 && anon37)
					{
						uint64_t phi48 = phi42;
						uint64_t phi49 = phi_in46;
						uint128_t anon50 = (__zext uint128_t)(phi49 & 0xffff) * 3777893186295716171 >> 75;
						*(uint16_t*)phi44 = (uint16_t)phi49 + (uint16_t)anon50 * 55536;
						uint64_t phi51 = *(uint64_t*)(anon40 + 8);
						uint64_t phi52 = phi44 + 2;
						uint64_t* phi53 = phi43;
						uint64_t phi54 = phi45 + 1;
						if (phi45 >= 999)
						{
							uint64_t phi55 = *phi43;
							if (*phi43 == 0)
							{
								*(uint64_t*)*(uint64_t*)(anon40 + 8) = anon40;
								*(uint64_t*)anon41 = 0;
								phi55 = anon40;
							}
							phi48 = phi55;
							phi51 = phi48;
							phi52 = phi48 + 16;
							phi53 = (uint64_t*)phi48;
							phi54 = 0;
						}
						uint64_t phi_in56 = phi51;
						phi42 = phi48;
						phi44 = phi52;
						phi43 = phi53;
						phi45 = phi54;
						phi_in38 = phi_in56;
						phi12 = phi42;
						phi39 = phi44;
						*(uint64_t*)(anon40 + 8) = phi_in56;
						uint64_t anon57 = (uint64_t)anon50;
						phi_in46 = anon57;
						dispatch19 = 2;
						if (anon57 == 0)
						{
							break;
						}
					}
				}
				*(uint16_t*)phi39 = 65535;
				phi11 = phi_in38;
			}
			uint64_t phi58 = phi11;
			uint64_t phi59 = 0;
			uint64_t phi_in60 = phi12;
			uint64_t phi61 = 0;
			uint64_t phi_in62 = 1;
			uint32_t dispatch63 = 0;
			if (*(uint16_t*)(phi12 + 16) != 65535)
			{
				uint64_t phi64;
				do
				{
					phi64 = phi_in62;
					phi58 = phi11;
					phi59 = 0;
					phi_in60 = phi12;
					phi61 = phi64;
					dispatch63 = 0;
					if (*(uint16_t*)(phi12 + (phi64 << 1) + 16) != 65535)
					{
						phi58 = phi11;
						phi59 = 0;
						phi_in60 = phi12;
						phi61 = 1000;
						phi_in62 = phi64 + 1;
						dispatch63 = 0;
						if (phi64 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi12 + (phi64 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi69;
				while (true)
				{
					uint64_t phi_in65;
					uint64_t anon67;
					uint64_t phi68;
					if (dispatch63 == 0)
					{
						phi_in65 = phi59;
						anon67 = phi61 - 1;
						phi_in66 = anon67;
						phi68 = phi_in65;
						phi69 = phi_in65;
						if (anon67 <= -1)
						{
							break;
						}
					}
					if (dispatch63 == 1 || dispatch63 == 0 && anon67 > -1)
					{
						uint64_t phi70 = phi_in66;
						uint8_t* phi71 = (uint8_t*)0x400a44;
						uint64_t phi72 = 1;
						if (phi68 != 0)
						{
							phi71 = (uint8_t*)0x400a48;
							phi72 = 20;
							if (phi68 != ((uint64_t)((__zext uint128_t)phi68 * 970881267037344822 >> 64) - (phi68 >> 63)) * 19)
							{
								phi71 = (uint8_t*)0x400a49;
								phi72 = phi68 + 1;
							}
						}
						phi_in65 = phi72;
						printf(phi71);
						uint64_t anon73 = phi70 - 1;
						phi_in66 = anon73;
						phi68 = phi_in65;
						phi69 = phi_in65;
						phi_in60 = phi58;
						dispatch63 = 1;
						if (anon73 <= -1)
						{
							break;
						}
					}
				}
				phi74 = phi_in60;
				phi58 = *(uint64_t*)(phi74 + 8);
				phi59 = phi69;
				phi_in60 = *(uint64_t*)(phi74 + 8);
				phi61 = 1000;
				dispatch63 = 0;
			}
			while (*(uint64_t*)(phi74 + 8) != 0);
			phi_in13 = phi17;
			phi_in14 = phi15;
			phi15 = phi21;
			phi_in16 = (phi22 & 0xffff) + 1;
			phi17 = phi20;
			phi_in18 = 65535;
			dispatch19 = 0;
			uint16_t anon75 = (uint16_t)phi24 + phi30 * (uint16_t)phi22;
			uint128_t anon76 = (__zext uint128_t)anon75 * 3777893186295716171 >> 75;
			*(uint16_t*)phi23 = anon75 + (uint16_t)anon76 * 55536;
			if (phi31 < 1000)
			{
				phi77 = phi23 + 2;
				phi26 = phi_in35;
				phi28 = phi28;
				phi78 = phi36;
				phi29 = phi29 + 2;
				phi79 = phi31 + 1;
			}
			else 
			{
				phi34 = *phi28;
				if (*phi28 == 0)
				{
					uint8_t* anon80 = malloc(2016);
					uint64_t anon81 = (uint64_t)anon80;
					*(uint64_t*)phi33 = anon81;
					*(uint64_t*)anon80 = 0;
					*(uint64_t*)(anon81 + 8) = phi33;
					phi34 = anon81;
					phi36 = anon81;
				}
				phi33 = phi34;
				phi77 = phi34 + 16;
				uint64_t* anon82 = (uint64_t*)phi34;
				phi26 = anon82;
				phi28 = anon82;
				phi78 = *(uint64_t*)phi36;
				phi29 = phi36 + 16;
				phi79 = 0;
			}
			phi20 = phi33;
			uint64_t phi_in83 = phi77;
			phi25 = phi34;
			phi32 = phi78;
			phi31 = phi79;
			phi23 = phi_in83;
			phi24 = (uint64_t)anon76;
			phi30 = *(uint16_t*)phi29;
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

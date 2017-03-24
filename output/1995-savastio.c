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
	uint64_t phi49;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon11;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 >= 13)
		{
			uint64_t phi15;
			uint16_t phi17;
			uint16_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi_in24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi58;
			uint64_t phi59;
			uint64_t phi60;
			uint64_t phi_in61;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon5 = malloc(2016);
			*(uint64_t*)anon5 = 0;
			uint64_t anon6 = (uint64_t)anon5;
			*(uint64_t*)(anon6 + 8) = 0;
			uint8_t* anon7 = malloc(2016);
			*(uint64_t*)anon7 = 0;
			uint64_t anon8 = (uint64_t)anon7;
			*(uint64_t*)(anon8 + 8) = 0;
			uint64_t anon9 = anon6 + 16;
			*(uint16_t*)anon9 = 1;
			*(uint16_t*)(anon6 + 18) = 65535;
			uint64_t phi10 = anon6;
			anon11 = phi3 + 1;
			if (anon11 >= 2)
			{
				uint64_t phi28;
				uint64_t phi29;
				uint64_t phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				uint64_t phi_in14 = anon9;
				phi15 = 2;
				uint64_t phi16 = anon6;
				phi17 = 1;
				phi16 = phi_in12;
				phi_in14 = phi_in13;
				phi_in13 = phi_in14;
				phi_in12 = phi16;
				phi18 = phi17;
				phi19 = phi16;
				phi20 = *(uint64_t*)phi_in12;
				phi21 = phi_in13;
				phi22 = phi_in14;
				phi23 = 0;
				phi_in24 = 0;
				phi25 = phi19;
				phi26 = phi20;
				bool anon27 = phi26 == 0 & phi18 == 65535;
				if (anon27)
				{
					phi28 = phi25;
					phi29 = phi22;
					uint8_t* anon31 = malloc(2016);
					uint64_t anon30 = (uint64_t)anon31;
					*(uint64_t*)(anon30 + 8) = phi25;
					uint64_t phi32 = phi23;
					uint64_t phi33 = phi22;
					uint64_t phi34 = phi_in24;
					uint64_t phi35 = phi23 & 0xffff;
					if (phi23 != 0)
					{
						uint64_t phi43;
						do
						{
							uint64_t phi38;
							uint64_t phi_in39;
							uint64_t anon40;
							uint64_t phi_in36 = *(uint64_t*)(anon30 + 8);
							uint128_t anon37 = (__zext uint128_t)phi35 * 3777893186295716171 >> 75;
							*(uint16_t*)phi33 = (uint16_t)phi32 + (uint16_t)anon37 * 55536;
							if (phi34 < 999)
							{
								phi38 = phi33 + 2;
								anon40 = (uint64_t)anon37;
								phi_in39 = anon40;
								phi_in24 = phi34 + 1;
							}
							else 
							{
								uint64_t phi_in41;
								uint64_t* anon42 = (uint64_t*)phi_in36;
								phi_in41 = *anon42;
								phi_in39 = anon40;
								if (*anon42 == 0)
								{
									*anon42 = anon30;
									*(uint64_t*)anon31 = 0;
									*(uint64_t*)(anon30 + 8) = phi_in36;
									phi_in41 = anon30;
									phi_in39 = anon40 & 0xffff;
								}
								phi_in36 = phi_in41;
								phi38 = phi_in41 + 16;
								phi_in24 = 0;
							}
							phi29 = phi38;
							phi43 = phi_in39;
							phi28 = phi_in36;
							*(uint64_t*)(anon30 + 8) = phi_in36;
							phi32 = anon40;
							phi33 = phi29;
							phi34 = phi_in24;
							phi35 = anon40;
						}
						while (phi43 != 0);
					}
				}
				phi10 = phi28;
				*(uint16_t*)phi29 = 65535;
			}
			uint64_t phi44 = phi10;
			uint64_t phi45 = 0;
			uint64_t phi46 = 0;
			uint64_t phi47 = 1;
			if (*(uint16_t*)(phi44 + 16) != 65535)
			{
				phi45 = 0;
				phi46 = phi47;
				if (*(uint16_t*)(phi44 + (phi47 << 1) + 16) != 65535)
				{
					phi45 = 0;
					phi46 = 1000;
				}
			}
			do
			{
				uint64_t phi48 = phi45;
				uint64_t anon50 = phi46 - 1;
				phi49 = anon50;
				uint64_t phi51 = phi48;
				if (anon50 > -1)
				{
					uint64_t anon54;
					do
					{
						uint8_t* phi52 = (uint8_t*)0x400a44;
						uint64_t phi53 = 1;
						if (phi51 != 0)
						{
							phi52 = (uint8_t*)0x400a48;
							phi53 = 20;
							if (phi51 != ((uint64_t)((__zext uint128_t)phi51 * 970881267037344822 >> 64) - (phi51 >> 63)) * 19)
							{
								phi52 = (uint8_t*)0x400a49;
								phi53 = phi51 + 1;
							}
						}
						phi48 = phi53;
						printf(phi52);
						anon54 = phi49 - 1;
						phi49 = anon54;
						phi51 = phi48;
					}
					while (anon54 > -1);
				}
				phi44 = *(uint64_t*)(phi44 + 8);
				phi45 = phi48;
				phi46 = 1000;
			}
			while (*(uint64_t*)(phi44 + 8) != 0);
			phi47 = phi47 + 1;
			uint64_t anon55 = phi15 & 0xffff;
			phi15 = anon55 + 1;
			phi17 = 65535;
			uint16_t anon56 = (uint16_t)phi23 + phi18 * (uint16_t)phi15;
			uint128_t anon57 = (__zext uint128_t)anon56 * 3777893186295716171 >> 75;
			*(uint16_t*)phi22 = anon56 + (uint16_t)anon57 * 55536;
			if (phi_in24 < 1000)
			{
				phi58 = phi26;
				phi59 = phi21 + 2;
				phi60 = phi22 + 2;
				phi_in61 = phi_in24 + 1;
			}
			else 
			{
				uint64_t phi62;
				uint64_t* anon63 = (uint64_t*)phi25;
				phi62 = *anon63;
				if (*anon63 == 0)
				{
					uint8_t* anon65 = malloc(2016);
					uint64_t anon64 = (uint64_t)anon65;
					*anon63 = anon64;
					*(uint64_t*)anon65 = 0;
					*(uint64_t*)(anon64 + 8) = phi25;
					phi62 = anon64;
					phi26 = anon64;
				}
				phi25 = phi62;
				phi58 = *(uint64_t*)phi26;
				phi59 = phi26 + 16;
				phi60 = phi25 + 16;
				phi_in61 = 0;
			}
			phi19 = phi25;
			phi20 = phi58;
			phi21 = phi59;
			phi22 = phi60;
			phi23 = (uint64_t)anon57;
			phi18 = *(uint16_t*)phi21;
			phi_in24 = phi_in61;
		}
		break;
		phi_in1 = anon11;
		phi2 = *(uint8_t*)(phi3 + 4196946);
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

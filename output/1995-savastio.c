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
	uint64_t phi_in50;
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
			uint64_t phi_in12;
			uint64_t phi_in13;
			uint64_t phi_in14;
			uint16_t phi15;
			uint64_t phi16;
			uint64_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t anon24;
			uint8_t* anon25;
			uint64_t phi_in26;
			uint64_t phi49;
			uint64_t phi60;
			uint64_t phi61;
			uint64_t phi62;
			uint64_t phi63;
			uint64_t phi64;
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
			uint64_t phi_in10 = anon6;
			anon11 = phi3 + 1;
			if (anon11 >= 2)
			{
				uint64_t phi27;
				uint64_t phi28;
				phi_in12 = anon8;
				phi_in13 = anon8 + 16;
				phi_in13 = anon9;
				phi_in14 = 2;
				phi_in12 = anon6;
				phi15 = 1;
				phi16 = phi_in12;
				phi17 = phi_in13;
				phi18 = phi_in14;
				phi19 = *(uint64_t*)phi_in12;
				phi20 = phi_in13;
				phi21 = phi17;
				phi22 = 0;
				phi23 = 0;
				anon25 = malloc(2016);
				anon24 = (uint64_t)anon25;
				*(uint64_t*)(anon24 + 8) = phi16;
				phi_in26 = phi19;
				if (phi_in26 == 0 & phi15 == 65535)
				{
					phi27 = *(uint64_t*)(anon24 + 8);
					phi28 = phi21;
					uint64_t phi29 = *(uint64_t*)(anon24 + 8);
					uint64_t phi30 = phi22;
					uint64_t phi31 = phi21;
					uint64_t phi32 = phi23;
					uint64_t phi33 = phi22 & 0xffff;
					if (phi22 != 0)
					{
						uint64_t phi44;
						do
						{
							uint64_t phi37;
							uint64_t phi_in38;
							uint64_t anon39;
							uint64_t phi_in40;
							uint8_t* anon35 = malloc(2016);
							uint64_t anon34 = (uint64_t)anon35;
							*(uint64_t*)(anon34 + 8) = phi29;
							uint128_t anon36 = (__zext uint128_t)phi33 * 3777893186295716171 >> 75;
							*(uint16_t*)phi31 = (uint16_t)phi30 + (uint16_t)anon36 * 55536;
							if (phi32 < 999)
							{
								phi29 = *(uint64_t*)(anon34 + 8);
								phi37 = phi31 + 2;
								anon39 = (uint64_t)anon36;
								phi_in38 = anon39;
								phi_in40 = phi32 + 1;
							}
							else 
							{
								uint64_t phi41;
								uint64_t* anon42 = (uint64_t*)*(uint64_t*)(anon34 + 8);
								phi41 = *anon42;
								uint64_t phi43 = anon39;
								if (*anon42 == 0)
								{
									*anon42 = anon34;
									*(uint64_t*)anon35 = 0;
									phi41 = anon34;
									phi43 = anon39 & 0xffff;
								}
								phi_in38 = phi43;
								phi29 = phi41;
								phi37 = phi41 + 16;
								phi_in40 = 0;
							}
							phi44 = phi_in38;
							phi27 = phi29;
							phi28 = phi37;
							phi30 = anon39;
							phi31 = phi37;
							phi32 = phi_in40;
							phi33 = anon39;
						}
						while (phi44 != 0);
					}
				}
				uint64_t phi_in45 = phi27;
				*(uint16_t*)phi28 = 65535;
				phi_in10 = phi_in45;
			}
			uint64_t phi_in46 = 0;
			uint64_t phi47 = 0;
			uint64_t phi48 = 1;
			if (*(uint16_t*)(phi_in10 + 16) != 65535)
			{
				phi_in46 = 0;
				phi47 = phi48;
				if (*(uint16_t*)(phi_in10 + (phi48 << 1) + 16) != 65535)
				{
					phi_in46 = 0;
					phi47 = 1000;
				}
			}
			do
			{
				phi49 = phi_in10;
				uint64_t anon51 = phi47 - 1;
				phi_in50 = anon51;
				uint64_t phi52 = phi_in46;
				uint64_t phi_in53 = phi_in46;
				if (anon51 > -1)
				{
					uint64_t anon57;
					do
					{
						uint64_t phi54 = phi_in50;
						uint8_t* phi55 = (uint8_t*)0x400a44;
						uint64_t phi56 = 1;
						if (phi52 != 0)
						{
							phi55 = (uint8_t*)0x400a48;
							phi56 = 20;
							if (phi52 != ((uint64_t)((__zext uint128_t)phi52 * 970881267037344822 >> 64) - (phi52 >> 63)) * 19)
							{
								phi55 = (uint8_t*)0x400a49;
								phi56 = phi52 + 1;
							}
						}
						phi_in46 = phi56;
						printf(phi55);
						anon57 = phi54 - 1;
						phi_in50 = anon57;
						phi52 = phi_in46;
						phi_in53 = phi_in46;
					}
					while (anon57 > -1);
				}
				phi_in10 = *(uint64_t*)(phi49 + 8);
				phi_in46 = phi_in53;
				phi47 = 1000;
			}
			while (*(uint64_t*)(phi49 + 8) != 0);
			phi48 = phi48 + 1;
			phi_in13 = phi17;
			phi_in14 = (phi18 & 0xffff) + 1;
			phi_in12 = phi16;
			phi15 = 65535;
			uint16_t anon58 = (uint16_t)phi22 + phi15 * (uint16_t)phi18;
			uint128_t anon59 = (__zext uint128_t)anon58 * 3777893186295716171 >> 75;
			*(uint16_t*)phi21 = anon58 + (uint16_t)anon59 * 55536;
			if (phi23 < 1000)
			{
				phi60 = *(uint64_t*)(anon24 + 8);
				phi61 = phi_in26;
				phi62 = phi20 + 2;
				phi63 = phi21 + 2;
				phi64 = phi23 + 1;
			}
			else 
			{
				uint64_t phi65;
				uint64_t* anon66 = (uint64_t*)*(uint64_t*)(anon24 + 8);
				phi65 = *anon66;
				uint64_t phi67 = phi_in26;
				if (*anon66 == 0)
				{
					*anon66 = anon24;
					*(uint64_t*)anon25 = 0;
					phi65 = anon24;
					phi67 = anon24;
				}
				phi60 = phi65;
				phi61 = *(uint64_t*)phi67;
				phi62 = phi67 + 16;
				phi63 = phi60 + 16;
				phi64 = 0;
			}
			phi16 = phi60;
			phi19 = phi61;
			phi21 = phi63;
			phi23 = phi64;
			phi20 = phi62;
			phi22 = (uint64_t)anon59;
			phi15 = *(uint16_t*)phi62;
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

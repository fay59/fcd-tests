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
	uint64_t phi_in54;
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
			uint64_t phi14;
			uint64_t phi_in15;
			uint64_t phi16;
			uint16_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint16_t phi26;
			uint64_t phi27;
			uint64_t anon28;
			uint8_t* anon29;
			uint64_t phi_in30;
			uint64_t phi52;
			uint64_t phi65;
			uint64_t phi66;
			uint64_t phi67;
			uint64_t phi68;
			uint64_t phi69;
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
				uint64_t phi32;
				uint64_t phi33;
				uint64_t phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				phi14 = anon9;
				phi_in15 = 2;
				phi16 = anon6;
				phi17 = 1;
				phi18 = phi_in12;
				phi19 = phi_in13;
				phi_in13 = phi14;
				phi20 = phi_in15;
				phi_in12 = phi16;
				uint16_t phi_in21 = phi17;
				phi22 = *(uint64_t*)phi_in12;
				phi23 = phi_in13;
				phi24 = phi19;
				phi25 = 0;
				phi26 = phi_in21;
				phi27 = 0;
				anon29 = malloc(2016);
				anon28 = (uint64_t)anon29;
				*(uint64_t*)(anon28 + 8) = phi18;
				phi_in30 = phi22;
				bool anon31 = phi_in30 == 0 & phi26 == 65535;
				if (anon31)
				{
					phi32 = *(uint64_t*)(anon28 + 8);
					phi33 = phi24;
					uint8_t* anon35 = malloc(2016);
					uint64_t anon34 = (uint64_t)anon35;
					*(uint64_t*)(anon34 + 8) = *(uint64_t*)(anon28 + 8);
					uint64_t phi36 = phi25;
					uint64_t phi37 = phi24;
					uint64_t phi38 = phi27;
					uint64_t phi39 = phi25 & 0xffff;
					if (phi25 != 0)
					{
						uint64_t phi47;
						do
						{
							uint64_t phi_in41;
							uint64_t phi_in42;
							uint64_t anon43;
							uint64_t phi44;
							uint128_t anon40 = (__zext uint128_t)phi39 * 3777893186295716171 >> 75;
							*(uint16_t*)phi37 = (uint16_t)phi36 + (uint16_t)anon40 * 55536;
							if (phi38 < 999)
							{
								phi_in41 = *(uint64_t*)(anon34 + 8);
								phi37 = phi37 + 2;
								anon43 = (uint64_t)anon40;
								phi_in42 = anon43;
								phi44 = phi38 + 1;
							}
							else 
							{
								uint64_t phi45;
								uint64_t* anon46 = (uint64_t*)*(uint64_t*)(anon34 + 8);
								phi45 = *anon46;
								phi_in42 = anon43;
								if (*anon46 == 0)
								{
									*anon46 = anon34;
									*(uint64_t*)anon35 = 0;
									phi45 = anon34;
									phi_in42 = anon43 & 0xffff;
								}
								phi_in41 = phi45;
								phi37 = phi45 + 16;
								phi44 = 0;
							}
							phi47 = phi_in42;
							phi32 = phi_in41;
							phi33 = phi37;
							*(uint64_t*)(anon34 + 8) = phi_in41;
							phi36 = anon43;
							phi38 = phi44;
							phi39 = anon43;
						}
						while (phi47 != 0);
					}
				}
				phi10 = phi32;
				*(uint16_t*)phi33 = 65535;
			}
			uint64_t phi_in48 = phi10;
			uint64_t phi49 = 0;
			uint64_t phi50 = 0;
			uint64_t phi51 = 1;
			if (*(uint16_t*)(phi_in48 + 16) != 65535)
			{
				phi49 = 0;
				phi50 = phi51;
				if (*(uint16_t*)(phi_in48 + (phi51 << 1) + 16) != 65535)
				{
					phi49 = 0;
					phi50 = 1000;
				}
			}
			do
			{
				phi52 = phi_in48;
				uint64_t phi_in53 = phi49;
				uint64_t anon55 = phi50 - 1;
				phi_in54 = anon55;
				uint64_t phi56 = phi_in53;
				uint64_t phi57 = phi_in53;
				if (anon55 > -1)
				{
					uint64_t anon61;
					do
					{
						uint64_t phi58 = phi_in54;
						uint8_t* phi59 = (uint8_t*)0x400a44;
						uint64_t phi60 = 1;
						if (phi56 != 0)
						{
							phi59 = (uint8_t*)0x400a48;
							phi60 = 20;
							if (phi56 != ((uint64_t)((__zext uint128_t)phi56 * 970881267037344822 >> 64) - (phi56 >> 63)) * 19)
							{
								phi59 = (uint8_t*)0x400a49;
								phi60 = phi56 + 1;
							}
						}
						phi_in53 = phi60;
						printf(phi59);
						anon61 = phi58 - 1;
						phi_in54 = anon61;
						phi56 = phi_in53;
						phi57 = phi_in53;
					}
					while (anon61 > -1);
				}
				phi_in48 = *(uint64_t*)(phi52 + 8);
				phi49 = phi57;
				phi50 = 1000;
			}
			while (*(uint64_t*)(phi52 + 8) != 0);
			phi51 = phi51 + 1;
			phi14 = phi19;
			uint64_t anon62 = phi20 & 0xffff;
			phi_in15 = anon62 + 1;
			phi16 = phi18;
			phi17 = 65535;
			uint16_t anon63 = (uint16_t)phi25 + phi26 * (uint16_t)phi20;
			uint128_t anon64 = (__zext uint128_t)anon63 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon63 + (uint16_t)anon64 * 55536;
			if (phi27 < 1000)
			{
				phi65 = *(uint64_t*)(anon28 + 8);
				phi66 = phi_in30;
				phi67 = phi23 + 2;
				phi68 = phi24 + 2;
				phi69 = phi27 + 1;
			}
			else 
			{
				uint64_t phi70;
				uint64_t* anon71 = (uint64_t*)*(uint64_t*)(anon28 + 8);
				phi70 = *anon71;
				uint64_t phi72 = phi_in30;
				if (*anon71 == 0)
				{
					*anon71 = anon28;
					*(uint64_t*)anon29 = 0;
					phi70 = anon28;
					phi72 = anon28;
				}
				phi65 = phi70;
				phi66 = *(uint64_t*)phi72;
				phi67 = phi72 + 16;
				phi68 = phi70 + 16;
				phi69 = 0;
			}
			phi18 = phi65;
			phi22 = phi66;
			phi23 = phi67;
			phi24 = phi68;
			phi27 = phi69;
			phi25 = (uint64_t)anon64;
			phi26 = *(uint16_t*)phi23;
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

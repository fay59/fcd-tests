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
			uint64_t anon18;
			uint8_t* anon19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint16_t phi26;
			uint64_t phi27;
			uint64_t phi_in28;
			uint64_t phi_in29;
			uint64_t phi52;
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
			uint64_t phi10 = anon6;
			anon11 = phi3 + 1;
			if (anon11 >= 2)
			{
				uint64_t phi31;
				uint64_t phi_in12 = anon8;
				uint64_t phi_in13 = anon8 + 16;
				phi14 = anon9;
				phi_in15 = 2;
				phi16 = anon6;
				phi17 = 1;
				anon19 = malloc(2016);
				anon18 = (uint64_t)anon19;
				*(uint64_t*)(anon18 + 8) = phi_in12;
				phi20 = phi_in13;
				phi_in13 = phi14;
				phi21 = phi_in15;
				phi_in12 = phi16;
				uint16_t phi_in22 = phi17;
				phi23 = *(uint64_t*)phi_in12;
				phi24 = phi_in13;
				phi25 = 0;
				phi26 = phi_in22;
				phi27 = 0;
				phi_in28 = *(uint64_t*)(anon18 + 8);
				phi_in29 = phi23;
				bool anon30 = phi_in29 == 0 & phi26 == 65535;
				if (anon30)
				{
					phi10 = phi_in28;
					phi31 = phi20;
					uint64_t phi32 = phi_in28;
					uint64_t phi33 = phi25;
					uint64_t phi34 = phi20;
					uint64_t phi35 = phi27;
					uint64_t phi36 = phi25 & 0xffff;
					if (phi25 != 0)
					{
						uint64_t phi47;
						do
						{
							uint64_t phi_in39;
							uint64_t phi_in40;
							uint64_t anon41;
							uint64_t phi42;
							uint64_t phi37 = phi32;
							uint128_t anon38 = (__zext uint128_t)phi36 * 3777893186295716171 >> 75;
							*(uint16_t*)phi34 = (uint16_t)phi33 + (uint16_t)anon38 * 55536;
							if (phi35 < 999)
							{
								phi_in39 = phi34 + 2;
								anon41 = (uint64_t)anon38;
								phi_in40 = anon41;
								phi42 = phi35 + 1;
							}
							else 
							{
								uint64_t phi43;
								uint64_t* anon44 = (uint64_t*)phi37;
								phi43 = *anon44;
								phi_in40 = anon41;
								if (*anon44 == 0)
								{
									uint8_t* anon45 = malloc(2016);
									uint64_t anon46 = (uint64_t)anon45;
									*anon44 = anon46;
									*(uint64_t*)anon45 = 0;
									*(uint64_t*)(anon46 + 8) = phi37;
									phi43 = anon46;
									phi_in40 = anon41 & 0xffff;
								}
								phi37 = phi43;
								phi_in39 = phi37 + 16;
								phi42 = 0;
							}
							phi47 = phi_in40;
							phi10 = phi37;
							phi31 = phi_in39;
							phi32 = phi37;
							phi33 = anon41;
							phi34 = phi_in39;
							phi35 = phi42;
							phi36 = anon41;
						}
						while (phi47 != 0);
					}
				}
				*(uint16_t*)phi31 = 65535;
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
				uint64_t phi53 = phi49;
				uint64_t anon55 = phi50 - 1;
				phi_in54 = anon55;
				uint64_t phi56 = phi53;
				if (anon55 > -1)
				{
					uint64_t anon60;
					do
					{
						uint64_t phi57 = phi_in54;
						uint8_t* phi58 = (uint8_t*)0x400a44;
						uint64_t phi_in59 = 1;
						if (phi56 != 0)
						{
							phi58 = (uint8_t*)0x400a48;
							phi_in59 = 20;
							if (phi56 != ((uint64_t)((__zext uint128_t)phi56 * 970881267037344822 >> 64) - (phi56 >> 63)) * 19)
							{
								phi58 = (uint8_t*)0x400a49;
								phi_in59 = phi56 + 1;
							}
						}
						printf(phi58);
						anon60 = phi57 - 1;
						phi_in54 = anon60;
						phi56 = phi_in59;
						phi53 = phi_in59;
					}
					while (anon60 > -1);
				}
				phi_in48 = *(uint64_t*)(phi52 + 8);
				phi49 = phi53;
				phi50 = 1000;
			}
			while (*(uint64_t*)(phi52 + 8) != 0);
			phi51 = phi51 + 1;
			phi14 = phi20;
			uint64_t anon61 = phi21 & 0xffff;
			phi_in15 = anon61 + 1;
			phi16 = *(uint64_t*)(anon18 + 8);
			phi17 = 65535;
			uint16_t anon62 = (uint16_t)phi25 + phi26 * (uint16_t)phi21;
			uint128_t anon63 = (__zext uint128_t)anon62 * 3777893186295716171 >> 75;
			*(uint16_t*)phi20 = anon62 + (uint16_t)anon63 * 55536;
			if (phi27 < 1000)
			{
				phi23 = phi_in29;
				phi24 = phi24 + 2;
				phi64 = phi20 + 2;
				phi27 = phi27 + 1;
			}
			else 
			{
				uint64_t phi65;
				uint64_t* anon66 = (uint64_t*)phi_in28;
				phi65 = *anon66;
				uint64_t phi67 = phi_in29;
				if (*anon66 == 0)
				{
					*anon66 = anon18;
					*(uint64_t*)anon19 = 0;
					*(uint64_t*)(anon18 + 8) = phi_in28;
					phi65 = anon18;
					phi67 = anon18;
				}
				phi_in28 = phi65;
				phi23 = *(uint64_t*)phi67;
				phi24 = phi67 + 16;
				phi64 = phi65 + 16;
				phi27 = 0;
			}
			phi20 = phi64;
			*(uint64_t*)(anon18 + 8) = phi_in28;
			phi25 = (uint64_t)anon63;
			phi26 = *(uint16_t*)phi24;
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

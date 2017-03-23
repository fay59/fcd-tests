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
			uint64_t phi_in13;
			uint64_t phi_in14;
			uint64_t phi15;
			uint16_t phi_in16;
			uint64_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint16_t phi25;
			uint64_t phi26;
			uint64_t anon27;
			uint8_t* anon28;
			uint64_t phi29;
			uint64_t phi52;
			uint64_t phi64;
			uint64_t phi65;
			uint64_t phi66;
			uint64_t phi_in67;
			uint64_t phi68;
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
				uint64_t phi_in31;
				uint64_t phi32;
				uint64_t phi_in12 = anon8;
				phi_in13 = anon8 + 16;
				phi_in13 = anon9;
				phi_in14 = 2;
				phi15 = anon6;
				phi_in16 = 1;
				phi17 = phi_in12;
				phi18 = phi_in13;
				phi19 = phi_in14;
				phi_in12 = phi15;
				phi20 = phi17;
				phi21 = *(uint64_t*)phi_in12;
				phi22 = phi_in13;
				phi23 = phi18;
				phi24 = 0;
				phi25 = phi_in16;
				phi26 = 0;
				anon28 = malloc(2016);
				anon27 = (uint64_t)anon28;
				*(uint64_t*)(anon27 + 8) = phi20;
				phi29 = phi21;
				bool anon30 = phi29 == 0 & phi25 == 65535;
				if (anon30)
				{
					phi_in31 = *(uint64_t*)(anon27 + 8);
					phi32 = phi23;
					uint8_t* anon34 = malloc(2016);
					uint64_t anon33 = (uint64_t)anon34;
					*(uint64_t*)(anon33 + 8) = *(uint64_t*)(anon27 + 8);
					uint64_t phi35 = phi24;
					uint64_t phi36 = phi23;
					uint64_t phi37 = phi26;
					uint64_t phi38 = phi24 & 0xffff;
					if (phi24 != 0)
					{
						uint64_t phi47;
						do
						{
							uint64_t phi40;
							uint64_t phi_in41;
							uint64_t phi_in42;
							uint64_t anon43;
							uint64_t phi_in44;
							uint128_t anon39 = (__zext uint128_t)phi38 * 3777893186295716171 >> 75;
							*(uint16_t*)phi36 = (uint16_t)phi35 + (uint16_t)anon39 * 55536;
							if (phi37 < 999)
							{
								phi40 = *(uint64_t*)(anon33 + 8);
								phi_in41 = phi36 + 2;
								anon43 = (uint64_t)anon39;
								phi_in42 = anon43;
								phi_in44 = phi37 + 1;
							}
							else 
							{
								uint64_t phi45;
								uint64_t* anon46 = (uint64_t*)*(uint64_t*)(anon33 + 8);
								phi45 = *anon46;
								phi_in42 = anon43;
								if (*anon46 == 0)
								{
									*anon46 = anon33;
									*(uint64_t*)anon34 = 0;
									phi45 = anon33;
									phi_in42 = anon43 & 0xffff;
								}
								phi40 = phi45;
								phi_in41 = phi45 + 16;
								phi_in44 = 0;
							}
							phi_in31 = phi40;
							phi47 = phi_in42;
							phi32 = phi_in41;
							*(uint64_t*)(anon33 + 8) = phi_in31;
							phi35 = anon43;
							phi36 = phi_in41;
							phi37 = phi_in44;
							phi38 = anon43;
						}
						while (phi47 != 0);
					}
				}
				*(uint16_t*)phi32 = 65535;
				phi10 = phi_in31;
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
						uint64_t phi59 = 1;
						if (phi56 != 0)
						{
							phi58 = (uint8_t*)0x400a48;
							phi59 = 20;
							if (phi56 != ((uint64_t)((__zext uint128_t)phi56 * 970881267037344822 >> 64) - (phi56 >> 63)) * 19)
							{
								phi58 = (uint8_t*)0x400a49;
								phi59 = phi56 + 1;
							}
						}
						phi53 = phi59;
						printf(phi58);
						anon60 = phi57 - 1;
						phi_in54 = anon60;
						phi56 = phi53;
					}
					while (anon60 > -1);
				}
				phi_in48 = *(uint64_t*)(phi52 + 8);
				phi49 = phi53;
				phi50 = 1000;
			}
			while (*(uint64_t*)(phi52 + 8) != 0);
			phi51 = phi51 + 1;
			phi_in13 = phi18;
			uint64_t anon61 = phi19 & 0xffff;
			phi_in14 = anon61 + 1;
			phi15 = phi17;
			phi_in16 = 65535;
			uint16_t anon62 = (uint16_t)phi24 + phi25 * (uint16_t)phi19;
			uint128_t anon63 = (__zext uint128_t)anon62 * 3777893186295716171 >> 75;
			*(uint16_t*)phi23 = anon62 + (uint16_t)anon63 * 55536;
			if (phi26 < 1000)
			{
				phi64 = *(uint64_t*)(anon27 + 8);
				phi65 = phi29;
				phi66 = phi22 + 2;
				phi_in67 = phi23 + 2;
				phi68 = phi26 + 1;
			}
			else 
			{
				uint64_t phi69;
				uint64_t* anon70 = (uint64_t*)*(uint64_t*)(anon27 + 8);
				phi69 = *anon70;
				if (*anon70 == 0)
				{
					*anon70 = anon27;
					*(uint64_t*)anon28 = 0;
					phi69 = anon27;
					phi29 = anon27;
				}
				phi64 = phi69;
				phi65 = *(uint64_t*)phi29;
				phi66 = phi29 + 16;
				phi_in67 = phi69 + 16;
				phi68 = 0;
			}
			phi20 = phi64;
			phi21 = phi65;
			phi22 = phi66;
			phi26 = phi68;
			phi23 = phi_in67;
			phi24 = (uint64_t)anon63;
			phi25 = *(uint16_t*)phi22;
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

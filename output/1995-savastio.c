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
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon12;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 >= 13)
		{
			uint64_t phi15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint16_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t* phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint64_t phi31;
			uint64_t anon32;
			uint8_t* anon33;
			uint64_t phi_in34;
			uint64_t* phi_in35;
			uint64_t phi36;
			uint64_t phi69;
			uint64_t* phi70;
			uint64_t phi71;
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
			uint64_t phi11 = anon6;
			anon12 = phi3 + 1;
			if (anon12 >= 2)
			{
				uint64_t phi37;
				uint64_t phi38;
				uint64_t phi39;
				uint64_t phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi17 = anon6;
				phi18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi_in14 = phi15;
				phi21 = phi_in16;
				phi_in13 = phi17;
				phi22 = phi19;
				phi23 = phi20;
				phi24 = 0;
				phi25 = phi19;
				uint64_t* anon27 = (uint64_t*)phi19;
				phi26 = anon27;
				phi28 = anon27;
				phi29 = phi_in14;
				phi30 = 0;
				phi31 = *(uint64_t*)phi_in13;
				anon33 = malloc(2016);
				anon32 = (uint64_t)anon33;
				*(uint64_t*)(anon32 + 8) = phi22;
				phi_in34 = phi25;
				phi_in35 = phi26;
				phi36 = phi31;
				if (phi36 == 0 & phi18 == 65535)
				{
					phi37 = *(uint64_t*)(anon32 + 8);
					phi38 = phi_in34;
					phi39 = phi23;
					uint8_t* anon41 = malloc(2016);
					uint64_t anon40 = (uint64_t)anon41;
					*(uint64_t*)(anon40 + 8) = *(uint64_t*)(anon32 + 8);
					uint64_t phi42 = phi_in34;
					uint64_t* phi43 = phi_in35;
					uint64_t phi44 = phi23;
					uint64_t phi45 = phi30;
					uint64_t phi46 = phi24;
					if ((phi24 & 0xffff) != 0)
					{
						while (true)
						{
							uint64_t* phi_in47 = phi43;
							uint128_t anon48 = (__zext uint128_t)(phi46 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi44 = (uint16_t)phi46 + (uint16_t)anon48 * 55536;
							uint64_t phi49 = *(uint64_t*)(anon40 + 8);
							uint64_t phi50 = phi44 + 2;
							uint64_t phi_in51 = phi45 + 1;
							if (phi45 >= 999)
							{
								uint64_t phi52 = *phi_in47;
								if (*phi_in47 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon40 + 8) = anon40;
									*(uint64_t*)anon41 = 0;
									phi52 = anon40;
								}
								phi42 = phi52;
								phi49 = phi42;
								phi50 = phi42 + 16;
								phi_in47 = (uint64_t*)phi42;
								phi_in51 = 0;
							}
							break;
							phi38 = phi42;
							phi39 = phi50;
							phi37 = phi49;
							*(uint64_t*)(anon40 + 8) = phi49;
							phi42 = phi38;
							phi43 = phi_in47;
							phi44 = phi39;
							phi45 = phi_in51;
							phi46 = (uint64_t)anon48;
						}
					}
				}
				uint64_t phi_in53 = phi37;
				phi11 = phi38;
				*(uint16_t*)phi39 = 65535;
				phi10 = phi_in53;
			}
			uint64_t phi54 = phi10;
			uint64_t phi55 = 0;
			uint64_t phi56 = phi11;
			uint64_t phi57 = 0;
			uint64_t phi_in58 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi59;
				do
				{
					phi59 = phi_in58;
					phi54 = phi10;
					phi55 = 0;
					phi56 = phi11;
					phi57 = phi59;
					if (*(uint16_t*)(phi11 + (phi59 << 1) + 16) != 65535)
					{
						phi54 = phi10;
						phi55 = 0;
						phi56 = phi11;
						phi57 = 1000;
						phi_in58 = phi59 + 1;
						if (phi59 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi11 + (phi59 << 1) + 16) != 65535);
			}
			while (true)
			{
				uint64_t phi62;
				uint64_t phi60 = phi55;
				uint64_t phi61 = phi56;
				uint64_t anon63 = phi57 - 1;
				phi62 = anon63;
				uint64_t phi64 = phi60;
				if (anon63 > -1)
				{
					while (true)
					{
						uint8_t* phi65 = (uint8_t*)0x400a44;
						uint64_t phi_in66 = 1;
						if (phi64 != 0)
						{
							phi65 = (uint8_t*)0x400a48;
							phi_in66 = 20;
							if (phi64 != ((uint64_t)((__zext uint128_t)phi64 * 970881267037344822 >> 64) - (phi64 >> 63)) * 19)
							{
								phi65 = (uint8_t*)0x400a49;
								phi_in66 = phi64 + 1;
							}
						}
						break;
						printf(phi65);
						phi62 = phi62 - 1;
						phi64 = phi_in66;
						phi60 = phi_in66;
						phi61 = phi54;
					}
				}
				break;
				phi54 = *(uint64_t*)(phi61 + 8);
				phi55 = phi60;
				phi56 = *(uint64_t*)(phi61 + 8);
				phi57 = 1000;
			}
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon67 = (uint16_t)phi24 + phi18 * (uint16_t)phi21;
			uint128_t anon68 = (__zext uint128_t)anon67 * 3777893186295716171 >> 75;
			*(uint16_t*)phi23 = anon67 + (uint16_t)anon68 * 55536;
			if (phi30 < 1000)
			{
				phi69 = *(uint64_t*)(anon32 + 8);
				phi23 = phi23 + 2;
				phi25 = phi_in34;
				phi70 = phi_in35;
				phi28 = phi28;
				phi71 = phi36;
				phi29 = phi29 + 2;
				phi30 = phi30 + 1;
			}
			else 
			{
				uint64_t phi72 = *phi28;
				if (*phi28 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon32 + 8) = anon32;
					*(uint64_t*)anon33 = 0;
					phi72 = anon32;
					phi36 = anon32;
				}
				phi69 = phi72;
				phi23 = phi72 + 16;
				phi25 = phi72;
				uint64_t* anon73 = (uint64_t*)phi72;
				phi70 = anon73;
				phi28 = anon73;
				phi71 = *(uint64_t*)phi36;
				phi29 = phi36 + 16;
				phi30 = 0;
			}
			phi22 = phi69;
			uint64_t* phi26 = phi70;
			phi31 = phi71;
			phi24 = (uint64_t)anon68;
			phi18 = *(uint16_t*)phi29;
		}
		break;
		phi_in1 = anon12;
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

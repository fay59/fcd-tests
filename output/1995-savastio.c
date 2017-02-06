#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void _IO_putc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600dd0);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600de0);
}
void main(uint64_t arg0)
{
	uint64_t phi_in114;
	uint64_t* phi_in112;
	uint64_t phi_in116;
	uint64_t phi_in111;
	uint64_t phi_in93;
	uint64_t phi2;
	uint64_t phi19;
	uint64_t phi_in12;
	uint64_t phi44;
	uint64_t phi_in115;
	uint64_t phi41;
	uint64_t phi_in15;
	uint64_t* phi39;
	uint64_t phi43;
	uint64_t phi_in110;
	uint64_t phi_in13;
	uint64_t phi_in34;
	uint64_t phi_in33;
	uint64_t phi18;
	uint64_t phi_in25;
	uint64_t phi_in14;
	uint64_t phi38;
	uint64_t phi_in24;
	uint32_t dispatch17;
	uint64_t* phi_in113;
	uint64_t phi20;
	uint64_t phi37;
	uint64_t phi_in109;
	uint64_t phi36;
	uint64_t* phi40;
	uint64_t phi21;
	uint16_t phi42;
	uint16_t phi_in16;
	uint64_t phi22;
	uint64_t phi_in31;
	uint16_t phi_in32;
	uint64_t phi_in27;
	uint64_t phi106;
	uint64_t phi35;
	uint64_t* phi_in30;
	uint64_t phi_in11;
	uint64_t anon3;
	uint64_t phi_in26;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		_IO_putc(4195690);
		anon3 = phi2 + 1;
		phi_in1 = anon3;
	}
	while (phi2 < 13);
	scanf((uint8_t*)0x400a4e);
	uint8_t* anon4 = malloc(2016);
	*(uint64_t*)anon4 = 0;
	uint64_t anon5 = (uint64_t)anon4;
	*(uint64_t*)(anon5 + 8) = 0;
	uint8_t* anon6 = malloc(2016);
	*(uint64_t*)anon6 = 0;
	uint64_t anon7 = (uint64_t)anon6;
	*(uint64_t*)(anon7 + 8) = 0;
	uint64_t anon8 = anon5 + 16;
	*(uint16_t*)anon8 = 1;
	*(uint16_t*)(anon5 + 18) = 65535;
	uint64_t phi_in9 = anon5;
	uint64_t phi_in10 = anon5;
	if (anon3 >= 2)
	{
		uint64_t phi_in48;
		uint64_t phi_in47;
		uint64_t phi_in46;
		phi_in11 = anon7;
		phi_in12 = anon7 + 16;
		phi_in13 = anon8;
		phi_in14 = 2;
		phi_in15 = anon5;
		phi_in16 = 1;
		dispatch17 = 0;
		while (true)
		{
			uint64_t* phi_in51;
			uint64_t phi_in53;
			uint64_t phi_in52;
			uint64_t phi_in50;
			uint64_t phi_in49;
			uint64_t phi_in54;
			uint64_t anon55;
			if (dispatch17 == 0)
			{
				phi18 = phi_in11;
				phi19 = phi_in12;
				phi20 = phi_in13;
				phi21 = phi_in14;
				phi22 = phi_in15;
				uint16_t phi23 = phi_in16;
				phi_in24 = phi18;
				phi_in25 = phi19;
				phi_in26 = 0;
				phi_in27 = phi18;
				uint64_t* anon29 = (uint64_t*)phi18;
				phi_in28 = anon29;
				phi_in30 = anon29;
				phi_in31 = phi20;
				phi_in32 = phi23;
				phi_in33 = 0;
				phi_in34 = *(uint64_t*)phi22;
			}
			if (dispatch17 == 1 || dispatch17 == 0)
			{
				phi35 = phi_in24;
				phi36 = phi_in25;
				phi37 = phi_in26;
				phi38 = phi_in27;
				phi39 = phi_in28;
				phi40 = phi_in30;
				phi41 = phi_in31;
				phi42 = phi_in32;
				phi43 = phi_in33;
				phi44 = phi_in34;
			}
			bool anon45 = phi44 == 0 & phi42 == 65535;
			if (anon45 && (dispatch17 == 1 || dispatch17 == 0))
			{
				phi_in46 = phi35;
				phi_in47 = phi38;
				phi_in48 = phi36;
				phi_in49 = phi35;
				phi_in50 = phi38;
				phi_in51 = phi39;
				phi_in52 = phi36;
				phi_in53 = phi43;
				phi_in54 = phi37;
				anon55 = phi37 & 0xffff;
				if (anon55 == 0)
				{
					break;
				}
			}
			if (dispatch17 == 2 || anon55 != 0 && dispatch17 == 1 && anon45 || anon55 != 0 && dispatch17 == 0 && anon45)
			{
				uint64_t phi56 = phi_in49;
				uint64_t phi57 = phi_in50;
				uint64_t* phi58 = phi_in51;
				uint64_t phi59 = phi_in52;
				uint64_t phi60 = phi_in53;
				uint64_t phi61 = phi_in54;
				uint128_t anon62 = (__zext uint128_t)(phi61 & 0xffff) * 3777893186295716171 >> 75;
				*(uint16_t*)phi59 = (uint16_t)phi61 + (uint16_t)anon62 * 55536;
				uint64_t phi_in63 = phi56;
				uint64_t phi_in64 = phi57;
				uint64_t phi_in65 = phi59 + 2;
				uint64_t* phi_in66 = phi58;
				uint64_t phi_in67 = phi60 + 1;
				if (phi60 >= 999)
				{
					uint64_t phi_in68 = *phi58;
					if (*phi58 == 0)
					{
						uint8_t* anon69 = malloc(2016);
						uint64_t anon70 = (uint64_t)anon69;
						*(uint64_t*)phi56 = anon70;
						*(uint64_t*)anon69 = 0;
						*(uint64_t*)(anon70 + 8) = phi56;
						phi_in68 = anon70;
					}
					uint64_t phi71 = phi_in68;
					phi_in63 = phi71;
					phi_in64 = phi71;
					phi_in65 = phi71 + 16;
					phi_in66 = (uint64_t*)phi71;
					phi_in67 = 0;
				}
				uint64_t phi72 = phi_in63;
				uint64_t phi73 = phi_in64;
				uint64_t phi74 = phi_in65;
				uint64_t* phi75 = phi_in66;
				uint64_t phi76 = phi_in67;
				phi_in46 = phi72;
				phi_in47 = phi73;
				phi_in48 = phi74;
				phi_in49 = phi72;
				phi_in50 = phi73;
				phi_in51 = phi75;
				phi_in52 = phi74;
				phi_in53 = phi76;
				phi_in54 = (uint64_t)anon62;
				dispatch17 = 2;
				if (anon62 == 0)
				{
					break;
				}
			}
		}
		uint64_t phi77 = phi_in46;
		uint64_t phi78 = phi_in47;
		uint64_t phi79 = phi_in48;
		*(uint16_t*)phi79 = 65535;
		phi_in9 = phi77;
		phi_in10 = phi78;
	}
	uint64_t phi80 = phi_in9;
	uint64_t phi81 = phi_in10;
	uint64_t phi_in82 = phi80;
	uint64_t phi_in83 = 0;
	uint64_t phi_in84 = phi81;
	uint64_t phi_in85 = 0;
	uint64_t phi_in86 = 1;
	uint32_t dispatch87 = 0;
	if (*(uint16_t*)(phi81 + 16) != 65535)
	{
		uint64_t phi88;
		do
		{
			phi88 = phi_in86;
			phi_in82 = phi80;
			phi_in83 = 0;
			phi_in84 = phi81;
			phi_in85 = phi88;
			dispatch87 = 0;
			if (*(uint16_t*)(phi81 + (phi88 << 1) + 16) != 65535)
			{
				phi_in82 = phi80;
				phi_in83 = 0;
				phi_in84 = phi81;
				phi_in85 = 1000;
				phi_in86 = phi88 + 1;
				dispatch87 = 0;
				if (phi88 == 999)
				{
					break;
				}
			}
		}
		while (*(uint16_t*)(phi81 + (phi88 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in97;
		uint64_t phi_in96;
		while (true)
		{
			uint64_t phi89;
			uint64_t phi_in95;
			uint64_t anon94;
			if (dispatch87 == 0)
			{
				phi89 = phi_in82;
				uint64_t phi90 = phi_in83;
				uint64_t phi91 = phi_in84;
				uint64_t phi92 = phi_in85;
				anon94 = phi92 - 1;
				phi_in93 = anon94;
				phi_in95 = phi90;
				phi_in96 = phi90;
				phi_in97 = phi91;
				if (anon94 <= -1)
				{
					break;
				}
			}
			if (dispatch87 == 1 || dispatch87 == 0 && anon94 > -1)
			{
				uint64_t phi98 = phi_in93;
				uint64_t phi99 = phi_in95;
				uint8_t* phi_in100 = (uint8_t*)0x400a44;
				uint64_t phi_in101 = 1;
				if (phi99 != 0)
				{
					phi_in100 = (uint8_t*)0x400a48;
					phi_in101 = 20;
					if (phi99 != ((uint64_t)((__zext uint128_t)phi99 * 970881267037344822 >> 64) - (phi99 >> 63)) * 19)
					{
						phi_in100 = (uint8_t*)0x400a49;
						phi_in101 = phi99 + 1;
					}
				}
				uint8_t* phi102 = phi_in100;
				uint64_t phi103 = phi_in101;
				printf(phi102);
				uint64_t anon104 = phi98 - 1;
				phi_in93 = anon104;
				phi_in95 = phi103;
				phi_in96 = phi103;
				phi_in97 = phi89;
				dispatch87 = 1;
				if (anon104 <= -1)
				{
					break;
				}
			}
		}
		uint64_t phi105 = phi_in96;
		phi106 = phi_in97;
		phi_in82 = *(uint64_t*)(phi106 + 8);
		phi_in83 = phi105;
		phi_in84 = *(uint64_t*)(phi106 + 8);
		phi_in85 = 1000;
		dispatch87 = 0;
	}
	while (*(uint64_t*)(phi106 + 8) != 0);
	phi_in11 = phi22;
	phi_in12 = phi20;
	phi_in13 = phi19;
	phi_in14 = (phi21 & 0xffff) + 1;
	phi_in15 = phi18;
	phi_in16 = 65535;
	dispatch17 = 0;
	uint16_t anon107 = (uint16_t)phi37 + phi42 * (uint16_t)phi21;
	uint128_t anon108 = (__zext uint128_t)anon107 * 3777893186295716171 >> 75;
	*(uint16_t*)phi36 = anon107 + (uint16_t)anon108 * 55536;
	if (phi43 < 1000)
	{
		phi_in109 = phi35;
		phi_in110 = phi36 + 2;
		phi_in111 = phi38;
		phi_in112 = phi39;
		phi_in113 = phi40;
		phi_in114 = phi44;
		phi_in115 = phi41 + 2;
		phi_in116 = phi43 + 1;
	}
	else 
	{
		uint64_t phi_in117 = *phi40;
		uint64_t phi_in118 = phi44;
		if (*phi40 == 0)
		{
			uint8_t* anon119 = malloc(2016);
			uint64_t anon120 = (uint64_t)anon119;
			*(uint64_t*)phi35 = anon120;
			*(uint64_t*)anon119 = 0;
			*(uint64_t*)(anon120 + 8) = phi35;
			phi_in117 = anon120;
			phi_in118 = anon120;
		}
		uint64_t phi121 = phi_in117;
		uint64_t phi122 = phi_in118;
		phi_in109 = phi121;
		phi_in110 = phi121 + 16;
		phi_in111 = phi121;
		uint64_t* anon123 = (uint64_t*)phi121;
		phi_in112 = anon123;
		phi_in113 = anon123;
		phi_in114 = *(uint64_t*)phi122;
		phi_in115 = phi122 + 16;
		phi_in116 = 0;
	}
	uint64_t phi124 = phi_in109;
	uint64_t phi125 = phi_in110;
	uint64_t phi126 = phi_in111;
	uint64_t* phi127 = phi_in112;
	uint64_t* phi128 = phi_in113;
	uint64_t phi129 = phi_in114;
	uint64_t phi130 = phi_in115;
	uint64_t phi131 = phi_in116;
	phi_in24 = phi124;
	phi_in25 = phi125;
	phi_in26 = (uint64_t)anon108;
	phi_in27 = phi126;
	uint64_t* phi_in28 = phi127;
	phi_in30 = phi128;
	phi_in31 = phi130;
	phi_in32 = *(uint16_t*)phi130;
	phi_in33 = phi131;
	phi_in34 = phi129;
	dispatch17 = 1;
	_IO_putc(4196492);
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

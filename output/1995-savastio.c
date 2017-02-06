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
	uint64_t phi132;
	uint64_t phi_in119;
	uint64_t anon3;
	uint64_t phi2;
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
		uint64_t anon105;
		uint64_t phi_in11 = anon7;
		uint64_t phi_in12 = anon7 + 16;
		uint64_t phi_in13 = anon8;
		uint64_t phi_in14 = 2;
		uint64_t phi_in15 = anon5;
		uint16_t phi_in16 = 1;
		uint32_t dispatch17 = 0;
		do
		{
			uint64_t phi_in48;
			uint64_t phi21;
			uint64_t phi_in46;
			uint64_t phi_in47;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi22;
			uint64_t phi20;
			while (true)
			{
				uint64_t* phi_in51;
				uint64_t anon55;
				uint64_t phi37;
				uint16_t phi_in32;
				uint64_t phi_in54;
				uint64_t phi_in52;
				uint64_t phi_in50;
				uint64_t phi_in49;
				uint64_t phi38;
				uint64_t phi_in24;
				uint64_t phi43;
				uint64_t phi41;
				uint64_t* phi40;
				uint64_t phi_in34;
				uint64_t phi35;
				uint64_t phi_in33;
				uint64_t phi_in31;
				uint64_t* phi39;
				uint64_t* phi_in30;
				uint64_t* phi_in28;
				uint64_t phi_in53;
				uint64_t phi_in27;
				uint64_t phi_in26;
				uint64_t phi_in25;
				uint16_t phi42;
				uint64_t phi44;
				uint64_t phi36;
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
				if (dispatch17 == 2 || dispatch17 == 0)
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
				if (anon45)
				{
					if (dispatch17 == 2 || dispatch17 == 0)
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
				}
				else if (dispatch17 == 2 || dispatch17 == 0)
				{
					uint64_t phi_in65;
					uint64_t phi_in58;
					uint64_t phi_in64;
					uint64_t phi_in63;
					uint64_t phi_in60;
					uint64_t phi_in59;
					uint64_t* phi_in61;
					uint64_t* phi_in62;
					uint16_t anon56 = (uint16_t)phi37 + phi42 * (uint16_t)phi21;
					uint128_t anon57 = (__zext uint128_t)anon56 * 3777893186295716171 >> 75;
					*(uint16_t*)phi36 = anon56 + (uint16_t)anon57 * 55536;
					if (phi43 < 1000)
					{
						phi_in58 = phi35;
						phi_in59 = phi36 + 2;
						phi_in60 = phi38;
						phi_in61 = phi39;
						phi_in62 = phi40;
						phi_in63 = phi44;
						phi_in64 = phi41 + 2;
						phi_in65 = phi43 + 1;
					}
					else 
					{
						uint64_t phi_in66 = *phi40;
						uint64_t phi_in67 = phi44;
						if (*phi40 == 0)
						{
							uint8_t* anon68 = malloc(2016);
							uint64_t anon69 = (uint64_t)anon68;
							*(uint64_t*)phi35 = anon69;
							*(uint64_t*)anon68 = 0;
							*(uint64_t*)(anon69 + 8) = phi35;
							phi_in66 = anon69;
							phi_in67 = anon69;
						}
						uint64_t phi70 = phi_in66;
						uint64_t phi71 = phi_in67;
						phi_in58 = phi70;
						phi_in59 = phi70 + 16;
						phi_in60 = phi70;
						uint64_t* anon72 = (uint64_t*)phi70;
						phi_in61 = anon72;
						phi_in62 = anon72;
						phi_in63 = *(uint64_t*)phi71;
						phi_in64 = phi71 + 16;
						phi_in65 = 0;
					}
					uint64_t phi73 = phi_in58;
					uint64_t phi74 = phi_in59;
					uint64_t phi75 = phi_in60;
					uint64_t* phi76 = phi_in61;
					uint64_t* phi77 = phi_in62;
					uint64_t phi78 = phi_in63;
					uint64_t phi79 = phi_in64;
					uint64_t phi80 = phi_in65;
					phi_in24 = phi73;
					phi_in25 = phi74;
					phi_in26 = (uint64_t)anon57;
					phi_in27 = phi75;
					phi_in28 = phi76;
					phi_in30 = phi77;
					phi_in31 = phi79;
					phi_in32 = *(uint16_t*)phi79;
					phi_in33 = phi80;
					phi_in34 = phi78;
					dispatch17 = 2;
				}
				if (dispatch17 == 1 || anon55 != 0 && dispatch17 == 2 && anon45 || anon55 != 0 && dispatch17 == 0 && anon45)
				{
					uint64_t phi81 = phi_in49;
					uint64_t phi82 = phi_in50;
					uint64_t* phi83 = phi_in51;
					uint64_t phi84 = phi_in52;
					uint64_t phi85 = phi_in53;
					uint64_t phi86 = phi_in54;
					uint128_t anon87 = (__zext uint128_t)(phi86 & 0xffff) * 3777893186295716171 >> 75;
					*(uint16_t*)phi84 = (uint16_t)phi86 + (uint16_t)anon87 * 55536;
					uint64_t phi_in88 = phi81;
					uint64_t phi_in89 = phi82;
					uint64_t phi_in90 = phi84 + 2;
					uint64_t* phi_in91 = phi83;
					uint64_t phi_in92 = phi85 + 1;
					if (phi85 >= 999)
					{
						uint64_t phi_in93 = *phi83;
						if (*phi83 == 0)
						{
							uint8_t* anon94 = malloc(2016);
							uint64_t anon95 = (uint64_t)anon94;
							*(uint64_t*)phi81 = anon95;
							*(uint64_t*)anon94 = 0;
							*(uint64_t*)(anon95 + 8) = phi81;
							phi_in93 = anon95;
						}
						uint64_t phi96 = phi_in93;
						phi_in88 = phi96;
						phi_in89 = phi96;
						phi_in90 = phi96 + 16;
						phi_in91 = (uint64_t*)phi96;
						phi_in92 = 0;
					}
					uint64_t phi97 = phi_in88;
					uint64_t phi98 = phi_in89;
					uint64_t phi99 = phi_in90;
					uint64_t* phi100 = phi_in91;
					uint64_t phi101 = phi_in92;
					phi_in46 = phi97;
					phi_in47 = phi98;
					phi_in48 = phi99;
					phi_in49 = phi97;
					phi_in50 = phi98;
					phi_in51 = phi100;
					phi_in52 = phi99;
					phi_in53 = phi101;
					phi_in54 = (uint64_t)anon87;
					dispatch17 = 1;
					if (anon87 == 0)
					{
						break;
					}
				}
			}
			uint64_t phi102 = phi_in46;
			uint64_t phi103 = phi_in47;
			uint64_t phi104 = phi_in48;
			*(uint16_t*)phi104 = 65535;
			phi_in9 = phi102;
			phi_in10 = phi103;
			anon105 = phi21 & 0xffff;
			if (anon3 > anon105)
			{
				phi_in11 = phi22;
				phi_in12 = phi20;
				phi_in13 = phi19;
				phi_in14 = anon105 + 1;
				phi_in15 = phi18;
				phi_in16 = 65535;
				dispatch17 = 0;
			}
		}
		while (anon3 > anon105);
	}
	uint64_t phi106 = phi_in9;
	uint64_t phi107 = phi_in10;
	uint64_t phi_in108 = phi106;
	uint64_t phi_in109 = 0;
	uint64_t phi_in110 = phi107;
	uint64_t phi_in111 = 0;
	uint64_t phi_in112 = 1;
	uint32_t dispatch113 = 0;
	if (*(uint16_t*)(phi107 + 16) != 65535)
	{
		uint64_t phi114;
		do
		{
			phi114 = phi_in112;
			phi_in108 = phi106;
			phi_in109 = 0;
			phi_in110 = phi107;
			phi_in111 = phi114;
			dispatch113 = 0;
			if (*(uint16_t*)(phi107 + (phi114 << 1) + 16) != 65535)
			{
				phi_in108 = phi106;
				phi_in109 = 0;
				phi_in110 = phi107;
				phi_in111 = 1000;
				phi_in112 = phi114 + 1;
				dispatch113 = 0;
				if (phi114 == 999)
				{
					break;
				}
			}
		}
		while (*(uint16_t*)(phi107 + (phi114 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in123;
		uint64_t phi_in122;
		while (true)
		{
			uint64_t anon120;
			uint64_t phi115;
			uint64_t phi_in121;
			if (dispatch113 == 0)
			{
				phi115 = phi_in108;
				uint64_t phi116 = phi_in109;
				uint64_t phi117 = phi_in110;
				uint64_t phi118 = phi_in111;
				anon120 = phi118 - 1;
				phi_in119 = anon120;
				phi_in121 = phi116;
				phi_in122 = phi116;
				phi_in123 = phi117;
				if (anon120 <= -1)
				{
					break;
				}
			}
			if (dispatch113 == 1 || dispatch113 == 0 && anon120 > -1)
			{
				uint64_t phi124 = phi_in119;
				uint64_t phi125 = phi_in121;
				uint8_t* phi_in126 = (uint8_t*)0x400a44;
				uint64_t phi_in127 = 1;
				if (phi125 != 0)
				{
					phi_in126 = (uint8_t*)0x400a48;
					phi_in127 = 20;
					if (phi125 != ((uint64_t)((__zext uint128_t)phi125 * 970881267037344822 >> 64) - (phi125 >> 63)) * 19)
					{
						phi_in126 = (uint8_t*)0x400a49;
						phi_in127 = phi125 + 1;
					}
				}
				uint8_t* phi128 = phi_in126;
				uint64_t phi129 = phi_in127;
				printf(phi128);
				uint64_t anon130 = phi124 - 1;
				phi_in119 = anon130;
				phi_in121 = phi129;
				phi_in122 = phi129;
				phi_in123 = phi115;
				dispatch113 = 1;
				if (anon130 <= -1)
				{
					break;
				}
			}
		}
		uint64_t phi131 = phi_in122;
		phi132 = phi_in123;
		phi_in108 = *(uint64_t*)(phi132 + 8);
		phi_in109 = phi131;
		phi_in110 = *(uint64_t*)(phi132 + 8);
		phi_in111 = 1000;
		dispatch113 = 0;
	}
	while (*(uint64_t*)(phi132 + 8) != 0);
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

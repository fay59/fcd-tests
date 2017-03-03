#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon63;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon13;
		uint8_t* anon27;
		uint8_t* anon31;
		uint64_t anon46;
		uint32_t anon47;
		uint32_t anon48;
		uint32_t anon51;
		uint32_t phi2 = phi_in1;
		uint64_t phi3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi6 = 0;
		do
		{
			uint32_t anon14;
			phi7 = phi_in5;
			uint32_t phi_in8 = phi6;
			uint32_t phi_in9 = 1;
			do
			{
				uint32_t phi10 = phi_in8;
				uint32_t phi11 = phi_in9;
				uint64_t anon12 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi11);
				anon13 = phi10 + (uint32_t)anon12;
				phi_in8 = anon13;
				anon14 = phi11 + 1;
				phi_in9 = anon14;
			}
			while (anon14 != 9);
			phi_in5 = phi7 + 1;
			phi6 = anon13;
		}
		while (phi7 != 8);
		uint64_t phi15 = phi3;
		uint64_t phi16 = 0;
		uint64_t phi_in17 = 1;
		uint32_t phi18 = 1;
		if (anon13 != 0)
		{
			uint64_t anon21;
			uint64_t anon28;
			uint32_t anon32;
			do
			{
				uint32_t anon19;
				uint32_t anon20;
				printf((uint8_t*)0x400f81);
				do
				{
					anon19 = getchar();
				}
				while (((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) != 0);
				do
				{
					anon20 = getchar();
				}
				while (((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) != 0);
				anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon19 - 64), (__zext uint64_t)(anon20 - 48));
			}
			while ((uint32_t)anon21 == 0);
			putchar(10);
			uint64_t phi22 = 65;
			uint64_t phi_in23 = 6297448;
			do
			{
				uint64_t phi26;
				uint64_t phi24 = phi_in23;
				putchar((uint32_t)phi22);
				uint64_t phi_in25 = phi24;
				do
				{
					phi26 = phi_in25;
					anon27 = (uint8_t*)0x400f79;
					printf(anon27);
					phi_in25 = phi26 + 4;
				}
				while (phi24 + 28 != phi26);
				putchar(10);
				phi22 = phi22 + 1 & 0xffffffff;
				anon28 = phi24 + 40;
				phi_in23 = anon28;
			}
			while (anon28 != 6297768);
			putchar(32);
			uint32_t phi_in29 = 1;
			do
			{
				uint32_t phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f7d;
				printf(anon31);
				anon32 = phi30 + 1;
				phi_in29 = anon32;
			}
			while (anon32 != 9);
			putchar(10);
			phi15 = phi3;
			phi16 = 0;
			phi_in17 = 1;
			phi18 = 1;
		}
		do
		{
			uint32_t phi41;
			uint64_t anon49;
			uint64_t phi_in33 = phi15;
			uint64_t phi_in34 = phi16;
			uint64_t phi35 = phi_in17;
			uint32_t phi_in36 = phi18;
			uint32_t phi_in37 = 1;
			uint64_t phi_in38 = 1;
			do
			{
				uint64_t phi39 = phi_in33;
				uint64_t phi40 = phi_in34;
				phi41 = phi_in37;
				uint32_t phi42 = phi_in36;
				uint64_t phi43 = phi_in38;
				uint64_t anon44 = m.constprop.1(4195713, (__zext uint64_t)phi42, phi43);
				uint64_t anon45 = random();
				anon47 = (uint32_t)anon44 + (uint32_t)anon45 + ((uint32_t)((anon45 & 0xffffffff) / 6) - (uint32_t)(anon45 << 32 >> 32 >> 31)) * 4294967290;
				anon48 = (uint32_t)phi40;
				anon46 = anon47 > anon48 ? phi35 : phi39;
				phi_in33 = anon46;
				anon49 = anon47 > anon48 ? (__zext uint64_t)anon47 : phi40;
				phi_in34 = anon49;
				uint32_t anon50 = phi41 + 1;
				phi_in37 = anon50;
				anon51 = (uint32_t)phi35;
				phi_in36 = anon51;
				phi_in38 = (__zext uint64_t)anon50;
			}
			while (phi41 != 8);
			phi15 = anon46;
			phi16 = anon49;
			uint32_t anon52 = anon51 + 1;
			phi_in17 = (__zext uint64_t)anon52;
			phi18 = anon52;
		}
		while (anon51 != 8);
		if ((anon47 > anon48 ? anon47 : anon48) != 0)
		{
			uint64_t anon53 = m.constprop.1(4196072, anon46 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
			if ((uint32_t)anon53 != 0)
			{
				uint64_t anon59;
				uint32_t anon62;
				putchar(10);
				uint64_t phi54 = 65;
				uint64_t phi_in55 = 6297448;
				do
				{
					uint64_t phi58;
					uint64_t phi56 = phi_in55;
					putchar((uint32_t)phi54);
					uint64_t phi_in57 = phi56;
					do
					{
						phi58 = phi_in57;
						printf(anon27);
						phi_in57 = phi58 + 4;
					}
					while (phi56 + 28 != phi58);
					putchar(10);
					phi54 = phi54 + 1 & 0xffffffff;
					anon59 = phi56 + 40;
					phi_in55 = anon59;
				}
				while (anon59 != 6297768);
				putchar(32);
				uint32_t phi_in60 = 1;
				do
				{
					uint32_t phi61 = phi_in60;
					printf(anon31);
					anon62 = phi61 + 1;
					phi_in60 = anon62;
				}
				while (anon62 != 9);
				putchar(10);
			}
		}
		anon63 = phi2 - 1;
		phi_in1 = anon63;
		uint64_t phi_in4 = anon46;
	}
	while (anon63 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6018d0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196434);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t m.constprop.0(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in11;
	uint64_t phi12;
	uint64_t phi13;
	uint64_t anon14;
	uint64_t phi17;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi5 = phi5;
			uint32_t phi10 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi5 = phi5;
				phi10 = phi_in8;
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon14 = phi13 + (anon15 + anon16 * 10 << 2);
				if (*(uint32_t*)(anon14 + (0 - anon15 << 2) + ((0 - anon16 << 2) - anon16 << 3)) == 1)
				{
					uint32_t anon24;
					uint32_t anon19 = (uint32_t)phi12;
					int64_t anon18 = (__sext int64_t)(*(uint32_t*)(phi9 + 6296832) * anon19) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi9 + 6296896) * anon19) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint32_t phi20 = phi_in8;
					uint64_t phi21 = anon18 + 6296960;
					do
					{
						uint32_t phi22 = phi_in11;
						*(uint32_t*)phi17 = 0;
						uint32_t anon23 = phi20 + *(uint32_t*)phi21;
						phi5 = anon23;
						phi10 = anon23;
						anon24 = phi22 - 1;
						phi_in11 = anon24;
						int64_t anon25 = (__sext int64_t)(0 - *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi9 + 6296896)) * 10 << 2;
						phi17 = phi17 + anon25;
						phi20 = anon23;
						phi21 = phi21 + anon25;
					}
					while (anon24 != 0);
				}
			}
			phi6 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi5 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi5;
		}
	}
	else 
	{
		return 0;
	}
	phi_in11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon14;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t anon15;
	uint64_t phi18;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint32_t phi8;
		uint64_t phi10;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		do
		{
			phi8 = phi5;
			uint32_t phi_in9 = phi6;
			phi10 = phi_in7;
			uint32_t phi_in11 = phi_in9;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in12 = 1;
				phi13 = 1;
				phi14 = (((__zext uint64_t)*(uint32_t*)(phi10 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi10 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi_in11 = phi_in9;
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
				int64_t anon17 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
				anon15 = phi14 + (anon16 + anon17 * 10 << 2);
				if (*(uint32_t*)(anon15 + (0 - anon16 << 2) + ((0 - anon17 << 2) - anon17 << 3)) == 255)
				{
					uint32_t anon25;
					uint32_t anon20 = (uint32_t)phi13;
					int64_t anon19 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon20) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon20) + anon4) * 10 << 2;
					phi18 = anon19 + 6297408;
					uint32_t phi21 = phi_in9;
					uint64_t phi22 = anon19 + 6296960;
					do
					{
						uint32_t phi23 = phi_in12;
						*(uint32_t*)phi18 = 0;
						uint32_t anon24 = phi21 + *(uint32_t*)phi22;
						phi8 = anon24;
						phi_in11 = anon24;
						anon25 = phi23 - 1;
						phi_in12 = anon25;
						int64_t anon26 = (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296896)) * 10 << 2;
						phi18 = phi18 + anon26;
						phi21 = anon24;
						phi22 = phi22 + anon26;
					}
					while (anon25 != 0);
				}
			}
			phi5 = phi8;
			phi6 = phi_in11;
			phi_in7 = phi10 + 4;
		}
		while (phi10 != 28);
		if (phi8 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi8;
		}
	}
	else 
	{
		return 0;
	}
	phi_in12 = (uint32_t)phi13 + 1;
	phi13 = phi13 + 1 & 0xffffffff;
	phi14 = anon15;
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		uint64_t phi3;
		do
		{
			phi3 = phi_in1;
			phi_in1 = phi3 + 4;
		}
		while (phi3 != 28);
		*anon2 = 0;
		return;
	}
	else 
	{
		return;
	}
}
void l(uint64_t arg0)
{
	uint64_t anon6;
	uint32_t anon9;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	do
	{
		uint64_t phi5;
		uint64_t phi3 = phi_in2;
		putchar((uint32_t)phi1);
		uint64_t phi_in4 = phi3;
		do
		{
			phi5 = phi_in4;
			printf((uint8_t*)0x400f79);
			phi_in4 = phi5 + 4;
		}
		while (phi5 != phi3 + 28);
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		anon6 = phi3 + 40;
		phi_in2 = anon6;
	}
	while (anon6 != 6297768);
	putchar(32);
	uint32_t phi_in7 = 1;
	do
	{
		uint32_t phi8 = phi_in7;
		printf((uint8_t*)0x400f7d);
		anon9 = phi8 + 1;
		phi_in7 = anon9;
	}
	while (anon9 != 9);
	__indirect_jump(*(uint64_t*)0x601490);
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4198179);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601288)(arg1 & 0xffffffff, arg2, arg3);
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

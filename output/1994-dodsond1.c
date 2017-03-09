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
	uint32_t anon61;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon13;
		uint8_t* anon26;
		uint8_t* anon30;
		uint64_t anon44;
		uint32_t anon45;
		uint32_t anon46;
		uint32_t anon49;
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
		uint64_t phi15 = 0;
		uint64_t phi_in16 = 1;
		uint32_t phi_in17 = 1;
		if (anon13 != 0)
		{
			uint64_t anon20;
			uint64_t anon27;
			uint32_t anon31;
			do
			{
				uint32_t anon18;
				uint32_t anon19;
				printf((uint8_t*)0x400f81);
				do
				{
					anon18 = getchar();
				}
				while (((__zext uint8_t)(anon18 != 72) & (__zext uint8_t)(anon18 - 65 > 6)) != 0);
				do
				{
					anon19 = getchar();
				}
				while (((__zext uint8_t)(anon19 != 56) & (__zext uint8_t)(anon19 - 49 > 6)) != 0);
				anon20 = m.constprop.0(4195848, (__zext uint64_t)(anon18 - 64), (__zext uint64_t)(anon19 - 48));
			}
			while ((uint32_t)anon20 == 0);
			putchar(10);
			uint64_t phi21 = 65;
			uint64_t phi_in22 = 6297448;
			do
			{
				uint64_t phi25;
				uint64_t phi23 = phi_in22;
				putchar((uint32_t)phi21);
				uint64_t phi_in24 = phi23;
				do
				{
					phi25 = phi_in24;
					anon26 = (uint8_t*)0x400f79;
					printf(anon26);
					phi_in24 = phi25 + 4;
				}
				while (phi23 + 28 != phi25);
				putchar(10);
				phi21 = phi21 + 1 & 0xffffffff;
				anon27 = phi23 + 40;
				phi_in22 = anon27;
			}
			while (anon27 != 6297768);
			putchar(32);
			uint32_t phi_in28 = 1;
			do
			{
				uint32_t phi29 = phi_in28;
				anon30 = (uint8_t*)0x400f7d;
				printf(anon30);
				anon31 = phi29 + 1;
				phi_in28 = anon31;
			}
			while (anon31 != 9);
			putchar(10);
			phi15 = 0;
			phi_in16 = 1;
			phi_in17 = 1;
		}
		do
		{
			uint32_t phi39;
			uint64_t anon47;
			uint64_t phi_in32 = phi3;
			uint64_t phi_in33 = phi15;
			uint64_t phi34 = phi_in16;
			uint32_t phi_in35 = 1;
			uint64_t phi_in36 = 1;
			do
			{
				uint64_t phi37 = phi_in32;
				uint64_t phi38 = phi_in33;
				phi39 = phi_in35;
				uint32_t phi40 = phi_in17;
				uint64_t phi41 = phi_in36;
				uint64_t anon42 = m.constprop.1(4195713, (__zext uint64_t)phi40, phi41);
				uint64_t anon43 = random();
				anon45 = (uint32_t)anon42 + (uint32_t)anon43 + ((uint32_t)((anon43 & 0xffffffff) / 6) - (uint32_t)(anon43 << 32 >> 32 >> 31)) * 4294967290;
				anon46 = (uint32_t)phi38;
				anon44 = anon45 > anon46 ? phi34 : phi37;
				phi_in32 = anon44;
				anon47 = anon45 > anon46 ? (__zext uint64_t)anon45 : phi38;
				phi_in33 = anon47;
				uint32_t anon48 = phi39 + 1;
				phi_in35 = anon48;
				anon49 = (uint32_t)phi34;
				phi_in17 = anon49;
				phi_in36 = (__zext uint64_t)anon48;
			}
			while (phi39 != 8);
			phi3 = anon44;
			phi15 = anon47;
			uint32_t anon50 = anon49 + 1;
			phi_in16 = (__zext uint64_t)anon50;
			phi_in17 = anon50;
		}
		while (anon49 != 8);
		if ((anon45 > anon46 ? anon45 : anon46) != 0)
		{
			uint64_t anon51 = m.constprop.1(4196072, anon44 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
			if ((uint32_t)anon51 != 0)
			{
				uint64_t anon57;
				uint32_t anon60;
				putchar(10);
				uint64_t phi52 = 65;
				uint64_t phi_in53 = 6297448;
				do
				{
					uint64_t phi56;
					uint64_t phi54 = phi_in53;
					putchar((uint32_t)phi52);
					uint64_t phi_in55 = phi54;
					do
					{
						phi56 = phi_in55;
						printf(anon26);
						phi_in55 = phi56 + 4;
					}
					while (phi54 + 28 != phi56);
					putchar(10);
					phi52 = phi52 + 1 & 0xffffffff;
					anon57 = phi54 + 40;
					phi_in53 = anon57;
				}
				while (anon57 != 6297768);
				putchar(32);
				uint32_t phi_in58 = 1;
				do
				{
					uint32_t phi59 = phi_in58;
					printf(anon30);
					anon60 = phi59 + 1;
					phi_in58 = anon60;
				}
				while (anon60 != 9);
				putchar(10);
			}
		}
		anon61 = phi2 - 1;
		phi_in1 = anon61;
		uint64_t phi_in4 = anon44;
	}
	while (anon61 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint32_t phi11;
	uint64_t phi12;
	uint64_t phi13;
	uint64_t anon15;
	uint64_t phi18;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		uint32_t phi10;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi10 = phi5;
			phi6 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in14 = phi11;
				phi10 = phi5;
				phi6 = phi_in8;
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon17 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon15 = phi13 + (anon16 + anon17 * 10 << 2);
				if (*(uint32_t*)(anon15 + (-anon16 << 2) + ((-anon17 << 2) - anon17 << 3)) == 1)
				{
					uint32_t anon25;
					uint32_t anon20 = (uint32_t)phi12;
					int64_t anon19 = (__sext int64_t)(*(uint32_t*)(phi9 + 6296832) * anon20) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi9 + 6296896) * anon20) + anon4) * 10 << 2;
					phi18 = anon19 + 6297408;
					uint32_t phi21 = phi_in8;
					uint64_t phi22 = anon19 + 6296960;
					do
					{
						uint32_t phi23 = phi_in14;
						*(uint32_t*)phi18 = 0;
						uint32_t anon24 = phi21 + *(uint32_t*)phi22;
						phi10 = anon24;
						phi6 = anon24;
						anon25 = phi23 - 1;
						phi_in14 = anon25;
						int64_t anon26 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi18 = phi18 + anon26;
						phi21 = anon24;
						phi22 = phi22 + anon26;
					}
					while (anon25 != 0);
				}
			}
			phi5 = phi10;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi10 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi10;
		}
	}
	else 
	{
		return 0;
	}
	phi11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon15;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t anon16;
	uint64_t phi19;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi9;
		uint32_t phi10;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		do
		{
			uint32_t phi_in8 = phi6;
			phi9 = phi_in7;
			phi10 = phi5;
			uint32_t phi_in11 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi12 = 1;
				phi13 = 1;
				phi14 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in15 = phi12;
				phi10 = phi5;
				phi_in11 = phi_in8;
				int64_t anon17 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon18 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon16 = phi14 + (anon17 + anon18 * 10 << 2);
				if (*(uint32_t*)(anon16 + (-anon17 << 2) + ((-anon18 << 2) - anon18 << 3)) == 255)
				{
					uint32_t anon26;
					uint32_t anon21 = (uint32_t)phi13;
					int64_t anon20 = (__sext int64_t)(*(uint32_t*)(phi9 + 6296832) * anon21) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi9 + 6296896) * anon21) + anon4) * 10 << 2;
					phi19 = anon20 + 6297408;
					uint32_t phi22 = phi_in8;
					uint64_t phi23 = anon20 + 6296960;
					do
					{
						uint32_t phi24 = phi_in15;
						*(uint32_t*)phi19 = 0;
						uint32_t anon25 = phi22 + *(uint32_t*)phi23;
						phi10 = anon25;
						phi_in11 = anon25;
						anon26 = phi24 - 1;
						phi_in15 = anon26;
						int64_t anon27 = (__sext int64_t)-*(uint32_t*)(phi9 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi9 + 6296896) * 10 << 2;
						phi19 = phi19 + anon27;
						phi22 = anon25;
						phi23 = phi23 + anon27;
					}
					while (anon26 != 0);
				}
			}
			phi5 = phi10;
			phi6 = phi_in11;
			phi_in7 = phi9 + 4;
		}
		while (phi9 != 28);
		if (phi10 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi10;
		}
	}
	else 
	{
		return 0;
	}
	phi12 = (uint32_t)phi13 + 1;
	phi13 = phi13 + 1 & 0xffffffff;
	phi14 = anon16;
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

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
	l(4195589);
	uint32_t phi1 = 60;
	while (true)
	{
		uint32_t anon11;
		uint8_t* anon22;
		uint8_t* anon25;
		uint64_t anon39;
		uint32_t anon40;
		uint32_t anon41;
		uint64_t phi2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi_in5 = 0;
		while (true)
		{
			uint32_t anon12;
			uint32_t phi6 = phi_in4;
			uint32_t phi_in7 = 1;
			do
			{
				uint32_t phi8 = phi_in5;
				uint32_t phi9 = phi_in7;
				uint64_t anon10 = m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi9);
				anon11 = phi8 + (uint32_t)anon10;
				phi_in5 = anon11;
				anon12 = phi9 + 1;
				phi_in7 = anon12;
			}
			while (anon12 != 9);
			break;
			phi_in4 = phi6 + 1;
			phi_in5 = anon11;
		}
		uint64_t phi_in13 = 0;
		uint64_t phi_in14 = 1;
		uint32_t phi15 = 1;
		if (anon11 != 0)
		{
			uint32_t anon26;
			while (true)
			{
				uint32_t anon16;
				uint32_t anon17;
				printf((uint8_t*)0x400f81);
				do
				{
					anon16 = getchar();
				}
				while (((__zext uint8_t)(anon16 != 72) & (__zext uint8_t)(anon16 - 65 > 6)) != 0);
				do
				{
					anon17 = getchar();
				}
				while (((__zext uint8_t)(anon17 != 56) & (__zext uint8_t)(anon17 - 49 > 6)) != 0);
				break;
				m.constprop.0(4195848, (__zext uint64_t)(anon16 - 64), (__zext uint64_t)(anon17 - 48));
			}
			putchar(10);
			uint64_t phi18 = 65;
			uint64_t phi19 = 6297448;
			while (true)
			{
				uint64_t phi21;
				putchar((uint32_t)phi18);
				uint64_t phi_in20 = phi19;
				do
				{
					phi21 = phi_in20;
					anon22 = (uint8_t*)0x400f79;
					printf(anon22);
					phi_in20 = phi21 + 4;
				}
				while (phi19 + 28 != phi21);
				break;
				putchar(10);
				phi18 = phi18 + 1 & 0xffffffff;
				phi19 = phi19 + 40;
			}
			putchar(32);
			uint32_t phi_in23 = 1;
			do
			{
				uint32_t phi24 = phi_in23;
				anon25 = (uint8_t*)0x400f7d;
				printf(anon25);
				anon26 = phi24 + 1;
				phi_in23 = anon26;
			}
			while (anon26 != 9);
			putchar(10);
			phi_in13 = 0;
			phi_in14 = 1;
			phi15 = 1;
		}
		while (true)
		{
			uint32_t phi34;
			uint64_t anon42;
			uint32_t anon44;
			uint64_t phi_in27 = phi2;
			uint64_t phi28 = phi_in14;
			uint32_t phi_in29 = phi15;
			uint32_t phi_in30 = 1;
			uint64_t phi_in31 = 1;
			do
			{
				uint64_t phi32 = phi_in27;
				uint64_t phi33 = phi_in13;
				phi34 = phi_in30;
				uint32_t phi35 = phi_in29;
				uint64_t phi36 = phi_in31;
				uint64_t anon37 = m.constprop.1(4195713, (__zext uint64_t)phi35, phi36);
				uint64_t anon38 = random();
				anon40 = (uint32_t)anon37 + (uint32_t)anon38 + ((uint32_t)((anon38 & 0xffffffff) / 6) - (uint32_t)(anon38 << 32 >> 32 >> 31)) * 4294967290;
				anon41 = (uint32_t)phi33;
				anon39 = anon40 > anon41 ? phi28 : phi32;
				phi_in27 = anon39;
				anon42 = anon40 > anon41 ? (__zext uint64_t)anon40 : phi33;
				phi_in13 = anon42;
				uint32_t anon43 = phi34 + 1;
				phi_in30 = anon43;
				anon44 = (uint32_t)phi28;
				phi_in29 = anon44;
				phi_in31 = (__zext uint64_t)anon43;
			}
			while (phi34 != 8);
			break;
			phi2 = anon39;
			phi_in13 = anon42;
			uint32_t anon45 = anon44 + 1;
			phi_in14 = (__zext uint64_t)anon45;
			phi15 = anon45;
		}
		if ((anon40 > anon41 ? anon40 : anon41) != 0)
		{
			uint64_t anon46 = m.constprop.1(4196072, anon39 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
			if ((uint32_t)anon46 != 0)
			{
				uint32_t anon53;
				putchar(10);
				uint64_t phi47 = 65;
				uint64_t phi48 = 6297448;
				while (true)
				{
					uint64_t phi50;
					putchar((uint32_t)phi47);
					uint64_t phi_in49 = phi48;
					do
					{
						phi50 = phi_in49;
						printf(anon22);
						phi_in49 = phi50 + 4;
					}
					while (phi48 + 28 != phi50);
					break;
					putchar(10);
					phi47 = phi47 + 1 & 0xffffffff;
					phi48 = phi48 + 40;
				}
				putchar(32);
				uint32_t phi_in51 = 1;
				do
				{
					uint32_t phi52 = phi_in51;
					printf(anon25);
					anon53 = phi52 + 1;
					phi_in51 = anon53;
				}
				while (anon53 != 9);
				putchar(10);
			}
		}
		break;
		phi1 = phi1 - 1;
		uint64_t phi_in3 = anon39;
	}
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
		uint32_t phi10;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		while (true)
		{
			uint32_t phi8 = phi6;
			uint64_t phi9 = phi_in7;
			phi10 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi10 = phi5;
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon14 = phi13 + (anon15 + anon16 * 10 << 2);
				if (*(uint32_t*)(anon14 + (0 - anon15 << 2) + ((0 - anon16 << 2) - anon16 << 3)) == 1)
				{
					uint32_t anon24;
					uint32_t anon19 = (uint32_t)phi12;
					int64_t anon18 = (__sext int64_t)(*(uint32_t*)(phi9 + 6296832) * anon19) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi9 + 6296896) * anon19) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint32_t phi20 = phi8;
					uint64_t phi21 = anon18 + 6296960;
					do
					{
						uint32_t phi22 = phi_in11;
						*(uint32_t*)phi17 = 0;
						uint32_t anon23 = phi20 + *(uint32_t*)phi21;
						phi10 = anon23;
						phi8 = anon23;
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
			break;
			phi5 = phi10;
			phi6 = phi8;
			phi_in7 = phi9 + 4;
		}
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
	phi_in11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon14;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
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
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		while (true)
		{
			uint32_t phi_in8 = phi6;
			uint64_t phi9 = phi_in7;
			phi5 = phi5;
			uint32_t phi10 = phi_in8;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi9 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi11 = 1;
				phi12 = 1;
				phi13 = (((__zext uint64_t)*(uint32_t*)(phi9 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi9 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				uint32_t phi_in14 = phi11;
				phi5 = phi5;
				phi10 = phi_in8;
				int64_t anon16 = (__sext int64_t)*(uint32_t*)(phi9 + 6296832);
				int64_t anon17 = (__sext int64_t)*(uint32_t*)(phi9 + 6296896);
				anon15 = phi13 + (anon16 + anon17 * 10 << 2);
				if (*(uint32_t*)(anon15 + (0 - anon16 << 2) + ((0 - anon17 << 2) - anon17 << 3)) == 255)
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
						phi5 = anon24;
						phi10 = anon24;
						anon25 = phi23 - 1;
						phi_in14 = anon25;
						int64_t anon26 = (__sext int64_t)(0 - *(uint32_t*)(phi9 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi9 + 6296896)) * 10 << 2;
						phi18 = phi18 + anon26;
						phi21 = anon24;
						phi22 = phi22 + anon26;
					}
					while (anon25 != 0);
				}
			}
			break;
			phi6 = phi10;
			phi_in7 = phi9 + 4;
		}
		if (phi5 == 4294967295)
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
	phi11 = (uint32_t)phi12 + 1;
	phi12 = phi12 + 1 & 0xffffffff;
	phi13 = anon15;
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
	uint32_t anon7;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi2 = 6297448;
	while (true)
	{
		uint64_t phi4;
		putchar((uint32_t)phi1);
		uint64_t phi_in3 = phi2;
		do
		{
			phi4 = phi_in3;
			printf((uint8_t*)0x400f79);
			phi_in3 = phi4 + 4;
		}
		while (phi4 != phi2 + 28);
		break;
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		phi2 = phi2 + 40;
	}
	putchar(32);
	uint32_t phi_in5 = 1;
	do
	{
		uint32_t phi6 = phi_in5;
		printf((uint8_t*)0x400f7d);
		anon7 = phi6 + 1;
		phi_in5 = anon7;
	}
	while (anon7 != 9);
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

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
	uint32_t anon53;
	l(4195589);
	uint32_t phi1 = 60;
	do
	{
		uint32_t phi6;
		uint32_t anon9;
		uint8_t* anon22;
		uint8_t* anon26;
		uint64_t phi_in39;
		uint32_t phi40;
		uint32_t anon44;
		uint64_t phi2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi5 = 0;
		do
		{
			uint32_t anon10;
			phi6 = phi_in4;
			uint32_t phi_in7 = 1;
			do
			{
				uint32_t phi8 = phi_in7;
				anon9 = phi5 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi8);
				phi5 = anon9;
				anon10 = phi8 + 1;
				phi_in7 = anon10;
			}
			while (anon10 != 9);
			phi_in4 = phi6 + 1;
			phi5 = anon9;
		}
		while (phi6 != 8);
		uint64_t phi11 = 0;
		uint64_t phi_in12 = 1;
		uint32_t phi_in13 = 1;
		if (anon9 != 0)
		{
			uint64_t anon18;
			uint64_t anon24;
			uint32_t anon27;
			do
			{
				uint32_t anon14;
				uint32_t anon15;
				uint32_t anon16;
				uint32_t anon17;
				printf((uint8_t*)0x400f81);
				do
				{
					anon14 = getchar();
					anon15 = anon14 - 65;
				}
				while (anon15 >= 8);
				do
				{
					anon16 = getchar();
					anon17 = anon16 - 49;
				}
				while (anon17 >= 8);
				anon18 = m.constprop.0(4195848, (__zext uint64_t)(anon14 - 64), (__zext uint64_t)(anon16 - 48));
			}
			while ((uint32_t)anon18 == 0);
			putchar(10);
			uint64_t phi19 = 65;
			uint64_t phi20 = 6297448;
			do
			{
				uint64_t anon23;
				putchar((uint32_t)phi19);
				uint64_t phi21 = phi20;
				do
				{
					anon22 = (uint8_t*)0x400f79;
					printf(anon22);
					anon23 = phi20 + 28;
					if (anon23 != phi21)
					{
						phi21 = phi21 + 4;
					}
				}
				while (anon23 != phi21);
				putchar(10);
				anon24 = phi20 + 40;
				if (anon24 != 6297768)
				{
					phi19 = phi19 + 1 & 0xffffffff;
					phi20 = anon24;
				}
			}
			while (anon24 != 6297768);
			putchar(32);
			uint32_t phi25 = 1;
			do
			{
				anon26 = (uint8_t*)0x400f7d;
				printf(anon26);
				anon27 = phi25 + 1;
				phi25 = anon27;
			}
			while (anon27 != 9);
			putchar(10);
			phi11 = 0;
			phi_in12 = 1;
			phi_in13 = 1;
		}
		do
		{
			uint64_t phi33;
			uint32_t phi42;
			uint64_t phi_in28 = phi2;
			uint64_t phi29 = phi_in12;
			uint64_t phi30 = 1;
			uint32_t phi31 = phi_in13;
			uint32_t phi32 = 1;
			do
			{
				uint32_t phi_in41;
				phi33 = phi11;
				uint64_t anon34 = m.constprop.1(4195713, (__zext uint64_t)phi31, (__zext uint64_t)phi32);
				uint64_t anon36 = random();
				uint32_t anon35 = (uint32_t)anon34 + (uint32_t)anon36 + ((uint32_t)((anon36 & 0xffffffff) / 6) - (uint32_t)(anon36 << 32 >> 32 >> 31)) * 4294967290;
				uint32_t anon37 = (uint32_t)phi33;
				if (anon35 > anon37)
				{
					uint32_t anon38 = (uint32_t)phi30;
					*(uint32_t*)(arg1 - 72) = anon38;
					phi_in39 = phi29;
					phi33 = (__zext uint64_t)anon35;
					phi40 = anon35;
					phi_in41 = anon38;
				}
				else 
				{
					phi_in39 = phi_in28;
					phi40 = anon37;
					phi_in41 = (uint32_t)phi30;
				}
				phi42 = phi_in41;
				if (phi42 != 8)
				{
					phi_in28 = phi_in39;
					phi11 = phi33;
					uint32_t anon43 = phi42 + 1;
					phi30 = (__zext uint64_t)anon43;
					phi31 = (uint32_t)phi29;
					phi32 = anon43;
				}
			}
			while (phi42 != 8);
			anon44 = (uint32_t)phi29;
			if (anon44 != 8)
			{
				phi2 = phi_in39;
				phi11 = phi33;
				uint32_t anon45 = anon44 + 1;
				phi_in12 = (__zext uint64_t)anon45;
				phi_in13 = anon45;
			}
		}
		while (anon44 != 8);
		if (phi40 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi_in39 & 0xffffffff, 0) != 0)
			{
				uint64_t anon50;
				uint32_t anon52;
				putchar(10);
				uint64_t phi46 = 65;
				uint64_t phi47 = 6297448;
				do
				{
					uint64_t anon49;
					putchar((uint32_t)phi46);
					uint64_t phi48 = phi47;
					do
					{
						printf(anon22);
						anon49 = phi47 + 28;
						if (anon49 != phi48)
						{
							phi48 = phi48 + 4;
						}
					}
					while (anon49 != phi48);
					putchar(10);
					anon50 = phi47 + 40;
					if (anon50 != 6297768)
					{
						phi46 = phi46 + 1 & 0xffffffff;
						phi47 = anon50;
					}
				}
				while (anon50 != 6297768);
				putchar(32);
				uint32_t phi51 = 1;
				do
				{
					printf(anon26);
					anon52 = phi51 + 1;
					phi51 = anon52;
				}
				while (anon52 != 9);
				putchar(10);
			}
		}
		anon53 = phi1 - 1;
		phi1 = anon53;
		uint64_t phi_in3 = phi_in39;
	}
	while (anon53 != 0);
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
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		*anon1 = 1;
		uint64_t phi4 = 0;
		uint64_t phi5 = 1;
		do
		{
			phi6 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi4 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi4 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				uint64_t phi7 = 1;
				uint32_t phi8 = 1;
				uint64_t phi9 = 1;
				uint64_t phi10 = (((__zext uint64_t)*(uint32_t*)(phi4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					uint64_t phi_in11 = phi7;
					phi6 = phi5;
					int62_t anon13 = (__sext int62_t)*(uint32_t*)(phi4 + 6296832);
					uint64_t anon12 = phi10 + ((__zext uint64_t)(anon13 + (__sext int62_t)*(uint32_t*)(phi4 + 6296896) * 10) << 2);
					int64_t anon14 = (__sext int64_t)*(uint32_t*)(phi4 + 6296896);
					if (!(*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 255 || *(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1))
					{
						break;
					}
					if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1)
					{
						uint32_t anon21;
						uint64_t phi15 = phi5;
						uint64_t phi16 = phi_in11;
						int64_t anon18 = (__sext int64_t)(phi8 * *(uint32_t*)(phi4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in11 * *(uint32_t*)(phi4 + 6296896)) + anon3) * 10 << 2;
						phi17 = anon18 + 6297408;
						uint64_t phi19 = anon18 + 6296960;
						do
						{
							*(uint32_t*)phi17 = 0;
							uint64_t anon20 = (__zext uint64_t)((uint32_t)phi15 + *(uint32_t*)phi19);
							phi6 = anon20;
							anon21 = (uint32_t)phi16 - 1;
							if (anon21 != 0)
							{
								phi15 = anon20;
								phi16 = (__zext uint64_t)anon21;
								int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi4 + 6296896) * 10 << 2;
								phi17 = phi17 + anon22;
								phi19 = phi19 + anon22;
							}
						}
						while (anon21 != 0);
						break;
					}
					if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 255)
					{
						uint32_t anon23 = (uint32_t)phi9 + 1;
						phi7 = (__zext uint64_t)anon23;
						phi8 = anon23;
						phi9 = phi9 + 1 & 0xffffffff;
						phi10 = anon12;
					}
				}
			}
			phi4 = phi4 + 4;
			phi5 = phi6;
		}
		while (phi4 != 28);
		if ((uint32_t)phi6 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi6 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi16;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		*anon1 = 4294967295;
		uint64_t phi4 = 0;
		uint64_t phi5 = 4294967295;
		do
		{
			phi6 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi4 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi4 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				uint64_t phi7 = 1;
				uint32_t phi8 = 1;
				uint64_t phi9 = 1;
				uint64_t phi10 = (((__zext uint64_t)*(uint32_t*)(phi4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					uint64_t phi11 = phi7;
					phi6 = phi5;
					int62_t anon13 = (__sext int62_t)*(uint32_t*)(phi4 + 6296832);
					uint64_t anon12 = phi10 + ((__zext uint64_t)(anon13 + (__sext int62_t)*(uint32_t*)(phi4 + 6296896) * 10) << 2);
					int64_t anon14 = (__sext int64_t)*(uint32_t*)(phi4 + 6296896);
					if (!(*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1 || *(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 255))
					{
						break;
					}
					if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 255)
					{
						uint32_t anon20;
						uint64_t phi15 = phi5;
						int64_t anon17 = (__sext int64_t)(phi8 * *(uint32_t*)(phi4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi11 * *(uint32_t*)(phi4 + 6296896)) + anon3) * 10 << 2;
						phi16 = anon17 + 6297408;
						uint64_t phi18 = anon17 + 6296960;
						do
						{
							*(uint32_t*)phi16 = 0;
							uint64_t anon19 = (__zext uint64_t)((uint32_t)phi15 + *(uint32_t*)phi18);
							phi6 = anon19;
							anon20 = (uint32_t)phi11 - 1;
							if (anon20 != 0)
							{
								phi15 = anon19;
								phi11 = (__zext uint64_t)anon20;
								int64_t anon21 = (__sext int64_t)-*(uint32_t*)(phi4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi4 + 6296896) * 10 << 2;
								phi16 = phi16 + anon21;
								phi18 = phi18 + anon21;
							}
						}
						while (anon20 != 0);
						break;
					}
					if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1)
					{
						uint32_t anon22 = (uint32_t)phi9 + 1;
						phi7 = (__zext uint64_t)anon22;
						phi8 = anon22;
						phi9 = phi9 + 1 & 0xffffffff;
						phi10 = anon12;
					}
				}
			}
			phi4 = phi4 + 4;
			phi5 = phi6;
		}
		while (phi4 != 28);
		if ((uint32_t)phi6 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi6 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		do
		{
			phi1 = phi1 + 4;
		}
		while (phi1 != 28);
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
	uint64_t anon5;
	uint32_t anon7;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi2 = 6297448;
	do
	{
		uint64_t anon4;
		putchar((uint32_t)phi1);
		uint64_t phi3 = phi2;
		do
		{
			printf((uint8_t*)0x400f79);
			anon4 = phi2 + 28;
			if (phi3 != anon4)
			{
				phi3 = phi3 + 4;
			}
		}
		while (phi3 != anon4);
		putchar(10);
		anon5 = phi2 + 40;
		if (anon5 != 6297768)
		{
			phi1 = phi1 + 1 & 0xffffffff;
			phi2 = anon5;
		}
	}
	while (anon5 != 6297768);
	putchar(32);
	uint32_t phi6 = 1;
	do
	{
		printf((uint8_t*)0x400f7d);
		anon7 = phi6 + 1;
		phi6 = anon7;
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

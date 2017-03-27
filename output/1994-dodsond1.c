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
	uint32_t anon54;
	l(4195589);
	uint32_t phi1 = 60;
	do
	{
		uint32_t phi6;
		uint32_t anon10;
		uint8_t* anon23;
		uint8_t* anon27;
		uint64_t phi29;
		uint32_t phi41;
		uint32_t anon45;
		uint64_t phi_in2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi_in5 = 0;
		do
		{
			uint32_t anon11;
			phi6 = phi_in4;
			uint32_t phi7 = phi_in5;
			uint32_t phi_in8 = 1;
			do
			{
				uint32_t phi9 = phi_in8;
				anon10 = phi7 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi9);
				phi7 = anon10;
				anon11 = phi9 + 1;
				phi_in8 = anon11;
			}
			while (anon11 != 9);
			phi_in4 = phi6 + 1;
			phi_in5 = anon10;
		}
		while (phi6 != 8);
		uint64_t phi_in12 = 0;
		uint64_t phi_in13 = 1;
		uint32_t phi_in14 = 1;
		if (anon10 != 0)
		{
			uint64_t anon19;
			uint64_t anon25;
			uint32_t anon28;
			do
			{
				uint32_t anon15;
				uint32_t anon16;
				uint32_t anon17;
				uint32_t anon18;
				printf((uint8_t*)0x400f81);
				do
				{
					anon15 = getchar();
					anon16 = anon15 - 65;
				}
				while (anon16 >= 8);
				do
				{
					anon17 = getchar();
					anon18 = anon17 - 49;
				}
				while (anon18 >= 8);
				anon19 = m.constprop.0(4195848, (__zext uint64_t)(anon15 - 64), (__zext uint64_t)(anon17 - 48));
			}
			while ((uint32_t)anon19 == 0);
			putchar(10);
			uint64_t phi20 = 65;
			uint64_t phi21 = 6297448;
			do
			{
				uint64_t anon24;
				putchar((uint32_t)phi20);
				uint64_t phi22 = phi21;
				do
				{
					anon23 = (uint8_t*)0x400f79;
					printf(anon23);
					anon24 = phi21 + 28;
					if (anon24 != phi22)
					{
						phi22 = phi22 + 4;
					}
				}
				while (anon24 != phi22);
				putchar(10);
				anon25 = phi21 + 40;
				if (anon25 != 6297768)
				{
					phi20 = phi20 + 1 & 0xffffffff;
					phi21 = anon25;
				}
			}
			while (anon25 != 6297768);
			putchar(32);
			uint32_t phi26 = 1;
			do
			{
				anon27 = (uint8_t*)0x400f7d;
				printf(anon27);
				anon28 = phi26 + 1;
				phi26 = anon28;
			}
			while (anon28 != 9);
			putchar(10);
			phi_in12 = 0;
			phi_in13 = 1;
			phi_in14 = 1;
		}
		do
		{
			uint64_t phi_in35;
			uint32_t phi43;
			phi29 = phi_in13;
			uint64_t phi30 = phi_in2;
			uint64_t phi31 = phi_in12;
			uint64_t phi32 = 1;
			uint32_t phi33 = phi_in14;
			uint32_t phi34 = 1;
			do
			{
				uint32_t phi_in42;
				phi29 = phi30;
				phi_in35 = phi31;
				uint64_t anon36 = m.constprop.1(4195713, (__zext uint64_t)phi33, (__zext uint64_t)phi34);
				uint64_t anon38 = random();
				uint32_t anon37 = (uint32_t)anon36 + (uint32_t)anon38 + ((uint32_t)((anon38 & 0xffffffff) / 6) - (uint32_t)(anon38 << 32 >> 32 >> 31)) * 4294967290;
				uint32_t anon39 = (uint32_t)phi_in35;
				if (anon37 > anon39)
				{
					uint32_t anon40 = (uint32_t)phi32;
					*(uint32_t*)(arg1 - 72) = anon40;
					phi_in35 = (__zext uint64_t)anon37;
					phi41 = anon37;
					phi_in42 = anon40;
				}
				else 
				{
					phi41 = anon39;
					phi_in42 = (uint32_t)phi32;
				}
				phi43 = phi_in42;
				if (phi43 != 8)
				{
					phi30 = phi29;
					phi31 = phi_in35;
					uint32_t anon44 = phi43 + 1;
					phi32 = (__zext uint64_t)anon44;
					phi33 = (uint32_t)phi29;
					phi34 = anon44;
				}
			}
			while (phi43 != 8);
			anon45 = (uint32_t)phi29;
			if (anon45 != 8)
			{
				phi_in2 = phi29;
				phi_in12 = phi_in35;
				uint32_t anon46 = anon45 + 1;
				phi_in13 = (__zext uint64_t)anon46;
				phi_in14 = anon46;
			}
		}
		while (anon45 != 8);
		if (phi41 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi29 & 0xffffffff, 0) != 0)
			{
				uint64_t anon51;
				uint32_t anon53;
				putchar(10);
				uint64_t phi47 = 65;
				uint64_t phi48 = 6297448;
				do
				{
					uint64_t anon50;
					putchar((uint32_t)phi47);
					uint64_t phi49 = phi48;
					do
					{
						printf(anon23);
						anon50 = phi48 + 28;
						if (anon50 != phi49)
						{
							phi49 = phi49 + 4;
						}
					}
					while (anon50 != phi49);
					putchar(10);
					anon51 = phi48 + 40;
					if (anon51 != 6297768)
					{
						phi47 = phi47 + 1 & 0xffffffff;
						phi48 = anon51;
					}
				}
				while (anon51 != 6297768);
				putchar(32);
				uint32_t phi52 = 1;
				do
				{
					printf(anon27);
					anon53 = phi52 + 1;
					phi52 = anon53;
				}
				while (anon53 != 9);
				putchar(10);
			}
		}
		anon54 = phi1 - 1;
		phi1 = anon54;
		uint64_t phi_in3 = phi29;
	}
	while (anon54 != 0);
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
	uint64_t phi16;
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
				uint64_t phi_in7 = 1;
				uint32_t phi8 = 1;
				uint64_t phi9 = 1;
				uint64_t phi10 = (((__zext uint64_t)*(uint32_t*)(phi4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					phi6 = phi5;
					int62_t anon12 = (__sext int62_t)*(uint32_t*)(phi4 + 6296832);
					uint64_t anon11 = phi10 + ((__zext uint64_t)(anon12 + (__sext int62_t)*(uint32_t*)(phi4 + 6296896) * 10) << 2);
					int64_t anon13 = (__sext int64_t)*(uint32_t*)(phi4 + 6296896);
					if (!(*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255 || *(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1))
					{
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1)
					{
						uint32_t anon20;
						uint64_t phi14 = phi5;
						uint64_t phi15 = phi_in7;
						int64_t anon17 = (__sext int64_t)(phi8 * *(uint32_t*)(phi4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in7 * *(uint32_t*)(phi4 + 6296896)) + anon3) * 10 << 2;
						phi16 = anon17 + 6297408;
						uint64_t phi18 = anon17 + 6296960;
						do
						{
							*(uint32_t*)phi16 = 0;
							uint64_t anon19 = (__zext uint64_t)((uint32_t)phi14 + *(uint32_t*)phi18);
							phi6 = anon19;
							anon20 = (uint32_t)phi15 - 1;
							if (anon20 != 0)
							{
								phi14 = anon19;
								phi15 = (__zext uint64_t)anon20;
								int64_t anon21 = (__sext int64_t)-*(uint32_t*)(phi4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi4 + 6296896) * 10 << 2;
								phi16 = phi16 + anon21;
								phi18 = phi18 + anon21;
							}
						}
						while (anon20 != 0);
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255)
					{
						uint32_t anon22 = (uint32_t)phi9 + 1;
						phi_in7 = (__zext uint64_t)anon22;
						phi8 = anon22;
						phi9 = phi9 + 1 & 0xffffffff;
						phi10 = anon11;
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
				uint64_t phi_in7 = 1;
				uint32_t phi8 = 1;
				uint64_t phi9 = 1;
				uint64_t phi10 = (((__zext uint64_t)*(uint32_t*)(phi4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					phi6 = phi5;
					int62_t anon12 = (__sext int62_t)*(uint32_t*)(phi4 + 6296832);
					uint64_t anon11 = phi10 + ((__zext uint64_t)(anon12 + (__sext int62_t)*(uint32_t*)(phi4 + 6296896) * 10) << 2);
					int64_t anon13 = (__sext int64_t)*(uint32_t*)(phi4 + 6296896);
					if (!(*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1 || *(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255))
					{
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255)
					{
						uint32_t anon20;
						uint64_t phi14 = phi5;
						uint64_t phi15 = phi_in7;
						int64_t anon17 = (__sext int64_t)(phi8 * *(uint32_t*)(phi4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in7 * *(uint32_t*)(phi4 + 6296896)) + anon3) * 10 << 2;
						phi16 = anon17 + 6297408;
						uint64_t phi18 = anon17 + 6296960;
						do
						{
							*(uint32_t*)phi16 = 0;
							uint64_t anon19 = (__zext uint64_t)((uint32_t)phi14 + *(uint32_t*)phi18);
							phi6 = anon19;
							anon20 = (uint32_t)phi15 - 1;
							if (anon20 != 0)
							{
								phi14 = anon19;
								phi15 = (__zext uint64_t)anon20;
								int64_t anon21 = (__sext int64_t)-*(uint32_t*)(phi4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi4 + 6296896) * 10 << 2;
								phi16 = phi16 + anon21;
								phi18 = phi18 + anon21;
							}
						}
						while (anon20 != 0);
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1)
					{
						uint32_t anon22 = (uint32_t)phi9 + 1;
						phi_in7 = (__zext uint64_t)anon22;
						phi8 = anon22;
						phi9 = phi9 + 1 & 0xffffffff;
						phi10 = anon11;
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

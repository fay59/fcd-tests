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
	uint32_t anon56;
	l(4195589);
	uint32_t phi1 = 60;
	do
	{
		uint32_t phi6;
		uint32_t anon10;
		uint8_t* anon24;
		uint8_t* anon28;
		uint32_t phi43;
		uint32_t anon47;
		uint64_t phi_in2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi5 = 0;
		do
		{
			uint32_t anon11;
			phi6 = phi_in4;
			uint32_t phi7 = phi5;
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
			phi5 = anon10;
		}
		while (phi6 != 8);
		uint64_t phi12 = phi_in2;
		uint64_t phi13 = 0;
		uint64_t phi_in14 = 1;
		uint32_t phi15 = 1;
		if (anon10 != 0)
		{
			uint64_t anon20;
			uint64_t anon26;
			uint32_t anon29;
			do
			{
				uint32_t anon16;
				uint32_t anon17;
				uint32_t anon18;
				uint32_t anon19;
				printf((uint8_t*)0x400f81);
				do
				{
					anon16 = getchar();
					anon17 = anon16 - 65;
				}
				while (anon17 >= 8);
				do
				{
					anon18 = getchar();
					anon19 = anon18 - 49;
				}
				while (anon19 >= 8);
				anon20 = m.constprop.0(4195848, (__zext uint64_t)(anon16 - 64), (__zext uint64_t)(anon18 - 48));
			}
			while ((uint32_t)anon20 == 0);
			putchar(10);
			uint64_t phi21 = 65;
			uint64_t phi22 = 6297448;
			do
			{
				uint64_t anon25;
				putchar((uint32_t)phi21);
				uint64_t phi23 = phi22;
				do
				{
					anon24 = (uint8_t*)0x400f79;
					printf(anon24);
					anon25 = phi22 + 28;
					if (anon25 != phi23)
					{
						phi23 = phi23 + 4;
					}
				}
				while (anon25 != phi23);
				putchar(10);
				anon26 = phi22 + 40;
				if (anon26 != 6297768)
				{
					phi21 = phi21 + 1 & 0xffffffff;
					phi22 = anon26;
				}
			}
			while (anon26 != 6297768);
			putchar(32);
			uint32_t phi27 = 1;
			do
			{
				anon28 = (uint8_t*)0x400f7d;
				printf(anon28);
				anon29 = phi27 + 1;
				phi27 = anon29;
			}
			while (anon29 != 9);
			putchar(10);
			phi12 = phi_in2;
			phi13 = 0;
			phi_in14 = 1;
			phi15 = 1;
		}
		do
		{
			uint32_t phi45;
			uint64_t phi30 = phi12;
			uint64_t phi31 = phi13;
			uint64_t phi32 = phi_in14;
			uint32_t phi33 = phi15;
			uint64_t phi34 = 1;
			uint32_t phi35 = 1;
			do
			{
				uint32_t phi_in44;
				uint64_t phi_in36 = phi30;
				uint64_t phi_in37 = phi31;
				uint64_t anon38 = m.constprop.1(4195713, (__zext uint64_t)phi33, (__zext uint64_t)phi35);
				uint64_t anon40 = random();
				uint32_t anon39 = (uint32_t)anon38 + (uint32_t)anon40 + ((uint32_t)((anon40 & 0xffffffff) / 6) - (uint32_t)(anon40 << 32 >> 32 >> 31)) * 4294967290;
				uint32_t anon41 = (uint32_t)phi_in37;
				if (anon39 > anon41)
				{
					uint32_t anon42 = (uint32_t)phi34;
					*(uint32_t*)(arg1 - 72) = anon42;
					phi12 = phi32;
					phi31 = (__zext uint64_t)anon39;
					phi43 = anon39;
					phi_in44 = anon42;
				}
				else 
				{
					phi12 = phi_in36;
					phi31 = phi_in37;
					phi43 = anon41;
					phi_in44 = (uint32_t)phi34;
				}
				phi45 = phi_in44;
				if (phi45 != 8)
				{
					phi30 = phi12;
					uint32_t anon46 = phi45 + 1;
					phi34 = (__zext uint64_t)anon46;
					phi33 = (uint32_t)phi32;
					phi35 = anon46;
				}
			}
			while (phi45 != 8);
			anon47 = (uint32_t)phi32;
			if (anon47 != 8)
			{
				phi13 = phi31;
				uint32_t anon48 = anon47 + 1;
				phi_in14 = (__zext uint64_t)anon48;
				phi15 = anon48;
			}
		}
		while (anon47 != 8);
		if (phi43 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi12 & 0xffffffff, 0) != 0)
			{
				uint64_t anon53;
				uint32_t anon55;
				putchar(10);
				uint64_t phi49 = 65;
				uint64_t phi50 = 6297448;
				do
				{
					uint64_t anon52;
					putchar((uint32_t)phi49);
					uint64_t phi51 = phi50;
					do
					{
						printf(anon24);
						anon52 = phi50 + 28;
						if (anon52 != phi51)
						{
							phi51 = phi51 + 4;
						}
					}
					while (anon52 != phi51);
					putchar(10);
					anon53 = phi50 + 40;
					if (anon53 != 6297768)
					{
						phi49 = phi49 + 1 & 0xffffffff;
						phi50 = anon53;
					}
				}
				while (anon53 != 6297768);
				putchar(32);
				uint32_t phi54 = 1;
				do
				{
					printf(anon28);
					anon55 = phi54 + 1;
					phi54 = anon55;
				}
				while (anon55 != 9);
				putchar(10);
			}
		}
		anon56 = phi1 - 1;
		phi1 = anon56;
		uint64_t phi_in3 = phi12;
	}
	while (anon56 != 0);
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
	uint64_t phi15;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		*anon1 = 1;
		uint64_t phi4 = 0;
		uint64_t phi5 = 1;
		do
		{
			phi5 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi4 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi4 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				uint64_t phi6 = 1;
				uint32_t phi7 = 1;
				uint64_t phi8 = 1;
				uint64_t phi9 = (((__zext uint64_t)*(uint32_t*)(phi4 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi4 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				while (true)
				{
					uint64_t phi10 = phi6;
					phi5 = phi5;
					int62_t anon12 = (__sext int62_t)*(uint32_t*)(phi4 + 6296832);
					uint64_t anon11 = phi9 + ((__zext uint64_t)(anon12 + (__sext int62_t)*(uint32_t*)(phi4 + 6296896) * 10) << 2);
					int64_t anon13 = (__sext int64_t)*(uint32_t*)(phi4 + 6296896);
					if (!(*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255 || *(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1))
					{
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 1)
					{
						uint32_t anon19;
						uint64_t phi14 = phi5;
						int64_t anon16 = (__sext int64_t)(phi7 * *(uint32_t*)(phi4 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi10 * *(uint32_t*)(phi4 + 6296896)) + anon3) * 10 << 2;
						phi15 = anon16 + 6297408;
						uint64_t phi17 = anon16 + 6296960;
						do
						{
							*(uint32_t*)phi15 = 0;
							uint64_t anon18 = (__zext uint64_t)((uint32_t)phi14 + *(uint32_t*)phi17);
							phi5 = anon18;
							anon19 = (uint32_t)phi10 - 1;
							if (anon19 != 0)
							{
								phi14 = anon18;
								phi10 = (__zext uint64_t)anon19;
								int64_t anon20 = (__sext int64_t)-*(uint32_t*)(phi4 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi4 + 6296896) * 10 << 2;
								phi15 = phi15 + anon20;
								phi17 = phi17 + anon20;
							}
						}
						while (anon19 != 0);
						break;
					}
					if (*(uint32_t*)(anon11 + ((__zext uint64_t)-anon12 << 2) + ((-anon13 << 2) - anon13 << 3)) == 255)
					{
						uint32_t anon21 = (uint32_t)phi8 + 1;
						phi6 = (__zext uint64_t)anon21;
						phi7 = anon21;
						phi8 = phi8 + 1 & 0xffffffff;
						phi9 = anon11;
					}
				}
			}
			phi4 = phi4 + 4;
		}
		while (phi4 != 28);
		if ((uint32_t)phi5 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi5 & 0xffffffff;
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

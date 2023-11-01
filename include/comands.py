DEF_CMD(IN, 0, false,
	{
	double value1 = 0;
	scanf("%lf", &value1);
	PUSH(value1);
	})


DEF_CMD(PUSH, 1, true,
	{
	double value1 = 0;
	value1 = GetArg(processor, ip, Buffer);

	if (processor->code & RAM) 
		{
		PUSH(processor->RAM[(int)value1]);
		}
	
	else 
		{
    	PUSH(value1); 
		}

    return ip + sizeof(int);
	})


DEF_CMD(OUT, 2, false,
	{
	double value1 = 0;
	POP(value1);
	if (check(value1, 0))
		{
		printf("%lf\n", fabs(value1));
		}
	
	else 
		{
		printf("%lf\n", value1);
		}
	})


DEF_CMD(ADD, 3, false,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value1 + value2);
	})


DEF_CMD(SUB, 4, false,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2 - value1);
	})


DEF_CMD(MULT, 5, false,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value1 * value2);
	})


DEF_CMD(DIV, 6, false,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);

	if (value1 == 0) 
		{
		printf("division by 0");
		abort();
		}

	PUSH(value2 / value1);
	})


DEF_CMD(SQRT, 7, false,
	{
	double value1 = 0;
	POP(value1);
	PUSH(sqrt(value1));
	})


DEF_CMD(SIN, 8, false,
	{
	double value1 = 0;
	POP(value1);
	PUSH(sin(value1));
	})


DEF_CMD(COS, 9, false,
	{
	double value1 = 0;
	POP(value1);
	PUSH(cos(value1));
	})


DEF_CMD(HLT, 10, false,
	{
	return EndOfProgram;
	})


DEF_CMD(POP, 11, true,
	{
	int value1 = 0;
	value1 = (int)GetArg(processor, ip, Buffer);
	if (processor->code & RAM)
		{
		POP(processor->RAM[value1]);
		}
	
	else 
		{
		POP(processor->RegistrArray[Buffer[ip] - 1]);
		}

    return ip + sizeof(int);
	})


DEF_CMD(JMP, 12, true,
	{
	double arg = 0;
	arg = GetArg(processor, ip, Buffer);
    return arg;
	})


DEF_CMD(JA, 13, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1);
	if (value2 < value1)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(JAE, 14, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1);
	if (value2 <= value1)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(JB, 15, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1);
	if (value1 < value2)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(JBE, 16, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1);
	if (value1 <= value2)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(JE, 17, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1);
	if (value1 == value2)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(JNE, 18, true,
	{
	double value1 = 0, value2 = 0;
	POP(value1);
	POP(value2);
	PUSH(value2);
	PUSH(value1); 
	if (value1 != value2)
		{
		double arg = 0;
		arg = GetArg(processor, ip, Buffer);
    	return arg;
		}
	return ip + sizeof(int);
	})


DEF_CMD(CALL, 19, true,
	{
	double arg = 0;
	arg = GetArg(processor, ip, Buffer);
	StackPush(&processor->stkCall, (double)(ip + sizeof(int)));
    return arg;
	})


DEF_CMD(RET, 20, false,
	{
	double arg = 0;
	StackPop(&processor->stkCall, &arg);
	return (int)arg;
	})


DEF_CMD(DRAW, 21, false,
	{
	for (size_t i = 0; i < RAM_size; i++) 
		{
		if (processor->RAM[i] == 1) 
			{
			if (i != 215)
				{
				printf("**");
				}

			else 
				{
				printf("..");
				}
			}
		else if (processor->RAM[i] == 0)
			{
			printf("..");
			}
		if ((i + 1) % 20 == 0) 
			{
			printf("\n");
			}
		}
	})



DEF_CMD(INT, 22, false,
	{
	double arg = 0;
	POP(arg);
	int arg1 = (int)(arg);
	PUSH(arg1);
	})
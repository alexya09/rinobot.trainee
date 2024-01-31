// biblioteca para possibilitar a movimentação inicial

// funçoes base: giragraus, andar, curva
// funçoes auxiliares: detectar cancelamento, detectar se robo caiu, verifica se robo adv esta perto

// task detectarCancelamento = detecta se precisa cancelar a mov inicial
// void verificaMovimentacaoEncerrou = detecta se a estrategia inicial foi executada e se precisa ser interrompida

task detectarCancelamento()
{
    int dist_adv = 25;  // isso vai funcionar na movimentação por angulo?

     if(roboCaiu == true)
        
    if(sensorType[S3] == sensorSonar || sensorType[S2] == sensorSonar || sensorType[S1] == sensorSonar || sensorType[S4] == sensorSonar)
    {
        while(condição de cancelamento)
    }
}

void verificaMovimentacaoEncerrou(float centimetros, bool cancelar_estrategia, int lado_encoder, int tipo_estrategia, int angulo)
{
	static bool mov_iniciou = false; 

	if(mov_iniciou == false)
	{
		mov_iniciou = true;
		if(cancelar_estrategia == true)
		{
			StartTask(detectarCancelamento);
		}
	}

    switch(tipo_estrategia)
	{
		//___________________________________________________________________________________________________________________________
	case GIRA_X_GRAUS:
		if(abs(nMotorEncoder[Direito]) < angulo*KGiro && abs(nMotorEncoder[Esquerdo]) < angulo*KGiro)
		{
			if(CancelarMovimentacao)
			{
				MovInicialCompleta = true;
			}
		}
		else
		{
			MovInicialCompleta = true;
		}
		break;

		//___________________________________________________________________________________________________________________________
	case FAZER_CURVA:
		//if(lado_encoder == ESQUERDA)
		//{
			if(abs(nMotorEncoder[Esquerdo]) < (int)(centimetros * GrausPorCm) && abs(nMotorEncoder[Direito]) < (int)(centimetros * GrausPorCm))
			{
				if(CancelarMovimentacao)
				{
					MovInicialCompleta = true;
				}
			}else
			{
				MovInicialCompleta = true;
			}
		//}
		/*else if(lado_encoder == DIREITA)
		{
			if(abs(nMotorEncoder[D]) < (int)(centimetros * GrausPorCm))
			{
				if(CancelarMovimentacao)
				{
					MovInicialCompleta = true;
				}
			}else
			{
				MovInicialCompleta = true;
			}
		}*/
		break;

	case ANDA_X_CM:
		if(abs(nMotorEncoder[Esquerdo]) < (int)(centimetros * GrausPorCm) && abs(nMotorEncoder[Direito]) < (int)(centimetros * GrausPorCm))
		{
			if(CancelarMovimentacao)
			{
				MovInicialCompleta = true;
			}
		}else
		{
			MovInicialCompleta = true;
		}
		break;
	}
        
}

bool fazCurva(short lado, float raio_curva, float centimetros, bool frente, bool cancelar_estrategia)
{
    
}
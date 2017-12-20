//#include <vector>
//
//using namespace std;
//
//int i,
//Query = 0,
//Floor = 1,
//State = 0; //-1 вниз, 0 стоит, 1 вверх
//vector <int> CallCar(9), CallUp(9), CallDown(9);
//
////Floor = 1, State = 0, CallCar[Floor] = 0, CallUp[Floor] = 0, CallDown[Floor] = 0;
//
//int StateDefine()
//{
//	switch (State)
//	{
//	case 1:
//		Query = 0;
//		for (i = Floor; i < 9; i++)
//			if (CallCar[i] == 1 || CallUp[i] == 1) Query = 1;
//		if (Query == 0)
//			for (i = Floor; i >= 0; i--)
//				if (CallCar[i] == 1 || CallDown[i] == 1) Query = -1;
//		if (Query == -1 || (Query == 0 && Floor > 1))
//			State = -1;
//		if (Query == 0 && Floor == 1)
//			State = 0;
//		break;
//	case -1:
//		Query = 0;
//		for (i = Floor; i >= 0; i--)
//			if (CallCar[i] == 1 || CallDown[i] == 1) Query = -1;
//		if (Query == 0)
//			for (i = Floor; i < 9; i++)
//				if (CallCar[i] == 1 || CallUp[i] == 1) Query = 1;
//		if (Query == 1 || (Query == 0 && Floor < 1))
//			State = 1;
//		if (Query == 0 && Floor == 1)
//			State = 0;
//		break;
//	}
//	return State;
//}
//
//void MoveDefine(int State, int &Speed, int &Time)
//{
//	switch (State)
//	{
//	case 1:
//		Floor++;
//		if (CallCar[Floor] == 1 || CallUp[Floor] == 1) 
//			Speed = 1, Time = 3000;
//		break;
//	case -1:
//		Floor--;
//		if (CallCar[Floor] == 1 || CallDown[Floor] == 1)
//			Speed = -1, Time = 3000;
//		break;
//	}
//}
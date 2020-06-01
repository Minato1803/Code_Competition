int nX[] = {1, 1, 2,2,-1, -1, -2,-2};
int nY[] = {2,-2,-1,1, -2, 2, -1, 1};
int kX[] = {1, 1, 1,0,-1, -1, -1, 0};
int kY[] = {1,-1, 0,1, 1, -1,  0,-1};
int chessBoard[10][10] = {0};
// quan den  = -1, rook  = 1, queen = 2, knight  =3, bibshop =4;
void Qmove(int chessBoard[][10], string q)
{
	for(int i = q[1] - 96;i<= 8;i++)
	{
		
		chessBoard[q[2] - 48][i] = 2;
	}
	for(int i = q[1] - 96;i>= 1;i--)
	{
		chessBoard[q[2] - 48][i] = 2;
	}
	for(int i = q[2] - 48;i<= 8;i++)
	{
		chessBoard[i][q[1] - 96] = 2;
	}
	for(int i = q[2] - 48;i>0;i--)
	{
		chessBoard[i][q[1] - 96] = 2;
	}
//	// cheo
	int j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(j<=0)
			break;
		chessBoard[i][j] = 2;
		j--;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(j>8)
			break;
		chessBoard[i][j] = 2;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(j>8)
			break;
		chessBoard[i][j] = 2;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(j<=0)
			break;
		chessBoard[i][j] = 2;
		j--;	
	}
}

void Rmove(int chessBoard[][10], string q)
{
	//thang
	for(int i = q[1] - 96;i<= 8;i++)
	{
		chessBoard[q[2] - 48][i] = 1;
	}
	for(int i = q[1] - 96;i>= 1;i--)
	{
		chessBoard[q[2] - 48][i] = 1;
	}
	for(int i = q[2] - 48;i<= 8;i++)
	{
		chessBoard[i][q[1] - 96] = 1;
	}
	for(int i = q[2] - 48;i>0;i--)
	{
		chessBoard[i][q[1] - 96] = 1;
	}
}
void Bmove(int chessBoard[][10], string q)
{
	int j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(j<=0)
			break;
		chessBoard[i][j] = 4;
		j--;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(j>8)
			break;
		chessBoard[i][j] = 4;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(j>8)
			break;
		chessBoard[i][j] = 4;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(j<=0)
			break;
		chessBoard[i][j] = 4;
		j--;	
	}
}
void Nmove(int chessBoard[][10], string n)
{
	for(int i = 0;i<8;i++)
	{
		if((n[2] -48) + nX[i] >8 || (n[2] -48) + nX[i] < 1 )
			continue;
		if((n[1] -96) + nY[i] >8 || (n[1] -96) + nY[i] < 1 )
			continue;	
		chessBoard[(n[2] -48) + nX[i]][(n[1] - 96) + nY[i]] = 3;
	}
}

bool checkQmove(string q)
{
	//thang
	for(int i = q[1] - 96;i<= 8;i++)
	{
		if(chessBoard[q[2] - 48][i] == 2)
			return 1;
	}
	for(int i = q[1] - 96;i>= 1;i--)
	{
		if(chessBoard[q[2] - 48][i] == 2)
			return 1;
	}
	for(int i = q[2] - 48;i<= 8;i++)
	{
		if(chessBoard[i][q[1] - 96] == 2)
			return 1;
	}
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][q[1] - 96] == 2)
			return 1;
	}
	// cheo
	int j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][j] == 2)
			return 1;
		j--;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(chessBoard[i][j] == 2)
			return 1;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][j] == 2)
			return 1;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(chessBoard[i][j] == 2)
			return 1;
		j--;	
	}
	return 0;
}

bool checkRmove(string q)
{
	//thang
	for(int i = q[1] - 96;i<= 8;i++)
	{
		if(chessBoard[q[2] - 48][i] == 1)
			return 1;
	}
	for(int i = q[1] - 96;i>= 1;i--)
	{
		if(chessBoard[q[2] - 48][i] == 1)
			return 1;
	}
	for(int i = q[2] - 48;i<= 8;i++)
	{
		if(chessBoard[i][q[1] - 96] == 1)
			return 1;
	}
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][q[1] - 96] == 1)
			return 1;
	}
	return 0;
}
bool checkBmove(string q)
{
	int j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][j] == 4)
			return 1;
		j--;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(chessBoard[i][j] == 4)
			return 1;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i>0;i--)
	{
		if(chessBoard[i][j] == 4)
			return 1;
		j++;	
	}
	j = q[1] - 96;
	for(int i = q[2] - 48;i<=8;i++)
	{
		if(chessBoard[i][j] == 4)
			return 1;
		j--;	
	}
	return 0;
}
bool  checkNmove(string n)
{
	for(int i = 0;i<8;i++)
	{
		if((n[2] -48) + nX[i] >8 || (n[2] -48) + nX[i] < 1 )
			continue;
		if((n[1] -96) + nY[i] >8 || (n[1] -96) + nY[i] < 1 )
			continue;	
		if(chessBoard[(n[2] -48) + nX[i]][(n[1] - 96) + nY[i]] == 3)
			return 1;
	}
	return 0;
}
bool checkKing(string k)
{
	chessBoard[k[2] -48][k[1] - 96] = -1;
	for(int i = 0;i<= 8;i++)
	{
		if((k[2] -48) + kX[i] >8 || (k[2] -48) + kX[i] < 1 )
			continue;
		if((k[1] -96) + kY[i] >8 || (k[1] -96) + kY[i] < 1 )
			continue;
		if(checkQmove(k) == 1 || checkRmove(k) == 1 || checkBmove(k) == 1|| checkNmove(k) == 1)
			return 1;
		else
			return 0;	
		
	}
}

 isOneMoveCheckMate(std::vector<std::string> pos)
{
	string s="";
	for(int i = 0;i< pos.size();i++)
	{
		if(pos[i][0] >= 97 && pos[i][0]<=122)
		{
//			chessBoard[pos[i][2] - 48][pos[i][1] - 48] = 1;
			if(pos[i][0] == 'q')
			{
				Qmove(chessBoard, pos[i]);
			}
			if(pos[i][0] == 'r')
			{
				Rmove(chessBoard, pos[i]);
			}
			if(pos[i][0] == 'b')
			{
				Bmove(chessBoard, pos[i]);
			}
			if(pos[i][0] == 'n')
			{
				Nmove(chessBoard, pos[i]);
			}
		}
		else
		{
			chessBoard[pos[i][2] - 48][pos[i][1] - 96] = 5;
			if(pos[i][0] == 'K')
			{
				s = pos[i];
			}
		}
	}
//	cout<<s<<endl;
	if(checkKing(s))
	{
		return 1;
	}
	else
		return 0;
}

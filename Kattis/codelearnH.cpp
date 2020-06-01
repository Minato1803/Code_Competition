#include <bits/stdc++.h>
using namespace std;

#define  ll             long long
#define  db             double
#define  fix_set(x)     fixed<<setprecision(x)
#define  buff			ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define  Input			freopen("E:/code/testing/input.txt", "r", stdin)
#define  Output			freopen("E:/code/testing/input.txt", "w", stdout)
#define  ms(a,x)    	memset(a, x, sizeof(a))
#define  all(x)         (x).begin(), (x).end()
#define	 fst			first
#define	 snd			second
#define  allarr(x,n)	(x, x+n)
#define  pb				push_back
#define  mp				make_pair

//====================================================================================================

//-----------------------------
int nX[] = {1, 1, 2,2,-1, -1, -2,-2};
int nY[] = {2,-2,-1,1, -2, 2, -1, 1};
int kX[] = {1, 1, 1,0,-1, -1, -1, 0};
int kY[] = {1,-1, 0,1, 1, -1,  0,-1};
map <int, int> Count;
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


bool checkKing(string k)
{
	chessBoard[k[2] -48][k[1] - 96] = 6;
	for(int i = 0;i<= 8;i++)
	{
		if((k[2] -48) + kX[i] >8 || (k[2] -48) + kX[i] < 1 )
			continue;
		if((k[1] -96) + kY[i] >8 || (k[1] -96) + kY[i] < 1 )
			continue;
		if(chessBoard[(k[2] -48) + kX[i]][(k[1] -96) + kY[i]] == 0)
			return 0;
	}
		return 1;		
}

void move(string s)
{
	
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



void Solves()
{
	ll n;
	vector <string> pos;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		pos.pb(s);
	}
//	pos = {"qa6","Kb8","kd1"};
	cout<<isOneMoveCheckMate(pos)<<endl;
	for(int i = 1;i<=8;i++)
	{
		for(int j =1;j<=8;j++)
		{
			cout<<chessBoard[i][j]<<" ";
		}
		cout<<endl;
	}	
}

int main()
{
    buff;
    Input;
//    Output;
//    clock_t start, end;
//    	double time_use;
//    start = clock();
//    	Solves();
//    end = clock();
//    time_use = (double)(end - start) / CLOCKS_PER_SEC;
//    printf("%f seconds", time_use);
    Solves();
    return 0;
}

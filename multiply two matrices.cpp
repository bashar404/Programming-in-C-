int main()
{
    int A[3][3],B[3][3],C[3][3];
    
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("A[%d][%d]:",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        
        
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("B[%d][%d]:",i,j);
                scanf("%d",&B[i][j]);
            }
        }


         
        for(int i=0;i<3;i++)//1
        {
            for (int j=0;j<3;j++)//1
            {
               C[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j];
                printf("C[%d][%d]:%d",i,j,C[i][j]);
                
            }
        }

    return 0;
}

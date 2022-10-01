#include <iostream>
using namespace std ;
int main() 
{   FILE * f ;
    int n , e , i , j ;
    cout << "donnez le nombre de sommet : ";
    cin >>n;
    cout << "combient d'ensemble voulez vous creer : ";
    cin >>e ;
    int *a = new int [e] ;
    int *b = new int [e] ;
    for (i=0;i<e;i++)
{     cout << "donnez l'ensemble n"<<i+1<<" : ";
      cin >> a[i] >> b[i] ;
}
    f = fopen ("graph.txt","wt");
    if (f==NULL)
      cout <<"ipossible d'ouvrir le fichier";
    else
{     fprintf (f,"il y a %d sommet \n", n );
      for (i=0;i<e;i++)
        fprintf (f,"( %d , %d ) \n", a[i], b[i]) ;
      fclose (f);
}     
    f = fopen ("graph.txt","rt");
    if (f==NULL)
      cout <<"ipossible d'ouvrir le fichier";
    else
{     fscanf (f,"il y a %d sommet \n", &n );
      for (i=0;i<n;i++)
{       cout << i+1 << " : ";
        for (j=0;j<e;j++)
{         fscanf (f,"( %d , %d ) \n", &a[j], &b[j]) ;
          if (a[j]==i+1)
           { cout << b[j] << " ";}
          if (b[j]==i+1)
           { cout << a[j] << " ";}
}
      cout <<"\n";
}
      fclose (f);
}      
	return 0;
}

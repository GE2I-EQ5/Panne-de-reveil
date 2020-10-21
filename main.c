#include <stdio.h>

int main(void)
{
  int m_reveil, h_reveil, m_cours, h_cours;
  int m_bus = 420; //
  _Bool frigo;

  printf("Le frigo est-il plein ? Entrez 1 pour plein et 0 pour vide : ");

  scanf("%u", &frigo);

  printf("Quelle heure est le cours ? : ");

  scanf("%d:%d", &h_cours, &m_cours);

  printf("Le cours est a : %d : %d\n", h_cours,m_cours);

  m_cours = m_cours + h_cours*60-12 ;

  //printf("m_cours vaut %d\n", m_cours); Juste jusqu'ici

  while(m_bus <= m_cours)
  {
    m_bus +=11;
  }

  m_bus -=11;

  //printf("%d\n", m_bus);

  if(frigo == 1) //Si frigo plein
  {
    m_reveil = m_bus - 25;
  }
  else //Sinon frigo vide
  {
    m_reveil = m_bus - 30;
  }

  h_reveil = m_reveil/60;

  m_reveil = m_reveil%60;

  printf("Le reveil doit sonner a %d heures et %d minutes.", h_reveil, m_reveil);
}

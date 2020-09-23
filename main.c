#include <stdio.h>

int main()
{
  int m_reveil, h_reveil, m_bus, m_cours, h_cours;

  _Bool frigo;

  printf("Le frigo est-il plein ? Entrez 1 pour plein et 0 pour vide : ");

  scanf("%u", &frigo);

  printf("Quelle heure est le cours ? : ");

  scanf("%d:%d", &h_cours, &m_cours);

  printf("Le cours est a : %d : %d\n", h_cours,m_cours);

  m_cours = m_cours + h_cours*60-12

  //printf("%d");

  while(m_bus < m_cours)
  {
    m_bus +=11;
  }

  m_bus -=11;

  if(frigo == 1) //Si frigo plein
  {
    m_reveil = m_bus - 25;
  }
  else
  {
    m_reveil = m_bus - 30;
  }
}

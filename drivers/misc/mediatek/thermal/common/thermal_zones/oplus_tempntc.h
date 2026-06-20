#define AGING 999
#define PREVERSION 998
#define HIGH_TEMP_AGING 997
#define FACTORY 996
#define get_eng_version() 0
#ifndef _OPLUS_TEMPNTC_H_
#define _OPLUS_TEMPNTC_H_


extern bool oplus_voocphy_get_bidirect_cp_support(void);

static inline int is_ntc_switch_projects(void)
{
       if (get_project() == 21061) {
               return 1;
       } else if ((get_project() == 21015) && (oplus_voocphy_get_bidirect_cp_support() == TRUE)) {
               return 1;
       }
       return 0;
}

/* 4G PA NTC */
int oplus_get_pa1_con_temp(void);
/* 5G PA NTC */
int oplus_get_pa2_con_temp(void);
#endif

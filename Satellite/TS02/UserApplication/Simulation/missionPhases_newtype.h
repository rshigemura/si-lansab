#ifndef MISSIONPHASES_TYPES_CONVERTION
#define MISSIONPHASES_TYPES_CONVERTION

#include "NewSmuTypes.h"

/****************************************************************
 ** SSM_ST_OpPhases 
 ****************************************************************/
extern int SSM_ST_OpPhases_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_SSM_ST_OpPhases_string(const char *str, const char** endptr);
extern int string_to_SSM_ST_OpPhases(const char *str, void* pValue, const char** endptr);
extern int is_SSM_ST_OpPhases_allow_double_convertion();
extern int SSM_ST_OpPhases_to_double(const void* pValue, double *nValue);
extern int get_SSM_ST_OpPhases_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_SSM_ST_OpPhases(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_SSM_ST_OpPhases_default_value(void *pValue);
extern TypeUtils _Type_SSM_ST_OpPhases_Utils;

/****************************************************************
 ** SSM_TR_OpPhases 
 ****************************************************************/
extern int SSM_TR_OpPhases_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_SSM_TR_OpPhases_string(const char *str, const char** endptr);
extern int string_to_SSM_TR_OpPhases(const char *str, void* pValue, const char** endptr);
extern int is_SSM_TR_OpPhases_allow_double_convertion();
extern int SSM_TR_OpPhases_to_double(const void* pValue, double *nValue);
extern int get_SSM_TR_OpPhases_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_SSM_TR_OpPhases(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_SSM_TR_OpPhases_default_value(void *pValue);
extern TypeUtils _Type_SSM_TR_OpPhases_Utils;

/****************************************************************
 ** kcg_real 
 ****************************************************************/
extern int kcg_real_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_real_string(const char *str, const char** endptr);
extern int string_to_kcg_real(const char *str, void* pValue, const char** endptr);
extern int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(const void* pValue, double *nValue);
extern int get_kcg_real_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_real(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_real_default_value(void *pValue);
extern TypeUtils _Type_kcg_real_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_bool_string(const char *str, const char** endptr);
extern int string_to_kcg_bool(const char *str, void* pValue, const char** endptr);
extern int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(const void* pValue, double *nValue);
extern int get_kcg_bool_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_bool_default_value(void *pValue);
extern TypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_char_string(const char *str, const char** endptr);
extern int string_to_kcg_char(const char *str, void* pValue, const char** endptr);
extern int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(const void* pValue, double *nValue);
extern int get_kcg_char_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_char_default_value(void *pValue);
extern TypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_int 
 ****************************************************************/
extern int kcg_int_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_kcg_int_string(const char *str, const char** endptr);
extern int string_to_kcg_int(const char *str, void* pValue, const char** endptr);
extern int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(const void* pValue, double *nValue);
extern int get_kcg_int_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_kcg_int(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_kcg_int_default_value(void *pValue);
extern TypeUtils _Type_kcg_int_Utils;

/****************************************************************
 ** fr 
 ****************************************************************/
extern int fr_to_string(const void *pValue, int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int check_fr_string(const char *str, const char** endptr);
extern int string_to_fr(const char *str, void* pValue, const char** endptr);
extern int is_fr_allow_double_convertion();
extern int fr_to_double(const void* pValue, double *nValue);
extern int get_fr_signature(int (*pfnStrAppend)(const char *str, void *pData), void *pData);
extern int compare_fr(int *nStatus, const void *pValue1, const void *pValue2, void *pData);
extern int set_fr_default_value(void *pValue);
extern TypeUtils _Type_fr_Utils;


#endif /*MISSIONPHASES_TYPES_CONVERTION */

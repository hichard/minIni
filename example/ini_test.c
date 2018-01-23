#include "././dev/minIni.h"

#ifdef MININI_USING_EXAMPLE
void ini_test(void)
{
    char  buf[16];
    char ip[16] = {0}, mask[16] = {0}, gw[16] = {0};
    int len;
    
    /*
    ** IP��ַ��������config��
    */
    len = ini_gets("config", "IPAddr", "000000", buf, 16, LJW_CFG_FILE_NAME);
    if(strcmp(buf, "000000") == 0) {
        // ����Ĭ��ֵ
        len = ini_puts("config", "IPAddr", "192.168.1.253", LJW_CFG_FILE_NAME);
    }
    
    /*
    ** �������룬������config��
    */
    len = ini_gets("config", "IPMask", "000000", buf, 16, LJW_CFG_FILE_NAME);
    if(strcmp(buf, "000000") == 0) {
        // ����Ĭ��ֵ
        len = ini_puts("config", "IPMask", "255.255.255.0", LJW_CFG_FILE_NAME);
    }
    
    /*
    ** ���أ�������config��
    */
    len = ini_gets("config", "IPGateWay", "000000", buf, 16, LJW_CFG_FILE_NAME);
    if(strcmp(buf, "000000") == 0) {
        // ����Ĭ��ֵ
        len = ini_puts("config", "IPGateWay", "192.168.1.1", LJW_CFG_FILE_NAME);
    }
    
    // ��ȡIP��ַ
    ini_gets("config", "IPAddr", "000000", ip, 16, LJW_CFG_FILE_NAME);
    ini_gets("config", "IPMask", "000000", mask, 16, LJW_CFG_FILE_NAME);
    ini_gets("config", "IPGateWay", "000000", gw, 16, LJW_CFG_FILE_NAME);
    set_if("e0",ip, gw,mask);
}

#ifdef RT_USING_FINSH
#include <finsh.h>
FINSH_FUNCTION_EXPORT(ini_test, IP address save as ini files, write and read it)
#endif

#endif
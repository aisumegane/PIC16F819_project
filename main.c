/*
 * File:   interrupt.c
 * Author: �XMEGANE��1����݌v�����Ⴄ��?��
 *
 * Created on 2024/03/27, 23:38
 */

#include "config_bits.h"
#include <xc.h>
#include "grobal_macro.h"
#include "grobal_function.h"
#include "register_setup.h"         /* ���W�X�^�ݒ� */
#include "interrupt.h"


/* =======�֐��v���g�^�C�v�錾======= */
void init(void);

void main(void) {
    init();
    gf_enable_interrupt();
    gf_timer1_start();
    
    while(1)
    {
        
    }   
}

void init(void)
{
    pic819_register_setup();
}

;
; � �⮬ 䠩�� ᮡ࠭� ���� ��ꥪ⮢
;

C_TDF equ 'Type' ;typedef
C_ACO equ 'Auto' ;��⮬���᪨� ���� (auto code)
C_STR equ ('s' shl 24) ;struct
C_INC equ ('#' shl 24) ;include
C_TXT equ 'Code' ;���� ���� (������)
C_VAR equ ('-' shl 24) ;��६�����
C_WND equ ('w' shl 24) ;����
C_CHB equ 'ChkB' ;CheckBox
C_OPT equ ('o' shl 24) ;OptionBox
C_EDB equ ('e' shl 24) ;EditBox
C_BUT equ ('b' shl 24) ;Button
C_DTT equ 'Text' ;�ᮢ��� ⥪��
C_REC equ 'Rect' ;�ᮢ��� ��אַ㣮�쭨�
C_KEY equ ('k' shl 24) ;���������
C_LIB equ 'Libr' ;������⥪�
C_IFN equ ('f' shl 24) ;�������筠� ������砥��� �㭪��

MAX_LEN_OBJ_TXT equ 200 ;���ᨬ��쭠� ������ ⥪�⮢�� � ᢮��� ��ꥪ�
MAX_OPT_CAPTION equ 250 ;���ᨬ��쭠� ������ �����ᥩ � ᢮��⢠� ��ꥪ�
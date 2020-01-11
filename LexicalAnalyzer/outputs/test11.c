[35m
======================================================================================
[0m[36m			Lexical Analyser for C language
[0m[35m======================================================================================

[0m[32mTOKEN TYPE                    TOKEN VALUE                   LINE NUMBER[0m               
[36mSINGLE LINE COMMENT           //if-else                     1                             
[0m[36mSINGLE LINE COMMENT           //switch-case                 2                             
[0m[36mSINGLE LINE COMMENT           //++ operator, -- operator    3                             
[0m[36mSINGLE LINE COMMENT           //return                      4                             
[0m[36mPREPROCESSOR DIRECTIVE        #include<stdio.h>             6                             
[0m[36mKEYWORD                       int                           8                             
[0m[36mKEYWORD                       main                          8                             
[0m[36mLEFT PARENTHESIS              (                             8                             
[0m[36mRIGHT PARENTHESIS             )                             8                             
[0m[36mLEFT BRACE                    {                             9                             
[0m[36mKEYWORD                       char                          10                            
[0m[36mIDENTIFIER                    a                             10                            
[0m[36mOPERATOR                      =                             10                            
[0m[36mCHARACTER                     'm'                           10                            
[0m[36mSEMICOLON                     ;                             10                            
[0m[36mKEYWORD                       if                            11                            
[0m[36mLEFT PARENTHESIS              (                             11                            
[0m[36mIDENTIFIER                    a                             11                            
[0m[36mOPERATOR                      ==                            11                            
[0m[36mCHARACTER                     'm'                           11                            
[0m[36mRIGHT PARENTHESIS             )                             11                            
[0m[36mLEFT BRACE                    {                             11                            
[0m[36mKEYWORD                       return                        12                            
[0m[36mINTEGER                       1                             12                            
[0m[36mSEMICOLON                     ;                             12                            
[0m[36mRIGHT BRACE                   }                             13                            
[0m[36mKEYWORD                       else                          13                            
[0m[36mLEFT BRACE                    {                             13                            
[0m[36mIDENTIFIER                    a                             14                            
[0m[36mOPERATOR                      ++                            14                            
[0m[36mSEMICOLON                     ;                             14                            
[0m[36mRIGHT BRACE                   }                             15                            
[0m[36mFUNCTION                      switch                        17                            
[0m[36mLEFT PARENTHESIS              (                             17                            
[0m[36mIDENTIFIER                    a                             17                            
[0m[36mRIGHT PARENTHESIS             )                             17                            
[0m[36mLEFT BRACE                    {                             17                            
[0m[36mIDENTIFIER                    case                          18                            
[0m[36mCHARACTER                     'l'                           18                            
[0m:[36mIDENTIFIER                    a                             19                            
[0m[36mOPERATOR                      ++                            19                            
[0m[36mSEMICOLON                     ;                             19                            
[0m[36mKEYWORD                       break                         20                            
[0m[36mSEMICOLON                     ;                             20                            
[0m[36mIDENTIFIER                    case                          21                            
[0m[36mCHARACTER                     'm'                           21                            
[0m:[36mIDENTIFIER                    a                             22                            
[0m[36mOPERATOR                      --                            22                            
[0m[36mSEMICOLON                     ;                             22                            
[0m[36mKEYWORD                       break                         23                            
[0m[36mSEMICOLON                     ;                             23                            
[0m[36mIDENTIFIER                    case                          24                            
[0m[36mCHARACTER                     'n'                           24                            
[0m:[36mIDENTIFIER                    a                             25                            
[0m[36mOPERATOR                      =                             25                            
[0m[36mIDENTIFIER                    a                             25                            
[0m[36mOPERATOR                      +                             25                            
[0m[36mINTEGER                       2                             25                            
[0m[36mSEMICOLON                     ;                             25                            
[0m[36mKEYWORD                       break                         26                            
[0m[36mSEMICOLON                     ;                             26                            
[0m[36mIDENTIFIER                    default                       27                            
[0m:[36mIDENTIFIER                    a                             28                            
[0m[36mOPERATOR                      =                             28                            
[0m[36mIDENTIFIER                    a                             28                            
[0m[36mOPERATOR                      +                             28                            
[0m[36mINTEGER                       3                             28                            
[0m[36mSEMICOLON                     ;                             28                            
[0m[36mRIGHT BRACE                   }                             29                            
[0m[36mFUNCTION                      printf                        30                            
[0m[36mLEFT PARENTHESIS              (                             30                            
[0m[36mSTRING                        "%c"                          30                            
[0m[36mCOMMA                         ,                             30                            
[0m[36mIDENTIFIER                    a                             30                            
[0m[36mRIGHT PARENTHESIS             )                             30                            
[0m[36mSEMICOLON                     ;                             30                            
[0m[36mRIGHT BRACE                   }                             31                            
[0m

[35m======================================================================================
[0m[36mSymbol Table	
[0m[33m======================================================================================
[0m[32m|	Symbol              |	Type                |	Line Number         |
[0m[33m======================================================================================
[0m[32m|	default             |	Identfier           [1m|	27                  |
[0m[32m|	printf              |	Function            [1m|	30                  |
[0m[32m|	switch              |	Function            [1m|	17                  |
[0m[32m|	a                   |	Identfier           [1m|	10                  |
[0m[32m|	case                |	Identfier           [1m|	18                  |
[0m[35m======================================================================================
[0m



[35m======================================================================================
[0m[36mConstant Table	
[0m[33m======================================================================================
[0m[32m|	Symbol              |	Type                |	Line Number         |
[0m[33m======================================================================================
[0m[32m|	2                   |	Integer             [1m|	25                  |
[0m[32m|	3                   |	Integer             [1m|	28                  |
[0m[32m|	"%c"                |	String              [1m|	30                  |
[0m[32m|	'm'                 |	Character           [1m|	10                  |
[0m[32m|	1                   |	Integer             [1m|	12                  |
[0m[32m|	'l'                 |	Character           [1m|	18                  |
[0m[32m|	'n'                 |	Character           [1m|	24                  |
[0m[35m======================================================================================
[0m



[35m======================================================================================
[0m[36mHeader Table	
[0m[33m======================================================================================
[0m[32m|	Symbol              |	Type                |	Line Number         |
[0m[33m======================================================================================
[0m[32m|	#include<stdio.h>   |	HEADER              [1m|	6                   |
[0m[35m======================================================================================
[0m


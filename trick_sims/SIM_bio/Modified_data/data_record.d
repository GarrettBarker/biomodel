#ifndef DR_GROUP_ID
#define DR_GROUP_ID sys.exec.record.num_group
#endif

sys.exec.record.group[DR_GROUP_ID].record           = Yes ;
sys.exec.record.group[DR_GROUP_ID].name             = "Organs" ;
sys.exec.record.group[DR_GROUP_ID].format           = DR_Binary ;
sys.exec.record.group[DR_GROUP_ID].freq             = DR_Always ;
sys.exec.record.group[DR_GROUP_ID].cycle {s}        = 0.01 ;
sys.exec.record.group[DR_GROUP_ID].ref[0] =
    "organs.out.Cli" ,
    "organs.out.Clu" ,
    "organs.out.Cm";

DR_GROUP_ID++ ;     /* add 1 to DR_GROUP_ID, THIS SETS DR_GROUP_ID UP
                     * FOR THE NEXT DATA RECORDING FILE */

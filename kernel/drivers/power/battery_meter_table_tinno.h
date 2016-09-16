
// ============================================================
// define
// ============================================================




// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================

typedef struct _BATTERY_Q_COST_PROFILE_STRUC
{
    int  q_cost;
    int  voltage;
} BATTERY_Q_COST_PROFILE_STRUC, *BATTERY_Q_COST_PROFILE_STRUC_P;



typedef struct _R_PROFILE_STRUC
{
    int  resistance; // Ohm
    int  voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;


#define TEMPERATURE_T0             110
#define TEMPERATURE_T1             0
#define TEMPERATURE_T2             25
#define TEMPERATURE_T3             50
#define TEMPERATURE_T              255 // This should be fixed, never change the value

// <Qcost, Battery_Voltage> Table
// ============================================================


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t3[] =
{
	{0   , 4189}, 
	{20  , 4172}, 
	{40  , 4158}, 
	{60  , 4147}, 
	{80  , 4136}, 
	{100 , 4127}, 
	{120 , 4115}, 
	{140 , 4105}, 
	{160 , 4095}, 
	{180 , 4088}, 
	{200 , 4076}, 
	{220 , 4068}, 
	{240 , 4059}, 
	{260 , 4051}, 
	{280 , 4040}, 
	{300 , 4035}, 
	{320 , 4025}, 
	{340 , 4015}, 
	{360 , 4007}, 
	{380 , 4000}, 
	{400 , 3991}, 
	{420 , 3982}, 
	{440 , 3976}, 
	{460 , 3969}, 
	{480 , 3963}, 
	{500 , 3953}, 
	{520 , 3946}, 
	{540 , 3939}, 
	{560 , 3933}, 
	{580 , 3928}, 
	{600 , 3922}, 
	{620 , 3916}, 
	{640 , 3911}, 
	{660 , 3903}, 
	{680 , 3897}, 
	{700 , 3892}, 
	{720 , 3886}, 
	{740 , 3881}, 
	{760 , 3875}, 
	{780 , 3870}, 
	{800 , 3864}, 
	{820 , 3859}, 
	{840 , 3851}, 
	{860 , 3845}, 
	{880 , 3838}, 
	{900 , 3832}, 
	{920 , 3823}, 
	{940 , 3818}, 
	{960 , 3810}, 
	{980 , 3805}, 
	{1000, 3800}, 
	{1020, 3796}, 
	{1040, 3792}, 
	{1060, 3787}, 
	{1080, 3785}, 
	{1100, 3782}, 
	{1120, 3779}, 
	{1140, 3777}, 
	{1160, 3775}, 
	{1180, 3773}, 
	{1200, 3771}, 
	{1220, 3769}, 
	{1240, 3767}, 
	{1260, 3766}, 
	{1280, 3765}, 
	{1300, 3763}, 
	{1320, 3762}, 
	{1340, 3762}, 
	{1360, 3761}, 
	{1380, 3761}, 
	{1400, 3759}, 
	{1420, 3757}, 
	{1440, 3758}, 
	{1460, 3754}, 
	{1480, 3752}, 
	{1500, 3747}, 
	{1520, 3743}, 
	{1540, 3736}, 
	{1560, 3733}, 
	{1580, 3729}, 
	{1600, 3725}, 
	{1620, 3717}, 
	{1640, 3714}, 
	{1660, 3708}, 
	{1680, 3701}, 
	{1700, 3694}, 
	{1720, 3689}, 
	{1740, 3682}, 
	{1760, 3674}, 
	{1780, 3664}, 
	{1800, 3654}, 
	{1820, 3645}, 
	{1840, 3634}, 
	{1860, 3625}, 
	{1880, 3612}, 
	{1900, 3597}, 
	{1920, 3581}, 
	{1940, 3567}, 
	{1960, 3553}, 
	{1980, 3539}, 
	{2000, 3524}, 
	{2020, 3505}, 
	{2040, 3466}, 
	{2060, 3416}, 
	{2080, 3354}, 
	{2100, 3273}, 
	{2120, 3151} 

};


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t2[] =
{
	{0     ,4180 },
	{20    ,4162 },
	{40    ,4148 },
	{60    ,4138 },
	{80    ,4128 },
	{100   ,4118 },
	{120   ,4107 },
	{140   ,4097 },
	{160   ,4090 },
	{180   ,4080 },
	{200   ,4070 },
	{220   ,4060 },
	{240   ,4051 },
	{260   ,4042 },
	{280   ,4036 },
	{300   ,4025 },
	{320   ,4018 },
	{340   ,4009 },
	{360   ,4001 },
	{380   ,3995 },
	{400   ,3985 },
	{420   ,3979 },
	{440   ,3972 },
	{460   ,3966 },
	{480   ,3957 },
	{500   ,3953 },
	{520   ,3944 },
	{540   ,3938 },
	{560   ,3932 },
	{580   ,3926 },
	{600   ,3919 },
	{620   ,3913 },
	{640   ,3906 },
	{660   ,3902 },
	{680   ,3894 },
	{700   ,3890 },
	{720   ,3883 },
	{740   ,3881 },
	{760   ,3875 },
	{780   ,3867 },
	{800   ,3863 },
	{820   ,3855 },
	{840   ,3849 },
	{860   ,3841 },
	{880   ,3835 },
	{900   ,3827 },
	{920   ,3822 },
	{940   ,3814 },
	{960   ,3808 },
	{980   ,3804 },
	{1000  ,3799 },
	{1020  ,3796 },
	{1040  ,3793 },
	{1060  ,3789 },
	{1080  ,3787 },
	{1100  ,3785 },
	{1120  ,3782 },
	{1140  ,3780 },
	{1160  ,3778 },
	{1180  ,3776 },
	{1200  ,3775 },
	{1220  ,3774 },
	{1240  ,3773 },
	{1260  ,3772 },
	{1280  ,3771 },
	{1300  ,3770 },
	{1320  ,3770 },
	{1340  ,3770 },
	{1360  ,3769 },
	{1380  ,3768 },
	{1400  ,3767 },
	{1420  ,3764 },
	{1440  ,3764 },
	{1460  ,3761 },
	{1480  ,3759 },
	{1500  ,3757 },
	{1520  ,3756 },
	{1540  ,3753 },
	{1560  ,3747 },
	{1580  ,3743 },
	{1600  ,3737 },
	{1620  ,3730 },
	{1640  ,3722 },
	{1660  ,3716 },
	{1680  ,3708 },
	{1700  ,3702 },
	{1720  ,3697 },
	{1740  ,3686 },
	{1760  ,3676 },
	{1780  ,3667 },
	{1800  ,3656 },
	{1820  ,3645 },
	{1840  ,3631 },
	{1860  ,3616 },
	{1880  ,3597 },
	{1900  ,3583 },
	{1920  ,3565 },
	{1940  ,3553 },
	{1960  ,3540 },
	{1980  ,3527 },
	{2000  ,3509 },
	{2020  ,3477 },
	{2040  ,3427 },
	{2060  ,3367 },
	{2080  ,3287 },
	{2100  ,3178 },
	{2120  ,3178 }

};


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t1[] =
{
	{0     ,4178 },
	{20    ,4162 },
	{40    ,4142 },
	{60    ,4115 },
	{80    ,4091 },
	{100   ,4074 },
	{120   ,4059 },
	{140   ,4048 },
	{160   ,4038 },
	{180   ,4028 },
	{200   ,4021 },
	{220   ,4011 },
	{240   ,4001 },
	{260   ,3993 },
	{280   ,3987 },
	{300   ,3980 },
	{320   ,3971 },
	{340   ,3965 },
	{360   ,3957 },
	{380   ,3950 },
	{400   ,3942 },
	{420   ,3936 },
	{440   ,3932 },
	{460   ,3926 },
	{480   ,3915 },
	{500   ,3906 },
	{520   ,3900 },
	{540   ,3891 },
	{560   ,3883 },
	{580   ,3877 },
	{600   ,3869 },
	{620   ,3863 },
	{640   ,3856 },
	{660   ,3850 },
	{680   ,3842 },
	{700   ,3836 },
	{720   ,3829 },
	{740   ,3824 },
	{760   ,3820 },
	{780   ,3815 },
	{800   ,3811 },
	{820   ,3807 },
	{840   ,3804 },
	{860   ,3801 },
	{880   ,3797 },
	{900   ,3794 },
	{920   ,3790 },
	{940   ,3789 },
	{960   ,3786 },
	{980   ,3785 },
	{1000  ,3783 },
	{1020  ,3782 },
	{1040  ,3781 },
	{1060  ,3780 },
	{1080  ,3779 },
	{1100  ,3777 },
	{1120  ,3776 },
	{1140  ,3776 },
	{1160  ,3775 },
	{1180  ,3774 },
	{1200  ,3772 },
	{1220  ,3771 },
	{1240  ,3770 },
	{1260  ,3769 },
	{1280  ,3765 },
	{1300  ,3762 },
	{1320  ,3758 },
	{1340  ,3755 },
	{1360  ,3750 },
	{1380  ,3745 },
	{1400  ,3740 },
	{1420  ,3734 },
	{1440  ,3726 },
	{1460  ,3719 },
	{1480  ,3709 },
	{1500  ,3702 },
	{1520  ,3693 },
	{1540  ,3684 },
	{1560  ,3674 },
	{1580  ,3664 },
	{1600  ,3652 },
	{1620  ,3637 },
	{1640  ,3623 },
	{1660  ,3606 },
	{1680  ,3591 },
	{1700  ,3575 },
	{1720  ,3560 },
	{1740  ,3545 },
	{1760  ,3528 },
	{1780  ,3504 },
	{1800  ,3467 },
	{1820  ,3412 },
	{1840  ,3342 },
	{1860  ,3244 },
	{1880  ,3243 },
	{1900  ,3243 },
	{1920  ,3243 },
	{1940  ,3243 },
	{1960  ,3243 },
	{1980  ,3243 },
	{2000  ,3243 },
	{2020  ,3243 },
	{2040  ,3243 },
	{2060  ,3243 },
	{2080  ,3243 },
	{2100  ,3243 },
	{2120  ,3243 }
 }; 	
BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t0[] =
{
	{0      ,4168 },
	{20     ,4155 },
	{40     ,4145 },
	{60     ,4135 },
	{80     ,4124 },
	{100    ,4112 },
	{120    ,4099 },
	{140    ,4085 },
	{160    ,4064 },
	{180    ,4035 },
	{200    ,4013 },
	{220    ,4003 },
	{240    ,3992 },
	{260    ,3985 },
	{280    ,3978 },
	{300    ,3969 },
	{320    ,3962 },
	{340    ,3956 },
	{360    ,3948 },
	{380    ,3942 },
	{400    ,3934 },
	{420    ,3927 },
	{440    ,3919 },
	{460    ,3912 },
	{480    ,3904 },
	{500    ,3896 },
	{520    ,3891 },
	{540    ,3882 },
	{560    ,3873 },
	{580    ,3864 },
	{600    ,3858 },
	{620    ,3850 },
	{640    ,3842 },
	{660    ,3835 },
	{680    ,3828 },
	{700    ,3823 },
	{720    ,3818 },
	{740    ,3813 },
	{760    ,3809 },
	{780    ,3806 },
	{800    ,3802 },
	{820    ,3798 },
	{840    ,3794 },
	{860    ,3792 },
	{880    ,3789 },
	{900    ,3787 },
	{920    ,3784 },
	{940    ,3781 },
	{960    ,3781 },
	{980    ,3778 },
	{1000   ,3778 },
	{1020   ,3775 },
	{1040   ,3775 },
	{1060   ,3773 },
	{1080   ,3773 },
	{1100   ,3772 },
	{1120   ,3767 },
	{1140   ,3767 },
	{1160   ,3764 },
	{1180   ,3762 },
	{1200   ,3761 },
	{1220   ,3756 },
	{1240   ,3753 },
	{1260   ,3750 },
	{1280   ,3743 },
	{1300   ,3741 },
	{1320   ,3736 },
	{1340   ,3731 },
	{1360   ,3725 },
	{1380   ,3717 },
	{1400   ,3710 },
	{1420   ,3702 },
	{1440   ,3691 },
	{1460   ,3684 },
	{1480   ,3673 },
	{1500   ,3664 },
	{1520   ,3651 },
	{1540   ,3640 },
	{1560   ,3626 },
	{1580   ,3614 },
	{1600   ,3600 },
	{1620   ,3586 },
	{1640   ,3558 },
	{1660   ,3543 },
	{1680   ,3526 },
	{1700   ,3503 },
	{1720   ,3475 },
	{1740   ,3438 },
	{1760   ,3390 },
	{1780   ,3328 },
	{1800   ,3359 },
	{1820   ,3253 },
	{1840   ,3051 },
	{1860   ,3051 },
	{1880   ,3051 },
	{1900   ,3051 },
	{1920   ,3051 },
	{1940   ,3051 },
	{1960   ,3051 },
	{1980   ,3051 },
	{2000   ,3051 },
	{2020   ,3051 },
	{2040   ,3051 },
	{2060   ,3051 },
	{2080   ,3051 },
	{2100   ,3051 },
	{2120   ,3051 }
 };
BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_temperature[] =
{
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}, 
{0,0}  

};


R_PROFILE_STRUC tinno_r_profile_t3[] =
{
{123 ,4189 }, 
{135 ,4172 }, 
{128 ,4158 }, 
{133 ,4147 }, 
{133 ,4136 }, 
{130 ,4127 }, 
{133 ,4115 }, 
{133 ,4105 }, 
{133 ,4095 }, 
{138 ,4088 }, 
{130 ,4076 }, 
{135 ,4068 }, 
{143 ,4059 }, 
{135 ,4051 }, 
{135 ,4040 }, 
{145 ,4035 }, 
{145 ,4025 }, 
{135 ,4015 }, 
{143 ,4007 }, 
{145 ,4000 }, 
{138 ,3991 }, 
{135 ,3982 }, 
{143 ,3976 }, 
{143 ,3969 }, 
{145 ,3963 }, 
{140 ,3953 }, 
{145 ,3946 }, 
{138 ,3939 }, 
{140 ,3933 }, 
{145 ,3928 }, 
{145 ,3922 }, 
{153 ,3916 }, 
{155 ,3911 }, 
{150 ,3903 }, 
{153 ,3897 }, 
{155 ,3892 }, 
{158 ,3886 }, 
{158 ,3881 }, 
{160 ,3875 }, 
{163 ,3870 }, 
{165 ,3864 }, 
{165 ,3859 }, 
{160 ,3851 }, 
{155 ,3845 }, 
{153 ,3838 }, 
{155 ,3832 }, 
{150 ,3823 }, 
{153 ,3818 }, 
{143 ,3810 }, 
{143 ,3805 }, 
{138 ,3800 }, 
{140 ,3796 }, 
{140 ,3792 }, 
{135 ,3787 }, 
{143 ,3785 }, 
{140 ,3782 }, 
{135 ,3779 }, 
{138 ,3777 }, 
{138 ,3775 }, 
{140 ,3773 }, 
{140 ,3771 }, 
{140 ,3769 }, 
{140 ,3767 }, 
{140 ,3766 }, 
{140 ,3765 }, 
{148 ,3763 }, 
{140 ,3762 }, 
{143 ,3762 }, 
{143 ,3761 }, 
{150 ,3761 }, 
{148 ,3759 }, 
{143 ,3757 }, 
{153 ,3758 }, 
{145 ,3754 }, 
{145 ,3752 }, 
{143 ,3747 }, 
{143 ,3743 }, 
{140 ,3736 }, 
{143 ,3733 }, 
{148 ,3729 }, 
{153 ,3725 }, 
{140 ,3717 }, 
{150 ,3714 }, 
{150 ,3708 }, 
{145 ,3701 }, 
{148 ,3694 }, 
{150 ,3689 }, 
{155 ,3682 }, 
{153 ,3674 }, 
{150 ,3664 }, 
{153 ,3654 }, 
{153 ,3645 }, 
{150 ,3634 }, 
{160 ,3625 }, 
{160 ,3612 }, 
{160 ,3597 }, 
{158 ,3581 }, 
{155 ,3567 }, 
{160 ,3553 }, 
{163 ,3539 }, 
{168 ,3524 }, 
{170 ,3505 }, 
{163 ,3466 }, 
{165 ,3416 }, 
{173 ,3354 }, 
{183 ,3273 }, 
{190 ,3151 }  

};
       
       
R_PROFILE_STRUC tinno_r_profile_t2[] =
{           
{150 ,4180 },  
{163 ,4162 },  
{160 ,4148 },  
{163 ,4138 },  
{170 ,4128 },  
{168 ,4118 },  
{170 ,4107 },  
{168 ,4097 },  
{170 ,4090 },  
{173 ,4080 },  
{173 ,4070 },  
{170 ,4060 },  
{170 ,4051 },  
{168 ,4042 },  
{178 ,4036 },  
{173 ,4025 },  
{175 ,4018 },  
{173 ,4009 },  
{175 ,4001 },  
{175 ,3995 },  
{170 ,3985 },  
{180 ,3979 },  
{185 ,3972 },  
{178 ,3966 },  
{178 ,3957 },  
{185 ,3953 },  
{185 ,3944 },  
{188 ,3938 },  
{193 ,3932 },  
{190 ,3926 },  
{190 ,3919 },  
{198 ,3913 },  
{193 ,3906 },  
{193 ,3902 },  
{188 ,3894 },  
{200 ,3890 },  
{198 ,3883 },  
{210 ,3881 },  
{205 ,3875 },  
{200 ,3867 },  
{205 ,3863 },  
{203 ,3855 },  
{200 ,3849 },  
{190 ,3841 },  
{188 ,3835 },  
{185 ,3827 },  
{183 ,3822 },  
{175 ,3814 },  
{178 ,3808 },  
{178 ,3804 },  
{173 ,3799 },  
{175 ,3796 },  
{173 ,3793 },  
{170 ,3789 },  
{175 ,3787 },  
{175 ,3785 },  
{175 ,3782 },  
{173 ,3780 },  
{183 ,3778 },  
{175 ,3776 },  
{175 ,3775 },  
{175 ,3774 },  
{178 ,3773 },  
{178 ,3772 },  
{173 ,3771 },  
{175 ,3770 },  
{175 ,3770 },  
{183 ,3770 },  
{180 ,3769 },  
{180 ,3768 },  
{178 ,3767 },  
{178 ,3764 },  
{178 ,3764 },  
{175 ,3761 },  
{180 ,3759 },  
{178 ,3757 },  
{185 ,3756 },  
{185 ,3753 },  
{183 ,3747 },  
{188 ,3743 },  
{188 ,3737 },  
{180 ,3730 },  
{185 ,3722 },  
{185 ,3716 },  
{193 ,3708 },  
{195 ,3702 },  
{210 ,3697 },  
{203 ,3686 },  
{208 ,3676 },  
{208 ,3667 },  
{213 ,3656 },  
{210 ,3645 },  
{213 ,3631 },  
{208 ,3616 },  
{198 ,3597 },  
{203 ,3583 },  
{195 ,3565 },  
{205 ,3553 },  
{200 ,3540 },  
{213 ,3527 },  
{218 ,3509 },  
{213 ,3477 },  
{223 ,3427 },  
{238 ,3367 },  
{258 ,3287 },  
{305 ,3178 },  
{305 ,3178 }   

};

R_PROFILE_STRUC tinno_r_profile_t1[] =
{ 
{233  ,4178 }, 
{233  ,4162 }, 
{238  ,4142 }, 
{265  ,4115 }, 
{320  ,4091 }, 
{360  ,4074 }, 
{385  ,4059 }, 
{398  ,4048 }, 
{410  ,4038 }, 
{410  ,4028 }, 
{420  ,4021 }, 
{423  ,4011 }, 
{420  ,4001 }, 
{423  ,3993 }, 
{433  ,3987 }, 
{438  ,3980 }, 
{438  ,3971 }, 
{445  ,3965 }, 
{445  ,3957 }, 
{448  ,3950 }, 
{450  ,3942 }, 
{455  ,3936 }, 
{465  ,3932 }, 
{470  ,3926 }, 
{455  ,3915 }, 
{458  ,3906 }, 
{458  ,3900 }, 
{458  ,3891 }, 
{453  ,3883 }, 
{453  ,3877 }, 
{450  ,3869 }, 
{450  ,3863 }, 
{443  ,3856 }, 
{445  ,3850 }, 
{443  ,3842 }, 
{438  ,3836 }, 
{433  ,3829 }, 
{435  ,3824 }, 
{438  ,3820 }, 
{435  ,3815 }, 
{438  ,3811 }, 
{440  ,3807 }, 
{440  ,3804 }, 
{445  ,3801 }, 
{443  ,3797 }, 
{443  ,3794 }, 
{445  ,3790 }, 
{450  ,3789 }, 
{448  ,3786 }, 
{455  ,3785 }, 
{453  ,3783 }, 
{460  ,3782 }, 
{463  ,3781 }, 
{463  ,3780 }, 
{465  ,3779 }, 
{465  ,3777 }, 
{465  ,3776 }, 
{473  ,3776 }, 
{473  ,3775 }, 
{475  ,3774 }, 
{475  ,3772 }, 
{475  ,3771 }, 
{480  ,3770 }, 
{490  ,3769 }, 
{485  ,3765 }, 
{483  ,3762 }, 
{488  ,3758 }, 
{493  ,3755 }, 
{993  ,3750 }, 
{503  ,3745 }, 
{505  ,3740 }, 
{510  ,3734 }, 
{510  ,3726 }, 
{518  ,3719 }, 
{515  ,3709 }, 
{525  ,3702 }, 
{528  ,3693 }, 
{533  ,3684 }, 
{538  ,3674 }, 
{543  ,3664 }, 
{545  ,3652 }, 
{540  ,3637 }, 
{540  ,3623 }, 
{540  ,3606 }, 
{548  ,3591 }, 
{555  ,3575 }, 
{570  ,3560 }, 
{588  ,3545 }, 
{613  ,3528 }, 
{638  ,3504 }, 
{665  ,3467 }, 
{708  ,3412 }, 
{798  ,3342 }, 
{980  ,3244 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }, 
{1865 ,3243 }  

};

R_PROFILE_STRUC tinno_r_profile_t0[] =
{ 
{363  , 4168 },    
{370  , 4155 },    
{380  , 4145 },    
{380  , 4135 },    
{383  , 4124 },    
{390  , 4112 },    
{405  , 4099 },    
{433  , 4085 },    
{458  , 4064 },    
{520  , 4035 },    
{618  , 4013 },    
{668  , 4003 },    
{675  , 3992 },    
{688  , 3985 },    
{698  , 3978 },    
{698  , 3969 },    
{705  , 3962 },    
{713  , 3956 },    
{720  , 3948 },    
{725  , 3942 },    
{718  , 3934 },    
{728  , 3927 },    
{733  , 3919 },    
{738  , 3912 },    
{735  , 3904 },    
{738  , 3896 },    
{748  , 3891 },    
{743  , 3882 },    
{738  , 3873 },    
{738  , 3864 },    
{738  , 3858 },    
{738  , 3850 },    
{735  , 3842 },    
{733  , 3835 },    
{733  , 3828 },    
{735  , 3823 },    
{735  , 3818 },    
{740  , 3813 },    
{745  , 3809 },    
{748  , 3806 },    
{753  , 3802 },    
{755  , 3798 },    
{758  , 3794 },    
{763  , 3792 },    
{765  , 3789 },    
{768  , 3787 },    
{770  , 3784 },    
{770  , 3781 },    
{778  , 3781 },    
{775  , 3778 },    
{788  , 3778 },    
{785  , 3775 },    
{795  , 3775 },    
{800  , 3773 },    
{805  , 3773 },    
{808  , 3772 },    
{810  , 3767 },    
{818  , 3767 },    
{818  , 3764 },    
{820  , 3762 },    
{833  , 3761 },    
{835  , 3756 },    
{835  , 3753 },    
{848  , 3750 },    
{848  , 3743 },    
{865  , 3741 },    
{870  , 3736 },    
{880  , 3731 },    
{890  , 3725 },    
{898  , 3717 },    
{905  , 3710 },    
{913  , 3702 },    
{918  , 3691 },    
{925  , 3684 },    
{933  , 3673 },    
{943  , 3664 },    
{950  , 3651 },    
{960  , 3640 },    
{960  , 3626 },    
{1065 , 3614 },    
{1085 , 3600 },    
{1110 , 3586 },    
{1113 , 3558 },    
{1165 , 3543 },    
{1230 , 3526 },    
{1320 , 3503 },    
{1460 , 3475 },    
{1658 , 3438 },    
{1955 , 3390 },    
{1800 , 3328 },    
{1878 , 3359 },    
{1613 , 3253 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 },    
{1108 , 3051 }     

};

R_PROFILE_STRUC tinno_r_profile_temperature[] =
{
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0},    
{0,0}     

}; 

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_Q_COST_PROFILE_STRUC_P fgauge_get_profile(int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(int temperature);

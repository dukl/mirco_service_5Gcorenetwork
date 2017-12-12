2017年 11月 30日 星期四 16:02:01 CST


#工程在此代码基础上修改 https://github.com/hogostan/openair5g-cn.git

主要做了下面的工作
1.创建一个esm hashtable1的接口
2.将所有emm->ctx 的调用全部换为hashtable的插入,修改.取出
3.初始化,释放hashtable

下面一一详细说明:
##1. 修改位置 
~/mirco_service_5Gcorenetwork/src/nas/emm/emm_main.h

    #ifndef FILE_ESM_HASHTABLE_SEEN
    #define FILE_ESM_HASHTABLE_SEEN


    struct esm_context_s* esm_get_inplace(struct guti_s guti,struct esm_context_s **esm_p);
    int esm_insert(struct guti_s, struct esm_context_s);
    int esm_init(void);
    void esm_exit(void);
    void esm_useless(void);

    #endif

~/mirco_service_5Gcorenetwork/src/nas/emm/emm_main.c
中有具体的函数实现方式


##2.emm调用esm的方式为&emm->esm_ctx 或者 emm.esm_ctx 
具体位置有67处左右,在esm_ctx_location中

##3.初始化hashtable和释放hashtable的位置
~/mirco_service_5Gcorenetwork/src/mme_app/mme_app_main.c

初始化部分:

    esm_useless();
    if(esm_init()==RETURNok)
    {
        printf("ESM HASH_TABLE_CREATE_OK\n");

    }





释放部分:

    esm_useless();
    esm_exit();
    esm_useless();


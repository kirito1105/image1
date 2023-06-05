#include <linux/module.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");

/*TODO: allocate 1KB for kmallocmem1*/
unsigned char *kmallocmem1;
/*TODO: allocate 8KB for kmallocmem2*/
unsigned char *kmallocmem2; 
/*TODO: allocate max-allowed size of memory for kmallocmem3*/
unsigned char *kmallocmem3;
/*TODO: allocate memory lager than max-allowed size for kmallocmem4*/
unsigned char *kmallocmem4;

static int __init mem_module_init(void)
{
	//---------------begin--请在此处编写代码----------
    printk("Start kmalloc!\n");
    kmallocmem1 = (unsigned char*)kmalloc(1024, GFP_KERNEL);
    if (kmallocmem1 != NULL){
        printk("kmallocmem1 addr = %lx\n", (unsigned long)kmallocmem1);
    }else{
        printk("Failed to allocate kmallocmem1!\n");
    }
    kmallocmem2 = (unsigned char *)kmalloc(8192, GFP_KERNEL);
    if (kmallocmem2 != NULL){
        printk("kmallocmem2 addr = %lx\n", (unsigned long)kmallocmem2);
    }else{
        printk("Failed to allocate kmallocmem2!\n");
    }
  

    kmallocmem3 = (unsigned char *)kmalloc(4096*1024, GFP_KERNEL);
    if (kmallocmem3 != NULL){
        printk("kmallocmem3 addr = %lx\n", (unsigned long)kmallocmem3);
    }else{
        printk("Failed to allocate kmallocmem3!\n");
    }

    kmallocmem4 = (unsigned char *)kmalloc(4096*2*1024, GFP_KERNEL);
    if (kmallocmem4 != NULL){
        printk("kmallocmem4 addr = %lx\n", (unsigned long)kmallocmem2);
    }else{
        printk("Failed to allocate kmallocmem4!\n");
    }
    return 0;
    //--------------- end-- -------------------------
}

static void __exit mem_module_exit(void)
{
	//---------------begin--请在此处编写代码----------
    kfree(kmallocmem1);
    kfree(kmallocmem2);
    kfree(kmallocmem3);
    kfree(kmallocmem4);
    printk("Exit kmalloc!\n");
  
	
    //--------------- end-- -------------------------
}

module_init(mem_module_init);
module_exit(mem_module_exit);

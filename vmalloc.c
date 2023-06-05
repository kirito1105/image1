#include <linux/module.h>
#include <linux/vmalloc.h>

MODULE_LICENSE("GPL");

unsigned char *vmallocmem1;
unsigned char *vmallocmem2;
unsigned char *vmallocmem3;

static int __init mem_module_init(void)
{
	//---------------begin--请在此处编写代码----------
    printk("Start vmalloc!\n");
    vmallocmem1 = (unsigned char*)vmalloc(8192);
    if (vmallocmem1 != NULL){
        printk("vmallocmem1 addr = %lx\n", (unsigned long)vmallocmem1);
    }else{
        printk("Failed to allocate vmallocmem1!\n");
    }
    vmallocmem2 = (unsigned char*)vmalloc(1048576);
    if (vmallocmem2 != NULL){
        printk("vmallocmem2 addr = %lx\n", (unsigned long)vmallocmem2);
    }else{
        printk("Failed to allocate vmallocmem2!\n");
    }
    vmallocmem3 = (unsigned char*)vmalloc(67108864);
    if (vmallocmem3 != NULL){
        printk("vmallocmem3 addr = %lx\n", (unsigned long)vmallocmem3);
    }else{
        printk("Failed to allocate vmallocmem3!\n");
    }
    vmallocmem4 = (unsigned char*)vmalloc(4194305);
    if (vmallocmem4 != NULL){
        printk("vmallocmem4 addr = %lx\n", (unsigned long)vmallocmem4);
    }else{
        printk("Failed to allocate vmallocmem4!\n");
    }
    return 0;
    //--------------- end-- -------------------------
}

static void __exit mem_module_exit(void)
{
	//---------------begin--请在此处编写代码----------


    vfree(vmallocmem1);
    vfree(vmallocmem2);
    vfree(vmallocmem3);
    vfree(vmallocmem4);
    printk("Exit vmalloc!\n");
    //--------------- end-- -------------------------
}

module_init(mem_module_init);
module_exit(mem_module_exit);

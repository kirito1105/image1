import json
村民 = ("洗衣妇", "僧侣", "图书管理员", "守鸦人", "调查员", "处女", "厨师", "杀手", "共情者", "士兵", "占卜师", "市长", "送葬者")
外来者 = ("管家", "隐士", "酒鬼", "圣徒")
爪牙 = ("投毒者", "猩红女巫", "间谍", "男爵")
恶魔 = ("小恶魔",)
玩家数量标准 = [{}, {}, {}, {}, {}, {"村民": 3, "外来者": 0, "爪牙": 1, "恶魔": 1}, {"村民": 3, "外来者": 1, "爪牙": 1, "恶魔": 1},
          {"村民": 5, "外来者": 0, "爪牙": 1, "恶魔": 1}, {"村民": 5, "外来者": 1, "爪牙": 1, "恶魔": 1},
          {"村民": 5, "外来者": 2, "爪牙": 1, "恶魔": 1}, {"村民": 7, "外来者": 0, "爪牙": 2, "恶魔": 1},
          {"村民": 7, "外来者": 1, "爪牙": 2, "恶魔": 1}, {"村民": 7, "外来者": 2, "爪牙": 2, "恶魔": 1},
          {"村民": 9, "外来者": 0, "爪牙": 3, "恶魔": 1},
          {"村民": 9, "外来者": 1, "爪牙": 3, "恶魔": 1}, {"村民": 9, "外来者": 2, "爪牙": 3, "恶魔": 1}]
#dict_json = json.dumps(玩家数量标准, sort_keys=True, indent=4,ensure_ascii=False)
dict_json = json.dumps(玩家数量标准, sort_keys=True, indent=4 ,ensure_ascii=False)#转化为json格式文件
for i in range(5, 16):
    print(i, end="人局：")
    print(玩家数量标准[i])
with open('file.json','w+',encoding="utf8") as file:
     file.write(dict_json)
# 读取.json格式文件的内容
#with open('file.json', 'r+', encoding="utf8") as file:
#    content = file.read()

#content = json.loads(content)  # 将json格式文件转化为python的字典文件
#print(content)
input("111")

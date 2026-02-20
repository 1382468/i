#include <iostream>
#include <string>
using namespace std;

bool hasCard = false;
bool hasKnife = false;
bool hasPower = false;
bool safeOpened = false;
bool endGame = false;

void start() {
    cout << "你在冰冷的地面上醒来。\n";
    cout << "四周是昏暗的灯光，空气中有消毒水的味道。\n";
    cout << "这是一间被废弃的地下实验室，门是锁着的。\n\n";
}

void scene1() {
    cout << "\n【1号房间】\n";
    cout << "你可以：\n";
    cout << "1. 查看铁门\n";
    cout << "2. 查看桌子\n";
    cout << "3. 查看通风口\n";
    cout << "4. 去右边走廊\n";
    cout << "请输入数字：";
}

void scene2() {
    cout << "\n【右边走廊】\n";
    cout << "这里很黑，你只能勉强看见东西。\n";
    cout << "1. 继续往前走\n";
    cout << "2. 摸墙壁\n";
    cout << "3. 回到1号房间\n";
    cout << "请输入数字：";
}

void scene3() {
    cout << "\n【电源室】\n";
    cout << "这里有一个总开关。\n";
    cout << "1. 打开电源\n";
    cout << "2. 回去\n";
    cout << "请输入数字：";
}

void scene4() {
    cout << "\n【储藏室】\n";
    cout << "架子上有很多东西。\n";
    cout << "1. 查看盒子\n";
    cout << "2. 查看地面\n";
    cout << "3. 回去\n";
    cout << "请输入数字：";
}

void scene5() {
    cout << "\n【保险箱房间】\n";
    cout << "墙上嵌着一个保险箱。\n";
    cout << "1. 尝试打开保险箱\n";
    cout << "2. 回去\n";
    cout << "请输入数字：";
}

int main() {
    start();

    while (!endGame) {
        scene1();
        int c;
        cin >> c;

        if (c == 1) {
            cout << "\n铁门需要门卡才能打开。\n";
            if (hasCard) {
                cout << "你使用门卡刷开了铁门！\n";
                cout << "你成功逃出实验室！游戏胜利！\n";
                endGame = true;
            }
        }
        else if (c == 2) {
            cout << "\n桌子上有一张纸条：\n";
            cout << "『电源在走廊尽头，打开它才能看见一切。』\n";
        }
        else if (c == 3) {
            cout << "\n通风口被螺丝封住了，打不开。\n";
            if (hasKnife) {
                cout << "你用小刀撬开了通风口！\n";
                cout << "里面有一把门卡！你拿走了门卡！\n";
                hasCard = true;
            }
        }
        else if (c == 4) {
            bool back = false;
            while (!back && !endGame) {
                scene2();
                int c2;
                cin >> c2;
                if (c2 == 1) {
                    cout << "\n你走到了走廊尽头，发现两个门。\n";
                    cout << "1. 进左边门（电源室）\n";
                    cout << "2. 进右边门（储藏室）\n";
                    cout << "3. 回去\n";
                    int c3;
                    cin >> c3;
                    if (c3 == 1) {
                        scene3();
                        int c4;
                        cin >> c4;
                        if (c4 == 1) {
                            cout << "电源已打开！整个实验室亮了！\n";
                            hasPower = true;
                        }
                    }
                    else if (c3 == 2) {
                        if (!hasPower) {
                            cout << "太黑了，你什么都看不见。\n";
                        } else {
                            bool back2 = false;
                            while (!back2) {
                                scene4();
                                int c5;
                                cin >> c5;
                                if (c5 == 1) {
                                    cout << "盒子里有一把小刀！你拿走了！\n";
                                    hasKnife = true;
                                } else if (c5 == 2) {
                                    cout << "地面角落有一张纸条：密码是 741\n";
                                } else if (c5 == 3) {
                                    back2 = true;
                                }
                            }
                        }
                    }
                    else if (c3 == 3) {}
                }
                else if (c2 == 2) {
                    cout << "墙壁上有一个暗格！\n";
                    cout << "里面是一个保险箱！\n";
                    scene5();
                    int c6;
                    cin >> c6;
                    if (c6 == 1) {
                        if (!hasPower) {
                            cout << "太黑，看不见密码盘。\n";
                        } else {
                            cout << "请输入3位密码：";
                            int pwd;
                            cin >> pwd;
                            if (pwd == 741) {
                                cout << "保险箱打开！里面是：螺丝刀！\n";
                                cout << "你可以用它撬开通风口！\n";
                                hasKnife = true;
                                safeOpened = true;
                            } else {
                                cout << "密码错误。\n";
                            }
                        }
                    }
                }
                else if (c2 == 3) {
                    back = true;
                }
            }
        }
    }

    cout << "\n游戏结束，感谢游玩！\n";
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

bool hasCard = false;
bool hasKnife = false;
bool hasPower = false;
bool safeOpened = false;
bool endGame = false;

void start() {
    cout << "你在冰冷的地面上醒来。\n";
    cout << "四周是昏暗的灯光，空气中有消毒水的味道。\n";
    cout << "这是一间被废弃的地下实验室，门是锁着的。\n\n";
}

void scene1() {
    cout << "\n【1号房间】\n";
    cout << "你可以：\n";
    cout << "1. 查看铁门\n";
    cout << "2. 查看桌子\n";
    cout << "3. 查看通风口\n";
    cout << "4. 去右边走廊\n";
    cout << "请输入数字：";
}

void scene2() {
    cout << "\n【右边走廊】\n";
    cout << "这里很黑，你只能勉强看见东西。\n";
    cout << "1. 继续往前走\n";
    cout << "2. 摸墙壁\n";
    cout << "3. 回到1号房间\n";
    cout << "请输入数字：";
}

void scene3() {
    cout << "\n【电源室】\n";
    cout << "这里有一个总开关。\n";
    cout << "1. 打开电源\n";
    cout << "2. 回去\n";
    cout << "请输入数字：";
}

void scene4() {
    cout << "\n【储藏室】\n";
    cout << "架子上有很多东西。\n";
    cout << "1. 查看盒子\n";
    cout << "2. 查看地面\n";
    cout << "3. 回去\n";
    cout << "请输入数字：";
}

void scene5() {
    cout << "\n【保险箱房间】\n";
    cout << "墙上嵌着一个保险箱。\n";
    cout << "1. 尝试打开保险箱\n";
    cout << "2. 回去\n";
    cout << "请输入数字：";
}

int main() {
    start();

    while (!endGame) {
        scene1();
        int c;
        cin >> c;

        if (c == 1) {
            cout << "\n铁门需要门卡才能打开。\n";
            if (hasCard) {
                cout << "你使用门卡刷开了铁门！\n";
                cout << "你成功逃出实验室！游戏胜利！\n";
                endGame = true;
            }
        }
        else if (c == 2) {
            cout << "\n桌子上有一张纸条：\n";
            cout << "『电源在走廊尽头，打开它才能看见一切。』\n";
        }
        else if (c == 3) {
            cout << "\n通风口被螺丝封住了，打不开。\n";
            if (hasKnife) {
                cout << "你用小刀撬开了通风口！\n";
                cout << "里面有一把门卡！你拿走了门卡！\n";
                hasCard = true;
            }
        }
        else if (c == 4) {
            bool back = false;
            while (!back && !endGame) {
                scene2();
                int c2;
                cin >> c2;
                if (c2 == 1) {
                    cout << "\n你走到了走廊尽头，发现两个门。\n";
                    cout << "1. 进左边门（电源室）\n";
                    cout << "2. 进右边门（储藏室）\n";
                    cout << "3. 回去\n";
                    int c3;
                    cin >> c3;
                    if (c3 == 1) {
                        scene3();
                        int c4;
                        cin >> c4;
                        if (c4 == 1) {
                            cout << "电源已打开！整个实验室亮了！\n";
                            hasPower = true;
                        }
                    }
                    else if (c3 == 2) {
                        if (!hasPower) {
                            cout << "太黑了，你什么都看不见。\n";
                        } else {
                            bool back2 = false;
                            while (!back2) {
                                scene4();
                                int c5;
                                cin >> c5;
                                if (c5 == 1) {
                                    cout << "盒子里有一把小刀！你拿走了！\n";
                                    hasKnife = true;
                                } else if (c5 == 2) {
                                    cout << "地面角落有一张纸条：密码是 741\n";
                                } else if (c5 == 3) {
                                    back2 = true;
                                }
                            }
                        }
                    }
                    else if (c3 == 3) {}
                }
                else if (c2 == 2) {
                    cout << "墙壁上有一个暗格！\n";
                    cout << "里面是一个保险箱！\n";
                    scene5();
                    int c6;
                    cin >> c6;
                    if (c6 == 1) {
                        if (!hasPower) {
                            cout << "太黑，看不见密码盘。\n";
                        } else {
                            cout << "请输入3位密码：";
                            int pwd;
                            cin >> pwd;
                            if (pwd == 741) {
                                cout << "保险箱打开！里面是：螺丝刀！\n";
                                cout << "你可以用它撬开通风口！\n";
                                hasKnife = true;
                                safeOpened = true;
                            } else {
                                cout << "密码错误。\n";
                            }
                        }
                    }
                }
                else if (c2 == 3) {
                    back = true;
                }
            }
        }
    }

    cout << "\n游戏结束，感谢游玩！\n";
    return 0;
}


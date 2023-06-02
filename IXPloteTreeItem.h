#ifndef IXPLOTETREEITEM_H
#define IXPLOTETREEITEM_H

#endif // IXPLOTETREEITEM_H
#include <iostream>
#include <list>
/// <summary>
/// Tree 基础图元
/// </summary>
class IXPloteTreeItem
{
public:

    IXPloteTreeItem();
    ~IXPloteTreeItem();
    static long XPloteNumsID;//全局的ID
    void SetData(const std::string& name);
    int GUID;
    std::string gName{ "" };
    std::shared_ptr<std::list<IXPloteTreeItem>> gChilds{ nullptr };
    std::string toString() const;
};

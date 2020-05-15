void push(STACK_TYPE *stack, ITEM_TYPE new_item)
{
    stack->items[stack->top] = new_item; // 將新資料塞到堆疊中
    stack->top += 1; // 將堆疊的頂部位置加一，表示目前堆疊頂部的位置
}

void pop(STACK_TYPE *stack, ITEM_TYPE *old_item)
{
    stack->top -= 1; // 將堆疊的頂部位置減一，以存取在堆疊頂部的元素
    *old_item = stack->item[stack->top]; // 獲得堆疊頂部的元素
}

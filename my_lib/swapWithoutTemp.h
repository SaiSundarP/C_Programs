//This function swaps the values of two integers without using a temporary variable. It takes two pointers to integers as input and modifies the values they point to directly.
void swap(int **a, int **b) {   
    **a = **a + **b;
    **b = **a - **b;
    **a = **a - **b;
}
    

void sortThestack(stack<int> &st, int topEle)
{
    if (st.empty())
    {
        st.push(topEle)
    }

    if (topEle <= st.top())
    {
        st.push(topEle);
        return;
    }
    int top = st.top();
    st.pop();
    sortThestack(st, topEle);
    st.push(top);
}

void sortStack(stack<int> st)
{
    if (st.empty())
    {
        return;
    }
    int tp = st.top();
    st.pop();

    sortStack(st);
    sortThestack(st, tp);
}

//////////////

void sortTheArr(vector<int> &arr, int i, int n)
{
    if (i == n - 1)
    {
        return;
    }
    if (arr[i] < arr[i + 1])
    {
        swap(arr[i], arr[i + 1]);
        return;
    }

    sortTheArr(arr, startEle, i++);
}

void sortArr(vector<int> arr, int n)
{

    if ()

        sortThestack(arr, 0, n);
    sortArr(arr, n - 1);
}
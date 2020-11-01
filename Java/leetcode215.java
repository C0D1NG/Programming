public static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    // arr[i] = val2;
    // arr[j] = val1;
}

public static void downheapify(int[] arr, int idx, int lidx) {
    int maxidx = idx;
    int lci = (idx << 1) + 1;
    int rci = (idx << 1) + 2;

    if (lci <= lidx && arr[lci] > arr[maxidx]) {
        maxidx = lci;
    }

    if (rci <= lidx && arr[rci] > arr[maxidx]) {
        maxidx = rci;
    }

    if (maxidx != idx) {
        swap(arr, idx, maxidx);
        downheapify(arr, maxidx, lidx);
    }
}

public static int findKthLargest(int[] arr, int k) {
    int n = arr.length - 1;
    for (int i = n; i >= 0; i--) {
        downheapify(arr, i, n);
    }

    for (int i = 0; i < k; i++) {
        swap(arr, 0, n - i);
        downheapify(arr, 0, n - i - 1);
    }

    return arr[n - k + 1];
}
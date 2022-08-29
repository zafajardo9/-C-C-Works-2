for (int i - 0; i < n; i++) {
  // first find a thread that can finish
  for (int j = 0; j < n; j++) {
     if (!finish(j]) {
        boolean temp = true;
        for (int k = 0; k < m; k++) {
          if (need [j] [k] > work [k])
             temp = false;
        }
        if (temp) { // if this thread can finish
            finish [j] = true;
            for (int x = 0; x < m; x++)
                work (x) += work [j] [x] ;
        }
     }
  }
}

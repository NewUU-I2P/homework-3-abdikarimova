void problemSolution1(float consumed_water) {
    float cost;
        if (consumed_water) {
            cost = 13;
            if (consumed_water >= 30) {
                cost = cost + 0.4*consumed_water;
                if (consumed_water >= 50) {
                    cost = cost + 0.12 * (consumed_water - 30); 
                    if (consumed_water >= 60) {
                        cost = cost + 1.4 * (consumed_water - 50); 
                        if (consumed_water >= 70) {
                            cost = cost + 1.5 * (consumed_water - 60);
                        } 
                    }
                }
            }
        }

    return cost;
}

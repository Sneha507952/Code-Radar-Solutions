def balloon_deflation_game(balloons):
    # Keep playing until all balloons are flat
    while any(balloon > 0 for balloon in balloons):
        # Find the smallest non-zero amount of air
        min_air = min(balloon for balloon in balloons if balloon > 0)
        
        # Count how many balloons have air before deflation
        count_non_flat = sum(1 for balloon in balloons if balloon > 0)
        
        # Print the count of balloons with air in this round
        print(count_non_flat)
        
        # Subtract the minimum amount of air from all balloons with air
        for i in range(len(balloons)):
            if balloons[i] > 0:
                balloons[i] -= min_air


balloon_deflation_game(balloons)

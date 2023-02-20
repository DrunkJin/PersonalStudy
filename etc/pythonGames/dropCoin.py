import pygame
import random

# Initialize Pygame
pygame.init()

# Set up the screen
screen_width = 640
screen_height = 480
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("dropCoin")

# Set up the clock
clock = pygame.time.Clock()

# Set up the player
player_size = 50
player_x = screen_width // 2 - player_size // 2
player_y = screen_height - player_size
player_speed = 5

# Set up the coins
coin_size = 25
coin_speed = 3
coins = []
for i in range(10):
    coin_x = random.randint(0, screen_width - coin_size)
    coin_y = random.randint(0, screen_height - coin_size - player_size)
    coins.append((coin_x, coin_y))

# Set up the score
score = 0
font = pygame.font.Font(None, 36)

# Game loop
game_over = False
while not game_over:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True

    # Move the player
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player_x > 0:
        player_x -= player_speed
    elif keys[pygame.K_RIGHT] and player_x < screen_width - player_size:
        player_x += player_speed
    if keys[pygame.K_UP] and player_y > 0:
        player_y -= player_speed
    elif keys[pygame.K_DOWN] and player_y < screen_height - player_size:
        player_y += player_speed

    # Move the coins
    for i in range(len(coins)):
        coin_x, coin_y = coins[i]
        coin_y += coin_speed
        if coin_y > screen_height:
            coin_x = random.randint(0, screen_width - coin_size)
            coin_y = random.randint(-screen_height, -coin_size)
        coins[i] = (coin_x, coin_y)

        # Check for collision
        if (coin_y + coin_size >= player_y and coin_y + coin_size <= player_y + player_size) \
                and (coin_x >= player_x and coin_x <= player_x + player_size or
                     coin_x + coin_size >= player_x and coin_x + coin_size <= player_x + player_size):
            coins[i] = (random.randint(0, screen_width - coin_size), random.randint(-screen_height, -coin_size))
            score += 1

    # Draw the screen
    screen.fill((255, 255, 255))
    pygame.draw.rect(screen, (0, 0, 255), (player_x, player_y, player_size, player_size))
    for coin in coins:
        pygame.draw.circle(screen, (255, 255, 0), (coin[0] + coin_size // 2, coin[1] + coin_size // 2), coin_size // 2)
    score_text = font.render(f"Score: {score}", True, (0, 0, 0))
    screen.blit(score_text, (10, 10))
    pygame.display.update()

    # Set the frame rate
    clock.tick(60)

# Clean up Pygame
pygame.quit()

import pygame
import random

# Initialize Pygame
pygame.init()

# Set up the screen
screen_width = 640
screen_height = 480
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("avoidBox")

# Set up the clock
clock = pygame.time.Clock()

# Set up the player
player_size = 50
player_x = screen_width // 2 - player_size // 2
player_y = screen_height - player_size
player_speed = 5

# Set up the enemy
enemy_size = 50
enemy_x = random.randint(0, screen_width - enemy_size)
enemy_y = 0
enemy_speed = 5

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

    # Move the enemy
    enemy_y += enemy_speed
    if enemy_y > screen_height:
        enemy_x = random.randint(0, screen_width - enemy_size)
        enemy_y = 0
        score += 1

    # Check for collision
    if (enemy_y + enemy_size >= player_y and enemy_y + enemy_size <= player_y + player_size) \
            and (enemy_x >= player_x and enemy_x <= player_x + player_size or
                 enemy_x + enemy_size >= player_x and enemy_x + enemy_size <= player_x + player_size):
        game_over = True

    # Draw the screen
    screen.fill((255, 255, 255))
    pygame.draw.rect(screen, (0, 0, 255), (player_x, player_y, player_size, player_size))
    pygame.draw.rect(screen, (255, 0, 0), (enemy_x, enemy_y, enemy_size, enemy_size))
    score_text = font.render(f"Score: {score}", True, (0, 0, 0))
    screen.blit(score_text, (10, 10))
    pygame.display.update()

    # Set the frame rate
    clock.tick(60)

# Clean up Pygame
pygame.quit()

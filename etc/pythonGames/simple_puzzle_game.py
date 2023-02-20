import pygame
import random

# Initialize pygame
pygame.init()

# Set up the display
screen_width = 640
screen_height = 480
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Simple Puzzle Game")

# Set up the colors
white = (255, 255, 255)
black = (0, 0, 0)

# Set up the font
font = pygame.font.SysFont(None, 30)

# Set up the board
board_size = 3
cell_size = 80
board = [[None for _ in range(board_size)] for _ in range(board_size)]

# Set up the images
images = []
for i in range(board_size ** 2 - 1):
    image = pygame.Surface((cell_size, cell_size))
    image.fill(white)
    number_text = font.render(str(i + 1), True, black)
    number_rect = number_text.get_rect(center=(cell_size // 2, cell_size // 2))
    image.blit(number_text, number_rect)
    images.append(image)
images.append(None)

# Shuffle the board
random.shuffle(images)
for i in range(board_size ** 2):
    row = i // board_size
    col = i % board_size
    board[row][col] = images[i]

# Set up the game loop
clock = pygame.time.Clock()
game_over = False
while not game_over:

    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True
        elif event.type == pygame.MOUSEBUTTONDOWN:
            x, y = event.pos
            col = x // cell_size
            row = y // cell_size
            if col < board_size and row < board_size:
                if col > 0 and board[row][col - 1] is None:
                    board[row][col - 1], board[row][col] = board[row][col], board[row][col - 1]
                elif col < board_size - 1 and board[row][col + 1] is None:
                    board[row][col + 1], board[row][col] = board[row][col], board[row][col]
                elif row > 0 and board[row - 1][col] is None:
                    board[row - 1][col], board[row][col] = board[row][col], board[row - 1][col]
                elif row < board_size - 1 and board[row + 1][col] is None:
                    board[row + 1][col], board[row][col] = board[row][col], board[row + 1][col]

    # Draw the screen
    screen.fill(white)
    for row in range(board_size):
        for col in range(board_size):
            image = board[row][col]
            if image is not None:
                rect = pygame.Rect(col * cell_size, row * cell_size, cell_size, cell_size)
                screen.blit(image, rect)
    pygame.display.update()

    # Check for win condition
    if all(images[i] is board[i // board_size][i % board_size] for i in range(board_size ** 2 - 1)):
        text = font.render("You win!", True, black)
        text_rect = text.get_rect(center=(screen_width // 2, screen_height // 2))
        screen.blit(text, text_rect)
        pygame.display.update()
        pygame.time.wait(3000)
        game_over = True

    # Limit the frame rate
    clock.tick(30)


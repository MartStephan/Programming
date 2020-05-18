# import pygame (and others)
import sys, pygame, kitty

# size of players window
SIZE = WIDTH, HEIGHT = 1000, 600

# always initialize pygame first 
pygame.init() 
pygame.display.set_caption("Hello Kitty")
# Initialize a window or screen for display
screen  = pygame.display.set_mode(SIZE)
sprites = pygame.sprite.Group()
cat = kitty.Cat(WIDTH, HEIGHT)
sprites.add(cat)
clock = pygame.time.Clock() # you (always) need pygame clock for doing a appropriate refresh rate

# let's start our game endless loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            # clean shutdown when closing window
            pygame.quit()
            sys.exit()

    screen.fill((255, 255, 255))
    sprites.update()
    sprites.draw(screen)

    # replace framebuffer 
    pygame.display.flip()
    # refresh rate 30fps
    clock.tick(30)



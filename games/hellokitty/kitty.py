import pygame

""" Our kitty cat that is the thing you're playing with"""
class Cat(pygame.sprite.Sprite):

    # constructor
    def __init__(self, width, height):
        super().__init__()
        self.width = width
        self.height = height
        self.image = pygame.image.load("katze.png")
        self.rect = self.image.get_rect()
        self.rect.center = (self.width / 2, self.height / 2)

    def update(self):
        pressed = pygame.key.get_pressed()
        if pressed[pygame.K_UP]: self.rect.y -= 8 
        if pressed[pygame.K_DOWN]: self.rect.y += 8
        if pressed[pygame.K_LEFT]: self.rect.x -= 8
        if pressed[pygame.K_RIGHT]: self.rect.x += 8
        self.rect.clamp_ip(pygame.Rect(0, 0, self.width, self.height))


        
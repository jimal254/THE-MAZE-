#include <math.h> // Ensure math functions are available
#include <float.h> // For FLT_MAX
#include "../headers/header.h" // Make sure this includes necessary function prototypes

// Existing code...

void horzIntersection(float rayAngle)
{
    float nextHorzTouchX, nextHorzTouchY, xintercept, yintercept, xstep, ystep;

    foundHorzWallHit = false;
    horzWallHitX = horzWallHitY = horzWallContent = 0;

    yintercept = floor(player.y / TILE_SIZE) * TILE_SIZE;
    yintercept += isRayFacingDown(rayAngle) ? TILE_SIZE : 0;

    xintercept = player.x + (yintercept - player.y) / tan(rayAngle);

    ystep = TILE_SIZE;
    ystep *= isRayFacingUp(rayAngle) ? -1 : 1;
    xstep = TILE_SIZE / tan(rayAngle);
    xstep *= (isRayFacingLeft(rayAngle) && xstep > 0) ? -1 : 1;
    xstep *= (isRayFacingRight(rayAngle) && xstep < 0) ? -1 : 1;
    nextHorzTouchX = xintercept;
    nextHorzTouchY = yintercept;

    while (isInsideMap(nextHorzTouchX, nextHorzTouchY))
    {
        float xToCheck = nextHorzTouchX;
        float yToCheck = nextHorzTouchY + (isRayFacingUp(rayAngle) ? -1 : 0);

        if (DetectCollision(xToCheck, yToCheck))
        {
            horzWallHitX = nextHorzTouchX;
            horzWallHitY = nextHorzTouchY;
            horzWallContent = getMapValue((int)floor(yToCheck / TILE_SIZE),
                                               (int)floor(xToCheck / TILE_SIZE));
            foundHorzWallHit = true;
            break;
        }
        nextHorzTouchX += xstep;
        nextHorzTouchY += ystep;
    }
}


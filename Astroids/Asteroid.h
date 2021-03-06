//
//  Asteroid.h
//  Astroids
//
//  Created by Robert Carter on 8/23/12.
//  Copyright (c) 2012 Robert Carter. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface Asteroid : CALayer
- (id)initWithPosition:(CGPoint)position andEndPosition:(CGPoint)endPosition;
- (void)animate;
- (void)animateDestruction;
- (void)destroyAsteroid;
- (void)unsetAnimationDelegate;
@end

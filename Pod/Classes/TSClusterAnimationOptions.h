//
//  TSClusterAnimationOptions.h
//  ClusterDemo
//
//  Created by Adam Share on 1/16/15.
//  Copyright (c) 2015 Applidium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSPlatformCompatibility.h"
#if TS_TARGET_IOS
  #import <UIKit/UIKit.h>
#endif

 /**
 * Cluster animation options
 */
@interface TSClusterAnimationOptions : NSObject

 /**
 * The total duration of the animations, measured in seconds. If you specify a negative value or 0, the changes are made without animating them.
 */
@property (nonatomic, assign) float duration;

 /**
 * The damping ratio for the spring animation as it approaches its quiescent state. To smoothly decelerate the animation without oscillation, use a value of 1. Employ a damping ratio closer to zero to increase oscillation.
 */
@property (nonatomic, assign) float springDamping;


 /**
 * The initial spring velocity. For smooth start to the animation, match this value to the view’s velocity as it was prior to attachment. A value of 1 corresponds to the total animation distance traversed in one second. For example, if the total animation distance is 200 points and you want the start of the animation to match a view velocity of 100 pt/s, use a value of 0.5.
 */
@property (nonatomic, assign) float springVelocity;

 /**
 * A mask of options indicating how you want to perform the animations. For a list of valid constants, see TSUIViewAnimationOptions.
 */
@property (nonatomic, assign) TSUIViewAnimationOptions viewAnimationOptions;


/**
 * Returns a TSClusterAnimationOptions object with the default animation settings
 */
+ (instancetype)defaultOptions;

@end

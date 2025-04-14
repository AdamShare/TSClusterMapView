//
//  TSClusterAnimationOptions.m
//  ClusterDemo
//
//  Created by Adam Share on 1/16/15.
//  Copyright (c) 2015 Applidium. All rights reserved.
//

#import "TSClusterAnimationOptions.h"

@implementation TSClusterAnimationOptions

+ (instancetype)defaultOptions {
    
    TSClusterAnimationOptions *options = [[TSClusterAnimationOptions alloc] init];
    
    options.duration = 0.3;
    options.springDamping = 0.7;
    options.springVelocity = 0.5;
    options.viewAnimationOptions = TSUIViewAnimationOptionCurveEaseIn;
    
    return options;
}

@end

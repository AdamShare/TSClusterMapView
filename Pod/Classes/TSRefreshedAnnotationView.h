//
//  TSBaseAnnotationView.h
//  TapShield
//
//  Created by Adam Share on 4/2/14.
//  Copyright (c) 2014 TapShield, LLC. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "ADClusterAnnotation.h"

/*!
 * @discussion Optional subclass to make use of the clustering animation block
 */
@interface TSRefreshedAnnotationView : MKAnnotationView

/*!
 * @discussion Added to UIView animation block during a clustering event to allow for an animated refresh of the view. While the mapView:viewForAnnotation: delegate is always called to update the annotation views before a clustering animation, this will give you the ability to animate content in sync to the movement.
 */
- (void)clusteringAnimation;

@end

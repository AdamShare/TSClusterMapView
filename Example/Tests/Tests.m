//
//  TSClusterMapViewTests.m
//  TSClusterMapViewTests
//
//  Created by Adam Share on 01/20/2015.
//  Copyright (c) 2014 Adam Share. All rights reserved.
//

@import XCTest;
#import "TSClusterMapView.h"
#import "TSStreetLightAnnotation.h"

@interface TSClusterMapView (Tree)

- (void)createKDTreeAndCluster:(NSSet <id<MKAnnotation>> *)annotations completion:(KdtreeCompletionBlock)completion;

@end


@interface KDTreeBuildTests: XCTestCase
@end

@implementation KDTreeBuildTests

- (void)testClusteringStreetLights {
    TSClusterMapView *mapView = [[TSClusterMapView alloc] initWithFrame:CGRectMake(0, 0, 200, 500)];

    XCTestExpectation *expectation = [self expectationWithDescription:@"Creating cluster finishes"];

    [[NSOperationQueue new] addOperationWithBlock:^{
        NSData * JSONData = [NSData dataWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"CDStreetlights" ofType:@"json"]];

        NSMutableSet *mutableSet = [[NSMutableSet alloc] init];
        for (NSDictionary * annotationDictionary in [NSJSONSerialization JSONObjectWithData:JSONData options:kNilOptions error:NULL]) {
            TSStreetLightAnnotation * annotation = [[TSStreetLightAnnotation alloc] initWithDictionary:annotationDictionary];
            [mutableSet addObject:annotation];
        }

        [mapView createKDTreeAndCluster:mutableSet completion:^(ADMapCluster *mapCluster) {
            if (mapCluster) {
                [expectation fulfill];
            }
        }];
    }];

    [self waitForExpectations:@[expectation] timeout:1];
}
@end

//
//  TSPlatformCompatibility.h
//

#import <Foundation/Foundation.h>

#if !TARGET_OS_IOS
#define TS_TARGET_IOS 0
#define TS_TARGET_MAC 1
#else
#define TS_TARGET_MAC 0
#define TS_TARGET_IOS 1
#endif


#if TS_TARGET_MAC

#define TSUIView NSView
#define TSUIEdgeInsetsMake NSEdgeInsetsMake
#define TSUIGestureRecognizer NSGestureRecognizer
#define TSUIPanGestureRecognizer NSPanGestureRecognizer
#define TSUIGestureRecognizerDelegate NSGestureRecognizerDelegate

#define TSUIGestureRecognizerStateBegan NSGestureRecognizerStateBegan
#define TSUIGestureRecognizerStateEnded NSGestureRecognizerStateEnded

typedef NS_OPTIONS(NSUInteger, TSUIViewAnimationOptions) {
    TSUIViewAnimationOptionCurveEaseIn
};

#elif TS_TARGET_IOS

#define TSUIView UIView
#define TSUIEdgeInsetsMake UIEdgeInsetsMake
#define TSUIGestureRecognizer UIGestureRecognizer
#define TSUIPanGestureRecognizer UIPanGestureRecognizer
#define TSUIGestureRecognizerDelegate UIGestureRecognizerDelegate

#define TSUIGestureRecognizerStateBegan UIGestureRecognizerStateBegan
#define TSUIGestureRecognizerStateEnded UIGestureRecognizerStateEnded

#define TSUIViewAnimationOptions UIViewAnimationOptions
#define TSUIViewAnimationOptionCurveEaseIn UIViewAnimationOptionCurveEaseIn


#endif

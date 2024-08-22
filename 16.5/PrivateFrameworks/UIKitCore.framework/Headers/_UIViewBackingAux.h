// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWBACKINGAUX_H
#define _UIVIEWBACKINGAUX_H

@class CALayer, NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "UIVisualEffectBackingHost.h"

@interface _UIViewBackingAux : NSObject {
    CALayer *_intermediateLayer;
    CALayer *_intermediateLayerRetained;
    NSMutableSet *_privateSubviews;
    UIVisualEffectBackingHost *_effectHost;
    NSString *_captureGroupName;
}






@end


#endif
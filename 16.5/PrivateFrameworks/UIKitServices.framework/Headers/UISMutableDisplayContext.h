// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISMUTABLEDISPLAYCONTEXT_H
#define UISMUTABLEDISPLAYCONTEXT_H

@class FBSDisplayConfiguration;


#import "UISDisplayContext.h"
#import "UISApplicationSupportDisplayEdgeInfo.h"
#import "UISDisplayShape.h"

@interface UISMutableDisplayContext : UISDisplayContext

@property (nonatomic) NSUInteger artworkSubtype;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (retain, nonatomic) UISDisplayShape *exclusionArea;
@property (nonatomic) NSUInteger userInterfaceStyle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
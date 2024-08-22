// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENELAYOUTSTATEPROVIDER_H
#define SBSCENELAYOUTSTATEPROVIDER_H


#import <Foundation/Foundation.h>

#import "SBMainDisplayLayoutState.h"

@interface SBSceneLayoutStateProvider : NSObject

@property (retain, nonatomic) SBMainDisplayLayoutState *layoutState; // ivar: _layoutState
@property (retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState; // ivar: _previousLayoutState


-(id)initWithLayoutState:(id)arg0 ;


@end


#endif
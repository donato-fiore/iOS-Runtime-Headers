// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSREGIONSEARCHCONTEXTSTATE_H
#define _UIFOCUSREGIONSEARCHCONTEXTSTATE_H

@protocol _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"

@interface _UIFocusRegionSearchContextState : NSObject

@property (readonly, nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) NSObject<_UIFocusRegionContainer> *regionContainer; // ivar: _regionContainer
@property (readonly, nonatomic) UIFocusSystem *regionContainerFocusSystem; // ivar: _regionContainerFocusSystem


+(id)stateWithRegionContainer:(id)arg0 focusSystem:(id)arg1 clippingRect:(struct CGRect )arg2 ;
-(id)initWithRegionContainer:(id)arg0 focusSystem:(id)arg1 clippingRect:(struct CGRect )arg2 ;


@end


#endif
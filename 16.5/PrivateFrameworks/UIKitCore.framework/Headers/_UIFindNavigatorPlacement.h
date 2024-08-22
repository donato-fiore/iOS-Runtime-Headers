// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFINDNAVIGATORPLACEMENT_H
#define _UIFINDNAVIGATORPLACEMENT_H


#import <Foundation/Foundation.h>

#import "_UIFindNavigatorInlinePlacement.h"
#import "_UIFindNavigatorKeyboardPlacement.h"

@interface _UIFindNavigatorPlacement : NSObject

@property (readonly, nonatomic) _UIFindNavigatorInlinePlacement *inlinePlacement;
@property (readonly, nonatomic) _UIFindNavigatorKeyboardPlacement *keyboardPlacement;
@property (nonatomic, getter=isShowing) BOOL showing; // ivar: _showing




@end


#endif
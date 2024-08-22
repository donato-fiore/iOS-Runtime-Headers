// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPEEKTOOFFSCREENSWITCHERMODIFIER_H
#define SBPEEKTOOFFSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBPeekToOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_peekingAppLayout;
    NSInteger _peekConfiguration;
    NSInteger _spaceConfiguration;
}




-(BOOL)isSwitcherWindowVisible;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(id)initWithTransitionID:(id)arg0 peekingAppLayout:(id)arg1 peekConfiguration:(NSInteger)arg2 spaceConfiguration:(NSInteger)arg3 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif
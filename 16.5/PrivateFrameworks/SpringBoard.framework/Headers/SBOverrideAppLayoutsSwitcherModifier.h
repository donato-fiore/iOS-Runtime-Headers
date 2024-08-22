// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBOVERRIDEAPPLAYOUTSSWITCHERMODIFIER_H
#define SBOVERRIDEAPPLAYOUTSSWITCHERMODIFIER_H

@class NSArray, NSOrderedSet;


#import "SBSwitcherModifier.h"

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    NSUInteger _appLayoutsGenerationCount;
    NSOrderedSet *_continuousExposeIdentifiers;
}




-(NSUInteger)appLayoutsGenerationCount;
-(id)appLayouts;
-(id)initWithAppLayouts:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERLAYOUTCALCULATIONSCACHEVALIDITYTOKEN_H
#define SBSWITCHERLAYOUTCALCULATIONSCACHEVALIDITYTOKEN_H


#import <Foundation/Foundation.h>


@interface SBSwitcherLayoutCalculationsCacheValidityToken : NSObject

@property (nonatomic) NSUInteger appLayoutsGenCount; // ivar: _appLayoutsGenCount
@property (nonatomic) CGRect containerViewBounds; // ivar: _containerViewBounds
@property (nonatomic) NSUInteger continuousExposeIdentifiersGenCount; // ivar: _continuousExposeIdentifiersGenCount
@property (nonatomic) NSUInteger modifierEventGenCount; // ivar: _modifierEventGenCount
@property (nonatomic) NSInteger switcherInterfaceOrientation; // ivar: _switcherInterfaceOrientation


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAppLayoutsGenCount:(NSUInteger)arg0 continuousExposeIdentifiersGenCount:(NSUInteger)arg1 switcherInterfaceOrientation:(NSInteger)arg2 containerViewBounds:(struct CGRect )arg3 modifierEventGenCount:(NSUInteger)arg4 ;


@end


#endif
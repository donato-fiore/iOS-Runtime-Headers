// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCROLLSWITCHERMODIFIEREVENT_H
#define SBSCROLLSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBScrollSwitcherModifierEvent : SBSwitcherModifierEvent

@property (nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithContentOffset:(struct CGPoint )arg0 phase:(NSUInteger)arg1 userInitiated:(BOOL)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTEXTRAKEYTAP_H
#define ACTEXTRAKEYTAP_H

@class UIKBTree;


#import "ACTUserAction.h"

@interface ACTExtraKeyTap : ACTUserAction

@property (readonly, nonatomic) CGPoint location; // ivar: _location
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) UIKBTree *touchedKey; // ivar: _touchedKey


-(id)description;
-(id)initWithTouchedKey:(id)arg0 location:(struct CGPoint )arg1 timestamp:(CGFloat)arg2 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif
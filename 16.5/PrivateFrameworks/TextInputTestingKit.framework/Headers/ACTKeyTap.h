// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTKEYTAP_H
#define ACTKEYTAP_H

@class UIKBTree;


#import "ACTUserAction.h"
#import "TIPointError.h"

@interface ACTKeyTap : ACTUserAction

@property (readonly, nonatomic) TIPointError *error; // ivar: _error
@property (readonly, nonatomic) UIKBTree *intendedKey; // ivar: _intendedKey
@property (readonly, nonatomic) CGPoint location; // ivar: _location
@property (readonly, nonatomic) BOOL secondaryString; // ivar: _secondaryString
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) UIKBTree *touchedKey; // ivar: _touchedKey


-(id)description;
-(id)initWithIntendedKey:(id)arg0 touchedKey:(id)arg1 error:(id)arg2 location:(struct CGPoint )arg3 timestamp:(CGFloat)arg4 secondaryString:(BOOL)arg5 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif
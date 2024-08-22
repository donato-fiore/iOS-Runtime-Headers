// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTSELECTPOPUPVARIANT_H
#define ACTSELECTPOPUPVARIANT_H

@class NSString;


#import "ACTUserAction.h"

@interface ACTSelectPopupVariant : ACTUserAction

@property (readonly, nonatomic) NSString *intendedKey; // ivar: _intendedKey
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithIntendedKey:(id)arg0 timestamp:(CGFloat)arg1 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif
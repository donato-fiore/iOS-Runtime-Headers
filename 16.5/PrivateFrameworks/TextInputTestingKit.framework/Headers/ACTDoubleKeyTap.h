// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACTDOUBLEKEYTAP_H
#define ACTDOUBLEKEYTAP_H

@protocol ACTUserAction;


#import "ACTUserAction.h"

@interface ACTDoubleKeyTap : ACTUserAction

@property (readonly, nonatomic) NSObject<ACTUserAction> *firstTap; // ivar: _firstTap
@property (readonly, nonatomic) NSObject<ACTUserAction> *secondTap; // ivar: _secondTap


-(id)description;
-(id)initWithFirstTap:(id)arg0 secondTap:(id)arg1 ;
-(void)applyWithTyper:(id)arg0 log:(id)arg1 ;


@end


#endif
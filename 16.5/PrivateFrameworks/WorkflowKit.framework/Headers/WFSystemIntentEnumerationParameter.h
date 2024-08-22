// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSYSTEMINTENTENUMERATIONPARAMETER_H
#define WFSYSTEMINTENTENUMERATIONPARAMETER_H

@class NSArray, INIntentSlotDescription;


#import "WFEnumerationParameter.h"

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}


@property (readonly, nonatomic) INIntentSlotDescription *slotDescription; // ivar: _slotDescription


-(BOOL)alwaysShowsButton;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif
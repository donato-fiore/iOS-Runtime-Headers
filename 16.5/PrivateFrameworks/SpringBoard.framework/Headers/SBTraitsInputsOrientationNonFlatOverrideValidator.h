// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSINPUTSORIENTATIONNONFLATOVERRIDEVALIDATOR_H
#define SBTRAITSINPUTSORIENTATIONNONFLATOVERRIDEVALIDATOR_H



#import "SBTraitsInputsValidator.h"

@interface SBTraitsInputsOrientationNonFlatOverrideValidator : SBTraitsInputsValidator {
    NSInteger _lastNonFlatOrientationOverride;
}




-(id)description;
-(id)validateInputs:(id)arg0 ;
-(void)setLastNonFlatOrientationOverride:(NSInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSINPUTSORIENTATIONLOCKVALIDATOR_H
#define SBTRAITSINPUTSORIENTATIONLOCKVALIDATOR_H

@class SBFTraitsArbitrationDeviceOrientationInputs;


#import "SBTraitsInputsValidator.h"

@interface SBTraitsInputsOrientationLockValidator : SBTraitsInputsValidator {
    NSInteger _lockOrientation;
    BOOL _prefersDeferringOrientationUpdates;
    SBFTraitsArbitrationDeviceOrientationInputs *_lastForwardedOrientationInputs;
}




-(id)description;
-(id)initWithValidatorOrder:(id)arg0 ;
-(id)validateInputs:(id)arg0 ;
-(void)setLockOrientation:(NSInteger)arg0 ;
-(void)setPrefersDeferringOrientationUpdates:(BOOL)arg0 ;


@end


#endif
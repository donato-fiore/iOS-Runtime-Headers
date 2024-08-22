// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBUISYSTEMAPERTUREALERTINGASSERTION_H
#define _SBUISYSTEMAPERTUREALERTINGASSERTION_H

@class NSString;
@protocol SBUISystemApertureAutomaticallyInvalidatable;


#import "SBUISystemApertureAssertion.h"
#import "SBUISystemApertureAlertingAction.h"
#import "SBUISystemApertureElementSource.h"

@interface _SBUISystemApertureAlertingAssertion : SBUISystemApertureAssertion <SBUISystemApertureAutomaticallyInvalidatable>



@property (retain, nonatomic) SBUISystemApertureAlertingAction *alertingAction; // ivar: _alertingAction
@property (nonatomic, getter=isAutomaticallyInvalidatable) BOOL automaticallyInvalidatable; // ivar: _automaticallyInvalidatable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SBUISystemApertureElementSource *elementSource; // ivar: _elementSource
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithElementSource:(id)arg0 ;
-(void)addInvalidationBlock:(id)arg0 ;
-(void)resetAutomaticInvalidationTimer;


@end


#endif
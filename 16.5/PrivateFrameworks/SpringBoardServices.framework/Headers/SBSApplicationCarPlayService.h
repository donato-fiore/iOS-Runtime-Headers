// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSAPPLICATIONCARPLAYSERVICE_H
#define SBSAPPLICATIONCARPLAYSERVICE_H


#import <Foundation/Foundation.h>


@interface SBSApplicationCarPlayService : NSObject



-(void)fetchApplicationIconInformationForBundleIdentifier:(id)arg0 inVehicle:(id)arg1 withCompletion:(id)arg2 ;
-(void)fetchIconStateForVehicleId:(id)arg0 withCompletion:(id)arg1 ;
-(void)resetIconStateForVehicleId:(id)arg0 ;
-(void)setIconState:(id)arg0 hiddenIcons:(id)arg1 forVehicleId:(id)arg2 ;


@end


#endif
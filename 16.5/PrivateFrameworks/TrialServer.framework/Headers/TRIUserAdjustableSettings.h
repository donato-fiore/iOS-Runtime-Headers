// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIUSERADJUSTABLESETTINGS_H
#define TRIUSERADJUSTABLESETTINGS_H


#import <Foundation/Foundation.h>


@interface TRIUserAdjustableSettings : NSObject



+(BOOL)getExperimentOptOut:(id)arg0 ;
+(unsigned char)_optOutSoftwareUpdatePreferenceForAnyUser;
+(void)_deactivateAllActiveExperimentsWithServerContext:(id)arg0 ;
+(void)updateExperimentOptOutStateWithServerContext:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIREMOTEALERTBUTTONACTIONRESPONSE_H
#define SBUIREMOTEALERTBUTTONACTIONRESPONSE_H

@class BSActionResponse;



@interface SBUIRemoteAlertButtonActionResponse : BSActionResponse

@property (readonly, nonatomic) NSUInteger unHandledEvents;


-(id)initWithUnHandledEvents:(NSUInteger)arg0 ;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;


@end


#endif
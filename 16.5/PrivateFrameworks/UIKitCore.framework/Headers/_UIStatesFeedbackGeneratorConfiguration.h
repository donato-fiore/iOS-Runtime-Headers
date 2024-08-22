// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATESFEEDBACKGENERATORCONFIGURATION_H
#define _UISTATESFEEDBACKGENERATORCONFIGURATION_H

@class UIFeedbackGeneratorConfiguration, NSString, NSDictionary;



@interface _UIStatesFeedbackGeneratorConfiguration : UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) NSString *initialState; // ivar: _initialState
@property (retain, nonatomic) NSDictionary *stateChangeConfigurations; // ivar: _stateChangeConfigurations


+(id)keyFromState:(id)arg0 toState:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedbackKeyPaths;


@end


#endif
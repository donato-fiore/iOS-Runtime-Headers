// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSMARTPROMPTINTENTRESPONSE_H
#define WFSMARTPROMPTINTENTRESPONSE_H

@class INIntentResponse, NSNumber;



@interface WFSmartPromptIntentResponse : INIntentResponse

@property (copy, nonatomic) NSNumber *authorizationResult;
@property (nonatomic) NSInteger code; // ivar: _code


-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif
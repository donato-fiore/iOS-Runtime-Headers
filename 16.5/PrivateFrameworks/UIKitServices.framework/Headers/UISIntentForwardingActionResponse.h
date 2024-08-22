// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISINTENTFORWARDINGACTIONRESPONSE_H
#define UISINTENTFORWARDINGACTIONRESPONSE_H

@class BSActionResponse, INIntentResponse, INIntentForwardingActionResponse;



@interface UISIntentForwardingActionResponse : BSActionResponse {
    INIntentResponse *_cachedIntentResponse;
    INIntentForwardingActionResponse *_cachedIntentForwardingActionResponse;
}


@property (readonly, nonatomic) INIntentForwardingActionResponse *intentForwardingActionResponse;
@property (readonly, nonatomic) INIntentResponse *intentResponse;


+(id)responseWithIntentForwardingActionResponse:(id)arg0 ;
+(id)responseWithIntentResponse:(id)arg0 ;
-(id)initWithIntentForwardingActionResponse:(id)arg0 ;
-(id)initWithIntentResponse:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif
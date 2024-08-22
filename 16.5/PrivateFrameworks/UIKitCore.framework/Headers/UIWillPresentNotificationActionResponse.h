// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWILLPRESENTNOTIFICATIONACTIONRESPONSE_H
#define UIWILLPRESENTNOTIFICATIONACTIONRESPONSE_H

@class BSActionResponse;



@interface UIWillPresentNotificationActionResponse : BSActionResponse

@property (readonly, nonatomic) NSUInteger options;


+(id)responseWithOptions:(NSUInteger)arg0 ;
-(id)initWithInfo:(id)arg0 error:(id)arg1 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif
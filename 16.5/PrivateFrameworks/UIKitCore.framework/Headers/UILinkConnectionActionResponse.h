// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UILINKCONNECTIONACTIONRESPONSE_H
#define UILINKCONNECTIONACTIONRESPONSE_H

@class BSActionResponse, LNConnectionActionResponse;



@interface UILinkConnectionActionResponse : BSActionResponse

@property (readonly, nonatomic) LNConnectionActionResponse *actionResponse;


-(id)initWithActionResponse:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif
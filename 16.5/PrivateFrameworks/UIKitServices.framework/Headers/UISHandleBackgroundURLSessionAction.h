// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISHANDLEBACKGROUNDURLSESSIONACTION_H
#define UISHANDLEBACKGROUNDURLSESSIONACTION_H

@class BSAction, NSString;



@interface UISHandleBackgroundURLSessionAction : BSAction

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;


-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSInteger)UIActionType;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithSessionIdentifier:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif
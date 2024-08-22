// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBNOTIFICATIONPOLICYLISTENER_H
#define WEBNOTIFICATIONPOLICYLISTENER_H

@class NSString;
@protocol WebAllowDenyPolicyListener;

#import <Foundation/Foundation.h>


@interface WebNotificationPolicyListener : NSObject <WebAllowDenyPolicyListener>

 {
    CompletionHandler<void (WebCore::NotificationPermission)> _permissionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldClearCache;
-(id)initWithPermissionHandler:(*void)arg0 ;
-(void)allow;
-(void)deny;
-(void)denyOnlyThisRequest;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNOTIFICATIONBANNERDESTINATIONTESTACTIONRUNNER_H
#define SBNOTIFICATIONBANNERDESTINATIONTESTACTIONRUNNER_H

@class NSString;
@protocol NCNotificationActionRunner;

#import <Foundation/Foundation.h>


@interface SBNotificationBannerDestinationTestActionRunner : NSObject <NCNotificationActionRunner>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldForwardAction; // ivar: _shouldForwardAction
@property (readonly) Class superclass;


-(void)executeAction:(id)arg0 fromOrigin:(id)arg1 endpoint:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;


@end


#endif
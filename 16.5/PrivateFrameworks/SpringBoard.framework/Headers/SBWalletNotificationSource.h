// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWALLETNOTIFICATIONSOURCE_H
#define SBWALLETNOTIFICATIONSOURCE_H

@class NSString, NCNotificationDispatcher;
@protocol NCNotificationSource;

#import <Foundation/Foundation.h>


@interface SBWalletNotificationSource : NSObject <NCNotificationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NCNotificationDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDispatcher:(id)arg0 ;
-(void)modifyNotificationRequestForCardItem:(id)arg0 ;
-(void)postNotificationRequestForCardItem:(id)arg0 ;
-(void)withdrawNotificationRequestForCardItem:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSHOWBACKLINKINDICATORCOMMANDPHONEIMPL_H
#define SYSHOWBACKLINKINDICATORCOMMANDPHONEIMPL_H

@class NSUserActivity, NSString;
@protocol SYShowBacklinkIndicatorCommandImpl;

#import <Foundation/Foundation.h>


@interface SYShowBacklinkIndicatorCommandPhoneImpl : NSObject <SYShowBacklinkIndicatorCommandImpl>

 {
    NSUserActivity *_userActivity;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 ;
-(void)invalidate;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef URTUSERNOTIFICATIONPRESENTATION_H
#define URTUSERNOTIFICATIONPRESENTATION_H

@class NSDictionary, NSString;
@protocol URTPresenting;

#import <Foundation/Foundation.h>


@interface URTUserNotificationPresentation : NSObject <URTPresenting>

 {
    *__CFUserNotification _userNotification;
}


@property (readonly, copy, nonatomic) NSDictionary *contents; // ivar: _contents
@property (readonly, nonatomic) NSUInteger creationFlags; // ivar: _creationFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)invokeHandlerForUserNotification:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
+(void)registerUserNotification:(struct __CFUserNotification *)arg0 handler:(id)arg1 ;
+(void)unregisterHandlerForUserNotification:(struct __CFUserNotification *)arg0 ;
-(id)initWithContents:(id)arg0 flags:(NSUInteger)arg1 ;
-(struct __CFRunLoopSource *)createRunLoopSourceOrdered:(NSInteger)arg0 handler:(id)arg1 ;
-(void)dismiss;
-(void)invalidate;
-(void)present;


@end


#endif
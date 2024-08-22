// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISUSERNOTIFICATION_H
#define ISUSERNOTIFICATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ISUserNotification : NSObject {
    NSDictionary *_dictionary;
    NSUInteger _optionFlags;
}


@property NSInteger allowedRetryCount; // ivar: _allowedRetryCount
@property NSInteger currentRetryCount; // ivar: _currentRetryCount
@property (readonly) NSDictionary *dictionary;
@property (readonly) NSUInteger optionFlags;
@property (retain) NSDictionary *userInfo; // ivar: _userInfo


-(id)init;
-(id)initWithDictionary:(id)arg0 options:(NSUInteger)arg1 ;
-(struct __CFUserNotification *)copyUserNotification;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSAPPWAKEREQUEST_H
#define SSAPPWAKEREQUEST_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSAppWakeRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (copy, nonatomic) NSDictionary *launchOptions; // ivar: _launchOptions
@property (copy, nonatomic) NSString *processAssertionIdentifier; // ivar: _processAssertionIdentifier
@property (nonatomic) CGFloat processAssertionInterval; // ivar: _processAssertionInterval
@property (copy, nonatomic) NSString *processAssertionReason; // ivar: _processAssertionReason
@property (nonatomic) BOOL shouldLaunchApp; // ivar: _shouldLaunchApp


+(id)familyContentRemovalRequestWithAppIdentifier:(id)arg0 accountPairs:(id)arg1 ;
+(id)newsstandFinishRequestWithAppIdentifier:(id)arg0 issueIdentifiers:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
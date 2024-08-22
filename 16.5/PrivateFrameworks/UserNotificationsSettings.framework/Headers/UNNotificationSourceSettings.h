// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNNOTIFICATIONSOURCESETTINGS_H
#define UNNOTIFICATIONSOURCESETTINGS_H

@class UNNotificationSettings, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (readonly, copy, nonatomic) UNNotificationSettings *notificationSettings; // ivar: _notificationSettings
@property (readonly, copy, nonatomic) NSArray *topicSettings; // ivar: _topicSettings


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationSettings:(id)arg0 topicSettings:(id)arg1 isRestricted:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
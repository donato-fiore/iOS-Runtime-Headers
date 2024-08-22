// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICONCRETELOCALNOTIFICATION_H
#define UICONCRETELOCALNOTIFICATION_H

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSData;
@protocol NSSecureCoding;


#import "UILocalNotification.h"

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding>

 {
    NSDate *fireDate;
    NSTimeZone *timeZone;
    NSUInteger repeatInterval;
    NSCalendar *repeatCalendar;
    CLRegion *region;
    BOOL regionTriggersOnce;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    NSInteger applicationIconBadgeNumber;
    NSData *userInfoData;
    NSString *category;
}




+(BOOL)supportsSecureCoding;
-(BOOL)hasAction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTriggeredByDate;
-(BOOL)isTriggeredByRegion;
-(BOOL)isValid;
-(BOOL)regionTriggersOnce;
-(NSInteger)applicationIconBadgeNumber;
-(NSInteger)compareFireDates:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)repeatInterval;
-(id)alertAction;
-(id)alertBody;
-(id)alertLaunchImage;
-(id)alertTitle;
-(id)category;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fireDate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)nextFireDateAfterDate:(id)arg0 localTimeZone:(id)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg0 ;
-(id)region;
-(id)repeatCalendar;
-(id)soundName;
-(id)timeZone;
-(id)userInfo;
-(void)_setUserInfoData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAlertAction:(id)arg0 ;
-(void)setAlertBody:(id)arg0 ;
-(void)setAlertLaunchImage:(id)arg0 ;
-(void)setAlertTitle:(id)arg0 ;
-(void)setApplicationIconBadgeNumber:(NSInteger)arg0 ;
-(void)setCategory:(id)arg0 ;
-(void)setFireDate:(id)arg0 ;
-(void)setHasAction:(BOOL)arg0 ;
-(void)setRegion:(id)arg0 ;
-(void)setRegionTriggersOnce:(BOOL)arg0 ;
-(void)setRepeatCalendar:(id)arg0 ;
-(void)setRepeatInterval:(NSUInteger)arg0 ;
-(void)setSoundName:(id)arg0 ;
-(void)setTimeZone:(id)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)validate;


@end


#endif
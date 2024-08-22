// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMUTABLEUSERNOTIFICATIONACTIONSETTINGS_H
#define UIMUTABLEUSERNOTIFICATIONACTIONSETTINGS_H

@class NSString;


#import "UIUserNotificationActionSettings.h"

@interface UIMutableUserNotificationActionSettings : UIUserNotificationActionSettings

@property (copy, nonatomic) NSString *category;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setActions:(id)arg0 forContext:(NSUInteger)arg1 ;


@end


#endif
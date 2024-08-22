// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMUTABLEUSERNOTIFICATIONCATEGORY_H
#define UIMUTABLEUSERNOTIFICATIONCATEGORY_H

@class NSString;


#import "UIUserNotificationCategory.h"

@interface UIMutableUserNotificationCategory : UIUserNotificationCategory

@property (copy, nonatomic) NSString *identifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setActions:(id)arg0 forContext:(NSUInteger)arg1 ;


@end


#endif
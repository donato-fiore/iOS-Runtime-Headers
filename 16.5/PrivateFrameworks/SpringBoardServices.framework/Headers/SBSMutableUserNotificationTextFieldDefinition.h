// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSMUTABLEUSERNOTIFICATIONTEXTFIELDDEFINITION_H
#define SBSMUTABLEUSERNOTIFICATIONTEXTFIELDDEFINITION_H

@class NSString;


#import "SBSUserNotificationTextFieldDefinition.h"

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) NSUInteger maxLength;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
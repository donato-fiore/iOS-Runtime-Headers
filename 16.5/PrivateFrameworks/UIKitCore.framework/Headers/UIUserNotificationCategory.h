// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIUSERNOTIFICATIONCATEGORY_H
#define UIUSERNOTIFICATIONCATEGORY_H

@class NSDictionary, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *actionsByContext; // ivar: _actionsByContext
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_maximumActionsForContext:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)actions;
-(id)actionsForContext:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 actionsByContext:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)validatedCategory;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
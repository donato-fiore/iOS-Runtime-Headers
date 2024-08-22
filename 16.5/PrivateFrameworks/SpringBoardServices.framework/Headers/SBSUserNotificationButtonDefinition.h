// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUSERNOTIFICATIONBUTTONDEFINITION_H
#define SBSUSERNOTIFICATIONBUTTONDEFINITION_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBSUserNotificationButtonDefinition : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL isPreferredButton; // ivar: _isPreferredButton
@property (readonly, nonatomic) int presentationStyle; // ivar: _presentationStyle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)_buttonDefinitionsFromSerializedDefinitions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDictionary:(id)arg0 ;
-(id)build;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_copyPropertiesToDefinition:(id)arg0 ;


@end


#endif
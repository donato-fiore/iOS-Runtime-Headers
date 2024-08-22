// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONCONTINUITYITEM_H
#define SBICONCONTINUITYITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBIconContinuityItem : NSObject

@property (readonly, nonatomic) NSInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(NSInteger)_continuityBadgeTypeForNSString:(id)arg0 ;
+(id)_resolvedItemForExplicitBadgeType:(NSInteger)arg0 deviceTypeIdentifier:(id)arg1 ;
+(id)itemForBadgeTypeString:(id)arg0 deviceTypeIdentifier:(id)arg1 ;
+(id)itemForContinuityInfo:(id)arg0 ;
+(id)itemWithBadgeType:(NSInteger)arg0 deviceTypeIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithBadgeType:(NSInteger)arg0 systemImageName:(id)arg1 ;


@end


#endif
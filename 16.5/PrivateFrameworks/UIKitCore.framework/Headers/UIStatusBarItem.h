// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARITEM_H
#define UISTATUSBARITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIStatusBarItem : NSObject {
    NSInteger _idiom;
}


@property (readonly, nonatomic) NSString *indicatorName;
@property (readonly, nonatomic) int leftOrder;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) int rightOrder;
@property (readonly, nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) Class viewClass;


+(BOOL)isItemWithTypeExclusive:(int)arg0 outBlacklistItems:(*id)arg1 outWhitelistItems:(*id)arg2 ;
+(BOOL)itemType:(int)arg0 idiom:(NSInteger)arg1 appearsInRegion:(int)arg2 ;
+(BOOL)itemType:(int)arg0 idiom:(NSInteger)arg1 canBeEnabledForData:(id)arg2 style:(id)arg3 ;
+(BOOL)typeIsValid:(int)arg0 ;
+(id)itemWithType:(int)arg0 idiom:(NSInteger)arg1 ;
-(BOOL)appearsInRegion:(int)arg0 ;
-(BOOL)appearsOnCenter;
-(BOOL)appearsOnLeft;
-(BOOL)appearsOnRight;
-(NSInteger)compareCenterOrder:(id)arg0 ;
-(NSInteger)compareLeftOrder:(id)arg0 ;
-(NSInteger)comparePriority:(id)arg0 ;
-(NSInteger)compareRightOrder:(id)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 ;
-(int)centerOrder;


@end


#endif
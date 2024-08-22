// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTAB_H
#define TSWPTAB_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPTab : NSObject <NSCopying>



@property (nonatomic) int alignment; // ivar: _alignment
@property (copy, nonatomic) NSString *leader; // ivar: _leader
@property (nonatomic) CGFloat position; // ivar: _position


+(id)displayStringFromTabLeader:(id)arg0 ;
+(id)stringFromTabAlignment:(int)arg0 isRTL:(BOOL)arg1 isVertical:(BOOL)arg2 ;
+(id)tab;
+(id)tabLeaderFromDisplayString:(id)arg0 ;
+(id)tabStopAlignmentStringBottom;
+(id)tabStopAlignmentStringCenter;
+(id)tabStopAlignmentStringDecimal;
+(id)tabStopAlignmentStringLeft;
+(id)tabStopAlignmentStringMiddle;
+(id)tabStopAlignmentStringRight;
+(id)tabStopAlignmentStringTop;
+(id)tabStopDisplayStringArrow;
+(id)tabStopDisplayStringDash;
+(id)tabStopDisplayStringNone;
+(id)tabStopDisplayStringPoint;
+(id)tabStopDisplayStringUnderscore;
+(id)tabStopLeaderStringArrow;
+(id)tabStopLeaderStringArrowRTL;
+(id)tabStopLeaderStringDash;
+(id)tabStopLeaderStringPoint;
+(id)tabStopLeaderStringUnderscore;
+(int)tabAlignmentFromString:(id)arg0 isRTL:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPosition:(CGFloat)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareToPosition:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithPosition:(CGFloat)arg0 alignment:(int)arg1 leader:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif
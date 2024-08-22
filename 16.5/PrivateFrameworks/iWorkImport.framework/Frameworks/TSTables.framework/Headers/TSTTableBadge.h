// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEBADGE_H
#define TSTTABLEBADGE_H

@class TSUColor;

#import <Foundation/Foundation.h>


@interface TSTTableBadge : NSObject

@property (nonatomic) int badgeType; // ivar: _badgeType
@property (retain, nonatomic) TSUColor *color; // ivar: _color
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


+(id)badgeWithType:(int)arg0 color:(id)arg1 viewScale:(CGFloat)arg2 frame:(struct CGRect )arg3 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)p_drawCellCommentBadgeInContext:(struct CGContext *)arg0 ;
-(void)p_drawCellErrorIndicatorInContext:(struct CGContext *)arg0 ;
-(void)p_drawCellWarningBadgeInContext:(struct CGContext *)arg0 ;


@end


#endif
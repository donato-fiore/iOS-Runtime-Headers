// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBSELECTIONRECT_H
#define WEBSELECTIONRECT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WebSelectionRect : NSObject <NSCopying>



@property (nonatomic) BOOL containsEnd; // ivar: m_containsEnd
@property (nonatomic) BOOL containsStart; // ivar: m_containsStart
@property (nonatomic) BOOL isFirstOnLine; // ivar: m_isFirstOnLine
@property (nonatomic) BOOL isHorizontal; // ivar: m_isHorizontal
@property (nonatomic) BOOL isInFixedPosition; // ivar: m_isInFixedPosition
@property (nonatomic) BOOL isLastOnLine; // ivar: m_isLastOnLine
@property (nonatomic) BOOL isLineBreak; // ivar: m_isLineBreak
@property (nonatomic) CGRect rect; // ivar: m_rect
@property (nonatomic) int writingDirection; // ivar: m_writingDirection


+(id)selectionRect;
+(struct CGRect )endEdge:(id)arg0 ;
+(struct CGRect )startEdge:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
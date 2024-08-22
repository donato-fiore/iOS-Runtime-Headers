// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDLINEEND_H
#define TSDLINEEND_H

@class TSUBezierPath, NSString;
@protocol TSSPropertyValueArchiving, NSCopying, TSDMixing;

#import <Foundation/Foundation.h>


@interface TSDLineEnd : NSObject <TSSPropertyValueArchiving, NSCopying, TSDMixing>

 {
    TSUBezierPath *_wrapPath;
}


@property (readonly, nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isFilled; // ivar: _isFilled
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) int lineJoin; // ivar: _lineJoin
@property (readonly, copy, nonatomic) TSUBezierPath *path; // ivar: _path
@property (readonly, copy, nonatomic) TSUBezierPath *wrapPath;


+(id)filledArrow;
+(id)filledCircle;
+(id)filledDiamond;
+(id)filledSquare;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)invertedArrow;
+(id)line;
+(id)lineEndWithIdentifier:(id)arg0 ;
+(id)lineEndWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint )arg1 isFilled:(BOOL)arg2 identifier:(id)arg3 ;
+(id)lineEndWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint )arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
+(id)lineEndWithType:(int)arg0 ;
+(id)none;
+(id)openArrow;
+(id)openCircle;
+(id)openSquare;
+(id)simpleArrow;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)scaleForStrokeWidth:(CGFloat)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithBezierPath:(id)arg0 wrapPath:(id)arg1 endPoint:(struct CGPoint )arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 lineJoin:(int)arg5 ;
-(id)initWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint )arg1 isFilled:(BOOL)arg2 identifier:(id)arg3 ;
-(id)initWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint )arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 lineJoin:(int)arg5 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(struct CGImage *)newLineEndImageOnRight:(BOOL)arg0 forContentsScale:(CGFloat)arg1 withSize:(struct CGSize )arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif
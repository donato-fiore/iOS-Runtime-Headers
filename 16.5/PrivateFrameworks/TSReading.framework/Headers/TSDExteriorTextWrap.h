// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDEXTERIORTEXTWRAP_H
#define TSDEXTERIORTEXTWRAP_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat alphaThreshold; // ivar: _alphaThreshold
@property (readonly, nonatomic) int direction; // ivar: _direction
@property (readonly, nonatomic) int fitType; // ivar: _fitType
@property (readonly, nonatomic) BOOL isHTMLWrap; // ivar: _isHTMLWrap
@property (readonly, nonatomic) CGFloat margin; // ivar: _margin
@property (readonly, nonatomic) int type; // ivar: _type


+(id)exteriorTextWrap;
+(id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg0 type:(int)arg1 direction:(int)arg2 fitType:(int)arg3 margin:(CGFloat)arg4 alphaThreshold:(CGFloat)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIsHTMLWrap:(BOOL)arg0 type:(int)arg1 direction:(int)arg2 fitType:(int)arg3 margin:(CGFloat)arg4 alphaThreshold:(CGFloat)arg5 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
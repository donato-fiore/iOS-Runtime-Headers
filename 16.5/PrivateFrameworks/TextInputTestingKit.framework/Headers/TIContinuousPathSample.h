// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TICONTINUOUSPATHSAMPLE_H
#define TICONTINUOUSPATHSAMPLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIContinuousPathSample : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat force; // ivar: _force
@property (readonly, nonatomic) NSInteger pathIndex; // ivar: _pathIndex
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) int stage; // ivar: _stage
@property (readonly, nonatomic) CGFloat timeStamp; // ivar: _timeStamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJsonDictionary:(id)arg0 ;
-(id)initWithPoint:(struct CGPoint )arg0 timeStamp:(CGFloat)arg1 force:(CGFloat)arg2 radius:(CGFloat)arg3 ;
-(id)initWithPoint:(struct CGPoint )arg0 timeStamp:(CGFloat)arg1 force:(CGFloat)arg2 radius:(CGFloat)arg3 stage:(int)arg4 pathIndex:(NSInteger)arg5 ;
-(id)toJsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
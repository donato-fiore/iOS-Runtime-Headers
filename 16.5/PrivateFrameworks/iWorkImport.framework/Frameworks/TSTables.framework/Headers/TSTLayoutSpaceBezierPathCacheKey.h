// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTSPACEBEZIERPATHCACHEKEY_H
#define TSTLAYOUTSPACEBEZIERPATHCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying>



@property (nonatomic) ? gridRange; // ivar: _gridRange
@property (nonatomic) CGFloat inset; // ivar: _inset
@property (nonatomic) BOOL reoriginToZero; // ivar: _reoriginToZero
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
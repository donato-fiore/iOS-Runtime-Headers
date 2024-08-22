// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDISPLAYITEMGRIDCACHEKEY_H
#define _SBDISPLAYITEMGRIDCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBDisplayItemGridLayoutRestrictionInfo.h"
#import "SBSwitcherChamoisLayoutAttributes.h"

@interface _SBDisplayItemGridCacheKey : NSObject <NSCopying>

 {
    CGRect _bounds;
    NSInteger _orientation;
    SBDisplayItemGridLayoutRestrictionInfo *_layoutRestrictionInfo;
    CGFloat _screenScale;
    SBSwitcherChamoisLayoutAttributes *_chamoisLayoutAttributes;
    NSUInteger _cachedHash;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 orientation:(NSInteger)arg1 layoutRestrictionInfo:(id)arg2 screenScale:(CGFloat)arg3 chamoisLayoutAttributes:(id)arg4 ;


@end


#endif
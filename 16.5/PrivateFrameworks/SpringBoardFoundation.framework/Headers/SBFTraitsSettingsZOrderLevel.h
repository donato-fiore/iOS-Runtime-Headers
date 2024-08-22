// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFTRAITSSETTINGSZORDERLEVEL_H
#define SBFTRAITSSETTINGSZORDERLEVEL_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBFTraitsSettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) CGFloat zOrderLevel; // ivar: _zOrderLevel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToZOrderLevelSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithZOrderLevel:(CGFloat)arg0 ;
-(id)initWithZOrderLevelSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
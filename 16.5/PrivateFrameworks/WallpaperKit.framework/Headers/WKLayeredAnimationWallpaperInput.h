// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKLAYEREDANIMATIONWALLPAPERINPUT_H
#define WKLAYEREDANIMATIONWALLPAPERINPUT_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WKLayeredAnimationWallpaperInput : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSURL *backgroundAnimationFileURL; // ivar: _backgroundAnimationFileURL
@property (readonly, copy, nonatomic) NSURL *floatingAnimationFileURL; // ivar: _floatingAnimationFileURL
@property (readonly, copy, nonatomic) NSURL *foregroundAnimationFileURL; // ivar: _foregroundAnimationFileURL


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderBlock:(SEL)arg0 ;
-(id)initWithBackgroundAnimationFileURL:(id)arg0 foregroundAnimationFileURL:(id)arg1 floatingAnimationFileURL:(id)arg2 ;
-(id)wk_descriptionBuilder;


@end


#endif
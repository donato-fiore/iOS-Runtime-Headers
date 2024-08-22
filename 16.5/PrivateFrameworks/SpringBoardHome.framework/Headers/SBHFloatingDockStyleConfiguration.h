// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFLOATINGDOCKSTYLECONFIGURATION_H
#define SBHFLOATINGDOCKSTYLECONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBHFloatingDockStyleConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger backgroundEffect; // ivar: _backgroundEffect
@property (readonly, nonatomic) NSUInteger folderIconBackgroundStyle; // ivar: _folderIconBackgroundStyle
@property (readonly, nonatomic) NSUInteger platterEffect; // ivar: _platterEffect
@property (readonly, nonatomic) BOOL wantsPlatterShadow; // ivar: _wantsPlatterShadow


+(id)defaultConfiguration;
-(id)configurationWithWantsPlatterShadow:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBackgroundEffect:(NSUInteger)arg0 platterEffect:(NSUInteger)arg1 wantsPlatterShadow:(BOOL)arg2 folderIconBackgroundStyle:(NSUInteger)arg3 ;


@end


#endif
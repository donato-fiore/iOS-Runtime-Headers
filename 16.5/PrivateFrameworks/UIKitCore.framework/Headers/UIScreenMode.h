// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCREENMODE_H
#define UISCREENMODE_H

@class FBSDisplayMode;

#import <Foundation/Foundation.h>


@interface UIScreenMode : NSObject {
    FBSDisplayMode *_mode;
    BOOL _isMainScreen;
    CGFloat _scale;
}


@property (readonly, nonatomic) CGFloat pixelAspectRatio;
@property (readonly, nonatomic) CGSize size;


+(id)_screenModeForDisplayMode:(id)arg0 mainScreen:(BOOL)arg1 actualDisplayScale:(CGFloat)arg2 ;
-(id)_displayMode;
-(id)description;
-(id)initWithDisplayMode:(id)arg0 mainScreen:(BOOL)arg1 actualDisplayScale:(CGFloat)arg2 ;
-(id)valueForKey:(id)arg0 ;
-(struct CGSize )_sizeWithLevel:(NSUInteger)arg0 ;


@end


#endif
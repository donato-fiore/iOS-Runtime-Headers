// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPLATFORMCOLORDEFINITION_H
#define WFPLATFORMCOLORDEFINITION_H


#import <Foundation/Foundation.h>


@interface WFPlatformColorDefinition : NSObject

@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, nonatomic) CGFloat green; // ivar: _green
@property (readonly, nonatomic) BOOL isDarkMode; // ivar: _isDarkMode
@property (readonly, nonatomic) BOOL isHighContrast; // ivar: _isHighContrast
@property (readonly, nonatomic) CGFloat red; // ivar: _red


-(id)initWithDarkMode:(BOOL)arg0 highContrast:(BOOL)arg1 red:(CGFloat)arg2 green:(CGFloat)arg3 blue:(CGFloat)arg4 alpha:(CGFloat)arg5 ;


@end


#endif
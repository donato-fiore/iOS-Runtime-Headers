// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITOOLTIPCONFIGURATION_H
#define UITOOLTIPCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIToolTipConfiguration : NSObject

@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (copy, nonatomic) NSString *toolTip; // ivar: _toolTip


+(id)configurationWithToolTip:(id)arg0 ;
+(id)configurationWithToolTip:(id)arg0 inRect:(struct CGRect )arg1 ;


@end


#endif
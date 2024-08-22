// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUTCOLUMNMETRICS_H
#define _UIKEYSHORTCUTHUDSHORTCUTCOLUMNMETRICS_H


#import <Foundation/Foundation.h>


@interface _UIKeyShortcutHUDShortcutColumnMetrics : NSObject

@property (readonly, nonatomic) CGFloat columnWidth; // ivar: _columnWidth
@property (readonly, nonatomic) CGFloat inputWidth; // ivar: _inputWidth
@property (readonly, nonatomic) CGFloat modifiersWidth; // ivar: _modifiersWidth


+(id)metricsWithColumnWidth:(CGFloat)arg0 modifiersWidth:(CGFloat)arg1 inputWidth:(CGFloat)arg2 ;


@end


#endif
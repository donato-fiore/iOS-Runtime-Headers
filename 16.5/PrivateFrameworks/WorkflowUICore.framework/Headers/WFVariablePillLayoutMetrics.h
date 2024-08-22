// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVARIABLEPILLLAYOUTMETRICS_H
#define WFVARIABLEPILLLAYOUTMETRICS_H


#import <Foundation/Foundation.h>


@interface WFVariablePillLayoutMetrics : NSObject {
    ? leadingPadding;
    ? iconSize;
    ? iconDisplaySize;
    ? spacing;
    ? textSize;
    ? textFont;
    ? trailingPadding;
    ? cornerRadius;
}


@property (nonatomic, readonly) CGFloat totalWidth;


-(id)init;
-(id)initWithName:(id)arg0 icon:(id)arg1 font:(id)arg2 height:(CGFloat)arg3 ;


@end


#endif
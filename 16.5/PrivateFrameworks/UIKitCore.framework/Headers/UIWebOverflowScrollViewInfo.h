// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBOVERFLOWSCROLLVIEWINFO_H
#define UIWEBOVERFLOWSCROLLVIEWINFO_H

@class CALayer;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIWebOverflowScrollView.h"

@interface UIWebOverflowScrollViewInfo : NSObject {
    CALayer *_scrollViewLayer;
}


@property (retain, nonatomic) UIView *oldSuperview; // ivar: _oldSuperview
@property (retain, nonatomic) UIWebOverflowScrollView *scrollView; // ivar: _scrollView


-(id)initWithScrollView:(id)arg0 ;
-(void)dealloc;


@end


#endif